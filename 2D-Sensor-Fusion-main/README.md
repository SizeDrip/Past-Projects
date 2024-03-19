# 2D-Sensor-Fusion
Sensor fusion based 2D Vehicle Detection by applying Camera and Lidar measurements from KITTI data set.


## Overview of the KITTI sensor setup
KITTI vehicle that was used to generate the data sequences is equipped with two forward-facing cameras, a roof-mounted Velodyne Lidar as well as an inertial measurement unit or IMU (which are not used in this project).
For all datasets, calibration files with intrinsic and extrinsic parameters are available from the KITTI website. In the following, the content of the file "calib_velo_to_cam.txt“ is shown, which relates the Velodyne sensor and the left camera of the stereo rig (valid for the highway sequence we are using):
Instead of original KITTI data, pre-processing data is stored in the data folder. 
```
calib_time: 15-Mar-2012 11:37:16
R: 7.533745e-03 -9.999714e-01 -6.166020e-04 1.480249e-02 7.280733e-04 -9.998902e-01 9.998621e-01 7.523790e-03 1.480755e-02
T: -4.069766e-03 -7.631618e-02 -2.717806e-01
…
```
The matrices R and T provide with the extrinsic parameters of the sensor setup. The intrinsic parameters are stored in the file "calib_cam_to_cam.txt", which is given as an excerpt in the following:
```
calib_time: 09-Jan-2012 13:57:47
…
R_rect_00: 9.999239e-01 9.837760e-03 -7.445048e-03 -9.869795e-03 9.999421e-01 -4.278459e-03 7.402527e-03 4.351614e-03 9.999631e-01
P_rect_00: 7.215377e+02 0.000000e+00 6.095593e+02 0.000000e+00 0.000000e+00 7.215377e+02 1.728540e+02 0.000000e+00 0.000000e+00 0.000000e+00 1.000000e+00 0.000000e+00
…
```
The matrix R_rect_00 is the 3x3 rectifying rotation to make image planes co-planar, i.e. to align both cameras of the stereo rig (there are two Point Gray cameras in the KITTI vehicle) in a way that one row of pixels in the left camera directly corresponds to another row of pixels in the right camera (as opposed to a slanted line crossing over the image plane, ref. "epipolar geometry"). The matrix P_rect_00 contains the intrinsic camera parameters (called K). The following equation shows how to project a 3D Lidar point X in space to a 2D image point Y (using the notation in the KITTI readme file : transform a homogeneous point X = [x y z 1]' from the velodyne coordinate system to a homogeneous point Y = [u v 1]' on image plane of camera xx, the following transformation has to be applied:) on the image plane of the left camera using homogeneous coordinates:

> Y = P_rect_xx * R_rect_00 * (R|T)_velo_to_cam * X

- P_rect_xx (3x4): rectfied cam 0 coordinates -> image plane
- R_rect_00 (4x4): cam 0 coordinates -> rectified cam 0 coord.
- (R|T)_velo_to_cam (4x4): velodyne coordinates -> cam 0 coordinates

### Filtering Lidar points over the Camera imge 
 Velodyne Lidar is roof-mounted and spins in a 360° circle at 10 Hz so it also measures 3D points behind the vehicle facing away from the camera. Those points are also contained in the data set. But when projected into the camera, they produce a valid image plane coordinate, even though they are not visible to the camera (the projecting line intersects the image plane from behind). The associated Lidar points have a negative x-coordinate which causes the respective pixel color to appear in red on the image plane. To remove those points, from ieration, thses conditions should be excluded:
* positioned behind the Lidar sensor and thus have a negative x coordinate.
* too far away in x-direction and thus exceeding an upper distance limit.
* too far off to the sides in y-direction and thus not relevant for collision detection
* too close to the road surface in negative z-direction.
* showing a reflectivity close to zero, which might indicate low reliability.
 
 ### Result 
 Original to Gray Image looks like this: 
 ![gray image](/images/0000000000.png)
 
 According to lidar data, I can draw the radius from closest to farthest.
 
 ![Lidar Top View](/images/Top-View%20Perspective%20of%20LiDAR%20data_AddFilter2TopView_05.02.2021.png)
 
And then only containing obstacles in the front line looks like this:  

 ![Lidar after Filtering](/images/Top-View%20Perspective%20of%20LiDAR%20data_FilterCirclueFinal_05.02.2021.png)
 
 Finally, after filtering unnecessary lidar points overlayed in the camera image, the final processed image looks like the closer, more red, the farther more green renderd vehicle detection image. 
 ![Camera with Lidar fused](/images/LiDAR%20data%20on%20image%20overlay_AddFilter_05.02.2021.png)
