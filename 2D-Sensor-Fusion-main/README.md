# CUDA Camera–LiDAR–GPS Sensor Fusion

A graduate project that converted and extended an existing CPU-based C++/OpenCV sensor-fusion example into a CUDA C++ video pipeline using KITTI camera, LiDAR, and GPS data.

## My Contribution

The original camera–LiDAR projection baseline came from [tooth2/2D-Sensor-Fusion](https://github.com/tooth2/2D-Sensor-Fusion). My work focused on the GPU and end-to-end system changes:

- Reimplemented the 3D LiDAR-to-2D camera projection path as a custom CUDA kernel.
- Added point filtering by spatial bounds and reflectance before projection.
- Added frame-sequenced video processing and GPS overlays.
- Integrated CUDA with OpenCV and adapted the CMake/build configuration.
- Replaced the original binary-to-text LiDAR conversion workflow with direct binary parsing.
- Added stage-level timing and used Nsight Compute to investigate kernel and system bottlenecks.

## Result

The CUDA version achieved approximately **2.5× end-to-end throughput** over the CPU baseline on the tested workload.

The largest lesson was that overall speed was not determined by kernel execution alone. Profiling and timing highlighted several system-level constraints:

- repeated CPU↔GPU transfers over PCIe
- allocation and transfer work performed per frame
- limited workload size relative to GPU launch/transfer overhead
- data-ingest cost outside the CUDA kernel
- additional opportunities to improve memory reuse and overlap transfers with execution

Removing the binary-to-text conversion step substantially reduced ingest time. Potential next steps identified in the report include persistent allocations, pinned host memory, CUDA streams/asynchronous transfers, frame batching, and further kernel/thread-block tuning.

## Pipeline

1. Read a camera frame, LiDAR point cloud, and corresponding GPS record
2. Parse the binary point-cloud data directly into C++ structures
3. Transfer LiDAR points and calibration matrices to the GPU
4. Run `transformLidarPoints` to filter and project 3D points into image coordinates
5. Copy projected points back for visualization and overlay GPS data on the output frame
6. Repeat across the sequence to produce a video-style visualization

## Key Files

- `src/project_lidar_to_camera.cu` — CUDA kernel and end-to-end camera/LiDAR/GPS workflow.
- `src/structIO.cpp` / `src/structIO.hpp` — binary point-cloud I/O support.
- `Sensor Fusion Project Report - Emma Berry - ECEN 331.pdf` — implementation details, results, limitations, and optimization analysis.

## Technologies

C++ · CUDA · OpenCV · Nsight Compute · CMake · KITTI

## Reproducing the Project

To run this on another machine, update the relevant input paths and ensure compatible versions of CUDA, OpenCV with CUDA support, and CMake are installed.

## Known Limitations

- The tested sequence was small enough that launch and transfer overhead limited GPU utilization.
- Data is transferred between host and device for each frame rather than retained across the sequence.
- The final overlay uses a single color rather than the original CPU implementation's depth/reflectance gradient.
- The code would benefit from persistent GPU buffers, clearer runtime configuration, automated correctness tests, and a portable command-line interface.
