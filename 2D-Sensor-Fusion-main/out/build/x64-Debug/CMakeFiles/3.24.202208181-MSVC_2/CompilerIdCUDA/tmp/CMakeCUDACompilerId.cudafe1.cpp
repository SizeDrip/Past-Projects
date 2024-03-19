#pragma section("__nv_managed_data__")
static char __nv_inited_managed_rt = 0; static void **__nv_fatbinhandle_for_managed_rt; static void __nv_save_fatbinhandle_for_managed_rt(void **in){__nv_fatbinhandle_for_managed_rt = in;} static char __nv_init_managed_rt_with_module(void **); static inline void __nv_init_managed_rt(void) { __nv_inited_managed_rt = (__nv_inited_managed_rt ? __nv_inited_managed_rt                 : __nv_init_managed_rt_with_module(__nv_fatbinhandle_for_managed_rt));}
#line 1 "CMakeCUDACompilerId.cu"
#define __nv_is_extended_device_lambda_closure_type(X) false
#define __nv_is_extended_host_device_lambda_closure_type(X) false
#define __nv_is_extended_device_lambda_with_preserved_return_type(X) false
#if defined(__nv_is_extended_device_lambda_closure_type) && defined(__nv_is_extended_host_device_lambda_closure_type)&& defined(__nv_is_extended_device_lambda_with_preserved_return_type)
#endif

#line 1
#line 67 "C:/Program Files/NVIDIA GPU Computing Toolkit/CUDA/v12.3/bin/../include\\cuda_runtime.h"
#pragma warning(push)
#pragma warning(disable: 4820)
#line 708 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\sal.h"
#pragma region Input Buffer SAL 1 compatibility macros
#line 1472
#pragma endregion Input Buffer SAL 1 compatibility macros
#line 2361 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\sal.h"
extern "C" {
#line 2971 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\sal.h"
}
#line 22 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\concurrencysal.h"
extern "C" {
#line 391 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\concurrencysal.h"
}
#line 15 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\vadefs.h"
#pragma pack ( push, 8 )
#line 47 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\vadefs.h"
#pragma warning(push)
#pragma warning(disable: 4514 4820 )
#line 51
extern "C" {
#line 61 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\vadefs.h"
typedef unsigned __int64 uintptr_t; 
#line 72 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\vadefs.h"
typedef char *va_list; 
#line 155 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\vadefs.h"
void __cdecl __va_start(va_list *, ...); 
#line 167 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\vadefs.h"
}
#line 171 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\vadefs.h"
extern "C++" {
#line 173
template< class _Ty> 
#line 174
struct __vcrt_va_list_is_reference { 
#line 176
enum: bool { __the_value}; 
#line 177
}; 
#line 179
template< class _Ty> 
#line 180
struct __vcrt_va_list_is_reference< _Ty &>  { 
#line 182
enum: bool { __the_value = '\001'}; 
#line 183
}; 
#line 185
template< class _Ty> 
#line 186
struct __vcrt_va_list_is_reference< _Ty &&>  { 
#line 188
enum: bool { __the_value = '\001'}; 
#line 189
}; 
#line 191
template< class _Ty> 
#line 192
struct __vcrt_assert_va_start_is_not_reference { 
#line 194
static_assert((!__vcrt_va_list_is_reference< _Ty> ::__the_value), "va_start argument must not have reference type and must not be parenthesized");
#line 196
}; 
#line 197
}
#line 207 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\vadefs.h"
#pragma warning(pop)
#pragma pack ( pop )
#line 60 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\vcruntime.h"
#pragma warning(push)
#pragma warning(disable: 4514 4820 )
#line 96 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\vcruntime.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 193 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\vcruntime.h"
typedef unsigned __int64 size_t; 
#if !defined(__CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__)
#define __CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__
#endif
#include "crt/host_runtime.h"
#line 194
typedef __int64 ptrdiff_t; 
#line 195
typedef __int64 intptr_t; 
#line 203 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\vcruntime.h"
typedef bool __vcrt_bool; 
#line 250 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\vcruntime.h"
extern "C++" {
#line 252
template< class _CountofType, size_t _SizeOfArray> char (*__countof_helper(__unaligned _CountofType (& _Array)[_SizeOfArray]))[_SizeOfArray]; 
#line 256
}
#line 377 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\vcruntime.h"
void __cdecl __security_init_cookie(); 
#line 386 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\vcruntime.h"
void __cdecl __security_check_cookie(uintptr_t _StackCookie); 
#line 387
__declspec(noreturn) void __cdecl __report_gsfailure(uintptr_t _StackCookie); 
#line 391 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\vcruntime.h"
extern uintptr_t __security_cookie; 
#line 399 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\vcruntime.h"
}__pragma( pack ( pop )) 
#line 401
#pragma warning(pop)
#line 121 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727 )
#line 125
__pragma( pack ( push, 8 )) extern "C" {
#line 254 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt.h"
extern "C++" {
#line 256
template< bool _Enable, class _Ty> struct _CrtEnableIf; 
#line 259
template< class _Ty> 
#line 260
struct _CrtEnableIf< true, _Ty>  { 
#line 262
typedef _Ty _Type; 
#line 263
}; 
#line 264
}
#line 268 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt.h"
typedef bool __crt_bool; 
#line 371 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt.h"
void __cdecl _invalid_parameter_noinfo(); 
#line 372
__declspec(noreturn) void __cdecl _invalid_parameter_noinfo_noreturn(); 
#line 374
__declspec(noreturn) void __cdecl 
#line 375
_invoke_watson(const __wchar_t * _Expression, const __wchar_t * _FunctionName, const __wchar_t * _FileName, unsigned _LineNo, uintptr_t _Reserved); 
#line 604 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt.h"
typedef int errno_t; 
#line 605
typedef unsigned short wint_t; 
#line 606
typedef unsigned short wctype_t; 
#line 607
typedef long __time32_t; 
#line 608
typedef __int64 __time64_t; 
#line 615
typedef 
#line 610
struct __crt_locale_data_public { 
#line 612
const unsigned short *_locale_pctype; 
#line 613
int _locale_mb_cur_max; 
#line 614
unsigned _locale_lc_codepage; 
#line 615
} __crt_locale_data_public; 
#line 621
typedef 
#line 617
struct __crt_locale_pointers { 
#line 619
struct __crt_locale_data *locinfo; 
#line 620
struct __crt_multibyte_data *mbcinfo; 
#line 621
} __crt_locale_pointers; 
#line 623
typedef __crt_locale_pointers *_locale_t; 
#line 629
typedef 
#line 625
struct _Mbstatet { 
#line 627
unsigned long _Wchar; 
#line 628
unsigned short _Byte, _State; 
#line 629
} _Mbstatet; 
#line 631
typedef _Mbstatet mbstate_t; 
#line 645 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt.h"
typedef __time64_t time_t; 
#line 655 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt.h"
typedef size_t rsize_t; 
#line 2072 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt.h"
}__pragma( pack ( pop )) 
#line 2075
#pragma warning(pop)
#line 13 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wctype.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727 )
#line 17
__pragma( pack ( push, 8 )) extern "C" {
#line 35 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wctype.h"
const unsigned short *__cdecl __pctype_func(); 
#line 36
const wctype_t *__cdecl __pwctype_func(); 
#line 67 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wctype.h"
int __cdecl iswalnum(wint_t _C); 
#line 68
int __cdecl iswalpha(wint_t _C); 
#line 69
int __cdecl iswascii(wint_t _C); 
#line 70
int __cdecl iswblank(wint_t _C); 
#line 71
int __cdecl iswcntrl(wint_t _C); 
#line 74
int __cdecl iswdigit(wint_t _C); 
#line 76
int __cdecl iswgraph(wint_t _C); 
#line 77
int __cdecl iswlower(wint_t _C); 
#line 78
int __cdecl iswprint(wint_t _C); 
#line 79
int __cdecl iswpunct(wint_t _C); 
#line 80
int __cdecl iswspace(wint_t _C); 
#line 81
int __cdecl iswupper(wint_t _C); 
#line 82
int __cdecl iswxdigit(wint_t _C); 
#line 83
int __cdecl __iswcsymf(wint_t _C); 
#line 84
int __cdecl __iswcsym(wint_t _C); 
#line 86
int __cdecl _iswalnum_l(wint_t _C, _locale_t _Locale); 
#line 87
int __cdecl _iswalpha_l(wint_t _C, _locale_t _Locale); 
#line 88
int __cdecl _iswblank_l(wint_t _C, _locale_t _Locale); 
#line 89
int __cdecl _iswcntrl_l(wint_t _C, _locale_t _Locale); 
#line 90
int __cdecl _iswdigit_l(wint_t _C, _locale_t _Locale); 
#line 91
int __cdecl _iswgraph_l(wint_t _C, _locale_t _Locale); 
#line 92
int __cdecl _iswlower_l(wint_t _C, _locale_t _Locale); 
#line 93
int __cdecl _iswprint_l(wint_t _C, _locale_t _Locale); 
#line 94
int __cdecl _iswpunct_l(wint_t _C, _locale_t _Locale); 
#line 95
int __cdecl _iswspace_l(wint_t _C, _locale_t _Locale); 
#line 96
int __cdecl _iswupper_l(wint_t _C, _locale_t _Locale); 
#line 97
int __cdecl _iswxdigit_l(wint_t _C, _locale_t _Locale); 
#line 98
int __cdecl _iswcsymf_l(wint_t _C, _locale_t _Locale); 
#line 99
int __cdecl _iswcsym_l(wint_t _C, _locale_t _Locale); 
#line 102
wint_t __cdecl towupper(wint_t _C); 
#line 103
wint_t __cdecl towlower(wint_t _C); 
#line 104
int __cdecl iswctype(wint_t _C, wctype_t _Type); 
#line 106
wint_t __cdecl _towupper_l(wint_t _C, _locale_t _Locale); 
#line 107
wint_t __cdecl _towlower_l(wint_t _C, _locale_t _Locale); 
#line 108
int __cdecl _iswctype_l(wint_t _C, wctype_t _Type, _locale_t _Locale); 
#line 112
int __cdecl isleadbyte(int _C); 
#line 113
int __cdecl _isleadbyte_l(int _C, _locale_t _Locale); 
#line 115
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using iswctype instea" "d. See online help for details.")) int __cdecl is_wctype(wint_t _C, wctype_t _Type); 
#line 203 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wctype.h"
}__pragma( pack ( pop )) 
#line 205
#pragma warning(pop)
#line 15 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\ctype.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727 )
#line 19
__pragma( pack ( push, 8 )) extern "C" {
#line 29
int __cdecl _isctype(int _C, int _Type); 
#line 30
int __cdecl _isctype_l(int _C, int _Type, _locale_t _Locale); 
#line 31
int __cdecl isalpha(int _C); 
#line 32
int __cdecl _isalpha_l(int _C, _locale_t _Locale); 
#line 33
int __cdecl isupper(int _C); 
#line 34
int __cdecl _isupper_l(int _C, _locale_t _Locale); 
#line 35
int __cdecl islower(int _C); 
#line 36
int __cdecl _islower_l(int _C, _locale_t _Locale); 
#line 39
int __cdecl isdigit(int _C); 
#line 41
int __cdecl _isdigit_l(int _C, _locale_t _Locale); 
#line 42
int __cdecl isxdigit(int _C); 
#line 43
int __cdecl _isxdigit_l(int _C, _locale_t _Locale); 
#line 46
int __cdecl isspace(int _C); 
#line 48
int __cdecl _isspace_l(int _C, _locale_t _Locale); 
#line 49
int __cdecl ispunct(int _C); 
#line 50
int __cdecl _ispunct_l(int _C, _locale_t _Locale); 
#line 51
int __cdecl isblank(int _C); 
#line 52
int __cdecl _isblank_l(int _C, _locale_t _Locale); 
#line 53
int __cdecl isalnum(int _C); 
#line 54
int __cdecl _isalnum_l(int _C, _locale_t _Locale); 
#line 55
int __cdecl isprint(int _C); 
#line 56
int __cdecl _isprint_l(int _C, _locale_t _Locale); 
#line 57
int __cdecl isgraph(int _C); 
#line 58
int __cdecl _isgraph_l(int _C, _locale_t _Locale); 
#line 59
int __cdecl iscntrl(int _C); 
#line 60
int __cdecl _iscntrl_l(int _C, _locale_t _Locale); 
#line 63
int __cdecl toupper(int _C); 
#line 66
int __cdecl tolower(int _C); 
#line 68
int __cdecl _tolower(int _C); 
#line 69
int __cdecl _tolower_l(int _C, _locale_t _Locale); 
#line 70
int __cdecl _toupper(int _C); 
#line 71
int __cdecl _toupper_l(int _C, _locale_t _Locale); 
#line 73
int __cdecl __isascii(int _C); 
#line 74
int __cdecl __toascii(int _C); 
#line 75
int __cdecl __iscsymf(int _C); 
#line 76
int __cdecl __iscsym(int _C); 
#line 85
__inline int __cdecl __acrt_locale_get_ctype_array_value(const unsigned short *const 
#line 86
_Locale_pctype_array, const int 
#line 87
_Char_value, const int 
#line 88
_Mask) 
#line 90
{ 
#line 96
if ((_Char_value >= (-1)) && (_Char_value <= 255)) 
#line 97
{ 
#line 98
return (_Locale_pctype_array[_Char_value]) & _Mask; 
#line 99
}  
#line 101
return 0; 
#line 102
} 
#line 124 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\ctype.h"
int __cdecl ___mb_cur_max_func(); 
#line 126
int __cdecl ___mb_cur_max_l_func(_locale_t _Locale); 
#line 152 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\ctype.h"
__forceinline int __cdecl __ascii_tolower(const int _C) 
#line 153
{ 
#line 154
if ((_C >= ('A')) && (_C <= ('Z'))) 
#line 155
{ 
#line 156
return _C - (('A') - ('a')); 
#line 157
}  
#line 158
return _C; 
#line 159
} 
#line 161
__forceinline int __cdecl __ascii_toupper(const int _C) 
#line 162
{ 
#line 163
if ((_C >= ('a')) && (_C <= ('z'))) 
#line 164
{ 
#line 165
return _C - (('a') - ('A')); 
#line 166
}  
#line 167
return _C; 
#line 168
} 
#line 170
__forceinline int __cdecl __ascii_iswalpha(const int _C) 
#line 171
{ 
#line 172
return ((_C >= ('A')) && (_C <= ('Z'))) || ((_C >= ('a')) && (_C <= ('z'))); 
#line 173
} 
#line 175
__forceinline int __cdecl __ascii_iswdigit(const int _C) 
#line 176
{ 
#line 177
return (_C >= ('0')) && (_C <= ('9')); 
#line 178
} 
#line 180
__forceinline int __cdecl __ascii_towlower(const int _C) 
#line 181
{ 
#line 182
return __ascii_tolower(_C); 
#line 183
} 
#line 185
__forceinline int __cdecl __ascii_towupper(const int _C) 
#line 186
{ 
#line 187
return __ascii_toupper(_C); 
#line 188
} 
#line 208 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\ctype.h"
__inline __crt_locale_data_public *__cdecl __acrt_get_locale_data_prefix(const volatile void *const _LocalePointers) 
#line 209
{ 
#line 210
const _locale_t _TypedLocalePointers = (_locale_t)_LocalePointers; 
#line 211
return (__crt_locale_data_public *)(_TypedLocalePointers->locinfo); 
#line 212
} 
#line 218
__inline int __cdecl _chvalidchk_l(const int 
#line 219
_C, const int 
#line 220
_Mask, const _locale_t 
#line 221
_Locale) 
#line 223
{ 
#line 227
if (!_Locale) 
#line 228
{ 
#line 229
return __acrt_locale_get_ctype_array_value(__pctype_func(), _C, _Mask); 
#line 230
}  
#line 232
return __acrt_locale_get_ctype_array_value(__acrt_get_locale_data_prefix(_Locale)->_locale_pctype, _C, _Mask); 
#line 234 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\ctype.h"
} 
#line 239
__inline int __cdecl _ischartype_l(const int 
#line 240
_C, const int 
#line 241
_Mask, const _locale_t 
#line 242
_Locale) 
#line 244
{ 
#line 245
if (!_Locale) 
#line 246
{ 
#line 247
return _chvalidchk_l(_C, _Mask, 0); 
#line 248
}  
#line 250
if ((_C >= (-1)) && (_C <= 255)) 
#line 251
{ 
#line 252
return ((__acrt_get_locale_data_prefix(_Locale)->_locale_pctype)[_C]) & _Mask; 
#line 253
}  
#line 255
if ((__acrt_get_locale_data_prefix(_Locale)->_locale_mb_cur_max) > 1) 
#line 256
{ 
#line 257
return _isctype_l(_C, _Mask, _Locale); 
#line 258
}  
#line 260
return 0; 
#line 261
} 
#line 307 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\ctype.h"
}__pragma( pack ( pop )) 
#line 309
#pragma warning(pop)
#line 68 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\device_types.h"
#if 0
#line 68
enum cudaRoundMode { 
#line 70
cudaRoundNearest, 
#line 71
cudaRoundZero, 
#line 72
cudaRoundPosInf, 
#line 73
cudaRoundMinInf
#line 74
}; 
#endif
#line 104 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
#line 104
struct char1 { 
#line 106
signed char x; 
#line 107
}; 
#endif
#line 109 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
#line 109
struct uchar1 { 
#line 111
unsigned char x; 
#line 112
}; 
#endif
#line 115 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
#line 115
struct __declspec(align(2)) char2 { 
#line 117
signed char x, y; 
#line 118
}; 
#endif
#line 120 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
#line 120
struct __declspec(align(2)) uchar2 { 
#line 122
unsigned char x, y; 
#line 123
}; 
#endif
#line 125 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
#line 125
struct char3 { 
#line 127
signed char x, y, z; 
#line 128
}; 
#endif
#line 130 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
#line 130
struct uchar3 { 
#line 132
unsigned char x, y, z; 
#line 133
}; 
#endif
#line 135 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
#line 135
struct __declspec(align(4)) char4 { 
#line 137
signed char x, y, z, w; 
#line 138
}; 
#endif
#line 140 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
#line 140
struct __declspec(align(4)) uchar4 { 
#line 142
unsigned char x, y, z, w; 
#line 143
}; 
#endif
#line 145 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
#line 145
struct short1 { 
#line 147
short x; 
#line 148
}; 
#endif
#line 150 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
#line 150
struct ushort1 { 
#line 152
unsigned short x; 
#line 153
}; 
#endif
#line 155 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
#line 155
struct __declspec(align(4)) short2 { 
#line 157
short x, y; 
#line 158
}; 
#endif
#line 160 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
#line 160
struct __declspec(align(4)) ushort2 { 
#line 162
unsigned short x, y; 
#line 163
}; 
#endif
#line 165 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
#line 165
struct short3 { 
#line 167
short x, y, z; 
#line 168
}; 
#endif
#line 170 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
#line 170
struct ushort3 { 
#line 172
unsigned short x, y, z; 
#line 173
}; 
#endif
#line 175 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
#line 175
struct __declspec(align(8)) short4 { short x; short y; short z; short w; }; 
#endif
#line 176 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
#line 176
struct __declspec(align(8)) ushort4 { unsigned short x; unsigned short y; unsigned short z; unsigned short w; }; 
#endif
#line 178 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
#line 178
struct int1 { 
#line 180
int x; 
#line 181
}; 
#endif
#line 183 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
#line 183
struct uint1 { 
#line 185
unsigned x; 
#line 186
}; 
#endif
#line 188 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
#line 188
struct __declspec(align(8)) int2 { int x; int y; }; 
#endif
#line 189 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
#line 189
struct __declspec(align(8)) uint2 { unsigned x; unsigned y; }; 
#endif
#line 191 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
#line 191
struct int3 { 
#line 193
int x, y, z; 
#line 194
}; 
#endif
#line 196 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
#line 196
struct uint3 { 
#line 198
unsigned x, y, z; 
#line 199
}; 
#endif
#line 201 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
#line 201
struct __declspec(align(16)) int4 { 
#line 203
int x, y, z, w; 
#line 204
}; 
#endif
#line 206 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
#line 206
struct __declspec(align(16)) uint4 { 
#line 208
unsigned x, y, z, w; 
#line 209
}; 
#endif
#line 211 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
#line 211
struct long1 { 
#line 213
long x; 
#line 214
}; 
#endif
#line 216 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
#line 216
struct ulong1 { 
#line 218
unsigned long x; 
#line 219
}; 
#endif
#line 222 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
#line 222
struct __declspec(align(8)) long2 { long x; long y; }; 
#endif
#line 223 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
#line 223
struct __declspec(align(8)) ulong2 { unsigned long x; unsigned long y; }; 
#endif
#line 238 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
#line 238
struct long3 { 
#line 240
long x, y, z; 
#line 241
}; 
#endif
#line 243 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
#line 243
struct ulong3 { 
#line 245
unsigned long x, y, z; 
#line 246
}; 
#endif
#line 248 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
#line 248
struct __declspec(align(16)) long4 { 
#line 250
long x, y, z, w; 
#line 251
}; 
#endif
#line 253 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
#line 253
struct __declspec(align(16)) ulong4 { 
#line 255
unsigned long x, y, z, w; 
#line 256
}; 
#endif
#line 258 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
#line 258
struct float1 { 
#line 260
float x; 
#line 261
}; 
#endif
#line 280 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
#line 280
struct __declspec(align(8)) float2 { float x; float y; }; 
#endif
#line 285 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
#line 285
struct float3 { 
#line 287
float x, y, z; 
#line 288
}; 
#endif
#line 290 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
#line 290
struct __declspec(align(16)) float4 { 
#line 292
float x, y, z, w; 
#line 293
}; 
#endif
#line 295 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
#line 295
struct longlong1 { 
#line 297
__int64 x; 
#line 298
}; 
#endif
#line 300 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
#line 300
struct ulonglong1 { 
#line 302
unsigned __int64 x; 
#line 303
}; 
#endif
#line 305 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
#line 305
struct __declspec(align(16)) longlong2 { 
#line 307
__int64 x, y; 
#line 308
}; 
#endif
#line 310 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
#line 310
struct __declspec(align(16)) ulonglong2 { 
#line 312
unsigned __int64 x, y; 
#line 313
}; 
#endif
#line 315 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
#line 315
struct longlong3 { 
#line 317
__int64 x, y, z; 
#line 318
}; 
#endif
#line 320 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
#line 320
struct ulonglong3 { 
#line 322
unsigned __int64 x, y, z; 
#line 323
}; 
#endif
#line 325 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
#line 325
struct __declspec(align(16)) longlong4 { 
#line 327
__int64 x, y, z, w; 
#line 328
}; 
#endif
#line 330 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
#line 330
struct __declspec(align(16)) ulonglong4 { 
#line 332
unsigned __int64 x, y, z, w; 
#line 333
}; 
#endif
#line 335 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
#line 335
struct double1 { 
#line 337
double x; 
#line 338
}; 
#endif
#line 340 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
#line 340
struct __declspec(align(16)) double2 { 
#line 342
double x, y; 
#line 343
}; 
#endif
#line 345 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
#line 345
struct double3 { 
#line 347
double x, y, z; 
#line 348
}; 
#endif
#line 350 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
#line 350
struct __declspec(align(16)) double4 { 
#line 352
double x, y, z, w; 
#line 353
}; 
#endif
#line 367 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
typedef char1 
#line 367
char1; 
#endif
#line 368 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
typedef uchar1 
#line 368
uchar1; 
#endif
#line 369 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
typedef char2 
#line 369
char2; 
#endif
#line 370 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
typedef uchar2 
#line 370
uchar2; 
#endif
#line 371 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
typedef char3 
#line 371
char3; 
#endif
#line 372 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
typedef uchar3 
#line 372
uchar3; 
#endif
#line 373 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
typedef char4 
#line 373
char4; 
#endif
#line 374 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
typedef uchar4 
#line 374
uchar4; 
#endif
#line 375 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
typedef short1 
#line 375
short1; 
#endif
#line 376 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
typedef ushort1 
#line 376
ushort1; 
#endif
#line 377 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
typedef short2 
#line 377
short2; 
#endif
#line 378 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
typedef ushort2 
#line 378
ushort2; 
#endif
#line 379 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
typedef short3 
#line 379
short3; 
#endif
#line 380 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
typedef ushort3 
#line 380
ushort3; 
#endif
#line 381 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
typedef short4 
#line 381
short4; 
#endif
#line 382 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
typedef ushort4 
#line 382
ushort4; 
#endif
#line 383 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
typedef int1 
#line 383
int1; 
#endif
#line 384 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
typedef uint1 
#line 384
uint1; 
#endif
#line 385 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
typedef int2 
#line 385
int2; 
#endif
#line 386 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
typedef uint2 
#line 386
uint2; 
#endif
#line 387 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
typedef int3 
#line 387
int3; 
#endif
#line 388 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
typedef uint3 
#line 388
uint3; 
#endif
#line 389 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
typedef int4 
#line 389
int4; 
#endif
#line 390 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
typedef uint4 
#line 390
uint4; 
#endif
#line 391 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
typedef long1 
#line 391
long1; 
#endif
#line 392 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
typedef ulong1 
#line 392
ulong1; 
#endif
#line 393 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
typedef long2 
#line 393
long2; 
#endif
#line 394 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
typedef ulong2 
#line 394
ulong2; 
#endif
#line 395 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
typedef long3 
#line 395
long3; 
#endif
#line 396 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
typedef ulong3 
#line 396
ulong3; 
#endif
#line 397 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
typedef long4 
#line 397
long4; 
#endif
#line 398 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
typedef ulong4 
#line 398
ulong4; 
#endif
#line 399 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
typedef float1 
#line 399
float1; 
#endif
#line 400 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
typedef float2 
#line 400
float2; 
#endif
#line 401 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
typedef float3 
#line 401
float3; 
#endif
#line 402 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
typedef float4 
#line 402
float4; 
#endif
#line 403 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
typedef longlong1 
#line 403
longlong1; 
#endif
#line 404 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
typedef ulonglong1 
#line 404
ulonglong1; 
#endif
#line 405 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
typedef longlong2 
#line 405
longlong2; 
#endif
#line 406 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
typedef ulonglong2 
#line 406
ulonglong2; 
#endif
#line 407 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
typedef longlong3 
#line 407
longlong3; 
#endif
#line 408 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
typedef ulonglong3 
#line 408
ulonglong3; 
#endif
#line 409 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
typedef longlong4 
#line 409
longlong4; 
#endif
#line 410 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
typedef ulonglong4 
#line 410
ulonglong4; 
#endif
#line 411 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
typedef double1 
#line 411
double1; 
#endif
#line 412 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
typedef double2 
#line 412
double2; 
#endif
#line 413 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
typedef double3 
#line 413
double3; 
#endif
#line 414 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
typedef double4 
#line 414
double4; 
#endif
#line 426 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
#line 426
struct dim3 { 
#line 428
unsigned x, y, z; 
#line 440 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
}; 
#endif
#line 442 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_types.h"
#if 0
typedef dim3 
#line 442
dim3; 
#endif
#line 13 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\limits.h"
#pragma warning(push)
#pragma warning(disable: 4514 4820 )
#line 16
__pragma( pack ( push, 8 )) extern "C" {
#line 76 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\limits.h"
}__pragma( pack ( pop )) 
#line 78
#pragma warning(pop)
#line 14 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\stddef.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727 )
#line 18
__pragma( pack ( push, 8 )) extern "C" {
#line 23
namespace std { 
#line 25
typedef decltype(nullptr) nullptr_t; 
#line 26
}
#line 28
using std::nullptr_t;
#line 35 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\stddef.h"
int *__cdecl _errno(); 
#line 38
errno_t __cdecl _set_errno(int _Value); 
#line 39
errno_t __cdecl _get_errno(int * _Value); 
#line 55 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\stddef.h"
extern unsigned long __cdecl __threadid(); 
#line 57
extern uintptr_t __cdecl __threadhandle(); 
#line 61
}__pragma( pack ( pop )) 
#line 63
#pragma warning(pop)
#line 203 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 203
enum cudaError { 
#line 210
cudaSuccess, 
#line 216
cudaErrorInvalidValue, 
#line 222
cudaErrorMemoryAllocation, 
#line 228
cudaErrorInitializationError, 
#line 235
cudaErrorCudartUnloading, 
#line 242
cudaErrorProfilerDisabled, 
#line 250
cudaErrorProfilerNotInitialized, 
#line 257
cudaErrorProfilerAlreadyStarted, 
#line 264
cudaErrorProfilerAlreadyStopped, 
#line 272
cudaErrorInvalidConfiguration, 
#line 278
cudaErrorInvalidPitchValue = 12, 
#line 284
cudaErrorInvalidSymbol, 
#line 292
cudaErrorInvalidHostPointer = 16, 
#line 300
cudaErrorInvalidDevicePointer, 
#line 305
cudaErrorInvalidTexture, 
#line 311
cudaErrorInvalidTextureBinding, 
#line 318
cudaErrorInvalidChannelDescriptor, 
#line 324
cudaErrorInvalidMemcpyDirection, 
#line 334
cudaErrorAddressOfConstant, 
#line 343
cudaErrorTextureFetchFailed, 
#line 352
cudaErrorTextureNotBound, 
#line 361
cudaErrorSynchronizationError, 
#line 366
cudaErrorInvalidFilterSetting, 
#line 372
cudaErrorInvalidNormSetting, 
#line 380
cudaErrorMixedDeviceExecution, 
#line 388
cudaErrorNotYetImplemented = 31, 
#line 397
cudaErrorMemoryValueTooLarge, 
#line 403
cudaErrorStubLibrary = 34, 
#line 410
cudaErrorInsufficientDriver, 
#line 417
cudaErrorCallRequiresNewerDriver, 
#line 423
cudaErrorInvalidSurface, 
#line 429
cudaErrorDuplicateVariableName = 43, 
#line 435
cudaErrorDuplicateTextureName, 
#line 441
cudaErrorDuplicateSurfaceName, 
#line 451
cudaErrorDevicesUnavailable, 
#line 464
cudaErrorIncompatibleDriverContext = 49, 
#line 470
cudaErrorMissingConfiguration = 52, 
#line 479
cudaErrorPriorLaunchFailure, 
#line 485
cudaErrorLaunchMaxDepthExceeded = 65, 
#line 493
cudaErrorLaunchFileScopedTex, 
#line 501
cudaErrorLaunchFileScopedSurf, 
#line 517
cudaErrorSyncDepthExceeded, 
#line 529
cudaErrorLaunchPendingCountExceeded, 
#line 535
cudaErrorInvalidDeviceFunction = 98, 
#line 541
cudaErrorNoDevice = 100, 
#line 548
cudaErrorInvalidDevice, 
#line 553
cudaErrorDeviceNotLicensed, 
#line 562
cudaErrorSoftwareValidityNotEstablished, 
#line 567
cudaErrorStartupFailure = 127, 
#line 572
cudaErrorInvalidKernelImage = 200, 
#line 582
cudaErrorDeviceUninitialized, 
#line 587
cudaErrorMapBufferObjectFailed = 205, 
#line 592
cudaErrorUnmapBufferObjectFailed, 
#line 598
cudaErrorArrayIsMapped, 
#line 603
cudaErrorAlreadyMapped, 
#line 611
cudaErrorNoKernelImageForDevice, 
#line 616
cudaErrorAlreadyAcquired, 
#line 621
cudaErrorNotMapped, 
#line 627
cudaErrorNotMappedAsArray, 
#line 633
cudaErrorNotMappedAsPointer, 
#line 639
cudaErrorECCUncorrectable, 
#line 645
cudaErrorUnsupportedLimit, 
#line 651
cudaErrorDeviceAlreadyInUse, 
#line 657
cudaErrorPeerAccessUnsupported, 
#line 663
cudaErrorInvalidPtx, 
#line 668
cudaErrorInvalidGraphicsContext, 
#line 674
cudaErrorNvlinkUncorrectable, 
#line 681
cudaErrorJitCompilerNotFound, 
#line 688
cudaErrorUnsupportedPtxVersion, 
#line 695
cudaErrorJitCompilationDisabled, 
#line 700
cudaErrorUnsupportedExecAffinity, 
#line 706
cudaErrorUnsupportedDevSideSync, 
#line 711
cudaErrorInvalidSource = 300, 
#line 716
cudaErrorFileNotFound, 
#line 721
cudaErrorSharedObjectSymbolNotFound, 
#line 726
cudaErrorSharedObjectInitFailed, 
#line 731
cudaErrorOperatingSystem, 
#line 738
cudaErrorInvalidResourceHandle = 400, 
#line 744
cudaErrorIllegalState, 
#line 752
cudaErrorLossyQuery, 
#line 759
cudaErrorSymbolNotFound = 500, 
#line 767
cudaErrorNotReady = 600, 
#line 775
cudaErrorIllegalAddress = 700, 
#line 784
cudaErrorLaunchOutOfResources, 
#line 795
cudaErrorLaunchTimeout, 
#line 801
cudaErrorLaunchIncompatibleTexturing, 
#line 808
cudaErrorPeerAccessAlreadyEnabled, 
#line 815
cudaErrorPeerAccessNotEnabled, 
#line 828
cudaErrorSetOnActiveProcess = 708, 
#line 835
cudaErrorContextIsDestroyed, 
#line 842
cudaErrorAssert, 
#line 849
cudaErrorTooManyPeers, 
#line 855
cudaErrorHostMemoryAlreadyRegistered, 
#line 861
cudaErrorHostMemoryNotRegistered, 
#line 870
cudaErrorHardwareStackError, 
#line 878
cudaErrorIllegalInstruction, 
#line 887
cudaErrorMisalignedAddress, 
#line 898
cudaErrorInvalidAddressSpace, 
#line 906
cudaErrorInvalidPc, 
#line 917
cudaErrorLaunchFailure, 
#line 926
cudaErrorCooperativeLaunchTooLarge, 
#line 931
cudaErrorNotPermitted = 800, 
#line 937
cudaErrorNotSupported, 
#line 946
cudaErrorSystemNotReady, 
#line 953
cudaErrorSystemDriverMismatch, 
#line 962
cudaErrorCompatNotSupportedOnDevice, 
#line 967
cudaErrorMpsConnectionFailed, 
#line 972
cudaErrorMpsRpcFailure, 
#line 978
cudaErrorMpsServerNotReady, 
#line 983
cudaErrorMpsMaxClientsReached, 
#line 988
cudaErrorMpsMaxConnectionsReached, 
#line 993
cudaErrorMpsClientTerminated, 
#line 998
cudaErrorCdpNotSupported, 
#line 1003
cudaErrorCdpVersionMismatch, 
#line 1008
cudaErrorStreamCaptureUnsupported = 900, 
#line 1014
cudaErrorStreamCaptureInvalidated, 
#line 1020
cudaErrorStreamCaptureMerge, 
#line 1025
cudaErrorStreamCaptureUnmatched, 
#line 1031
cudaErrorStreamCaptureUnjoined, 
#line 1038
cudaErrorStreamCaptureIsolation, 
#line 1044
cudaErrorStreamCaptureImplicit, 
#line 1050
cudaErrorCapturedEvent, 
#line 1057
cudaErrorStreamCaptureWrongThread, 
#line 1062
cudaErrorTimeout, 
#line 1068
cudaErrorGraphExecUpdateFailure, 
#line 1078
cudaErrorExternalDevice, 
#line 1084
cudaErrorInvalidClusterSize, 
#line 1089
cudaErrorUnknown = 999, 
#line 1097
cudaErrorApiFailureBase = 10000
#line 1098
}; 
#endif
#line 1103 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 1103
enum cudaChannelFormatKind { 
#line 1105
cudaChannelFormatKindSigned, 
#line 1106
cudaChannelFormatKindUnsigned, 
#line 1107
cudaChannelFormatKindFloat, 
#line 1108
cudaChannelFormatKindNone, 
#line 1109
cudaChannelFormatKindNV12, 
#line 1110
cudaChannelFormatKindUnsignedNormalized8X1, 
#line 1111
cudaChannelFormatKindUnsignedNormalized8X2, 
#line 1112
cudaChannelFormatKindUnsignedNormalized8X4, 
#line 1113
cudaChannelFormatKindUnsignedNormalized16X1, 
#line 1114
cudaChannelFormatKindUnsignedNormalized16X2, 
#line 1115
cudaChannelFormatKindUnsignedNormalized16X4, 
#line 1116
cudaChannelFormatKindSignedNormalized8X1, 
#line 1117
cudaChannelFormatKindSignedNormalized8X2, 
#line 1118
cudaChannelFormatKindSignedNormalized8X4, 
#line 1119
cudaChannelFormatKindSignedNormalized16X1, 
#line 1120
cudaChannelFormatKindSignedNormalized16X2, 
#line 1121
cudaChannelFormatKindSignedNormalized16X4, 
#line 1122
cudaChannelFormatKindUnsignedBlockCompressed1, 
#line 1123
cudaChannelFormatKindUnsignedBlockCompressed1SRGB, 
#line 1124
cudaChannelFormatKindUnsignedBlockCompressed2, 
#line 1125
cudaChannelFormatKindUnsignedBlockCompressed2SRGB, 
#line 1126
cudaChannelFormatKindUnsignedBlockCompressed3, 
#line 1127
cudaChannelFormatKindUnsignedBlockCompressed3SRGB, 
#line 1128
cudaChannelFormatKindUnsignedBlockCompressed4, 
#line 1129
cudaChannelFormatKindSignedBlockCompressed4, 
#line 1130
cudaChannelFormatKindUnsignedBlockCompressed5, 
#line 1131
cudaChannelFormatKindSignedBlockCompressed5, 
#line 1132
cudaChannelFormatKindUnsignedBlockCompressed6H, 
#line 1133
cudaChannelFormatKindSignedBlockCompressed6H, 
#line 1134
cudaChannelFormatKindUnsignedBlockCompressed7, 
#line 1135
cudaChannelFormatKindUnsignedBlockCompressed7SRGB
#line 1136
}; 
#endif
#line 1141 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 1141
struct cudaChannelFormatDesc { 
#line 1143
int x; 
#line 1144
int y; 
#line 1145
int z; 
#line 1146
int w; 
#line 1147
cudaChannelFormatKind f; 
#line 1148
}; 
#endif
#line 1153 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
typedef struct cudaArray *cudaArray_t; 
#line 1158
typedef const cudaArray *cudaArray_const_t; 
#line 1160
struct cudaArray; 
#line 1165
typedef struct cudaMipmappedArray *cudaMipmappedArray_t; 
#line 1170
typedef const cudaMipmappedArray *cudaMipmappedArray_const_t; 
#line 1172
struct cudaMipmappedArray; 
#line 1182
#if 0
#line 1182
struct cudaArraySparseProperties { 
#line 1183
struct { 
#line 1184
unsigned width; 
#line 1185
unsigned height; 
#line 1186
unsigned depth; 
#line 1187
} tileExtent; 
#line 1188
unsigned miptailFirstLevel; 
#line 1189
unsigned __int64 miptailSize; 
#line 1190
unsigned flags; 
#line 1191
unsigned reserved[4]; 
#line 1192
}; 
#endif
#line 1197 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 1197
struct cudaArrayMemoryRequirements { 
#line 1198
size_t size; 
#line 1199
size_t alignment; 
#line 1200
unsigned reserved[4]; 
#line 1201
}; 
#endif
#line 1206 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 1206
enum cudaMemoryType { 
#line 1208
cudaMemoryTypeUnregistered, 
#line 1209
cudaMemoryTypeHost, 
#line 1210
cudaMemoryTypeDevice, 
#line 1211
cudaMemoryTypeManaged
#line 1212
}; 
#endif
#line 1217 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 1217
enum cudaMemcpyKind { 
#line 1219
cudaMemcpyHostToHost, 
#line 1220
cudaMemcpyHostToDevice, 
#line 1221
cudaMemcpyDeviceToHost, 
#line 1222
cudaMemcpyDeviceToDevice, 
#line 1223
cudaMemcpyDefault
#line 1224
}; 
#endif
#line 1231 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 1231
struct cudaPitchedPtr { 
#line 1233
void *ptr; 
#line 1234
size_t pitch; 
#line 1235
size_t xsize; 
#line 1236
size_t ysize; 
#line 1237
}; 
#endif
#line 1244 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 1244
struct cudaExtent { 
#line 1246
size_t width; 
#line 1247
size_t height; 
#line 1248
size_t depth; 
#line 1249
}; 
#endif
#line 1256 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 1256
struct cudaPos { 
#line 1258
size_t x; 
#line 1259
size_t y; 
#line 1260
size_t z; 
#line 1261
}; 
#endif
#line 1266 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 1266
struct cudaMemcpy3DParms { 
#line 1268
cudaArray_t srcArray; 
#line 1269
cudaPos srcPos; 
#line 1270
cudaPitchedPtr srcPtr; 
#line 1272
cudaArray_t dstArray; 
#line 1273
cudaPos dstPos; 
#line 1274
cudaPitchedPtr dstPtr; 
#line 1276
cudaExtent extent; 
#line 1277
cudaMemcpyKind kind; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
#line 1278
}; 
#endif
#line 1283 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 1283
struct cudaMemcpyNodeParams { 
#line 1284
int flags; 
#line 1285
int reserved[3]; 
#line 1286
cudaMemcpy3DParms copyParams; 
#line 1287
}; 
#endif
#line 1292 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 1292
struct cudaMemcpy3DPeerParms { 
#line 1294
cudaArray_t srcArray; 
#line 1295
cudaPos srcPos; 
#line 1296
cudaPitchedPtr srcPtr; 
#line 1297
int srcDevice; 
#line 1299
cudaArray_t dstArray; 
#line 1300
cudaPos dstPos; 
#line 1301
cudaPitchedPtr dstPtr; 
#line 1302
int dstDevice; 
#line 1304
cudaExtent extent; 
#line 1305
}; 
#endif
#line 1310 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 1310
struct cudaMemsetParams { 
#line 1311
void *dst; 
#line 1312
size_t pitch; 
#line 1313
unsigned value; 
#line 1314
unsigned elementSize; 
#line 1315
size_t width; 
#line 1316
size_t height; 
#line 1317
}; 
#endif
#line 1322 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 1322
struct cudaMemsetParamsV2 { 
#line 1323
void *dst; 
#line 1324
size_t pitch; 
#line 1325
unsigned value; 
#line 1326
unsigned elementSize; 
#line 1327
size_t width; 
#line 1328
size_t height; 
#line 1329
}; 
#endif
#line 1334 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 1334
enum cudaAccessProperty { 
#line 1335
cudaAccessPropertyNormal, 
#line 1336
cudaAccessPropertyStreaming, 
#line 1337
cudaAccessPropertyPersisting
#line 1338
}; 
#endif
#line 1351 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 1351
struct cudaAccessPolicyWindow { 
#line 1352
void *base_ptr; 
#line 1353
size_t num_bytes; 
#line 1354
float hitRatio; 
#line 1355
cudaAccessProperty hitProp; 
#line 1356
cudaAccessProperty missProp; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
#line 1357
}; 
#endif
#line 1369 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
typedef void (__stdcall *cudaHostFn_t)(void * userData); 
#line 1374
#if 0
#line 1374
struct cudaHostNodeParams { 
#line 1375
cudaHostFn_t fn; 
#line 1376
void *userData; 
#line 1377
}; 
#endif
#line 1382 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 1382
struct cudaHostNodeParamsV2 { 
#line 1383
cudaHostFn_t fn; 
#line 1384
void *userData; 
#line 1385
}; 
#endif
#line 1390 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 1390
enum cudaStreamCaptureStatus { 
#line 1391
cudaStreamCaptureStatusNone, 
#line 1392
cudaStreamCaptureStatusActive, 
#line 1393
cudaStreamCaptureStatusInvalidated
#line 1395
}; 
#endif
#line 1401 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 1401
enum cudaStreamCaptureMode { 
#line 1402
cudaStreamCaptureModeGlobal, 
#line 1403
cudaStreamCaptureModeThreadLocal, 
#line 1404
cudaStreamCaptureModeRelaxed
#line 1405
}; 
#endif
#line 1407 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 1407
enum cudaSynchronizationPolicy { 
#line 1408
cudaSyncPolicyAuto = 1, 
#line 1409
cudaSyncPolicySpin, 
#line 1410
cudaSyncPolicyYield, 
#line 1411
cudaSyncPolicyBlockingSync
#line 1412
}; 
#endif
#line 1417 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 1417
enum cudaClusterSchedulingPolicy { 
#line 1418
cudaClusterSchedulingPolicyDefault, 
#line 1419
cudaClusterSchedulingPolicySpread, 
#line 1420
cudaClusterSchedulingPolicyLoadBalancing
#line 1421
}; 
#endif
#line 1426 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 1426
enum cudaStreamUpdateCaptureDependenciesFlags { 
#line 1427
cudaStreamAddCaptureDependencies, 
#line 1428
cudaStreamSetCaptureDependencies
#line 1429
}; 
#endif
#line 1434 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 1434
enum cudaUserObjectFlags { 
#line 1435
cudaUserObjectNoDestructorSync = 1
#line 1436
}; 
#endif
#line 1441 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 1441
enum cudaUserObjectRetainFlags { 
#line 1442
cudaGraphUserObjectMove = 1
#line 1443
}; 
#endif
#line 1448 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
struct cudaGraphicsResource; 
#line 1453
#if 0
#line 1453
enum cudaGraphicsRegisterFlags { 
#line 1455
cudaGraphicsRegisterFlagsNone, 
#line 1456
cudaGraphicsRegisterFlagsReadOnly, 
#line 1457
cudaGraphicsRegisterFlagsWriteDiscard, 
#line 1458
cudaGraphicsRegisterFlagsSurfaceLoadStore = 4, 
#line 1459
cudaGraphicsRegisterFlagsTextureGather = 8
#line 1460
}; 
#endif
#line 1465 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 1465
enum cudaGraphicsMapFlags { 
#line 1467
cudaGraphicsMapFlagsNone, 
#line 1468
cudaGraphicsMapFlagsReadOnly, 
#line 1469
cudaGraphicsMapFlagsWriteDiscard
#line 1470
}; 
#endif
#line 1475 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 1475
enum cudaGraphicsCubeFace { 
#line 1477
cudaGraphicsCubeFacePositiveX, 
#line 1478
cudaGraphicsCubeFaceNegativeX, 
#line 1479
cudaGraphicsCubeFacePositiveY, 
#line 1480
cudaGraphicsCubeFaceNegativeY, 
#line 1481
cudaGraphicsCubeFacePositiveZ, 
#line 1482
cudaGraphicsCubeFaceNegativeZ
#line 1483
}; 
#endif
#line 1488 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 1488
enum cudaResourceType { 
#line 1490
cudaResourceTypeArray, 
#line 1491
cudaResourceTypeMipmappedArray, 
#line 1492
cudaResourceTypeLinear, 
#line 1493
cudaResourceTypePitch2D
#line 1494
}; 
#endif
#line 1499 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 1499
enum cudaResourceViewFormat { 
#line 1501
cudaResViewFormatNone, 
#line 1502
cudaResViewFormatUnsignedChar1, 
#line 1503
cudaResViewFormatUnsignedChar2, 
#line 1504
cudaResViewFormatUnsignedChar4, 
#line 1505
cudaResViewFormatSignedChar1, 
#line 1506
cudaResViewFormatSignedChar2, 
#line 1507
cudaResViewFormatSignedChar4, 
#line 1508
cudaResViewFormatUnsignedShort1, 
#line 1509
cudaResViewFormatUnsignedShort2, 
#line 1510
cudaResViewFormatUnsignedShort4, 
#line 1511
cudaResViewFormatSignedShort1, 
#line 1512
cudaResViewFormatSignedShort2, 
#line 1513
cudaResViewFormatSignedShort4, 
#line 1514
cudaResViewFormatUnsignedInt1, 
#line 1515
cudaResViewFormatUnsignedInt2, 
#line 1516
cudaResViewFormatUnsignedInt4, 
#line 1517
cudaResViewFormatSignedInt1, 
#line 1518
cudaResViewFormatSignedInt2, 
#line 1519
cudaResViewFormatSignedInt4, 
#line 1520
cudaResViewFormatHalf1, 
#line 1521
cudaResViewFormatHalf2, 
#line 1522
cudaResViewFormatHalf4, 
#line 1523
cudaResViewFormatFloat1, 
#line 1524
cudaResViewFormatFloat2, 
#line 1525
cudaResViewFormatFloat4, 
#line 1526
cudaResViewFormatUnsignedBlockCompressed1, 
#line 1527
cudaResViewFormatUnsignedBlockCompressed2, 
#line 1528
cudaResViewFormatUnsignedBlockCompressed3, 
#line 1529
cudaResViewFormatUnsignedBlockCompressed4, 
#line 1530
cudaResViewFormatSignedBlockCompressed4, 
#line 1531
cudaResViewFormatUnsignedBlockCompressed5, 
#line 1532
cudaResViewFormatSignedBlockCompressed5, 
#line 1533
cudaResViewFormatUnsignedBlockCompressed6H, 
#line 1534
cudaResViewFormatSignedBlockCompressed6H, 
#line 1535
cudaResViewFormatUnsignedBlockCompressed7
#line 1536
}; 
#endif
#line 1541 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 1541
struct cudaResourceDesc { 
#line 1542
cudaResourceType resType; 
#line 1544
union { 
#line 1545
struct { 
#line 1546
cudaArray_t array; 
#line 1547
} array; 
#line 1548
struct { 
#line 1549
cudaMipmappedArray_t mipmap; 
#line 1550
} mipmap; 
#line 1551
struct { 
#line 1552
void *devPtr; 
#line 1553
cudaChannelFormatDesc desc; 
#line 1554
size_t sizeInBytes; 
#line 1555
} linear; 
#line 1556
struct { 
#line 1557
void *devPtr; 
#line 1558
cudaChannelFormatDesc desc; 
#line 1559
size_t width; 
#line 1560
size_t height; 
#line 1561
size_t pitchInBytes; 
#line 1562
} pitch2D; 
#line 1563
} res; 
#line 1564
}; 
#endif
#line 1569 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 1569
struct cudaResourceViewDesc { 
#line 1571
cudaResourceViewFormat format; 
#line 1572
size_t width; 
#line 1573
size_t height; 
#line 1574
size_t depth; 
#line 1575
unsigned firstMipmapLevel; 
#line 1576
unsigned lastMipmapLevel; 
#line 1577
unsigned firstLayer; 
#line 1578
unsigned lastLayer; 
#line 1579
}; 
#endif
#line 1584 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 1584
struct cudaPointerAttributes { 
#line 1590
cudaMemoryType type; 
#line 1601
int device; 
#line 1607
void *devicePointer; 
#line 1616
void *hostPointer; 
#line 1617
}; 
#endif
#line 1622 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 1622
struct cudaFuncAttributes { 
#line 1629
size_t sharedSizeBytes; 
#line 1635
size_t constSizeBytes; 
#line 1640
size_t localSizeBytes; 
#line 1647
int maxThreadsPerBlock; 
#line 1652
int numRegs; 
#line 1659
int ptxVersion; 
#line 1666
int binaryVersion; 
#line 1672
int cacheModeCA; 
#line 1679
int maxDynamicSharedSizeBytes; 
#line 1688
int preferredShmemCarveout; 
#line 1694
int clusterDimMustBeSet; 
#line 1705
int requiredClusterWidth; 
#line 1706
int requiredClusterHeight; 
#line 1707
int requiredClusterDepth; 
#line 1713
int clusterSchedulingPolicyPreference; 
#line 1735
int nonPortableClusterSizeAllowed; 
#line 1740
int reserved[16]; 
#line 1741
}; 
#endif
#line 1746 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 1746
enum cudaFuncAttribute { 
#line 1748
cudaFuncAttributeMaxDynamicSharedMemorySize = 8, 
#line 1749
cudaFuncAttributePreferredSharedMemoryCarveout, 
#line 1750
cudaFuncAttributeClusterDimMustBeSet, 
#line 1751
cudaFuncAttributeRequiredClusterWidth, 
#line 1752
cudaFuncAttributeRequiredClusterHeight, 
#line 1753
cudaFuncAttributeRequiredClusterDepth, 
#line 1754
cudaFuncAttributeNonPortableClusterSizeAllowed, 
#line 1755
cudaFuncAttributeClusterSchedulingPolicyPreference, 
#line 1756
cudaFuncAttributeMax
#line 1757
}; 
#endif
#line 1762 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 1762
enum cudaFuncCache { 
#line 1764
cudaFuncCachePreferNone, 
#line 1765
cudaFuncCachePreferShared, 
#line 1766
cudaFuncCachePreferL1, 
#line 1767
cudaFuncCachePreferEqual
#line 1768
}; 
#endif
#line 1774 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 1774
enum cudaSharedMemConfig { 
#line 1776
cudaSharedMemBankSizeDefault, 
#line 1777
cudaSharedMemBankSizeFourByte, 
#line 1778
cudaSharedMemBankSizeEightByte
#line 1779
}; 
#endif
#line 1784 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 1784
enum cudaSharedCarveout { 
#line 1785
cudaSharedmemCarveoutDefault = (-1), 
#line 1786
cudaSharedmemCarveoutMaxShared = 100, 
#line 1787
cudaSharedmemCarveoutMaxL1 = 0
#line 1788
}; 
#endif
#line 1793 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 1793
enum cudaComputeMode { 
#line 1795
cudaComputeModeDefault, 
#line 1796
cudaComputeModeExclusive, 
#line 1797
cudaComputeModeProhibited, 
#line 1798
cudaComputeModeExclusiveProcess
#line 1799
}; 
#endif
#line 1804 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 1804
enum cudaLimit { 
#line 1806
cudaLimitStackSize, 
#line 1807
cudaLimitPrintfFifoSize, 
#line 1808
cudaLimitMallocHeapSize, 
#line 1809
cudaLimitDevRuntimeSyncDepth, 
#line 1810
cudaLimitDevRuntimePendingLaunchCount, 
#line 1811
cudaLimitMaxL2FetchGranularity, 
#line 1812
cudaLimitPersistingL2CacheSize
#line 1813
}; 
#endif
#line 1818 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 1818
enum cudaMemoryAdvise { 
#line 1820
cudaMemAdviseSetReadMostly = 1, 
#line 1821
cudaMemAdviseUnsetReadMostly, 
#line 1822
cudaMemAdviseSetPreferredLocation, 
#line 1823
cudaMemAdviseUnsetPreferredLocation, 
#line 1824
cudaMemAdviseSetAccessedBy, 
#line 1825
cudaMemAdviseUnsetAccessedBy
#line 1826
}; 
#endif
#line 1831 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 1831
enum cudaMemRangeAttribute { 
#line 1833
cudaMemRangeAttributeReadMostly = 1, 
#line 1834
cudaMemRangeAttributePreferredLocation, 
#line 1835
cudaMemRangeAttributeAccessedBy, 
#line 1836
cudaMemRangeAttributeLastPrefetchLocation, 
#line 1837
cudaMemRangeAttributePreferredLocationType, 
#line 1838
cudaMemRangeAttributePreferredLocationId, 
#line 1839
cudaMemRangeAttributeLastPrefetchLocationType, 
#line 1840
cudaMemRangeAttributeLastPrefetchLocationId
#line 1841
}; 
#endif
#line 1846 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 1846
enum cudaFlushGPUDirectRDMAWritesOptions { 
#line 1847
cudaFlushGPUDirectRDMAWritesOptionHost = (1 << 0), 
#line 1848
cudaFlushGPUDirectRDMAWritesOptionMemOps
#line 1849
}; 
#endif
#line 1854 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 1854
enum cudaGPUDirectRDMAWritesOrdering { 
#line 1855
cudaGPUDirectRDMAWritesOrderingNone, 
#line 1856
cudaGPUDirectRDMAWritesOrderingOwner = 100, 
#line 1857
cudaGPUDirectRDMAWritesOrderingAllDevices = 200
#line 1858
}; 
#endif
#line 1863 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 1863
enum cudaFlushGPUDirectRDMAWritesScope { 
#line 1864
cudaFlushGPUDirectRDMAWritesToOwner = 100, 
#line 1865
cudaFlushGPUDirectRDMAWritesToAllDevices = 200
#line 1866
}; 
#endif
#line 1871 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 1871
enum cudaFlushGPUDirectRDMAWritesTarget { 
#line 1872
cudaFlushGPUDirectRDMAWritesTargetCurrentDevice
#line 1873
}; 
#endif
#line 1879 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 1879
enum cudaDeviceAttr { 
#line 1881
cudaDevAttrMaxThreadsPerBlock = 1, 
#line 1882
cudaDevAttrMaxBlockDimX, 
#line 1883
cudaDevAttrMaxBlockDimY, 
#line 1884
cudaDevAttrMaxBlockDimZ, 
#line 1885
cudaDevAttrMaxGridDimX, 
#line 1886
cudaDevAttrMaxGridDimY, 
#line 1887
cudaDevAttrMaxGridDimZ, 
#line 1888
cudaDevAttrMaxSharedMemoryPerBlock, 
#line 1889
cudaDevAttrTotalConstantMemory, 
#line 1890
cudaDevAttrWarpSize, 
#line 1891
cudaDevAttrMaxPitch, 
#line 1892
cudaDevAttrMaxRegistersPerBlock, 
#line 1893
cudaDevAttrClockRate, 
#line 1894
cudaDevAttrTextureAlignment, 
#line 1895
cudaDevAttrGpuOverlap, 
#line 1896
cudaDevAttrMultiProcessorCount, 
#line 1897
cudaDevAttrKernelExecTimeout, 
#line 1898
cudaDevAttrIntegrated, 
#line 1899
cudaDevAttrCanMapHostMemory, 
#line 1900
cudaDevAttrComputeMode, 
#line 1901
cudaDevAttrMaxTexture1DWidth, 
#line 1902
cudaDevAttrMaxTexture2DWidth, 
#line 1903
cudaDevAttrMaxTexture2DHeight, 
#line 1904
cudaDevAttrMaxTexture3DWidth, 
#line 1905
cudaDevAttrMaxTexture3DHeight, 
#line 1906
cudaDevAttrMaxTexture3DDepth, 
#line 1907
cudaDevAttrMaxTexture2DLayeredWidth, 
#line 1908
cudaDevAttrMaxTexture2DLayeredHeight, 
#line 1909
cudaDevAttrMaxTexture2DLayeredLayers, 
#line 1910
cudaDevAttrSurfaceAlignment, 
#line 1911
cudaDevAttrConcurrentKernels, 
#line 1912
cudaDevAttrEccEnabled, 
#line 1913
cudaDevAttrPciBusId, 
#line 1914
cudaDevAttrPciDeviceId, 
#line 1915
cudaDevAttrTccDriver, 
#line 1916
cudaDevAttrMemoryClockRate, 
#line 1917
cudaDevAttrGlobalMemoryBusWidth, 
#line 1918
cudaDevAttrL2CacheSize, 
#line 1919
cudaDevAttrMaxThreadsPerMultiProcessor, 
#line 1920
cudaDevAttrAsyncEngineCount, 
#line 1921
cudaDevAttrUnifiedAddressing, 
#line 1922
cudaDevAttrMaxTexture1DLayeredWidth, 
#line 1923
cudaDevAttrMaxTexture1DLayeredLayers, 
#line 1924
cudaDevAttrMaxTexture2DGatherWidth = 45, 
#line 1925
cudaDevAttrMaxTexture2DGatherHeight, 
#line 1926
cudaDevAttrMaxTexture3DWidthAlt, 
#line 1927
cudaDevAttrMaxTexture3DHeightAlt, 
#line 1928
cudaDevAttrMaxTexture3DDepthAlt, 
#line 1929
cudaDevAttrPciDomainId, 
#line 1930
cudaDevAttrTexturePitchAlignment, 
#line 1931
cudaDevAttrMaxTextureCubemapWidth, 
#line 1932
cudaDevAttrMaxTextureCubemapLayeredWidth, 
#line 1933
cudaDevAttrMaxTextureCubemapLayeredLayers, 
#line 1934
cudaDevAttrMaxSurface1DWidth, 
#line 1935
cudaDevAttrMaxSurface2DWidth, 
#line 1936
cudaDevAttrMaxSurface2DHeight, 
#line 1937
cudaDevAttrMaxSurface3DWidth, 
#line 1938
cudaDevAttrMaxSurface3DHeight, 
#line 1939
cudaDevAttrMaxSurface3DDepth, 
#line 1940
cudaDevAttrMaxSurface1DLayeredWidth, 
#line 1941
cudaDevAttrMaxSurface1DLayeredLayers, 
#line 1942
cudaDevAttrMaxSurface2DLayeredWidth, 
#line 1943
cudaDevAttrMaxSurface2DLayeredHeight, 
#line 1944
cudaDevAttrMaxSurface2DLayeredLayers, 
#line 1945
cudaDevAttrMaxSurfaceCubemapWidth, 
#line 1946
cudaDevAttrMaxSurfaceCubemapLayeredWidth, 
#line 1947
cudaDevAttrMaxSurfaceCubemapLayeredLayers, 
#line 1948
cudaDevAttrMaxTexture1DLinearWidth, 
#line 1949
cudaDevAttrMaxTexture2DLinearWidth, 
#line 1950
cudaDevAttrMaxTexture2DLinearHeight, 
#line 1951
cudaDevAttrMaxTexture2DLinearPitch, 
#line 1952
cudaDevAttrMaxTexture2DMipmappedWidth, 
#line 1953
cudaDevAttrMaxTexture2DMipmappedHeight, 
#line 1954
cudaDevAttrComputeCapabilityMajor, 
#line 1955
cudaDevAttrComputeCapabilityMinor, 
#line 1956
cudaDevAttrMaxTexture1DMipmappedWidth, 
#line 1957
cudaDevAttrStreamPrioritiesSupported, 
#line 1958
cudaDevAttrGlobalL1CacheSupported, 
#line 1959
cudaDevAttrLocalL1CacheSupported, 
#line 1960
cudaDevAttrMaxSharedMemoryPerMultiprocessor, 
#line 1961
cudaDevAttrMaxRegistersPerMultiprocessor, 
#line 1962
cudaDevAttrManagedMemory, 
#line 1963
cudaDevAttrIsMultiGpuBoard, 
#line 1964
cudaDevAttrMultiGpuBoardGroupID, 
#line 1965
cudaDevAttrHostNativeAtomicSupported, 
#line 1966
cudaDevAttrSingleToDoublePrecisionPerfRatio, 
#line 1967
cudaDevAttrPageableMemoryAccess, 
#line 1968
cudaDevAttrConcurrentManagedAccess, 
#line 1969
cudaDevAttrComputePreemptionSupported, 
#line 1970
cudaDevAttrCanUseHostPointerForRegisteredMem, 
#line 1971
cudaDevAttrReserved92, 
#line 1972
cudaDevAttrReserved93, 
#line 1973
cudaDevAttrReserved94, 
#line 1974
cudaDevAttrCooperativeLaunch, 
#line 1975
cudaDevAttrCooperativeMultiDeviceLaunch, 
#line 1976
cudaDevAttrMaxSharedMemoryPerBlockOptin, 
#line 1977
cudaDevAttrCanFlushRemoteWrites, 
#line 1978
cudaDevAttrHostRegisterSupported, 
#line 1979
cudaDevAttrPageableMemoryAccessUsesHostPageTables, 
#line 1980
cudaDevAttrDirectManagedMemAccessFromHost, 
#line 1981
cudaDevAttrMaxBlocksPerMultiprocessor = 106, 
#line 1982
cudaDevAttrMaxPersistingL2CacheSize = 108, 
#line 1983
cudaDevAttrMaxAccessPolicyWindowSize, 
#line 1984
cudaDevAttrReservedSharedMemoryPerBlock = 111, 
#line 1985
cudaDevAttrSparseCudaArraySupported, 
#line 1986
cudaDevAttrHostRegisterReadOnlySupported, 
#line 1987
cudaDevAttrTimelineSemaphoreInteropSupported, 
#line 1988
cudaDevAttrMaxTimelineSemaphoreInteropSupported = 114, 
#line 1989
cudaDevAttrMemoryPoolsSupported, 
#line 1990
cudaDevAttrGPUDirectRDMASupported, 
#line 1991
cudaDevAttrGPUDirectRDMAFlushWritesOptions, 
#line 1992
cudaDevAttrGPUDirectRDMAWritesOrdering, 
#line 1993
cudaDevAttrMemoryPoolSupportedHandleTypes, 
#line 1994
cudaDevAttrClusterLaunch, 
#line 1995
cudaDevAttrDeferredMappingCudaArraySupported, 
#line 1996
cudaDevAttrReserved122, 
#line 1997
cudaDevAttrReserved123, 
#line 1998
cudaDevAttrReserved124, 
#line 1999
cudaDevAttrIpcEventSupport, 
#line 2000
cudaDevAttrMemSyncDomainCount, 
#line 2001
cudaDevAttrReserved127, 
#line 2002
cudaDevAttrReserved128, 
#line 2003
cudaDevAttrReserved129, 
#line 2004
cudaDevAttrNumaConfig, 
#line 2005
cudaDevAttrNumaId, 
#line 2006
cudaDevAttrReserved132, 
#line 2007
cudaDevAttrMpsEnabled, 
#line 2008
cudaDevAttrHostNumaId, 
#line 2009
cudaDevAttrMax
#line 2010
}; 
#endif
#line 2015 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 2015
enum cudaMemPoolAttr { 
#line 2025
cudaMemPoolReuseFollowEventDependencies = 1, 
#line 2032
cudaMemPoolReuseAllowOpportunistic, 
#line 2040
cudaMemPoolReuseAllowInternalDependencies, 
#line 2051
cudaMemPoolAttrReleaseThreshold, 
#line 2057
cudaMemPoolAttrReservedMemCurrent, 
#line 2064
cudaMemPoolAttrReservedMemHigh, 
#line 2070
cudaMemPoolAttrUsedMemCurrent, 
#line 2077
cudaMemPoolAttrUsedMemHigh
#line 2078
}; 
#endif
#line 2083 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 2083
enum cudaMemLocationType { 
#line 2084
cudaMemLocationTypeInvalid, 
#line 2085
cudaMemLocationTypeDevice, 
#line 2086
cudaMemLocationTypeHost, 
#line 2087
cudaMemLocationTypeHostNuma, 
#line 2088
cudaMemLocationTypeHostNumaCurrent
#line 2089
}; 
#endif
#line 2097 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 2097
struct cudaMemLocation { 
#line 2098
cudaMemLocationType type; 
#line 2099
int id; 
#line 2100
}; 
#endif
#line 2105 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 2105
enum cudaMemAccessFlags { 
#line 2106
cudaMemAccessFlagsProtNone, 
#line 2107
cudaMemAccessFlagsProtRead, 
#line 2108
cudaMemAccessFlagsProtReadWrite = 3
#line 2109
}; 
#endif
#line 2114 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 2114
struct cudaMemAccessDesc { 
#line 2115
cudaMemLocation location; 
#line 2116
cudaMemAccessFlags flags; 
#line 2117
}; 
#endif
#line 2122 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 2122
enum cudaMemAllocationType { 
#line 2123
cudaMemAllocationTypeInvalid, 
#line 2127
cudaMemAllocationTypePinned, 
#line 2128
cudaMemAllocationTypeMax = 2147483647
#line 2129
}; 
#endif
#line 2134 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 2134
enum cudaMemAllocationHandleType { 
#line 2135
cudaMemHandleTypeNone, 
#line 2136
cudaMemHandleTypePosixFileDescriptor, 
#line 2137
cudaMemHandleTypeWin32, 
#line 2138
cudaMemHandleTypeWin32Kmt = 4
#line 2139
}; 
#endif
#line 2144 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 2144
struct cudaMemPoolProps { 
#line 2145
cudaMemAllocationType allocType; 
#line 2146
cudaMemAllocationHandleType handleTypes; 
#line 2147
cudaMemLocation location; 
#line 2154
void *win32SecurityAttributes; 
#line 2155
size_t maxSize; 
#line 2156
unsigned char reserved[56]; 
#line 2157
}; 
#endif
#line 2162 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 2162
struct cudaMemPoolPtrExportData { 
#line 2163
unsigned char reserved[64]; 
#line 2164
}; 
#endif
#line 2169 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 2169
struct cudaMemAllocNodeParams { 
#line 2174
cudaMemPoolProps poolProps; 
#line 2175
const cudaMemAccessDesc *accessDescs; 
#line 2176
size_t accessDescCount; 
#line 2177
size_t bytesize; 
#line 2178
void *dptr; 
#line 2179
}; 
#endif
#line 2184 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 2184
struct cudaMemAllocNodeParamsV2 { 
#line 2189
cudaMemPoolProps poolProps; 
#line 2190
const cudaMemAccessDesc *accessDescs; 
#line 2191
size_t accessDescCount; 
#line 2192
size_t bytesize; 
#line 2193
void *dptr; 
#line 2194
}; 
#endif
#line 2199 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 2199
struct cudaMemFreeNodeParams { 
#line 2200
void *dptr; 
#line 2201
}; 
#endif
#line 2206 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 2206
enum cudaGraphMemAttributeType { 
#line 2211
cudaGraphMemAttrUsedMemCurrent, 
#line 2218
cudaGraphMemAttrUsedMemHigh, 
#line 2225
cudaGraphMemAttrReservedMemCurrent, 
#line 2232
cudaGraphMemAttrReservedMemHigh
#line 2233
}; 
#endif
#line 2239 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 2239
enum cudaDeviceP2PAttr { 
#line 2240
cudaDevP2PAttrPerformanceRank = 1, 
#line 2241
cudaDevP2PAttrAccessSupported, 
#line 2242
cudaDevP2PAttrNativeAtomicSupported, 
#line 2243
cudaDevP2PAttrCudaArrayAccessSupported
#line 2244
}; 
#endif
#line 2251 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 2251
struct CUuuid_st { 
#line 2252
char bytes[16]; 
#line 2253
}; 
#endif
#line 2254 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
typedef CUuuid_st 
#line 2254
CUuuid; 
#endif
#line 2256 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
typedef CUuuid_st 
#line 2256
cudaUUID_t; 
#endif
#line 2261 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 2261
struct cudaDeviceProp { 
#line 2263
char name[256]; 
#line 2264
cudaUUID_t uuid; 
#line 2265
char luid[8]; 
#line 2266
unsigned luidDeviceNodeMask; 
#line 2267
size_t totalGlobalMem; 
#line 2268
size_t sharedMemPerBlock; 
#line 2269
int regsPerBlock; 
#line 2270
int warpSize; 
#line 2271
size_t memPitch; 
#line 2272
int maxThreadsPerBlock; 
#line 2273
int maxThreadsDim[3]; 
#line 2274
int maxGridSize[3]; 
#line 2275
int clockRate; 
#line 2276
size_t totalConstMem; 
#line 2277
int major; 
#line 2278
int minor; 
#line 2279
size_t textureAlignment; 
#line 2280
size_t texturePitchAlignment; 
#line 2281
int deviceOverlap; 
#line 2282
int multiProcessorCount; 
#line 2283
int kernelExecTimeoutEnabled; 
#line 2284
int integrated; 
#line 2285
int canMapHostMemory; 
#line 2286
int computeMode; 
#line 2287
int maxTexture1D; 
#line 2288
int maxTexture1DMipmap; 
#line 2289
int maxTexture1DLinear; 
#line 2290
int maxTexture2D[2]; 
#line 2291
int maxTexture2DMipmap[2]; 
#line 2292
int maxTexture2DLinear[3]; 
#line 2293
int maxTexture2DGather[2]; 
#line 2294
int maxTexture3D[3]; 
#line 2295
int maxTexture3DAlt[3]; 
#line 2296
int maxTextureCubemap; 
#line 2297
int maxTexture1DLayered[2]; 
#line 2298
int maxTexture2DLayered[3]; 
#line 2299
int maxTextureCubemapLayered[2]; 
#line 2300
int maxSurface1D; 
#line 2301
int maxSurface2D[2]; 
#line 2302
int maxSurface3D[3]; 
#line 2303
int maxSurface1DLayered[2]; 
#line 2304
int maxSurface2DLayered[3]; 
#line 2305
int maxSurfaceCubemap; 
#line 2306
int maxSurfaceCubemapLayered[2]; 
#line 2307
size_t surfaceAlignment; 
#line 2308
int concurrentKernels; 
#line 2309
int ECCEnabled; 
#line 2310
int pciBusID; 
#line 2311
int pciDeviceID; 
#line 2312
int pciDomainID; 
#line 2313
int tccDriver; 
#line 2314
int asyncEngineCount; 
#line 2315
int unifiedAddressing; 
#line 2316
int memoryClockRate; 
#line 2317
int memoryBusWidth; 
#line 2318
int l2CacheSize; 
#line 2319
int persistingL2CacheMaxSize; 
#line 2320
int maxThreadsPerMultiProcessor; 
#line 2321
int streamPrioritiesSupported; 
#line 2322
int globalL1CacheSupported; 
#line 2323
int localL1CacheSupported; 
#line 2324
size_t sharedMemPerMultiprocessor; 
#line 2325
int regsPerMultiprocessor; 
#line 2326
int managedMemory; 
#line 2327
int isMultiGpuBoard; 
#line 2328
int multiGpuBoardGroupID; 
#line 2329
int hostNativeAtomicSupported; 
#line 2330
int singleToDoublePrecisionPerfRatio; 
#line 2331
int pageableMemoryAccess; 
#line 2332
int concurrentManagedAccess; 
#line 2333
int computePreemptionSupported; 
#line 2334
int canUseHostPointerForRegisteredMem; 
#line 2335
int cooperativeLaunch; 
#line 2336
int cooperativeMultiDeviceLaunch; 
#line 2337
size_t sharedMemPerBlockOptin; 
#line 2338
int pageableMemoryAccessUsesHostPageTables; 
#line 2339
int directManagedMemAccessFromHost; 
#line 2340
int maxBlocksPerMultiProcessor; 
#line 2341
int accessPolicyMaxWindowSize; 
#line 2342
size_t reservedSharedMemPerBlock; 
#line 2343
int hostRegisterSupported; 
#line 2344
int sparseCudaArraySupported; 
#line 2345
int hostRegisterReadOnlySupported; 
#line 2346
int timelineSemaphoreInteropSupported; 
#line 2347
int memoryPoolsSupported; 
#line 2348
int gpuDirectRDMASupported; 
#line 2349
unsigned gpuDirectRDMAFlushWritesOptions; 
#line 2350
int gpuDirectRDMAWritesOrdering; 
#line 2351
unsigned memoryPoolSupportedHandleTypes; 
#line 2352
int deferredMappingCudaArraySupported; 
#line 2353
int ipcEventSupported; 
#line 2354
int clusterLaunch; 
#line 2355
int unifiedFunctionPointers; 
#line 2356
int reserved2[2]; 
#line 2357
int reserved1[1]; 
#line 2358
int reserved[60]; 
#line 2359
}; 
#endif
#line 2372 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
typedef 
#line 2369
struct cudaIpcEventHandle_st { 
#line 2371
char reserved[64]; 
#line 2372
} cudaIpcEventHandle_t; 
#endif
#line 2380 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
typedef 
#line 2377
struct cudaIpcMemHandle_st { 
#line 2379
char reserved[64]; 
#line 2380
} cudaIpcMemHandle_t; 
#endif
#line 2388 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
typedef 
#line 2385
struct cudaMemFabricHandle_st { 
#line 2387
char reserved[64]; 
#line 2388
} cudaMemFabricHandle_t; 
#endif
#line 2393 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 2393
enum cudaExternalMemoryHandleType { 
#line 2397
cudaExternalMemoryHandleTypeOpaqueFd = 1, 
#line 2401
cudaExternalMemoryHandleTypeOpaqueWin32, 
#line 2405
cudaExternalMemoryHandleTypeOpaqueWin32Kmt, 
#line 2409
cudaExternalMemoryHandleTypeD3D12Heap, 
#line 2413
cudaExternalMemoryHandleTypeD3D12Resource, 
#line 2417
cudaExternalMemoryHandleTypeD3D11Resource, 
#line 2421
cudaExternalMemoryHandleTypeD3D11ResourceKmt, 
#line 2425
cudaExternalMemoryHandleTypeNvSciBuf
#line 2426
}; 
#endif
#line 2468 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 2468
struct cudaExternalMemoryHandleDesc { 
#line 2472
cudaExternalMemoryHandleType type; 
#line 2473
union { 
#line 2479
int fd; 
#line 2495
struct { 
#line 2499
void *handle; 
#line 2504
const void *name; 
#line 2505
} win32; 
#line 2510
const void *nvSciBufObject; 
#line 2511
} handle; 
#line 2515
unsigned __int64 size; 
#line 2519
unsigned flags; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
#line 2520
}; 
#endif
#line 2525 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 2525
struct cudaExternalMemoryBufferDesc { 
#line 2529
unsigned __int64 offset; 
#line 2533
unsigned __int64 size; 
#line 2537
unsigned flags; 
#line 2538
}; 
#endif
#line 2543 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 2543
struct cudaExternalMemoryMipmappedArrayDesc { 
#line 2548
unsigned __int64 offset; 
#line 2552
cudaChannelFormatDesc formatDesc; 
#line 2556
cudaExtent extent; 
#line 2561
unsigned flags; 
#line 2565
unsigned numLevels; 
#line 2566
}; 
#endif
#line 2571 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 2571
enum cudaExternalSemaphoreHandleType { 
#line 2575
cudaExternalSemaphoreHandleTypeOpaqueFd = 1, 
#line 2579
cudaExternalSemaphoreHandleTypeOpaqueWin32, 
#line 2583
cudaExternalSemaphoreHandleTypeOpaqueWin32Kmt, 
#line 2587
cudaExternalSemaphoreHandleTypeD3D12Fence, 
#line 2591
cudaExternalSemaphoreHandleTypeD3D11Fence, 
#line 2595
cudaExternalSemaphoreHandleTypeNvSciSync, 
#line 2599
cudaExternalSemaphoreHandleTypeKeyedMutex, 
#line 2603
cudaExternalSemaphoreHandleTypeKeyedMutexKmt, 
#line 2607
cudaExternalSemaphoreHandleTypeTimelineSemaphoreFd, 
#line 2611
cudaExternalSemaphoreHandleTypeTimelineSemaphoreWin32
#line 2612
}; 
#endif
#line 2617 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 2617
struct cudaExternalSemaphoreHandleDesc { 
#line 2621
cudaExternalSemaphoreHandleType type; 
#line 2622
union { 
#line 2629
int fd; 
#line 2645
struct { 
#line 2649
void *handle; 
#line 2654
const void *name; 
#line 2655
} win32; 
#line 2659
const void *nvSciSyncObj; 
#line 2660
} handle; 
#line 2664
unsigned flags; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
#line 2665
}; 
#endif
#line 2670 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 2670
struct cudaExternalSemaphoreSignalParams_v1 { 
#line 2671
struct { 
#line 2675
struct { 
#line 2679
unsigned __int64 value; 
#line 2680
} fence; 
#line 2681
union { 
#line 2686
void *fence; 
#line 2687
unsigned __int64 reserved; 
#line 2688
} nvSciSync; 
#line 2692
struct { 
#line 2696
unsigned __int64 key; 
#line 2697
} keyedMutex; 
#line 2698
} params; 
#line 2709
unsigned flags; 
#line 2710
}; 
#endif
#line 2715 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 2715
struct cudaExternalSemaphoreWaitParams_v1 { 
#line 2716
struct { 
#line 2720
struct { 
#line 2724
unsigned __int64 value; 
#line 2725
} fence; 
#line 2726
union { 
#line 2731
void *fence; 
#line 2732
unsigned __int64 reserved; 
#line 2733
} nvSciSync; 
#line 2737
struct { 
#line 2741
unsigned __int64 key; 
#line 2745
unsigned timeoutMs; 
#line 2746
} keyedMutex; 
#line 2747
} params; 
#line 2758
unsigned flags; 
#line 2759
}; 
#endif
#line 2764 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 2764
struct cudaExternalSemaphoreSignalParams { 
#line 2765
struct { 
#line 2769
struct { 
#line 2773
unsigned __int64 value; 
#line 2774
} fence; 
#line 2775
union { 
#line 2780
void *fence; 
#line 2781
unsigned __int64 reserved; 
#line 2782
} nvSciSync; 
#line 2786
struct { 
#line 2790
unsigned __int64 key; 
#line 2791
} keyedMutex; 
#line 2792
unsigned reserved[12]; 
#line 2793
} params; 
#line 2804
unsigned flags; 
#line 2805
unsigned reserved[16]; 
#line 2806
}; 
#endif
#line 2811 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 2811
struct cudaExternalSemaphoreWaitParams { 
#line 2812
struct { 
#line 2816
struct { 
#line 2820
unsigned __int64 value; 
#line 2821
} fence; 
#line 2822
union { 
#line 2827
void *fence; 
#line 2828
unsigned __int64 reserved; 
#line 2829
} nvSciSync; 
#line 2833
struct { 
#line 2837
unsigned __int64 key; 
#line 2841
unsigned timeoutMs; 
#line 2842
} keyedMutex; 
#line 2843
unsigned reserved[10]; 
#line 2844
} params; 
#line 2855
unsigned flags; 
#line 2856
unsigned reserved[16]; 
#line 2857
}; 
#endif
#line 2868 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
typedef cudaError 
#line 2868
cudaError_t; 
#endif
#line 2873 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
typedef struct CUstream_st *
#line 2873
cudaStream_t; 
#endif
#line 2878 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
typedef struct CUevent_st *
#line 2878
cudaEvent_t; 
#endif
#line 2883 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
typedef cudaGraphicsResource *
#line 2883
cudaGraphicsResource_t; 
#endif
#line 2888 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
typedef struct CUexternalMemory_st *
#line 2888
cudaExternalMemory_t; 
#endif
#line 2893 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
typedef struct CUexternalSemaphore_st *
#line 2893
cudaExternalSemaphore_t; 
#endif
#line 2898 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
typedef struct CUgraph_st *
#line 2898
cudaGraph_t; 
#endif
#line 2903 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
typedef struct CUgraphNode_st *
#line 2903
cudaGraphNode_t; 
#endif
#line 2908 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
typedef struct CUuserObject_st *
#line 2908
cudaUserObject_t; 
#endif
#line 2913 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
typedef unsigned __int64 
#line 2913
cudaGraphConditionalHandle; 
#endif
#line 2918 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
typedef struct CUfunc_st *
#line 2918
cudaFunction_t; 
#endif
#line 2923 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
typedef struct CUkern_st *
#line 2923
cudaKernel_t; 
#endif
#line 2928 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
typedef struct CUmemPoolHandle_st *
#line 2928
cudaMemPool_t; 
#endif
#line 2933 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 2933
enum cudaCGScope { 
#line 2934
cudaCGScopeInvalid, 
#line 2935
cudaCGScopeGrid, 
#line 2936
cudaCGScopeMultiGrid
#line 2937
}; 
#endif
#line 2942 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 2942
struct cudaLaunchParams { 
#line 2944
void *func; 
#line 2945
dim3 gridDim; 
#line 2946
dim3 blockDim; 
#line 2947
void **args; 
#line 2948
size_t sharedMem; 
#line 2949
cudaStream_t stream; 
#line 2950
}; 
#endif
#line 2955 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 2955
struct cudaKernelNodeParams { 
#line 2956
void *func; 
#line 2957
dim3 gridDim; 
#line 2958
dim3 blockDim; 
#line 2959
unsigned sharedMemBytes; 
#line 2960
void **kernelParams; 
#line 2961
void **extra; 
#line 2962
}; 
#endif
#line 2967 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 2967
struct cudaKernelNodeParamsV2 { 
#line 2968
void *func; 
#line 2974 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
uint3 gridDim; 
#line 2975
uint3 blockDim; 
#line 2977 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
unsigned sharedMemBytes; 
#line 2978
void **kernelParams; 
#line 2979
void **extra; 
#line 2980
}; 
#endif
#line 2985 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 2985
struct cudaExternalSemaphoreSignalNodeParams { 
#line 2986
cudaExternalSemaphore_t *extSemArray; 
#line 2987
const cudaExternalSemaphoreSignalParams *paramsArray; 
#line 2988
unsigned numExtSems; 
#line 2989
}; 
#endif
#line 2994 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 2994
struct cudaExternalSemaphoreSignalNodeParamsV2 { 
#line 2995
cudaExternalSemaphore_t *extSemArray; 
#line 2996
const cudaExternalSemaphoreSignalParams *paramsArray; 
#line 2997
unsigned numExtSems; 
#line 2998
}; 
#endif
#line 3003 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 3003
struct cudaExternalSemaphoreWaitNodeParams { 
#line 3004
cudaExternalSemaphore_t *extSemArray; 
#line 3005
const cudaExternalSemaphoreWaitParams *paramsArray; 
#line 3006
unsigned numExtSems; 
#line 3007
}; 
#endif
#line 3012 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 3012
struct cudaExternalSemaphoreWaitNodeParamsV2 { 
#line 3013
cudaExternalSemaphore_t *extSemArray; 
#line 3014
const cudaExternalSemaphoreWaitParams *paramsArray; 
#line 3015
unsigned numExtSems; 
#line 3016
}; 
#endif
#line 3018 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 3018
enum cudaGraphConditionalHandleFlags { 
#line 3019
cudaGraphCondAssignDefault = 1
#line 3020
}; 
#endif
#line 3025 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 3025
enum cudaGraphConditionalNodeType { 
#line 3026
cudaGraphCondTypeIf, 
#line 3027
cudaGraphCondTypeWhile
#line 3028
}; 
#endif
#line 3033 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 3033
struct cudaConditionalNodeParams { 
#line 3034
cudaGraphConditionalHandle handle; 
#line 3037
cudaGraphConditionalNodeType type; 
#line 3038
unsigned size; 
#line 3039
cudaGraph_t *phGraph_out; 
#line 3049
}; 
#endif
#line 3054 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 3054
enum cudaGraphNodeType { 
#line 3055
cudaGraphNodeTypeKernel, 
#line 3056
cudaGraphNodeTypeMemcpy, 
#line 3057
cudaGraphNodeTypeMemset, 
#line 3058
cudaGraphNodeTypeHost, 
#line 3059
cudaGraphNodeTypeGraph, 
#line 3060
cudaGraphNodeTypeEmpty, 
#line 3061
cudaGraphNodeTypeWaitEvent, 
#line 3062
cudaGraphNodeTypeEventRecord, 
#line 3063
cudaGraphNodeTypeExtSemaphoreSignal, 
#line 3064
cudaGraphNodeTypeExtSemaphoreWait, 
#line 3065
cudaGraphNodeTypeMemAlloc, 
#line 3066
cudaGraphNodeTypeMemFree, 
#line 3067
cudaGraphNodeTypeConditional = 13, 
#line 3084
cudaGraphNodeTypeCount
#line 3085
}; 
#endif
#line 3090 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 3090
struct cudaChildGraphNodeParams { 
#line 3091
cudaGraph_t graph; 
#line 3093
}; 
#endif
#line 3098 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 3098
struct cudaEventRecordNodeParams { 
#line 3099
cudaEvent_t event; 
#line 3100
}; 
#endif
#line 3105 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 3105
struct cudaEventWaitNodeParams { 
#line 3106
cudaEvent_t event; 
#line 3107
}; 
#endif
#line 3112 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 3112
struct cudaGraphNodeParams { 
#line 3113
cudaGraphNodeType type; 
#line 3114
int reserved0[3]; 
#line 3116
union { 
#line 3117
__int64 reserved1[29]; 
#line 3118
cudaKernelNodeParamsV2 kernel; 
#line 3119
cudaMemcpyNodeParams memcpy; 
#line 3120
cudaMemsetParamsV2 memset; 
#line 3121
cudaHostNodeParamsV2 host; 
#line 3122
cudaChildGraphNodeParams graph; 
#line 3123
cudaEventWaitNodeParams eventWait; 
#line 3124
cudaEventRecordNodeParams eventRecord; 
#line 3125
cudaExternalSemaphoreSignalNodeParamsV2 extSemSignal; 
#line 3126
cudaExternalSemaphoreWaitNodeParamsV2 extSemWait; 
#line 3127
cudaMemAllocNodeParamsV2 alloc; 
#line 3128
cudaMemFreeNodeParams free; 
#line 3129
cudaConditionalNodeParams conditional; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
#line 3130
}; 
#line 3132
__int64 reserved2; 
#line 3133
}; 
#endif
#line 3145 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
typedef 
#line 3138
enum cudaGraphDependencyType_enum { 
#line 3139
cudaGraphDependencyTypeDefault, 
#line 3140
cudaGraphDependencyTypeProgrammatic
#line 3145
} cudaGraphDependencyType; 
#endif
#line 3175 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
typedef 
#line 3152
struct cudaGraphEdgeData_st { 
#line 3153
unsigned char from_port; 
#line 3163
unsigned char to_port; 
#line 3170
unsigned char type; 
#line 3173
unsigned char reserved[5]; 
#line 3175
} cudaGraphEdgeData; 
#endif
#line 3196 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
typedef struct CUgraphExec_st *cudaGraphExec_t; 
#line 3201
#if 0
#line 3201
enum cudaGraphExecUpdateResult { 
#line 3202
cudaGraphExecUpdateSuccess, 
#line 3203
cudaGraphExecUpdateError, 
#line 3204
cudaGraphExecUpdateErrorTopologyChanged, 
#line 3205
cudaGraphExecUpdateErrorNodeTypeChanged, 
#line 3206
cudaGraphExecUpdateErrorFunctionChanged, 
#line 3207
cudaGraphExecUpdateErrorParametersChanged, 
#line 3208
cudaGraphExecUpdateErrorNotSupported, 
#line 3209
cudaGraphExecUpdateErrorUnsupportedFunctionChange, 
#line 3210
cudaGraphExecUpdateErrorAttributesChanged
#line 3211
}; 
#endif
#line 3222 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
typedef 
#line 3216
enum cudaGraphInstantiateResult { 
#line 3217
cudaGraphInstantiateSuccess, 
#line 3218
cudaGraphInstantiateError, 
#line 3219
cudaGraphInstantiateInvalidStructure, 
#line 3220
cudaGraphInstantiateNodeOperationNotSupported, 
#line 3221
cudaGraphInstantiateMultipleDevicesNotSupported
#line 3222
} cudaGraphInstantiateResult; 
#endif
#line 3233 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
typedef 
#line 3227
struct cudaGraphInstantiateParams_st { 
#line 3229
unsigned __int64 flags; 
#line 3230
cudaStream_t uploadStream; 
#line 3231
cudaGraphNode_t errNode_out; 
#line 3232
cudaGraphInstantiateResult result_out; 
#line 3233
} cudaGraphInstantiateParams; 
#endif
#line 3255 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
typedef 
#line 3238
struct cudaGraphExecUpdateResultInfo_st { 
#line 3242
cudaGraphExecUpdateResult result; 
#line 3249
cudaGraphNode_t errorNode; 
#line 3254
cudaGraphNode_t errorFromNode; 
#line 3255
} cudaGraphExecUpdateResultInfo; 
#endif
#line 3261 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 3261
enum cudaGetDriverEntryPointFlags { 
#line 3262
cudaEnableDefault, 
#line 3263
cudaEnableLegacyStream, 
#line 3264
cudaEnablePerThreadDefaultStream
#line 3265
}; 
#endif
#line 3270 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 3270
enum cudaDriverEntryPointQueryResult { 
#line 3271
cudaDriverEntryPointSuccess, 
#line 3272
cudaDriverEntryPointSymbolNotFound, 
#line 3273
cudaDriverEntryPointVersionNotSufficent
#line 3274
}; 
#endif
#line 3279 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 3279
enum cudaGraphDebugDotFlags { 
#line 3280
cudaGraphDebugDotFlagsVerbose = (1 << 0), 
#line 3281
cudaGraphDebugDotFlagsKernelNodeParams = (1 << 2), 
#line 3282
cudaGraphDebugDotFlagsMemcpyNodeParams = (1 << 3), 
#line 3283
cudaGraphDebugDotFlagsMemsetNodeParams = (1 << 4), 
#line 3284
cudaGraphDebugDotFlagsHostNodeParams = (1 << 5), 
#line 3285
cudaGraphDebugDotFlagsEventNodeParams = (1 << 6), 
#line 3286
cudaGraphDebugDotFlagsExtSemasSignalNodeParams = (1 << 7), 
#line 3287
cudaGraphDebugDotFlagsExtSemasWaitNodeParams = (1 << 8), 
#line 3288
cudaGraphDebugDotFlagsKernelNodeAttributes = (1 << 9), 
#line 3289
cudaGraphDebugDotFlagsHandles = (1 << 10), 
#line 3290
cudaGraphDebugDotFlagsConditionalNodeParams = (1 << 15)
#line 3291
}; 
#endif
#line 3296 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 3296
enum cudaGraphInstantiateFlags { 
#line 3297
cudaGraphInstantiateFlagAutoFreeOnLaunch = 1, 
#line 3298
cudaGraphInstantiateFlagUpload, 
#line 3301
cudaGraphInstantiateFlagDeviceLaunch = 4, 
#line 3304
cudaGraphInstantiateFlagUseNodePriority = 8
#line 3306
}; 
#endif
#line 3327 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
typedef 
#line 3324
enum cudaLaunchMemSyncDomain { 
#line 3325
cudaLaunchMemSyncDomainDefault, 
#line 3326
cudaLaunchMemSyncDomainRemote
#line 3327
} cudaLaunchMemSyncDomain; 
#endif
#line 3343 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
typedef 
#line 3340
struct cudaLaunchMemSyncDomainMap_st { 
#line 3341
unsigned char default_; 
#line 3342
unsigned char remote; 
#line 3343
} cudaLaunchMemSyncDomainMap; 
#endif
#line 3424 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
typedef 
#line 3348
enum cudaLaunchAttributeID { 
#line 3349
cudaLaunchAttributeIgnore, 
#line 3350
cudaLaunchAttributeAccessPolicyWindow, 
#line 3352
cudaLaunchAttributeCooperative, 
#line 3354
cudaLaunchAttributeSynchronizationPolicy, 
#line 3355
cudaLaunchAttributeClusterDimension, 
#line 3357
cudaLaunchAttributeClusterSchedulingPolicyPreference, 
#line 3359
cudaLaunchAttributeProgrammaticStreamSerialization, 
#line 3370
cudaLaunchAttributeProgrammaticEvent, 
#line 3396
cudaLaunchAttributePriority, 
#line 3398
cudaLaunchAttributeMemSyncDomainMap, 
#line 3400
cudaLaunchAttributeMemSyncDomain, 
#line 3402
cudaLaunchAttributeLaunchCompletionEvent = 12
#line 3424
} cudaLaunchAttributeID; 
#endif
#line 3475 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
typedef 
#line 3429
union cudaLaunchAttributeValue { 
#line 3430
char pad[64]; 
#line 3431
cudaAccessPolicyWindow accessPolicyWindow; 
#line 3432
int cooperative; 
#line 3434
cudaSynchronizationPolicy syncPolicy; 
#line 3448
struct { 
#line 3449
unsigned x; 
#line 3450
unsigned y; 
#line 3451
unsigned z; 
#line 3452
} clusterDim; 
#line 3453
cudaClusterSchedulingPolicy clusterSchedulingPolicyPreference; 
#line 3456
int programmaticStreamSerializationAllowed; 
#line 3458
struct { 
#line 3459
cudaEvent_t event; 
#line 3460
int flags; 
#line 3462
int triggerAtBlockStart; 
#line 3463
} programmaticEvent; 
#line 3464
int priority; 
#line 3465
cudaLaunchMemSyncDomainMap memSyncDomainMap; 
#line 3468
cudaLaunchMemSyncDomain memSyncDomain; 
#line 3470
struct { 
#line 3471
cudaEvent_t event; 
#line 3472
int flags; 
#line 3474
} launchCompletionEvent; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
#line 3475
} cudaLaunchAttributeValue; 
#endif
#line 3484 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
typedef 
#line 3480
struct cudaLaunchAttribute_st { 
#line 3481
cudaLaunchAttributeID id; 
#line 3482
char pad[(8) - sizeof(cudaLaunchAttributeID)]; 
#line 3483
cudaLaunchAttributeValue val; 
#line 3484
} cudaLaunchAttribute; 
#endif
#line 3496 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
typedef 
#line 3489
struct cudaLaunchConfig_st { 
#line 3490
dim3 gridDim; 
#line 3491
dim3 blockDim; 
#line 3492
size_t dynamicSmemBytes; 
#line 3493
cudaStream_t stream; 
#line 3494
cudaLaunchAttribute *attrs; 
#line 3495
unsigned numAttrs; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
#line 3496
} cudaLaunchConfig_t; 
#endif
#line 3518 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_types.h"
#if 0
#line 3518
enum cudaDeviceNumaConfig { 
#line 3519
cudaDeviceNumaConfigNone, 
#line 3520
cudaDeviceNumaConfigNumaNode
#line 3521
}; 
#endif
#line 84 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\surface_types.h"
#if 0
#line 84
enum cudaSurfaceBoundaryMode { 
#line 86
cudaBoundaryModeZero, 
#line 87
cudaBoundaryModeClamp, 
#line 88
cudaBoundaryModeTrap
#line 89
}; 
#endif
#line 94 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\surface_types.h"
#if 0
#line 94
enum cudaSurfaceFormatMode { 
#line 96
cudaFormatModeForced, 
#line 97
cudaFormatModeAuto
#line 98
}; 
#endif
#line 103 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\surface_types.h"
#if 0
typedef unsigned __int64 
#line 103
cudaSurfaceObject_t; 
#endif
#line 84 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_types.h"
#if 0
#line 84
enum cudaTextureAddressMode { 
#line 86
cudaAddressModeWrap, 
#line 87
cudaAddressModeClamp, 
#line 88
cudaAddressModeMirror, 
#line 89
cudaAddressModeBorder
#line 90
}; 
#endif
#line 95 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_types.h"
#if 0
#line 95
enum cudaTextureFilterMode { 
#line 97
cudaFilterModePoint, 
#line 98
cudaFilterModeLinear
#line 99
}; 
#endif
#line 104 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_types.h"
#if 0
#line 104
enum cudaTextureReadMode { 
#line 106
cudaReadModeElementType, 
#line 107
cudaReadModeNormalizedFloat
#line 108
}; 
#endif
#line 113 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_types.h"
#if 0
#line 113
struct cudaTextureDesc { 
#line 118
cudaTextureAddressMode addressMode[3]; 
#line 122
cudaTextureFilterMode filterMode; 
#line 126
cudaTextureReadMode readMode; 
#line 130
int sRGB; 
#line 134
float borderColor[4]; 
#line 138
int normalizedCoords; 
#line 142
unsigned maxAnisotropy; 
#line 146
cudaTextureFilterMode mipmapFilterMode; 
#line 150
float mipmapLevelBias; 
#line 154
float minMipmapLevelClamp; 
#line 158
float maxMipmapLevelClamp; 
#line 162
int disableTrilinearOptimization; 
#line 166
int seamlessCubemap; 
#line 167
}; 
#endif
#line 172 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_types.h"
#if 0
typedef unsigned __int64 
#line 172
cudaTextureObject_t; 
#endif
#line 87 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\library_types.h"
typedef 
#line 55
enum cudaDataType_t { 
#line 57
CUDA_R_16F = 2, 
#line 58
CUDA_C_16F = 6, 
#line 59
CUDA_R_16BF = 14, 
#line 60
CUDA_C_16BF, 
#line 61
CUDA_R_32F = 0, 
#line 62
CUDA_C_32F = 4, 
#line 63
CUDA_R_64F = 1, 
#line 64
CUDA_C_64F = 5, 
#line 65
CUDA_R_4I = 16, 
#line 66
CUDA_C_4I, 
#line 67
CUDA_R_4U, 
#line 68
CUDA_C_4U, 
#line 69
CUDA_R_8I = 3, 
#line 70
CUDA_C_8I = 7, 
#line 71
CUDA_R_8U, 
#line 72
CUDA_C_8U, 
#line 73
CUDA_R_16I = 20, 
#line 74
CUDA_C_16I, 
#line 75
CUDA_R_16U, 
#line 76
CUDA_C_16U, 
#line 77
CUDA_R_32I = 10, 
#line 78
CUDA_C_32I, 
#line 79
CUDA_R_32U, 
#line 80
CUDA_C_32U, 
#line 81
CUDA_R_64I = 24, 
#line 82
CUDA_C_64I, 
#line 83
CUDA_R_64U, 
#line 84
CUDA_C_64U, 
#line 85
CUDA_R_8F_E4M3, 
#line 86
CUDA_R_8F_E5M2
#line 87
} cudaDataType; 
#line 95
typedef 
#line 90
enum libraryPropertyType_t { 
#line 92
MAJOR_VERSION, 
#line 93
MINOR_VERSION, 
#line 94
PATCH_LEVEL
#line 95
} libraryPropertyType; 
#line 13 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_malloc.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727 )
#line 17
__pragma( pack ( push, 8 )) extern "C" {
#line 58 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_malloc.h"
__declspec(allocator) __declspec(restrict) void *__cdecl 
#line 59
_calloc_base(size_t _Count, size_t _Size); 
#line 65
__declspec(allocator) __declspec(restrict) void *__cdecl 
#line 66
calloc(size_t _Count, size_t _Size); 
#line 72
int __cdecl _callnewh(size_t _Size); 
#line 77
__declspec(allocator) void *__cdecl 
#line 78
_expand(void * _Block, size_t _Size); 
#line 84
void __cdecl _free_base(void * _Block); 
#line 89
void __cdecl free(void * _Block); 
#line 94
__declspec(allocator) __declspec(restrict) void *__cdecl 
#line 95
_malloc_base(size_t _Size); 
#line 100
__declspec(allocator) __declspec(restrict) void *__cdecl 
#line 101
malloc(size_t _Size); 
#line 107
size_t __cdecl _msize_base(void * _Block) noexcept; 
#line 113
size_t __cdecl _msize(void * _Block); 
#line 118
__declspec(allocator) __declspec(restrict) void *__cdecl 
#line 119
_realloc_base(void * _Block, size_t _Size); 
#line 125
__declspec(allocator) __declspec(restrict) void *__cdecl 
#line 126
realloc(void * _Block, size_t _Size); 
#line 132
__declspec(allocator) __declspec(restrict) void *__cdecl 
#line 133
_recalloc_base(void * _Block, size_t _Count, size_t _Size); 
#line 140
__declspec(allocator) __declspec(restrict) void *__cdecl 
#line 141
_recalloc(void * _Block, size_t _Count, size_t _Size); 
#line 148
void __cdecl _aligned_free(void * _Block); 
#line 153
__declspec(allocator) __declspec(restrict) void *__cdecl 
#line 154
_aligned_malloc(size_t _Size, size_t _Alignment); 
#line 160
__declspec(allocator) __declspec(restrict) void *__cdecl 
#line 161
_aligned_offset_malloc(size_t _Size, size_t _Alignment, size_t _Offset); 
#line 169
size_t __cdecl _aligned_msize(void * _Block, size_t _Alignment, size_t _Offset); 
#line 176
__declspec(allocator) __declspec(restrict) void *__cdecl 
#line 177
_aligned_offset_realloc(void * _Block, size_t _Size, size_t _Alignment, size_t _Offset); 
#line 185
__declspec(allocator) __declspec(restrict) void *__cdecl 
#line 186
_aligned_offset_recalloc(void * _Block, size_t _Count, size_t _Size, size_t _Alignment, size_t _Offset); 
#line 195
__declspec(allocator) __declspec(restrict) void *__cdecl 
#line 196
_aligned_realloc(void * _Block, size_t _Size, size_t _Alignment); 
#line 203
__declspec(allocator) __declspec(restrict) void *__cdecl 
#line 204
_aligned_recalloc(void * _Block, size_t _Count, size_t _Size, size_t _Alignment); 
#line 232 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_malloc.h"
}__pragma( pack ( pop )) 
#line 234
#pragma warning(pop)
#line 16 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_search.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727 )
#line 20
__pragma( pack ( push, 8 )) extern "C" {
#line 23
typedef int (__cdecl *_CoreCrtSecureSearchSortCompareFunction)(void *, const void *, const void *); 
#line 24
typedef int (__cdecl *_CoreCrtNonSecureSearchSortCompareFunction)(const void *, const void *); 
#line 30
void *__cdecl bsearch_s(const void * _Key, const void * _Base, rsize_t _NumOfElements, rsize_t _SizeOfElements, _CoreCrtSecureSearchSortCompareFunction _CompareFunction, void * _Context); 
#line 39
void __cdecl qsort_s(void * _Base, rsize_t _NumOfElements, rsize_t _SizeOfElements, _CoreCrtSecureSearchSortCompareFunction _CompareFunction, void * _Context); 
#line 52 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_search.h"
void *__cdecl bsearch(const void * _Key, const void * _Base, size_t _NumOfElements, size_t _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 60
void __cdecl qsort(void * _Base, size_t _NumOfElements, size_t _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 68
void *__cdecl _lfind_s(const void * _Key, const void * _Base, unsigned * _NumOfElements, size_t _SizeOfElements, _CoreCrtSecureSearchSortCompareFunction _CompareFunction, void * _Context); 
#line 78
void *__cdecl _lfind(const void * _Key, const void * _Base, unsigned * _NumOfElements, unsigned _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 87
void *__cdecl _lsearch_s(const void * _Key, void * _Base, unsigned * _NumOfElements, size_t _SizeOfElements, _CoreCrtSecureSearchSortCompareFunction _CompareFunction, void * _Context); 
#line 97
void *__cdecl _lsearch(const void * _Key, void * _Base, unsigned * _NumOfElements, unsigned _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 195 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_search.h"
void *__cdecl lfind(const void * _Key, const void * _Base, unsigned * _NumOfElements, unsigned _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 204
void *__cdecl lsearch(const void * _Key, void * _Base, unsigned * _NumOfElements, unsigned _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 216 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_search.h"
}__pragma( pack ( pop )) 
#line 218
#pragma warning(pop)
#line 13 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wstdlib.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727 )
#line 17
__pragma( pack ( push, 8 )) extern "C" {
#line 54
errno_t __cdecl _itow_s(int _Value, __wchar_t * _Buffer, size_t _BufferCount, int _Radix); 
#line 61
extern "C++" {template < size_t _Size > inline errno_t __cdecl _itow_s ( int _Value, wchar_t ( & _Buffer ) [ _Size ], int _Radix ) throw ( ) { return _itow_s ( _Value, _Buffer, _Size, _Radix ); }}
#line 68 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wstdlib.h"
__wchar_t *__cdecl _itow(int _Value, __wchar_t * _Buffer, int _Radix); 
#line 77 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wstdlib.h"
errno_t __cdecl _ltow_s(long _Value, __wchar_t * _Buffer, size_t _BufferCount, int _Radix); 
#line 84
extern "C++" {template < size_t _Size > inline errno_t __cdecl _ltow_s ( long _Value, wchar_t ( & _Buffer ) [ _Size ], int _Radix ) throw ( ) { return _ltow_s ( _Value, _Buffer, _Size, _Radix ); }}
#line 91 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wstdlib.h"
__wchar_t *__cdecl _ltow(long _Value, __wchar_t * _Buffer, int _Radix); 
#line 99 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wstdlib.h"
errno_t __cdecl _ultow_s(unsigned long _Value, __wchar_t * _Buffer, size_t _BufferCount, int _Radix); 
#line 106
extern "C++" {template < size_t _Size > inline errno_t __cdecl _ultow_s ( unsigned long _Value, wchar_t ( & _Buffer ) [ _Size ], int _Radix ) throw ( ) { return _ultow_s ( _Value, _Buffer, _Size, _Radix ); }}
#line 113 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wstdlib.h"
__wchar_t *__cdecl _ultow(unsigned long _Value, __wchar_t * _Buffer, int _Radix); 
#line 121 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wstdlib.h"
double __cdecl wcstod(const __wchar_t * _String, __wchar_t ** _EndPtr); 
#line 127
double __cdecl _wcstod_l(const __wchar_t * _String, __wchar_t ** _EndPtr, _locale_t _Locale); 
#line 134
long __cdecl wcstol(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix); 
#line 141
long __cdecl _wcstol_l(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 149
__int64 __cdecl wcstoll(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix); 
#line 156
__int64 __cdecl _wcstoll_l(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 164
unsigned long __cdecl wcstoul(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix); 
#line 171
unsigned long __cdecl _wcstoul_l(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 179
unsigned __int64 __cdecl wcstoull(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix); 
#line 186
unsigned __int64 __cdecl _wcstoull_l(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 194
long double __cdecl wcstold(const __wchar_t * _String, __wchar_t ** _EndPtr); 
#line 200
long double __cdecl _wcstold_l(const __wchar_t * _String, __wchar_t ** _EndPtr, _locale_t _Locale); 
#line 207
float __cdecl wcstof(const __wchar_t * _String, __wchar_t ** _EndPtr); 
#line 213
float __cdecl _wcstof_l(const __wchar_t * _String, __wchar_t ** _EndPtr, _locale_t _Locale); 
#line 220
double __cdecl _wtof(const __wchar_t * _String); 
#line 225
double __cdecl _wtof_l(const __wchar_t * _String, _locale_t _Locale); 
#line 231
int __cdecl _wtoi(const __wchar_t * _String); 
#line 236
int __cdecl _wtoi_l(const __wchar_t * _String, _locale_t _Locale); 
#line 242
long __cdecl _wtol(const __wchar_t * _String); 
#line 247
long __cdecl _wtol_l(const __wchar_t * _String, _locale_t _Locale); 
#line 253
__int64 __cdecl _wtoll(const __wchar_t * _String); 
#line 258
__int64 __cdecl _wtoll_l(const __wchar_t * _String, _locale_t _Locale); 
#line 264
errno_t __cdecl _i64tow_s(__int64 _Value, __wchar_t * _Buffer, size_t _BufferCount, int _Radix); 
#line 272
__wchar_t *__cdecl _i64tow(__int64 _Value, __wchar_t * _Buffer, int _Radix); 
#line 279
errno_t __cdecl _ui64tow_s(unsigned __int64 _Value, __wchar_t * _Buffer, size_t _BufferCount, int _Radix); 
#line 287
__wchar_t *__cdecl _ui64tow(unsigned __int64 _Value, __wchar_t * _Buffer, int _Radix); 
#line 294
__int64 __cdecl _wtoi64(const __wchar_t * _String); 
#line 299
__int64 __cdecl _wtoi64_l(const __wchar_t * _String, _locale_t _Locale); 
#line 305
__int64 __cdecl _wcstoi64(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix); 
#line 312
__int64 __cdecl _wcstoi64_l(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 320
unsigned __int64 __cdecl _wcstoui64(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix); 
#line 327
unsigned __int64 __cdecl _wcstoui64_l(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 339
__declspec(allocator) __wchar_t *__cdecl _wfullpath(__wchar_t * _Buffer, const __wchar_t * _Path, size_t _BufferCount); 
#line 348
errno_t __cdecl _wmakepath_s(__wchar_t * _Buffer, size_t _BufferCount, const __wchar_t * _Drive, const __wchar_t * _Dir, const __wchar_t * _Filename, const __wchar_t * _Ext); 
#line 357
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wmakepath_s ( wchar_t ( & _Buffer ) [ _Size ], wchar_t const * _Drive, wchar_t const * _Dir, wchar_t const * _Filename, wchar_t const * _Ext ) throw ( ) { return _wmakepath_s ( _Buffer, _Size, _Drive, _Dir, _Filename, _Ext ); }}
#line 366 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wstdlib.h"
void __cdecl _wmakepath(__wchar_t * _Buffer, const __wchar_t * _Drive, const __wchar_t * _Dir, const __wchar_t * _Filename, const __wchar_t * _Ext); 
#line 375 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wstdlib.h"
void __cdecl _wperror(const __wchar_t * _ErrorMessage); 
#line 380
void __cdecl _wsplitpath(const __wchar_t * _FullPath, __wchar_t * _Drive, __wchar_t * _Dir, __wchar_t * _Filename, __wchar_t * _Ext); 
#line 388
errno_t __cdecl _wsplitpath_s(const __wchar_t * _FullPath, __wchar_t * _Drive, size_t _DriveCount, __wchar_t * _Dir, size_t _DirCount, __wchar_t * _Filename, size_t _FilenameCount, __wchar_t * _Ext, size_t _ExtCount); 
#line 400
extern "C++" {template < size_t _DriveSize, size_t _DirSize, size_t _NameSize, size_t _ExtSize > inline errno_t __cdecl _wsplitpath_s ( wchar_t const * _Path, wchar_t ( & _Drive ) [ _DriveSize ], wchar_t ( & _Dir ) [ _DirSize ], wchar_t ( & _Name ) [ _NameSize ], wchar_t ( & _Ext ) [ _ExtSize ] ) throw ( ) { return _wsplitpath_s ( _Path, _Drive, _DriveSize, _Dir, _DirSize, _Name, _NameSize, _Ext, _ExtSize ); }}
#line 409 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wstdlib.h"
errno_t __cdecl _wdupenv_s(__wchar_t ** _Buffer, size_t * _BufferCount, const __wchar_t * _VarName); 
#line 418
__wchar_t *__cdecl _wgetenv(const __wchar_t * _VarName); 
#line 424
errno_t __cdecl _wgetenv_s(size_t * _RequiredCount, __wchar_t * _Buffer, size_t _BufferCount, const __wchar_t * _VarName); 
#line 431
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wgetenv_s ( size_t * _RequiredCount, wchar_t ( & _Buffer ) [ _Size ], wchar_t const * _VarName ) throw ( ) { return _wgetenv_s ( _RequiredCount, _Buffer, _Size, _VarName ); }}
#line 440 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wstdlib.h"
int __cdecl _wputenv(const __wchar_t * _EnvString); 
#line 445
errno_t __cdecl _wputenv_s(const __wchar_t * _Name, const __wchar_t * _Value); 
#line 450
errno_t __cdecl _wsearchenv_s(const __wchar_t * _Filename, const __wchar_t * _VarName, __wchar_t * _Buffer, size_t _BufferCount); 
#line 457
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wsearchenv_s ( wchar_t const * _Filename, wchar_t const * _VarName, wchar_t ( & _ResultPath ) [ _Size ] ) throw ( ) { return _wsearchenv_s ( _Filename, _VarName, _ResultPath, _Size ); }}
#line 464 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wstdlib.h"
void __cdecl _wsearchenv(const __wchar_t * _Filename, const __wchar_t * _VarName, __wchar_t * _ResultPath); 
#line 471 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wstdlib.h"
int __cdecl _wsystem(const __wchar_t * _Command); 
#line 479 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wstdlib.h"
}__pragma( pack ( pop )) 
#line 481
#pragma warning(pop)
#line 18 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\stdlib.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727 )
#line 22
__pragma( pack ( push, 8 )) extern "C" {
#line 38 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\stdlib.h"
void __cdecl _swab(char * _Buf1, char * _Buf2, int _SizeInBytes); 
#line 56
__declspec(noreturn) void __cdecl exit(int _Code); 
#line 57
__declspec(noreturn) void __cdecl _exit(int _Code); 
#line 58
__declspec(noreturn) void __cdecl _Exit(int _Code); 
#line 59
__declspec(noreturn) void __cdecl quick_exit(int _Code); 
#line 60
__declspec(noreturn) void __cdecl abort(); 
#line 67 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\stdlib.h"
unsigned __cdecl _set_abort_behavior(unsigned _Flags, unsigned _Mask); 
#line 77
typedef int (__cdecl *_onexit_t)(void); 
#line 144 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\stdlib.h"
int __cdecl atexit(void (__cdecl *)(void)); 
#line 145
_onexit_t __cdecl _onexit(_onexit_t _Func); 
#line 148 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\stdlib.h"
int __cdecl at_quick_exit(void (__cdecl *)(void)); 
#line 159
typedef void (__cdecl *_purecall_handler)(void); 
#line 162
typedef void (__cdecl *_invalid_parameter_handler)(const __wchar_t *, const __wchar_t *, const __wchar_t *, unsigned, uintptr_t); 
#line 171
_purecall_handler __cdecl _set_purecall_handler(_purecall_handler _Handler); 
#line 175
_purecall_handler __cdecl _get_purecall_handler(); 
#line 178
_invalid_parameter_handler __cdecl _set_invalid_parameter_handler(_invalid_parameter_handler _Handler); 
#line 182
_invalid_parameter_handler __cdecl _get_invalid_parameter_handler(); 
#line 184
_invalid_parameter_handler __cdecl _set_thread_local_invalid_parameter_handler(_invalid_parameter_handler _Handler); 
#line 188
_invalid_parameter_handler __cdecl _get_thread_local_invalid_parameter_handler(); 
#line 212 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\stdlib.h"
int __cdecl _set_error_mode(int _Mode); 
#line 217
int *__cdecl _errno(); 
#line 220
errno_t __cdecl _set_errno(int _Value); 
#line 221
errno_t __cdecl _get_errno(int * _Value); 
#line 223
unsigned long *__cdecl __doserrno(); 
#line 226
errno_t __cdecl _set_doserrno(unsigned long _Value); 
#line 227
errno_t __cdecl _get_doserrno(unsigned long * _Value); 
#line 230
char **__cdecl __sys_errlist(); 
#line 233
int *__cdecl __sys_nerr(); 
#line 236
void __cdecl perror(const char * _ErrMsg); 
#line 242 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\stdlib.h"
char **__cdecl __p__pgmptr(); 
#line 243
__wchar_t **__cdecl __p__wpgmptr(); 
#line 244
int *__cdecl __p__fmode(); 
#line 259 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\stdlib.h"
errno_t __cdecl _get_pgmptr(char ** _Value); 
#line 262
errno_t __cdecl _get_wpgmptr(__wchar_t ** _Value); 
#line 264
errno_t __cdecl _set_fmode(int _Mode); 
#line 266
errno_t __cdecl _get_fmode(int * _PMode); 
#line 279
typedef 
#line 275
struct _div_t { 
#line 277
int quot; 
#line 278
int rem; 
#line 279
} div_t; 
#line 285
typedef 
#line 281
struct _ldiv_t { 
#line 283
long quot; 
#line 284
long rem; 
#line 285
} ldiv_t; 
#line 291
typedef 
#line 287
struct _lldiv_t { 
#line 289
__int64 quot; 
#line 290
__int64 rem; 
#line 291
} lldiv_t; 
#line 293
int __cdecl abs(int _Number); 
#line 294
long __cdecl labs(long _Number); 
#line 295
__int64 __cdecl llabs(__int64 _Number); 
#line 296
__int64 __cdecl _abs64(__int64 _Number); 
#line 298
unsigned short __cdecl _byteswap_ushort(unsigned short _Number); 
#line 299
unsigned long __cdecl _byteswap_ulong(unsigned long _Number); 
#line 300
unsigned __int64 __cdecl _byteswap_uint64(unsigned __int64 _Number); 
#line 302
div_t __cdecl div(int _Numerator, int _Denominator); 
#line 303
ldiv_t __cdecl ldiv(long _Numerator, long _Denominator); 
#line 304
lldiv_t __cdecl lldiv(__int64 _Numerator, __int64 _Denominator); 
#line 308
#pragma warning(push)
#pragma warning(disable: 6540)
#line 311
unsigned __cdecl _rotl(unsigned _Value, int _Shift); 
#line 317
unsigned long __cdecl _lrotl(unsigned long _Value, int _Shift); 
#line 322
unsigned __int64 __cdecl _rotl64(unsigned __int64 _Value, int _Shift); 
#line 327
unsigned __cdecl _rotr(unsigned _Value, int _Shift); 
#line 333
unsigned long __cdecl _lrotr(unsigned long _Value, int _Shift); 
#line 338
unsigned __int64 __cdecl _rotr64(unsigned __int64 _Value, int _Shift); 
#line 343
#pragma warning(pop)
#line 350
void __cdecl srand(unsigned _Seed); 
#line 352
int __cdecl rand(); 
#line 361 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\stdlib.h"
extern "C++" {
#line 363
inline long abs(const long _X) throw() 
#line 364
{ 
#line 365
return labs(_X); 
#line 366
} 
#line 368
inline __int64 abs(const __int64 _X) throw() 
#line 369
{ 
#line 370
return llabs(_X); 
#line 371
} 
#line 373
inline ldiv_t div(const long _A1, const long _A2) throw() 
#line 374
{ 
#line 375
return ldiv(_A1, _A2); 
#line 376
} 
#line 378
inline lldiv_t div(const __int64 _A1, const __int64 _A2) throw() 
#line 379
{ 
#line 380
return lldiv(_A1, _A2); 
#line 381
} 
#line 382
}
#line 394 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\stdlib.h"
#pragma pack ( push, 4 )
#line 398
typedef 
#line 396
struct { 
#line 397
unsigned char ld[10]; 
#line 398
} _LDOUBLE; 
#pragma pack ( pop )
#line 418 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\stdlib.h"
typedef 
#line 416
struct { 
#line 417
double x; 
#line 418
} _CRT_DOUBLE; 
#line 423
typedef 
#line 421
struct { 
#line 422
float f; 
#line 423
} _CRT_FLOAT; 
#line 432
typedef 
#line 430
struct { 
#line 431
long double x; 
#line 432
} _LONGDOUBLE; 
#line 436
#pragma pack ( push, 4 )
#line 440
typedef 
#line 438
struct { 
#line 439
unsigned char ld12[12]; 
#line 440
} _LDBL12; 
#pragma pack ( pop )
#line 450
double __cdecl atof(const char * _String); 
#line 451
int __cdecl atoi(const char * _String); 
#line 452
long __cdecl atol(const char * _String); 
#line 453
__int64 __cdecl atoll(const char * _String); 
#line 454
__int64 __cdecl _atoi64(const char * _String); 
#line 456
double __cdecl _atof_l(const char * _String, _locale_t _Locale); 
#line 457
int __cdecl _atoi_l(const char * _String, _locale_t _Locale); 
#line 458
long __cdecl _atol_l(const char * _String, _locale_t _Locale); 
#line 459
__int64 __cdecl _atoll_l(const char * _String, _locale_t _Locale); 
#line 460
__int64 __cdecl _atoi64_l(const char * _String, _locale_t _Locale); 
#line 462
int __cdecl _atoflt(_CRT_FLOAT * _Result, const char * _String); 
#line 463
int __cdecl _atodbl(_CRT_DOUBLE * _Result, char * _String); 
#line 464
int __cdecl _atoldbl(_LDOUBLE * _Result, char * _String); 
#line 467
int __cdecl _atoflt_l(_CRT_FLOAT * _Result, const char * _String, _locale_t _Locale); 
#line 474
int __cdecl _atodbl_l(_CRT_DOUBLE * _Result, char * _String, _locale_t _Locale); 
#line 482
int __cdecl _atoldbl_l(_LDOUBLE * _Result, char * _String, _locale_t _Locale); 
#line 489
float __cdecl strtof(const char * _String, char ** _EndPtr); 
#line 495
float __cdecl _strtof_l(const char * _String, char ** _EndPtr, _locale_t _Locale); 
#line 502
double __cdecl strtod(const char * _String, char ** _EndPtr); 
#line 508
double __cdecl _strtod_l(const char * _String, char ** _EndPtr, _locale_t _Locale); 
#line 515
long double __cdecl strtold(const char * _String, char ** _EndPtr); 
#line 521
long double __cdecl _strtold_l(const char * _String, char ** _EndPtr, _locale_t _Locale); 
#line 528
long __cdecl strtol(const char * _String, char ** _EndPtr, int _Radix); 
#line 535
long __cdecl _strtol_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 543
__int64 __cdecl strtoll(const char * _String, char ** _EndPtr, int _Radix); 
#line 550
__int64 __cdecl _strtoll_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 558
unsigned long __cdecl strtoul(const char * _String, char ** _EndPtr, int _Radix); 
#line 565
unsigned long __cdecl _strtoul_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 573
unsigned __int64 __cdecl strtoull(const char * _String, char ** _EndPtr, int _Radix); 
#line 580
unsigned __int64 __cdecl _strtoull_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 588
__int64 __cdecl _strtoi64(const char * _String, char ** _EndPtr, int _Radix); 
#line 595
__int64 __cdecl _strtoi64_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 603
unsigned __int64 __cdecl _strtoui64(const char * _String, char ** _EndPtr, int _Radix); 
#line 610
unsigned __int64 __cdecl _strtoui64_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 626
errno_t __cdecl _itoa_s(int _Value, char * _Buffer, size_t _BufferCount, int _Radix); 
#line 633
extern "C++" {template < size_t _Size > inline errno_t __cdecl _itoa_s ( int _Value, char ( & _Buffer ) [ _Size ], int _Radix ) throw ( ) { return _itoa_s ( _Value, _Buffer, _Size, _Radix ); }}
#line 641 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\stdlib.h"
char *__cdecl _itoa(int _Value, char * _Buffer, int _Radix); 
#line 650 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\stdlib.h"
errno_t __cdecl _ltoa_s(long _Value, char * _Buffer, size_t _BufferCount, int _Radix); 
#line 657
extern "C++" {template < size_t _Size > inline errno_t __cdecl _ltoa_s ( long _Value, char ( & _Buffer ) [ _Size ], int _Radix ) throw ( ) { return _ltoa_s ( _Value, _Buffer, _Size, _Radix ); }}
#line 664 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\stdlib.h"
char *__cdecl _ltoa(long _Value, char * _Buffer, int _Radix); 
#line 673 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\stdlib.h"
errno_t __cdecl _ultoa_s(unsigned long _Value, char * _Buffer, size_t _BufferCount, int _Radix); 
#line 680
extern "C++" {template < size_t _Size > inline errno_t __cdecl _ultoa_s ( unsigned long _Value, char ( & _Buffer ) [ _Size ], int _Radix ) throw ( ) { return _ultoa_s ( _Value, _Buffer, _Size, _Radix ); }}
#line 687 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\stdlib.h"
char *__cdecl _ultoa(unsigned long _Value, char * _Buffer, int _Radix); 
#line 696 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\stdlib.h"
errno_t __cdecl _i64toa_s(__int64 _Value, char * _Buffer, size_t _BufferCount, int _Radix); 
#line 705
char *__cdecl _i64toa(__int64 _Value, char * _Buffer, int _Radix); 
#line 713
errno_t __cdecl _ui64toa_s(unsigned __int64 _Value, char * _Buffer, size_t _BufferCount, int _Radix); 
#line 721
char *__cdecl _ui64toa(unsigned __int64 _Value, char * _Buffer, int _Radix); 
#line 741
errno_t __cdecl _ecvt_s(char * _Buffer, size_t _BufferCount, double _Value, int _DigitCount, int * _PtDec, int * _PtSign); 
#line 750
extern "C++" {template < size_t _Size > inline errno_t __cdecl _ecvt_s ( char ( & _Buffer ) [ _Size ], double _Value, int _DigitCount, int * _PtDec, int * _PtSign ) throw ( ) { return _ecvt_s ( _Buffer, _Size, _Value, _DigitCount, _PtDec, _PtSign ); }}
#line 760 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\stdlib.h"
char *__cdecl _ecvt(double _Value, int _DigitCount, int * _PtDec, int * _PtSign); 
#line 769
errno_t __cdecl _fcvt_s(char * _Buffer, size_t _BufferCount, double _Value, int _FractionalDigitCount, int * _PtDec, int * _PtSign); 
#line 778
extern "C++" {template < size_t _Size > inline errno_t __cdecl _fcvt_s ( char ( & _Buffer ) [ _Size ], double _Value, int _FractionalDigitCount, int * _PtDec, int * _PtSign ) throw ( ) { return _fcvt_s ( _Buffer, _Size, _Value, _FractionalDigitCount, _PtDec, _PtSign ); }}
#line 790 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\stdlib.h"
char *__cdecl _fcvt(double _Value, int _FractionalDigitCount, int * _PtDec, int * _PtSign); 
#line 798
errno_t __cdecl _gcvt_s(char * _Buffer, size_t _BufferCount, double _Value, int _DigitCount); 
#line 805
extern "C++" {template < size_t _Size > inline errno_t __cdecl _gcvt_s ( char ( & _Buffer ) [ _Size ], double _Value, int _DigitCount ) throw ( ) { return _gcvt_s ( _Buffer, _Size, _Value, _DigitCount ); }}
#line 814 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\stdlib.h"
char *__cdecl _gcvt(double _Value, int _DigitCount, char * _Buffer); 
#line 852
int __cdecl mblen(const char * _Ch, size_t _MaxCount); 
#line 858
int __cdecl _mblen_l(const char * _Ch, size_t _MaxCount, _locale_t _Locale); 
#line 866
size_t __cdecl _mbstrlen(const char * _String); 
#line 872
size_t __cdecl _mbstrlen_l(const char * _String, _locale_t _Locale); 
#line 879
size_t __cdecl _mbstrnlen(const char * _String, size_t _MaxCount); 
#line 886
size_t __cdecl _mbstrnlen_l(const char * _String, size_t _MaxCount, _locale_t _Locale); 
#line 893
int __cdecl mbtowc(__wchar_t * _DstCh, const char * _SrcCh, size_t _SrcSizeInBytes); 
#line 900
int __cdecl _mbtowc_l(__wchar_t * _DstCh, const char * _SrcCh, size_t _SrcSizeInBytes, _locale_t _Locale); 
#line 908
errno_t __cdecl mbstowcs_s(size_t * _PtNumOfCharConverted, __wchar_t * _DstBuf, size_t _SizeInWords, const char * _SrcBuf, size_t _MaxCount); 
#line 916
extern "C++" {template < size_t _Size > inline errno_t __cdecl mbstowcs_s ( size_t * _PtNumOfCharConverted, wchar_t ( & _Dest ) [ _Size ], char const * _Source, size_t _MaxCount ) throw ( ) { return mbstowcs_s ( _PtNumOfCharConverted, _Dest, _Size, _Source, _MaxCount ); }}
#line 924 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\stdlib.h"
size_t __cdecl mbstowcs(__wchar_t * _Dest, const char * _Source, size_t _MaxCount); 
#line 932 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\stdlib.h"
errno_t __cdecl _mbstowcs_s_l(size_t * _PtNumOfCharConverted, __wchar_t * _DstBuf, size_t _SizeInWords, const char * _SrcBuf, size_t _MaxCount, _locale_t _Locale); 
#line 941
extern "C++" {template < size_t _Size > inline errno_t __cdecl _mbstowcs_s_l ( size_t * _PtNumOfCharConverted, wchar_t ( & _Dest ) [ _Size ], char const * _Source, size_t _MaxCount, _locale_t _Locale ) throw ( ) { return _mbstowcs_s_l ( _PtNumOfCharConverted, _Dest, _Size, _Source, _MaxCount, _Locale ); }}
#line 950 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\stdlib.h"
size_t __cdecl _mbstowcs_l(__wchar_t * _Dest, const char * _Source, size_t _MaxCount, _locale_t _Locale); 
#line 963 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\stdlib.h"
int __cdecl wctomb(char * _MbCh, __wchar_t _WCh); 
#line 969
int __cdecl _wctomb_l(char * _MbCh, __wchar_t _WCh, _locale_t _Locale); 
#line 978
errno_t __cdecl wctomb_s(int * _SizeConverted, char * _MbCh, rsize_t _SizeInBytes, __wchar_t _WCh); 
#line 988 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\stdlib.h"
errno_t __cdecl _wctomb_s_l(int * _SizeConverted, char * _MbCh, size_t _SizeInBytes, __wchar_t _WCh, _locale_t _Locale); 
#line 996
errno_t __cdecl wcstombs_s(size_t * _PtNumOfCharConverted, char * _Dst, size_t _DstSizeInBytes, const __wchar_t * _Src, size_t _MaxCountInBytes); 
#line 1004
extern "C++" {template < size_t _Size > inline errno_t __cdecl wcstombs_s ( size_t * _PtNumOfCharConverted, char ( & _Dest ) [ _Size ], wchar_t const * _Source, size_t _MaxCount ) throw ( ) { return wcstombs_s ( _PtNumOfCharConverted, _Dest, _Size, _Source, _MaxCount ); }}
#line 1012 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\stdlib.h"
size_t __cdecl wcstombs(char * _Dest, const __wchar_t * _Source, size_t _MaxCount); 
#line 1020 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\stdlib.h"
errno_t __cdecl _wcstombs_s_l(size_t * _PtNumOfCharConverted, char * _Dst, size_t _DstSizeInBytes, const __wchar_t * _Src, size_t _MaxCountInBytes, _locale_t _Locale); 
#line 1029
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wcstombs_s_l ( size_t * _PtNumOfCharConverted, char ( & _Dest ) [ _Size ], wchar_t const * _Source, size_t _MaxCount, _locale_t _Locale ) throw ( ) { return _wcstombs_s_l ( _PtNumOfCharConverted, _Dest, _Size, _Source, _MaxCount, _Locale ); }}
#line 1038 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\stdlib.h"
size_t __cdecl _wcstombs_l(char * _Dest, const __wchar_t * _Source, size_t _MaxCount, _locale_t _Locale); 
#line 1068 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\stdlib.h"
__declspec(allocator) char *__cdecl _fullpath(char * _Buffer, const char * _Path, size_t _BufferCount); 
#line 1077
errno_t __cdecl _makepath_s(char * _Buffer, size_t _BufferCount, const char * _Drive, const char * _Dir, const char * _Filename, const char * _Ext); 
#line 1086
extern "C++" {template < size_t _Size > inline errno_t __cdecl _makepath_s ( char ( & _Buffer ) [ _Size ], char const * _Drive, char const * _Dir, char const * _Filename, char const * _Ext ) throw ( ) { return _makepath_s ( _Buffer, _Size, _Drive, _Dir, _Filename, _Ext ); }}
#line 1095 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\stdlib.h"
void __cdecl _makepath(char * _Buffer, const char * _Drive, const char * _Dir, const char * _Filename, const char * _Ext); 
#line 1105 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\stdlib.h"
void __cdecl _splitpath(const char * _FullPath, char * _Drive, char * _Dir, char * _Filename, char * _Ext); 
#line 1114
errno_t __cdecl _splitpath_s(const char * _FullPath, char * _Drive, size_t _DriveCount, char * _Dir, size_t _DirCount, char * _Filename, size_t _FilenameCount, char * _Ext, size_t _ExtCount); 
#line 1126
extern "C++" {template < size_t _DriveSize, size_t _DirSize, size_t _NameSize, size_t _ExtSize > inline errno_t __cdecl _splitpath_s ( char const * _Dest, char ( & _Drive ) [ _DriveSize ], char ( & _Dir ) [ _DirSize ], char ( & _Name ) [ _NameSize ], char ( & _Ext ) [ _ExtSize ] ) throw ( ) { return _splitpath_s ( _Dest, _Drive, _DriveSize, _Dir, _DirSize, _Name, _NameSize, _Ext, _ExtSize ); }}
#line 1132
errno_t __cdecl getenv_s(size_t * _RequiredCount, char * _Buffer, rsize_t _BufferCount, const char * _VarName); 
#line 1144 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\stdlib.h"
int *__cdecl __p___argc(); 
#line 1145
char ***__cdecl __p___argv(); 
#line 1146
__wchar_t ***__cdecl __p___wargv(); 
#line 1158 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\stdlib.h"
char ***__cdecl __p__environ(); 
#line 1159
__wchar_t ***__cdecl __p__wenviron(); 
#line 1184 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\stdlib.h"
char *__cdecl getenv(const char * _VarName); 
#line 1188
extern "C++" {template < size_t _Size > inline errno_t __cdecl getenv_s ( size_t * _RequiredCount, char ( & _Buffer ) [ _Size ], char const * _VarName ) throw ( ) { return getenv_s ( _RequiredCount, _Buffer, _Size, _VarName ); }}
#line 1201 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\stdlib.h"
errno_t __cdecl _dupenv_s(char ** _Buffer, size_t * _BufferCount, const char * _VarName); 
#line 1211 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\stdlib.h"
int __cdecl system(const char * _Command); 
#line 1217
#pragma warning(push)
#pragma warning(disable: 6540)
#line 1221
int __cdecl _putenv(const char * _EnvString); 
#line 1226
errno_t __cdecl _putenv_s(const char * _Name, const char * _Value); 
#line 1231
#pragma warning(pop)
#line 1233
errno_t __cdecl _searchenv_s(const char * _Filename, const char * _VarName, char * _Buffer, size_t _BufferCount); 
#line 1240
extern "C++" {template < size_t _Size > inline errno_t __cdecl _searchenv_s ( char const * _Filename, char const * _VarName, char ( & _Buffer ) [ _Size ] ) throw ( ) { return _searchenv_s ( _Filename, _VarName, _Buffer, _Size ); }}
#line 1247 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\stdlib.h"
void __cdecl _searchenv(const char * _Filename, const char * _VarName, char * _Buffer); 
#line 1255 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\stdlib.h"
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using SetErrorMode in" "stead. See online help for details.")) void __cdecl 
#line 1256
_seterrormode(int _Mode); 
#line 1260
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using Beep instead. S" "ee online help for details.")) void __cdecl 
#line 1261
_beep(unsigned _Frequency, unsigned _Duration); 
#line 1266
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using Sleep instead. " "See online help for details.")) void __cdecl 
#line 1267
_sleep(unsigned long _Duration); 
#line 1289 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\stdlib.h"
#pragma warning(push)
#pragma warning(disable: 4141)
#line 1293
char *__cdecl ecvt(double _Value, int _DigitCount, int * _PtDec, int * _PtSign); 
#line 1301
char *__cdecl fcvt(double _Value, int _FractionalDigitCount, int * _PtDec, int * _PtSign); 
#line 1309
char *__cdecl gcvt(double _Value, int _DigitCount, char * _DstBuf); 
#line 1316
char *__cdecl itoa(int _Value, char * _Buffer, int _Radix); 
#line 1323
char *__cdecl ltoa(long _Value, char * _Buffer, int _Radix); 
#line 1331
void __cdecl swab(char * _Buf1, char * _Buf2, int _SizeInBytes); 
#line 1338
char *__cdecl ultoa(unsigned long _Value, char * _Buffer, int _Radix); 
#line 1347
int __cdecl putenv(const char * _EnvString); 
#line 1351
#pragma warning(pop)
#line 1353
_onexit_t __cdecl onexit(_onexit_t _Func); 
#line 1359 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\stdlib.h"
}__pragma( pack ( pop )) 
#line 1361
#pragma warning(pop)
#line 180 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_device_runtime_api.h"
extern "C" {
#line 187
extern cudaError_t __stdcall __cudaDeviceSynchronizeDeprecationAvoidance(); 
#line 236
extern cudaError_t __stdcall __cudaCDP2DeviceGetAttribute(int * value, cudaDeviceAttr attr, int device); 
#line 237
extern cudaError_t __stdcall __cudaCDP2DeviceGetLimit(size_t * pValue, cudaLimit limit); 
#line 238
extern cudaError_t __stdcall __cudaCDP2DeviceGetCacheConfig(cudaFuncCache * pCacheConfig); 
#line 239
extern cudaError_t __stdcall __cudaCDP2DeviceGetSharedMemConfig(cudaSharedMemConfig * pConfig); 
#line 240
extern cudaError_t __stdcall __cudaCDP2GetLastError(); 
#line 241
extern cudaError_t __stdcall __cudaCDP2PeekAtLastError(); 
#line 242
extern const char *__stdcall __cudaCDP2GetErrorString(cudaError_t error); 
#line 243
extern const char *__stdcall __cudaCDP2GetErrorName(cudaError_t error); 
#line 244
extern cudaError_t __stdcall __cudaCDP2GetDeviceCount(int * count); 
#line 245
extern cudaError_t __stdcall __cudaCDP2GetDevice(int * device); 
#line 246
extern cudaError_t __stdcall __cudaCDP2StreamCreateWithFlags(cudaStream_t * pStream, unsigned flags); 
#line 247
extern cudaError_t __stdcall __cudaCDP2StreamDestroy(cudaStream_t stream); 
#line 248
extern cudaError_t __stdcall __cudaCDP2StreamWaitEvent(cudaStream_t stream, cudaEvent_t event, unsigned flags); 
#line 249
extern cudaError_t __stdcall __cudaCDP2StreamWaitEvent_ptsz(cudaStream_t stream, cudaEvent_t event, unsigned flags); 
#line 250
extern cudaError_t __stdcall __cudaCDP2EventCreateWithFlags(cudaEvent_t * event, unsigned flags); 
#line 251
extern cudaError_t __stdcall __cudaCDP2EventRecord(cudaEvent_t event, cudaStream_t stream); 
#line 252
extern cudaError_t __stdcall __cudaCDP2EventRecord_ptsz(cudaEvent_t event, cudaStream_t stream); 
#line 253
extern cudaError_t __stdcall __cudaCDP2EventRecordWithFlags(cudaEvent_t event, cudaStream_t stream, unsigned flags); 
#line 254
extern cudaError_t __stdcall __cudaCDP2EventRecordWithFlags_ptsz(cudaEvent_t event, cudaStream_t stream, unsigned flags); 
#line 255
extern cudaError_t __stdcall __cudaCDP2EventDestroy(cudaEvent_t event); 
#line 256
extern cudaError_t __stdcall __cudaCDP2FuncGetAttributes(cudaFuncAttributes * attr, const void * func); 
#line 257
extern cudaError_t __stdcall __cudaCDP2Free(void * devPtr); 
#line 258
extern cudaError_t __stdcall __cudaCDP2Malloc(void ** devPtr, size_t size); 
#line 259
extern cudaError_t __stdcall __cudaCDP2MemcpyAsync(void * dst, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream); 
#line 260
extern cudaError_t __stdcall __cudaCDP2MemcpyAsync_ptsz(void * dst, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream); 
#line 261
extern cudaError_t __stdcall __cudaCDP2Memcpy2DAsync(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream); 
#line 262
extern cudaError_t __stdcall __cudaCDP2Memcpy2DAsync_ptsz(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream); 
#line 263
extern cudaError_t __stdcall __cudaCDP2Memcpy3DAsync(const cudaMemcpy3DParms * p, cudaStream_t stream); 
#line 264
extern cudaError_t __stdcall __cudaCDP2Memcpy3DAsync_ptsz(const cudaMemcpy3DParms * p, cudaStream_t stream); 
#line 265
extern cudaError_t __stdcall __cudaCDP2MemsetAsync(void * devPtr, int value, size_t count, cudaStream_t stream); 
#line 266
extern cudaError_t __stdcall __cudaCDP2MemsetAsync_ptsz(void * devPtr, int value, size_t count, cudaStream_t stream); 
#line 267
extern cudaError_t __stdcall __cudaCDP2Memset2DAsync(void * devPtr, size_t pitch, int value, size_t width, size_t height, cudaStream_t stream); 
#line 268
extern cudaError_t __stdcall __cudaCDP2Memset2DAsync_ptsz(void * devPtr, size_t pitch, int value, size_t width, size_t height, cudaStream_t stream); 
#line 269
extern cudaError_t __stdcall __cudaCDP2Memset3DAsync(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent, cudaStream_t stream); 
#line 270
extern cudaError_t __stdcall __cudaCDP2Memset3DAsync_ptsz(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent, cudaStream_t stream); 
#line 271
extern cudaError_t __stdcall __cudaCDP2RuntimeGetVersion(int * runtimeVersion); 
#line 272
extern void *__stdcall __cudaCDP2GetParameterBuffer(size_t alignment, size_t size); 
#line 273
extern void *__stdcall __cudaCDP2GetParameterBufferV2(void * func, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize); 
#line 274
extern cudaError_t __stdcall __cudaCDP2LaunchDevice_ptsz(void * func, void * parameterBuffer, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize, cudaStream_t stream); 
#line 275
extern cudaError_t __stdcall __cudaCDP2LaunchDeviceV2_ptsz(void * parameterBuffer, cudaStream_t stream); 
#line 276
extern cudaError_t __stdcall __cudaCDP2LaunchDevice(void * func, void * parameterBuffer, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize, cudaStream_t stream); 
#line 277
extern cudaError_t __stdcall __cudaCDP2LaunchDeviceV2(void * parameterBuffer, cudaStream_t stream); 
#line 278
extern cudaError_t __stdcall __cudaCDP2OccupancyMaxActiveBlocksPerMultiprocessor(int * numBlocks, const void * func, int blockSize, size_t dynamicSmemSize); 
#line 279
extern cudaError_t __stdcall __cudaCDP2OccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int * numBlocks, const void * func, int blockSize, size_t dynamicSmemSize, unsigned flags); 
#line 282
extern cudaError_t __stdcall cudaGraphLaunch(cudaGraphExec_t graphExec, cudaStream_t stream); 
__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 301 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_device_runtime_api.h"
static inline cudaGraphExec_t __stdcall cudaGetCurrentGraphExec() 
__pragma(warning(pop))
{int volatile ___ = 1;::exit(___);}
#if 0
#line 302
{ 
#line 303
unsigned __int64 current_graph_exec; 
#line 304
__asm mov.u64 %0, %%current_graph_exec;
return (cudaGraphExec_t)current_graph_exec; 
#line 306
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 324 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_device_runtime_api.h"
static inline void __stdcall cudaTriggerProgrammaticLaunchCompletion() 
__pragma(warning(pop))
{int volatile ___ = 1;::exit(___);}
#if 0
#line 325
{ 
#line 326
__asm griddepcontrol.launch_dependents;
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 340 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_device_runtime_api.h"
static inline void __stdcall cudaGridDependencySynchronize() 
__pragma(warning(pop))
{int volatile ___ = 1;::exit(___);}
#if 0
#line 341
{ 
#line 342
__asm griddepcontrol.wait;
} 
#endif
#line 352 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_device_runtime_api.h"
extern void __stdcall cudaGraphSetConditional(cudaGraphConditionalHandle handle, unsigned value); 
#line 355
extern unsigned __int64 __stdcall cudaCGGetIntrinsicHandle(cudaCGScope scope); 
#line 356
extern cudaError_t __stdcall cudaCGSynchronize(unsigned __int64 handle, unsigned flags); 
#line 357
extern cudaError_t __stdcall cudaCGSynchronizeGrid(unsigned __int64 handle, unsigned flags); 
#line 358
extern cudaError_t __stdcall cudaCGGetSize(unsigned * numThreads, unsigned * numGrids, unsigned __int64 handle); 
#line 359
extern cudaError_t __stdcall cudaCGGetRank(unsigned * threadRank, unsigned * gridRank, unsigned __int64 handle); 
__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 581
static __inline void *__stdcall cudaGetParameterBuffer(size_t alignment, size_t size) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)alignment;(void)size;::exit(___);}
#if 0
#line 582
{ 
#line 583
return __cudaCDP2GetParameterBuffer(alignment, size); 
#line 584
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 591 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_device_runtime_api.h"
static __inline void *__stdcall cudaGetParameterBufferV2(void *func, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)func;(void)gridDimension;(void)blockDimension;(void)sharedMemSize;::exit(___);}
#if 0
#line 592
{ 
#line 593
return __cudaCDP2GetParameterBufferV2(func, gridDimension, blockDimension, sharedMemSize); 
#line 594
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 601 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_device_runtime_api.h"
static __inline cudaError_t __stdcall cudaLaunchDevice_ptsz(void *func, void *parameterBuffer, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize, cudaStream_t stream) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)func;(void)parameterBuffer;(void)gridDimension;(void)blockDimension;(void)sharedMemSize;(void)stream;::exit(___);}
#if 0
#line 602
{ 
#line 603
return __cudaCDP2LaunchDevice_ptsz(func, parameterBuffer, gridDimension, blockDimension, sharedMemSize, stream); 
#line 604
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 606 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_device_runtime_api.h"
static __inline cudaError_t __stdcall cudaLaunchDeviceV2_ptsz(void *parameterBuffer, cudaStream_t stream) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)parameterBuffer;(void)stream;::exit(___);}
#if 0
#line 607
{ 
#line 608
return __cudaCDP2LaunchDeviceV2_ptsz(parameterBuffer, stream); 
#line 609
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 667 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_device_runtime_api.h"
static __inline cudaError_t __stdcall cudaLaunchDevice(void *func, void *parameterBuffer, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize, cudaStream_t stream) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)func;(void)parameterBuffer;(void)gridDimension;(void)blockDimension;(void)sharedMemSize;(void)stream;::exit(___);}
#if 0
#line 668
{ 
#line 669
return __cudaCDP2LaunchDevice(func, parameterBuffer, gridDimension, blockDimension, sharedMemSize, stream); 
#line 670
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 672 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_device_runtime_api.h"
static __inline cudaError_t __stdcall cudaLaunchDeviceV2(void *parameterBuffer, cudaStream_t stream) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)parameterBuffer;(void)stream;::exit(___);}
#if 0
#line 673
{ 
#line 674
return __cudaCDP2LaunchDeviceV2(parameterBuffer, stream); 
#line 675
} 
#endif
#line 729 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_device_runtime_api.h"
}
#line 731
template< class T> static __inline cudaError_t cudaMalloc(T ** devPtr, size_t size); 
#line 732
template< class T> static __inline cudaError_t cudaFuncGetAttributes(cudaFuncAttributes * attr, T * entry); 
#line 733
template< class T> static __inline cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessor(int * numBlocks, T func, int blockSize, size_t dynamicSmemSize); 
#line 734
template< class T> static __inline cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int * numBlocks, T func, int blockSize, size_t dynamicSmemSize, unsigned flags); 
#line 279 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_runtime_api.h"
extern "C" {
#line 319 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaDeviceReset(); 
#line 341
extern cudaError_t __stdcall cudaDeviceSynchronize(); 
#line 427
extern cudaError_t __stdcall cudaDeviceSetLimit(cudaLimit limit, size_t value); 
#line 463
extern cudaError_t __stdcall cudaDeviceGetLimit(size_t * pValue, cudaLimit limit); 
#line 486
extern cudaError_t __stdcall cudaDeviceGetTexture1DLinearMaxWidth(size_t * maxWidthInElements, const cudaChannelFormatDesc * fmtDesc, int device); 
#line 520 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaDeviceGetCacheConfig(cudaFuncCache * pCacheConfig); 
#line 557
extern cudaError_t __stdcall cudaDeviceGetStreamPriorityRange(int * leastPriority, int * greatestPriority); 
#line 601
extern cudaError_t __stdcall cudaDeviceSetCacheConfig(cudaFuncCache cacheConfig); 
#line 632
extern cudaError_t __stdcall cudaDeviceGetSharedMemConfig(cudaSharedMemConfig * pConfig); 
#line 676
extern cudaError_t __stdcall cudaDeviceSetSharedMemConfig(cudaSharedMemConfig config); 
#line 703
extern cudaError_t __stdcall cudaDeviceGetByPCIBusId(int * device, const char * pciBusId); 
#line 733
extern cudaError_t __stdcall cudaDeviceGetPCIBusId(char * pciBusId, int len, int device); 
#line 783
extern cudaError_t __stdcall cudaIpcGetEventHandle(cudaIpcEventHandle_t * handle, cudaEvent_t event); 
#line 826
extern cudaError_t __stdcall cudaIpcOpenEventHandle(cudaEvent_t * event, cudaIpcEventHandle_t handle); 
#line 870
extern cudaError_t __stdcall cudaIpcGetMemHandle(cudaIpcMemHandle_t * handle, void * devPtr); 
#line 936
extern cudaError_t __stdcall cudaIpcOpenMemHandle(void ** devPtr, cudaIpcMemHandle_t handle, unsigned flags); 
#line 974
extern cudaError_t __stdcall cudaIpcCloseMemHandle(void * devPtr); 
#line 1006
extern cudaError_t __stdcall cudaDeviceFlushGPUDirectRDMAWrites(cudaFlushGPUDirectRDMAWritesTarget target, cudaFlushGPUDirectRDMAWritesScope scope); 
#line 1049 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_runtime_api.h"
__declspec(deprecated) extern cudaError_t __stdcall cudaThreadExit(); 
#line 1075
__declspec(deprecated) extern cudaError_t __stdcall cudaThreadSynchronize(); 
#line 1124
__declspec(deprecated) extern cudaError_t __stdcall cudaThreadSetLimit(cudaLimit limit, size_t value); 
#line 1157
__declspec(deprecated) extern cudaError_t __stdcall cudaThreadGetLimit(size_t * pValue, cudaLimit limit); 
#line 1193
__declspec(deprecated) extern cudaError_t __stdcall cudaThreadGetCacheConfig(cudaFuncCache * pCacheConfig); 
#line 1240
__declspec(deprecated) extern cudaError_t __stdcall cudaThreadSetCacheConfig(cudaFuncCache cacheConfig); 
#line 1305
extern cudaError_t __stdcall cudaGetLastError(); 
#line 1356
extern cudaError_t __stdcall cudaPeekAtLastError(); 
#line 1372
extern const char *__stdcall cudaGetErrorName(cudaError_t error); 
#line 1388
extern const char *__stdcall cudaGetErrorString(cudaError_t error); 
#line 1417
extern cudaError_t __stdcall cudaGetDeviceCount(int * count); 
#line 1722
extern cudaError_t __stdcall cudaGetDeviceProperties_v2(cudaDeviceProp * prop, int device); 
#line 1924
extern cudaError_t __stdcall cudaDeviceGetAttribute(int * value, cudaDeviceAttr attr, int device); 
#line 1942
extern cudaError_t __stdcall cudaDeviceGetDefaultMemPool(cudaMemPool_t * memPool, int device); 
#line 1966
extern cudaError_t __stdcall cudaDeviceSetMemPool(int device, cudaMemPool_t memPool); 
#line 1986
extern cudaError_t __stdcall cudaDeviceGetMemPool(cudaMemPool_t * memPool, int device); 
#line 2048
extern cudaError_t __stdcall cudaDeviceGetNvSciSyncAttributes(void * nvSciSyncAttrList, int device, int flags); 
#line 2088
extern cudaError_t __stdcall cudaDeviceGetP2PAttribute(int * value, cudaDeviceP2PAttr attr, int srcDevice, int dstDevice); 
#line 2110
extern cudaError_t __stdcall cudaChooseDevice(int * device, const cudaDeviceProp * prop); 
#line 2139
extern cudaError_t __stdcall cudaInitDevice(int device, unsigned deviceFlags, unsigned flags); 
#line 2185
extern cudaError_t __stdcall cudaSetDevice(int device); 
#line 2207
extern cudaError_t __stdcall cudaGetDevice(int * device); 
#line 2238
extern cudaError_t __stdcall cudaSetValidDevices(int * device_arr, int len); 
#line 2308
extern cudaError_t __stdcall cudaSetDeviceFlags(unsigned flags); 
#line 2353
extern cudaError_t __stdcall cudaGetDeviceFlags(unsigned * flags); 
#line 2393
extern cudaError_t __stdcall cudaStreamCreate(cudaStream_t * pStream); 
#line 2425
extern cudaError_t __stdcall cudaStreamCreateWithFlags(cudaStream_t * pStream, unsigned flags); 
#line 2473
extern cudaError_t __stdcall cudaStreamCreateWithPriority(cudaStream_t * pStream, unsigned flags, int priority); 
#line 2500
extern cudaError_t __stdcall cudaStreamGetPriority(cudaStream_t hStream, int * priority); 
#line 2525
extern cudaError_t __stdcall cudaStreamGetFlags(cudaStream_t hStream, unsigned * flags); 
#line 2562
extern cudaError_t __stdcall cudaStreamGetId(cudaStream_t hStream, unsigned __int64 * streamId); 
#line 2577
extern cudaError_t __stdcall cudaCtxResetPersistingL2Cache(); 
#line 2597
extern cudaError_t __stdcall cudaStreamCopyAttributes(cudaStream_t dst, cudaStream_t src); 
#line 2618
extern cudaError_t __stdcall cudaStreamGetAttribute(cudaStream_t hStream, cudaLaunchAttributeID attr, cudaLaunchAttributeValue * value_out); 
#line 2642
extern cudaError_t __stdcall cudaStreamSetAttribute(cudaStream_t hStream, cudaLaunchAttributeID attr, const cudaLaunchAttributeValue * value); 
#line 2676
extern cudaError_t __stdcall cudaStreamDestroy(cudaStream_t stream); 
#line 2707
extern cudaError_t __stdcall cudaStreamWaitEvent(cudaStream_t stream, cudaEvent_t event, unsigned flags = 0); 
#line 2715
typedef void (__stdcall *cudaStreamCallback_t)(cudaStream_t stream, cudaError_t status, void * userData); 
#line 2782
extern cudaError_t __stdcall cudaStreamAddCallback(cudaStream_t stream, cudaStreamCallback_t callback, void * userData, unsigned flags); 
#line 2806
extern cudaError_t __stdcall cudaStreamSynchronize(cudaStream_t stream); 
#line 2831
extern cudaError_t __stdcall cudaStreamQuery(cudaStream_t stream); 
#line 2915
extern cudaError_t __stdcall cudaStreamAttachMemAsync(cudaStream_t stream, void * devPtr, size_t length = 0, unsigned flags = 4); 
#line 2954 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaStreamBeginCapture(cudaStream_t stream, cudaStreamCaptureMode mode); 
#line 2995
extern cudaError_t __stdcall cudaStreamBeginCaptureToGraph(cudaStream_t stream, cudaGraph_t graph, const cudaGraphNode_t * dependencies, const cudaGraphEdgeData * dependencyData, size_t numDependencies, cudaStreamCaptureMode mode); 
#line 3046
extern cudaError_t __stdcall cudaThreadExchangeStreamCaptureMode(cudaStreamCaptureMode * mode); 
#line 3075
extern cudaError_t __stdcall cudaStreamEndCapture(cudaStream_t stream, cudaGraph_t * pGraph); 
#line 3113
extern cudaError_t __stdcall cudaStreamIsCapturing(cudaStream_t stream, cudaStreamCaptureStatus * pCaptureStatus); 
#line 3162
extern cudaError_t __stdcall cudaStreamGetCaptureInfo_v2(cudaStream_t stream, cudaStreamCaptureStatus * captureStatus_out, unsigned __int64 * id_out = 0, cudaGraph_t * graph_out = 0, const cudaGraphNode_t ** dependencies_out = 0, size_t * numDependencies_out = 0); 
#line 3221
extern cudaError_t __stdcall cudaStreamGetCaptureInfo_v3(cudaStream_t stream, cudaStreamCaptureStatus * captureStatus_out, unsigned __int64 * id_out = 0, cudaGraph_t * graph_out = 0, const cudaGraphNode_t ** dependencies_out = 0, const cudaGraphEdgeData ** edgeData_out = 0, size_t * numDependencies_out = 0); 
#line 3261
extern cudaError_t __stdcall cudaStreamUpdateCaptureDependencies(cudaStream_t stream, cudaGraphNode_t * dependencies, size_t numDependencies, unsigned flags = 0); 
#line 3296
extern cudaError_t __stdcall cudaStreamUpdateCaptureDependencies_v2(cudaStream_t stream, cudaGraphNode_t * dependencies, const cudaGraphEdgeData * dependencyData, size_t numDependencies, unsigned flags = 0); 
#line 3333
extern cudaError_t __stdcall cudaEventCreate(cudaEvent_t * event); 
#line 3370
extern cudaError_t __stdcall cudaEventCreateWithFlags(cudaEvent_t * event, unsigned flags); 
#line 3411
extern cudaError_t __stdcall cudaEventRecord(cudaEvent_t event, cudaStream_t stream = 0); 
#line 3459
extern cudaError_t __stdcall cudaEventRecordWithFlags(cudaEvent_t event, cudaStream_t stream = 0, unsigned flags = 0); 
#line 3492 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaEventQuery(cudaEvent_t event); 
#line 3523
extern cudaError_t __stdcall cudaEventSynchronize(cudaEvent_t event); 
#line 3553
extern cudaError_t __stdcall cudaEventDestroy(cudaEvent_t event); 
#line 3598
extern cudaError_t __stdcall cudaEventElapsedTime(float * ms, cudaEvent_t start, cudaEvent_t end); 
#line 3779
extern cudaError_t __stdcall cudaImportExternalMemory(cudaExternalMemory_t * extMem_out, const cudaExternalMemoryHandleDesc * memHandleDesc); 
#line 3834
extern cudaError_t __stdcall cudaExternalMemoryGetMappedBuffer(void ** devPtr, cudaExternalMemory_t extMem, const cudaExternalMemoryBufferDesc * bufferDesc); 
#line 3894
extern cudaError_t __stdcall cudaExternalMemoryGetMappedMipmappedArray(cudaMipmappedArray_t * mipmap, cudaExternalMemory_t extMem, const cudaExternalMemoryMipmappedArrayDesc * mipmapDesc); 
#line 3918
extern cudaError_t __stdcall cudaDestroyExternalMemory(cudaExternalMemory_t extMem); 
#line 4072
extern cudaError_t __stdcall cudaImportExternalSemaphore(cudaExternalSemaphore_t * extSem_out, const cudaExternalSemaphoreHandleDesc * semHandleDesc); 
#line 4155
extern cudaError_t __stdcall cudaSignalExternalSemaphoresAsync_v2(const cudaExternalSemaphore_t * extSemArray, const cudaExternalSemaphoreSignalParams * paramsArray, unsigned numExtSems, cudaStream_t stream = 0); 
#line 4231
extern cudaError_t __stdcall cudaWaitExternalSemaphoresAsync_v2(const cudaExternalSemaphore_t * extSemArray, const cudaExternalSemaphoreWaitParams * paramsArray, unsigned numExtSems, cudaStream_t stream = 0); 
#line 4254
extern cudaError_t __stdcall cudaDestroyExternalSemaphore(cudaExternalSemaphore_t extSem); 
#line 4321
extern cudaError_t __stdcall cudaLaunchKernel(const void * func, dim3 gridDim, dim3 blockDim, void ** args, size_t sharedMem, cudaStream_t stream); 
#line 4383
extern cudaError_t __stdcall cudaLaunchKernelExC(const cudaLaunchConfig_t * config, const void * func, void ** args); 
#line 4440
extern cudaError_t __stdcall cudaLaunchCooperativeKernel(const void * func, dim3 gridDim, dim3 blockDim, void ** args, size_t sharedMem, cudaStream_t stream); 
#line 4541
__declspec(deprecated) extern cudaError_t __stdcall cudaLaunchCooperativeKernelMultiDevice(cudaLaunchParams * launchParamsList, unsigned numDevices, unsigned flags = 0); 
#line 4586
extern cudaError_t __stdcall cudaFuncSetCacheConfig(const void * func, cudaFuncCache cacheConfig); 
#line 4641
extern cudaError_t __stdcall cudaFuncSetSharedMemConfig(const void * func, cudaSharedMemConfig config); 
#line 4674
extern cudaError_t __stdcall cudaFuncGetAttributes(cudaFuncAttributes * attr, const void * func); 
#line 4711
extern cudaError_t __stdcall cudaFuncSetAttribute(const void * func, cudaFuncAttribute attr, int value); 
#line 4735
extern cudaError_t __stdcall cudaFuncGetName(const char ** name, const void * func); 
#line 4759
__declspec(deprecated) extern cudaError_t __stdcall cudaSetDoubleForDevice(double * d); 
#line 4783
__declspec(deprecated) extern cudaError_t __stdcall cudaSetDoubleForHost(double * d); 
#line 4849
extern cudaError_t __stdcall cudaLaunchHostFunc(cudaStream_t stream, cudaHostFn_t fn, void * userData); 
#line 4906
extern cudaError_t __stdcall cudaOccupancyMaxActiveBlocksPerMultiprocessor(int * numBlocks, const void * func, int blockSize, size_t dynamicSMemSize); 
#line 4935
extern cudaError_t __stdcall cudaOccupancyAvailableDynamicSMemPerBlock(size_t * dynamicSmemSize, const void * func, int numBlocks, int blockSize); 
#line 4980
extern cudaError_t __stdcall cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int * numBlocks, const void * func, int blockSize, size_t dynamicSMemSize, unsigned flags); 
#line 5015
extern cudaError_t __stdcall cudaOccupancyMaxPotentialClusterSize(int * clusterSize, const void * func, const cudaLaunchConfig_t * launchConfig); 
#line 5054
extern cudaError_t __stdcall cudaOccupancyMaxActiveClusters(int * numClusters, const void * func, const cudaLaunchConfig_t * launchConfig); 
#line 5174
extern cudaError_t __stdcall cudaMallocManaged(void ** devPtr, size_t size, unsigned flags = 1); 
#line 5207 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaMalloc(void ** devPtr, size_t size); 
#line 5244
extern cudaError_t __stdcall cudaMallocHost(void ** ptr, size_t size); 
#line 5287
extern cudaError_t __stdcall cudaMallocPitch(void ** devPtr, size_t * pitch, size_t width, size_t height); 
#line 5339
extern cudaError_t __stdcall cudaMallocArray(cudaArray_t * array, const cudaChannelFormatDesc * desc, size_t width, size_t height = 0, unsigned flags = 0); 
#line 5377
extern cudaError_t __stdcall cudaFree(void * devPtr); 
#line 5400
extern cudaError_t __stdcall cudaFreeHost(void * ptr); 
#line 5423
extern cudaError_t __stdcall cudaFreeArray(cudaArray_t array); 
#line 5446
extern cudaError_t __stdcall cudaFreeMipmappedArray(cudaMipmappedArray_t mipmappedArray); 
#line 5512
extern cudaError_t __stdcall cudaHostAlloc(void ** pHost, size_t size, unsigned flags); 
#line 5609
extern cudaError_t __stdcall cudaHostRegister(void * ptr, size_t size, unsigned flags); 
#line 5632
extern cudaError_t __stdcall cudaHostUnregister(void * ptr); 
#line 5677
extern cudaError_t __stdcall cudaHostGetDevicePointer(void ** pDevice, void * pHost, unsigned flags); 
#line 5699
extern cudaError_t __stdcall cudaHostGetFlags(unsigned * pFlags, void * pHost); 
#line 5738
extern cudaError_t __stdcall cudaMalloc3D(cudaPitchedPtr * pitchedDevPtr, cudaExtent extent); 
#line 5883
extern cudaError_t __stdcall cudaMalloc3DArray(cudaArray_t * array, const cudaChannelFormatDesc * desc, cudaExtent extent, unsigned flags = 0); 
#line 6028
extern cudaError_t __stdcall cudaMallocMipmappedArray(cudaMipmappedArray_t * mipmappedArray, const cudaChannelFormatDesc * desc, cudaExtent extent, unsigned numLevels, unsigned flags = 0); 
#line 6061
extern cudaError_t __stdcall cudaGetMipmappedArrayLevel(cudaArray_t * levelArray, cudaMipmappedArray_const_t mipmappedArray, unsigned level); 
#line 6166
extern cudaError_t __stdcall cudaMemcpy3D(const cudaMemcpy3DParms * p); 
#line 6198
extern cudaError_t __stdcall cudaMemcpy3DPeer(const cudaMemcpy3DPeerParms * p); 
#line 6316
extern cudaError_t __stdcall cudaMemcpy3DAsync(const cudaMemcpy3DParms * p, cudaStream_t stream = 0); 
#line 6343
extern cudaError_t __stdcall cudaMemcpy3DPeerAsync(const cudaMemcpy3DPeerParms * p, cudaStream_t stream = 0); 
#line 6377
extern cudaError_t __stdcall cudaMemGetInfo(size_t * free, size_t * total); 
#line 6403
extern cudaError_t __stdcall cudaArrayGetInfo(cudaChannelFormatDesc * desc, cudaExtent * extent, unsigned * flags, cudaArray_t array); 
#line 6432
extern cudaError_t __stdcall cudaArrayGetPlane(cudaArray_t * pPlaneArray, cudaArray_t hArray, unsigned planeIdx); 
#line 6455
extern cudaError_t __stdcall cudaArrayGetMemoryRequirements(cudaArrayMemoryRequirements * memoryRequirements, cudaArray_t array, int device); 
#line 6479
extern cudaError_t __stdcall cudaMipmappedArrayGetMemoryRequirements(cudaArrayMemoryRequirements * memoryRequirements, cudaMipmappedArray_t mipmap, int device); 
#line 6507
extern cudaError_t __stdcall cudaArrayGetSparseProperties(cudaArraySparseProperties * sparseProperties, cudaArray_t array); 
#line 6537 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaMipmappedArrayGetSparseProperties(cudaArraySparseProperties * sparseProperties, cudaMipmappedArray_t mipmap); 
#line 6582 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaMemcpy(void * dst, const void * src, size_t count, cudaMemcpyKind kind); 
#line 6617
extern cudaError_t __stdcall cudaMemcpyPeer(void * dst, int dstDevice, const void * src, int srcDevice, size_t count); 
#line 6666
extern cudaError_t __stdcall cudaMemcpy2D(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind); 
#line 6716
extern cudaError_t __stdcall cudaMemcpy2DToArray(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind); 
#line 6766
extern cudaError_t __stdcall cudaMemcpy2DFromArray(void * dst, size_t dpitch, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t width, size_t height, cudaMemcpyKind kind); 
#line 6813
extern cudaError_t __stdcall cudaMemcpy2DArrayToArray(cudaArray_t dst, size_t wOffsetDst, size_t hOffsetDst, cudaArray_const_t src, size_t wOffsetSrc, size_t hOffsetSrc, size_t width, size_t height, cudaMemcpyKind kind = cudaMemcpyDeviceToDevice); 
#line 6856
extern cudaError_t __stdcall cudaMemcpyToSymbol(const void * symbol, const void * src, size_t count, size_t offset = 0, cudaMemcpyKind kind = cudaMemcpyHostToDevice); 
#line 6899
extern cudaError_t __stdcall cudaMemcpyFromSymbol(void * dst, const void * symbol, size_t count, size_t offset = 0, cudaMemcpyKind kind = cudaMemcpyDeviceToHost); 
#line 6956
extern cudaError_t __stdcall cudaMemcpyAsync(void * dst, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream = 0); 
#line 6991
extern cudaError_t __stdcall cudaMemcpyPeerAsync(void * dst, int dstDevice, const void * src, int srcDevice, size_t count, cudaStream_t stream = 0); 
#line 7054
extern cudaError_t __stdcall cudaMemcpy2DAsync(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream = 0); 
#line 7112
extern cudaError_t __stdcall cudaMemcpy2DToArrayAsync(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream = 0); 
#line 7169
extern cudaError_t __stdcall cudaMemcpy2DFromArrayAsync(void * dst, size_t dpitch, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream = 0); 
#line 7220
extern cudaError_t __stdcall cudaMemcpyToSymbolAsync(const void * symbol, const void * src, size_t count, size_t offset, cudaMemcpyKind kind, cudaStream_t stream = 0); 
#line 7271
extern cudaError_t __stdcall cudaMemcpyFromSymbolAsync(void * dst, const void * symbol, size_t count, size_t offset, cudaMemcpyKind kind, cudaStream_t stream = 0); 
#line 7300
extern cudaError_t __stdcall cudaMemset(void * devPtr, int value, size_t count); 
#line 7334
extern cudaError_t __stdcall cudaMemset2D(void * devPtr, size_t pitch, int value, size_t width, size_t height); 
#line 7380
extern cudaError_t __stdcall cudaMemset3D(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent); 
#line 7416
extern cudaError_t __stdcall cudaMemsetAsync(void * devPtr, int value, size_t count, cudaStream_t stream = 0); 
#line 7457
extern cudaError_t __stdcall cudaMemset2DAsync(void * devPtr, size_t pitch, int value, size_t width, size_t height, cudaStream_t stream = 0); 
#line 7510
extern cudaError_t __stdcall cudaMemset3DAsync(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent, cudaStream_t stream = 0); 
#line 7538
extern cudaError_t __stdcall cudaGetSymbolAddress(void ** devPtr, const void * symbol); 
#line 7565
extern cudaError_t __stdcall cudaGetSymbolSize(size_t * size, const void * symbol); 
#line 7635
extern cudaError_t __stdcall cudaMemPrefetchAsync(const void * devPtr, size_t count, int dstDevice, cudaStream_t stream = 0); 
#line 7637
extern cudaError_t __stdcall cudaMemPrefetchAsync_v2(const void * devPtr, size_t count, cudaMemLocation location, unsigned flags, cudaStream_t stream = 0); 
#line 7751
extern cudaError_t __stdcall cudaMemAdvise(const void * devPtr, size_t count, cudaMemoryAdvise advice, int device); 
#line 7874
extern cudaError_t __stdcall cudaMemAdvise_v2(const void * devPtr, size_t count, cudaMemoryAdvise advice, cudaMemLocation location); 
#line 7956
extern cudaError_t __stdcall cudaMemRangeGetAttribute(void * data, size_t dataSize, cudaMemRangeAttribute attribute, const void * devPtr, size_t count); 
#line 7999
extern cudaError_t __stdcall cudaMemRangeGetAttributes(void ** data, size_t * dataSizes, cudaMemRangeAttribute * attributes, size_t numAttributes, const void * devPtr, size_t count); 
#line 8059
__declspec(deprecated) extern cudaError_t __stdcall cudaMemcpyToArray(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t count, cudaMemcpyKind kind); 
#line 8101
__declspec(deprecated) extern cudaError_t __stdcall cudaMemcpyFromArray(void * dst, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t count, cudaMemcpyKind kind); 
#line 8144
__declspec(deprecated) extern cudaError_t __stdcall cudaMemcpyArrayToArray(cudaArray_t dst, size_t wOffsetDst, size_t hOffsetDst, cudaArray_const_t src, size_t wOffsetSrc, size_t hOffsetSrc, size_t count, cudaMemcpyKind kind = cudaMemcpyDeviceToDevice); 
#line 8195
__declspec(deprecated) extern cudaError_t __stdcall cudaMemcpyToArrayAsync(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream = 0); 
#line 8245
__declspec(deprecated) extern cudaError_t __stdcall cudaMemcpyFromArrayAsync(void * dst, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t count, cudaMemcpyKind kind, cudaStream_t stream = 0); 
#line 8314
extern cudaError_t __stdcall cudaMallocAsync(void ** devPtr, size_t size, cudaStream_t hStream); 
#line 8340
extern cudaError_t __stdcall cudaFreeAsync(void * devPtr, cudaStream_t hStream); 
#line 8365
extern cudaError_t __stdcall cudaMemPoolTrimTo(cudaMemPool_t memPool, size_t minBytesToKeep); 
#line 8409
extern cudaError_t __stdcall cudaMemPoolSetAttribute(cudaMemPool_t memPool, cudaMemPoolAttr attr, void * value); 
#line 8457
extern cudaError_t __stdcall cudaMemPoolGetAttribute(cudaMemPool_t memPool, cudaMemPoolAttr attr, void * value); 
#line 8472
extern cudaError_t __stdcall cudaMemPoolSetAccess(cudaMemPool_t memPool, const cudaMemAccessDesc * descList, size_t count); 
#line 8485
extern cudaError_t __stdcall cudaMemPoolGetAccess(cudaMemAccessFlags * flags, cudaMemPool_t memPool, cudaMemLocation * location); 
#line 8512
extern cudaError_t __stdcall cudaMemPoolCreate(cudaMemPool_t * memPool, const cudaMemPoolProps * poolProps); 
#line 8534
extern cudaError_t __stdcall cudaMemPoolDestroy(cudaMemPool_t memPool); 
#line 8570
extern cudaError_t __stdcall cudaMallocFromPoolAsync(void ** ptr, size_t size, cudaMemPool_t memPool, cudaStream_t stream); 
#line 8595
extern cudaError_t __stdcall cudaMemPoolExportToShareableHandle(void * shareableHandle, cudaMemPool_t memPool, cudaMemAllocationHandleType handleType, unsigned flags); 
#line 8622
extern cudaError_t __stdcall cudaMemPoolImportFromShareableHandle(cudaMemPool_t * memPool, void * shareableHandle, cudaMemAllocationHandleType handleType, unsigned flags); 
#line 8645
extern cudaError_t __stdcall cudaMemPoolExportPointer(cudaMemPoolPtrExportData * exportData, void * ptr); 
#line 8674
extern cudaError_t __stdcall cudaMemPoolImportPointer(void ** ptr, cudaMemPool_t memPool, cudaMemPoolPtrExportData * exportData); 
#line 8827
extern cudaError_t __stdcall cudaPointerGetAttributes(cudaPointerAttributes * attributes, const void * ptr); 
#line 8868
extern cudaError_t __stdcall cudaDeviceCanAccessPeer(int * canAccessPeer, int device, int peerDevice); 
#line 8910
extern cudaError_t __stdcall cudaDeviceEnablePeerAccess(int peerDevice, unsigned flags); 
#line 8932
extern cudaError_t __stdcall cudaDeviceDisablePeerAccess(int peerDevice); 
#line 8996
extern cudaError_t __stdcall cudaGraphicsUnregisterResource(cudaGraphicsResource_t resource); 
#line 9031
extern cudaError_t __stdcall cudaGraphicsResourceSetMapFlags(cudaGraphicsResource_t resource, unsigned flags); 
#line 9070
extern cudaError_t __stdcall cudaGraphicsMapResources(int count, cudaGraphicsResource_t * resources, cudaStream_t stream = 0); 
#line 9105
extern cudaError_t __stdcall cudaGraphicsUnmapResources(int count, cudaGraphicsResource_t * resources, cudaStream_t stream = 0); 
#line 9137
extern cudaError_t __stdcall cudaGraphicsResourceGetMappedPointer(void ** devPtr, size_t * size, cudaGraphicsResource_t resource); 
#line 9175
extern cudaError_t __stdcall cudaGraphicsSubResourceGetMappedArray(cudaArray_t * array, cudaGraphicsResource_t resource, unsigned arrayIndex, unsigned mipLevel); 
#line 9204
extern cudaError_t __stdcall cudaGraphicsResourceGetMappedMipmappedArray(cudaMipmappedArray_t * mipmappedArray, cudaGraphicsResource_t resource); 
#line 9239
extern cudaError_t __stdcall cudaGetChannelDesc(cudaChannelFormatDesc * desc, cudaArray_const_t array); 
#line 9269
extern cudaChannelFormatDesc __stdcall cudaCreateChannelDesc(int x, int y, int z, int w, cudaChannelFormatKind f); 
#line 9493
extern cudaError_t __stdcall cudaCreateTextureObject(cudaTextureObject_t * pTexObject, const cudaResourceDesc * pResDesc, const cudaTextureDesc * pTexDesc, const cudaResourceViewDesc * pResViewDesc); 
#line 9513
extern cudaError_t __stdcall cudaDestroyTextureObject(cudaTextureObject_t texObject); 
#line 9533
extern cudaError_t __stdcall cudaGetTextureObjectResourceDesc(cudaResourceDesc * pResDesc, cudaTextureObject_t texObject); 
#line 9553
extern cudaError_t __stdcall cudaGetTextureObjectTextureDesc(cudaTextureDesc * pTexDesc, cudaTextureObject_t texObject); 
#line 9574
extern cudaError_t __stdcall cudaGetTextureObjectResourceViewDesc(cudaResourceViewDesc * pResViewDesc, cudaTextureObject_t texObject); 
#line 9619
extern cudaError_t __stdcall cudaCreateSurfaceObject(cudaSurfaceObject_t * pSurfObject, const cudaResourceDesc * pResDesc); 
#line 9639
extern cudaError_t __stdcall cudaDestroySurfaceObject(cudaSurfaceObject_t surfObject); 
#line 9658
extern cudaError_t __stdcall cudaGetSurfaceObjectResourceDesc(cudaResourceDesc * pResDesc, cudaSurfaceObject_t surfObject); 
#line 9692
extern cudaError_t __stdcall cudaDriverGetVersion(int * driverVersion); 
#line 9721
extern cudaError_t __stdcall cudaRuntimeGetVersion(int * runtimeVersion); 
#line 9768
extern cudaError_t __stdcall cudaGraphCreate(cudaGraph_t * pGraph, unsigned flags); 
#line 9866
extern cudaError_t __stdcall cudaGraphAddKernelNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaKernelNodeParams * pNodeParams); 
#line 9899
extern cudaError_t __stdcall cudaGraphKernelNodeGetParams(cudaGraphNode_t node, cudaKernelNodeParams * pNodeParams); 
#line 9925
extern cudaError_t __stdcall cudaGraphKernelNodeSetParams(cudaGraphNode_t node, const cudaKernelNodeParams * pNodeParams); 
#line 9945
extern cudaError_t __stdcall cudaGraphKernelNodeCopyAttributes(cudaGraphNode_t hSrc, cudaGraphNode_t hDst); 
#line 9968
extern cudaError_t __stdcall cudaGraphKernelNodeGetAttribute(cudaGraphNode_t hNode, cudaLaunchAttributeID attr, cudaLaunchAttributeValue * value_out); 
#line 9992
extern cudaError_t __stdcall cudaGraphKernelNodeSetAttribute(cudaGraphNode_t hNode, cudaLaunchAttributeID attr, const cudaLaunchAttributeValue * value); 
#line 10043
extern cudaError_t __stdcall cudaGraphAddMemcpyNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaMemcpy3DParms * pCopyParams); 
#line 10102
extern cudaError_t __stdcall cudaGraphAddMemcpyNodeToSymbol(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const void * symbol, const void * src, size_t count, size_t offset, cudaMemcpyKind kind); 
#line 10171 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphAddMemcpyNodeFromSymbol(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, void * dst, const void * symbol, size_t count, size_t offset, cudaMemcpyKind kind); 
#line 10239 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphAddMemcpyNode1D(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, void * dst, const void * src, size_t count, cudaMemcpyKind kind); 
#line 10271 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphMemcpyNodeGetParams(cudaGraphNode_t node, cudaMemcpy3DParms * pNodeParams); 
#line 10298
extern cudaError_t __stdcall cudaGraphMemcpyNodeSetParams(cudaGraphNode_t node, const cudaMemcpy3DParms * pNodeParams); 
#line 10337
extern cudaError_t __stdcall cudaGraphMemcpyNodeSetParamsToSymbol(cudaGraphNode_t node, const void * symbol, const void * src, size_t count, size_t offset, cudaMemcpyKind kind); 
#line 10383 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphMemcpyNodeSetParamsFromSymbol(cudaGraphNode_t node, void * dst, const void * symbol, size_t count, size_t offset, cudaMemcpyKind kind); 
#line 10429 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphMemcpyNodeSetParams1D(cudaGraphNode_t node, void * dst, const void * src, size_t count, cudaMemcpyKind kind); 
#line 10477 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphAddMemsetNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaMemsetParams * pMemsetParams); 
#line 10500
extern cudaError_t __stdcall cudaGraphMemsetNodeGetParams(cudaGraphNode_t node, cudaMemsetParams * pNodeParams); 
#line 10524
extern cudaError_t __stdcall cudaGraphMemsetNodeSetParams(cudaGraphNode_t node, const cudaMemsetParams * pNodeParams); 
#line 10566
extern cudaError_t __stdcall cudaGraphAddHostNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaHostNodeParams * pNodeParams); 
#line 10589
extern cudaError_t __stdcall cudaGraphHostNodeGetParams(cudaGraphNode_t node, cudaHostNodeParams * pNodeParams); 
#line 10613
extern cudaError_t __stdcall cudaGraphHostNodeSetParams(cudaGraphNode_t node, const cudaHostNodeParams * pNodeParams); 
#line 10654
extern cudaError_t __stdcall cudaGraphAddChildGraphNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, cudaGraph_t childGraph); 
#line 10681
extern cudaError_t __stdcall cudaGraphChildGraphNodeGetGraph(cudaGraphNode_t node, cudaGraph_t * pGraph); 
#line 10719
extern cudaError_t __stdcall cudaGraphAddEmptyNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies); 
#line 10763
extern cudaError_t __stdcall cudaGraphAddEventRecordNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, cudaEvent_t event); 
#line 10790 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphEventRecordNodeGetEvent(cudaGraphNode_t node, cudaEvent_t * event_out); 
#line 10818 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphEventRecordNodeSetEvent(cudaGraphNode_t node, cudaEvent_t event); 
#line 10865 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphAddEventWaitNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, cudaEvent_t event); 
#line 10892 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphEventWaitNodeGetEvent(cudaGraphNode_t node, cudaEvent_t * event_out); 
#line 10920 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphEventWaitNodeSetEvent(cudaGraphNode_t node, cudaEvent_t event); 
#line 10970 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphAddExternalSemaphoresSignalNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaExternalSemaphoreSignalNodeParams * nodeParams); 
#line 11003 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphExternalSemaphoresSignalNodeGetParams(cudaGraphNode_t hNode, cudaExternalSemaphoreSignalNodeParams * params_out); 
#line 11031 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphExternalSemaphoresSignalNodeSetParams(cudaGraphNode_t hNode, const cudaExternalSemaphoreSignalNodeParams * nodeParams); 
#line 11081 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphAddExternalSemaphoresWaitNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaExternalSemaphoreWaitNodeParams * nodeParams); 
#line 11114 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphExternalSemaphoresWaitNodeGetParams(cudaGraphNode_t hNode, cudaExternalSemaphoreWaitNodeParams * params_out); 
#line 11142 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphExternalSemaphoresWaitNodeSetParams(cudaGraphNode_t hNode, const cudaExternalSemaphoreWaitNodeParams * nodeParams); 
#line 11220 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphAddMemAllocNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, cudaMemAllocNodeParams * nodeParams); 
#line 11247 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphMemAllocNodeGetParams(cudaGraphNode_t node, cudaMemAllocNodeParams * params_out); 
#line 11308 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphAddMemFreeNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, void * dptr); 
#line 11332 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphMemFreeNodeGetParams(cudaGraphNode_t node, void * dptr_out); 
#line 11360 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaDeviceGraphMemTrim(int device); 
#line 11397 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaDeviceGetGraphMemAttribute(int device, cudaGraphMemAttributeType attr, void * value); 
#line 11431 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaDeviceSetGraphMemAttribute(int device, cudaGraphMemAttributeType attr, void * value); 
#line 11459 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphClone(cudaGraph_t * pGraphClone, cudaGraph_t originalGraph); 
#line 11487
extern cudaError_t __stdcall cudaGraphNodeFindInClone(cudaGraphNode_t * pNode, cudaGraphNode_t originalNode, cudaGraph_t clonedGraph); 
#line 11518
extern cudaError_t __stdcall cudaGraphNodeGetType(cudaGraphNode_t node, cudaGraphNodeType * pType); 
#line 11549
extern cudaError_t __stdcall cudaGraphGetNodes(cudaGraph_t graph, cudaGraphNode_t * nodes, size_t * numNodes); 
#line 11580
extern cudaError_t __stdcall cudaGraphGetRootNodes(cudaGraph_t graph, cudaGraphNode_t * pRootNodes, size_t * pNumRootNodes); 
#line 11614
extern cudaError_t __stdcall cudaGraphGetEdges(cudaGraph_t graph, cudaGraphNode_t * from, cudaGraphNode_t * to, size_t * numEdges); 
#line 11654
extern cudaError_t __stdcall cudaGraphGetEdges_v2(cudaGraph_t graph, cudaGraphNode_t * from, cudaGraphNode_t * to, cudaGraphEdgeData * edgeData, size_t * numEdges); 
#line 11685
extern cudaError_t __stdcall cudaGraphNodeGetDependencies(cudaGraphNode_t node, cudaGraphNode_t * pDependencies, size_t * pNumDependencies); 
#line 11722
extern cudaError_t __stdcall cudaGraphNodeGetDependencies_v2(cudaGraphNode_t node, cudaGraphNode_t * pDependencies, cudaGraphEdgeData * edgeData, size_t * pNumDependencies); 
#line 11754
extern cudaError_t __stdcall cudaGraphNodeGetDependentNodes(cudaGraphNode_t node, cudaGraphNode_t * pDependentNodes, size_t * pNumDependentNodes); 
#line 11792
extern cudaError_t __stdcall cudaGraphNodeGetDependentNodes_v2(cudaGraphNode_t node, cudaGraphNode_t * pDependentNodes, cudaGraphEdgeData * edgeData, size_t * pNumDependentNodes); 
#line 11823
extern cudaError_t __stdcall cudaGraphAddDependencies(cudaGraph_t graph, const cudaGraphNode_t * from, const cudaGraphNode_t * to, size_t numDependencies); 
#line 11855
extern cudaError_t __stdcall cudaGraphAddDependencies_v2(cudaGraph_t graph, const cudaGraphNode_t * from, const cudaGraphNode_t * to, const cudaGraphEdgeData * edgeData, size_t numDependencies); 
#line 11886
extern cudaError_t __stdcall cudaGraphRemoveDependencies(cudaGraph_t graph, const cudaGraphNode_t * from, const cudaGraphNode_t * to, size_t numDependencies); 
#line 11921
extern cudaError_t __stdcall cudaGraphRemoveDependencies_v2(cudaGraph_t graph, const cudaGraphNode_t * from, const cudaGraphNode_t * to, const cudaGraphEdgeData * edgeData, size_t numDependencies); 
#line 11951
extern cudaError_t __stdcall cudaGraphDestroyNode(cudaGraphNode_t node); 
#line 12021
extern cudaError_t __stdcall cudaGraphInstantiate(cudaGraphExec_t * pGraphExec, cudaGraph_t graph, unsigned __int64 flags = 0); 
#line 12093
extern cudaError_t __stdcall cudaGraphInstantiateWithFlags(cudaGraphExec_t * pGraphExec, cudaGraph_t graph, unsigned __int64 flags = 0); 
#line 12199 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphInstantiateWithParams(cudaGraphExec_t * pGraphExec, cudaGraph_t graph, cudaGraphInstantiateParams * instantiateParams); 
#line 12224
extern cudaError_t __stdcall cudaGraphExecGetFlags(cudaGraphExec_t graphExec, unsigned __int64 * flags); 
#line 12276
extern cudaError_t __stdcall cudaGraphExecKernelNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const cudaKernelNodeParams * pNodeParams); 
#line 12327
extern cudaError_t __stdcall cudaGraphExecMemcpyNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const cudaMemcpy3DParms * pNodeParams); 
#line 12382
extern cudaError_t __stdcall cudaGraphExecMemcpyNodeSetParamsToSymbol(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const void * symbol, const void * src, size_t count, size_t offset, cudaMemcpyKind kind); 
#line 12445 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphExecMemcpyNodeSetParamsFromSymbol(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, void * dst, const void * symbol, size_t count, size_t offset, cudaMemcpyKind kind); 
#line 12506 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphExecMemcpyNodeSetParams1D(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, void * dst, const void * src, size_t count, cudaMemcpyKind kind); 
#line 12561 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphExecMemsetNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const cudaMemsetParams * pNodeParams); 
#line 12601
extern cudaError_t __stdcall cudaGraphExecHostNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const cudaHostNodeParams * pNodeParams); 
#line 12648
extern cudaError_t __stdcall cudaGraphExecChildGraphNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, cudaGraph_t childGraph); 
#line 12693 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphExecEventRecordNodeSetEvent(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, cudaEvent_t event); 
#line 12738 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphExecEventWaitNodeSetEvent(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, cudaEvent_t event); 
#line 12786 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphExecExternalSemaphoresSignalNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, const cudaExternalSemaphoreSignalNodeParams * nodeParams); 
#line 12834 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphExecExternalSemaphoresWaitNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, const cudaExternalSemaphoreWaitNodeParams * nodeParams); 
#line 12874 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphNodeSetEnabled(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, unsigned isEnabled); 
#line 12908 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphNodeGetEnabled(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, unsigned * isEnabled); 
#line 12997 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphExecUpdate(cudaGraphExec_t hGraphExec, cudaGraph_t hGraph, cudaGraphExecUpdateResultInfo * resultInfo); 
#line 13022
extern cudaError_t __stdcall cudaGraphUpload(cudaGraphExec_t graphExec, cudaStream_t stream); 
#line 13053 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphLaunch(cudaGraphExec_t graphExec, cudaStream_t stream); 
#line 13076
extern cudaError_t __stdcall cudaGraphExecDestroy(cudaGraphExec_t graphExec); 
#line 13097
extern cudaError_t __stdcall cudaGraphDestroy(cudaGraph_t graph); 
#line 13116
extern cudaError_t __stdcall cudaGraphDebugDotPrint(cudaGraph_t graph, const char * path, unsigned flags); 
#line 13152
extern cudaError_t __stdcall cudaUserObjectCreate(cudaUserObject_t * object_out, void * ptr, cudaHostFn_t destroy, unsigned initialRefcount, unsigned flags); 
#line 13176
extern cudaError_t __stdcall cudaUserObjectRetain(cudaUserObject_t object, unsigned count = 1); 
#line 13204
extern cudaError_t __stdcall cudaUserObjectRelease(cudaUserObject_t object, unsigned count = 1); 
#line 13232
extern cudaError_t __stdcall cudaGraphRetainUserObject(cudaGraph_t graph, cudaUserObject_t object, unsigned count = 1, unsigned flags = 0); 
#line 13257
extern cudaError_t __stdcall cudaGraphReleaseUserObject(cudaGraph_t graph, cudaUserObject_t object, unsigned count = 1); 
#line 13299
extern cudaError_t __stdcall cudaGraphAddNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, cudaGraphNodeParams * nodeParams); 
#line 13343
extern cudaError_t __stdcall cudaGraphAddNode_v2(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, const cudaGraphEdgeData * dependencyData, size_t numDependencies, cudaGraphNodeParams * nodeParams); 
#line 13372
extern cudaError_t __stdcall cudaGraphNodeSetParams(cudaGraphNode_t node, cudaGraphNodeParams * nodeParams); 
#line 13421
extern cudaError_t __stdcall cudaGraphExecNodeSetParams(cudaGraphExec_t graphExec, cudaGraphNode_t node, cudaGraphNodeParams * nodeParams); 
#line 13445
extern cudaError_t __stdcall cudaGraphConditionalHandleCreate(cudaGraphConditionalHandle * pHandle_out, cudaGraph_t graph, unsigned defaultLaunchValue = 0, unsigned flags = 0); 
#line 13523
extern cudaError_t __stdcall cudaGetDriverEntryPoint(const char * symbol, void ** funcPtr, unsigned __int64 flags, cudaDriverEntryPointQueryResult * driverStatus = 0); 
#line 13531 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGetExportTable(const void ** ppExportTable, const cudaUUID_t * pExportTableId); 
#line 13710
extern cudaError_t cudaGetFuncBySymbol(cudaFunction_t * functionPtr, const void * symbolPtr); 
#line 13726
extern cudaError_t __stdcall cudaGetKernel(cudaKernel_t * kernelPtr, const void * entryFuncAddr); 
#line 13896 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\cuda_runtime_api.h"
}
#line 117 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\channel_descriptor.h"
template< class T> __inline ::cudaChannelFormatDesc cudaCreateChannelDesc() 
#line 118
{ 
#line 119
return cudaCreateChannelDesc(0, 0, 0, 0, cudaChannelFormatKindNone); 
#line 120
} 
#line 122
static __inline cudaChannelFormatDesc cudaCreateChannelDescHalf() 
#line 123
{ 
#line 124
int e = (((int)sizeof(unsigned short)) * 8); 
#line 126
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
#line 127
} 
#line 129
static __inline cudaChannelFormatDesc cudaCreateChannelDescHalf1() 
#line 130
{ 
#line 131
int e = (((int)sizeof(unsigned short)) * 8); 
#line 133
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
#line 134
} 
#line 136
static __inline cudaChannelFormatDesc cudaCreateChannelDescHalf2() 
#line 137
{ 
#line 138
int e = (((int)sizeof(unsigned short)) * 8); 
#line 140
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat); 
#line 141
} 
#line 143
static __inline cudaChannelFormatDesc cudaCreateChannelDescHalf4() 
#line 144
{ 
#line 145
int e = (((int)sizeof(unsigned short)) * 8); 
#line 147
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat); 
#line 148
} 
#line 150
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< char> () 
#line 151
{ 
#line 152
int e = (((int)sizeof(char)) * 8); 
#line 157 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 159 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\channel_descriptor.h"
} 
#line 161
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< signed char> () 
#line 162
{ 
#line 163
int e = (((int)sizeof(signed char)) * 8); 
#line 165
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 166
} 
#line 168
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned char> () 
#line 169
{ 
#line 170
int e = (((int)sizeof(unsigned char)) * 8); 
#line 172
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 173
} 
#line 175
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< char1> () 
#line 176
{ 
#line 177
int e = (((int)sizeof(signed char)) * 8); 
#line 179
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 180
} 
#line 182
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar1> () 
#line 183
{ 
#line 184
int e = (((int)sizeof(unsigned char)) * 8); 
#line 186
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 187
} 
#line 189
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< char2> () 
#line 190
{ 
#line 191
int e = (((int)sizeof(signed char)) * 8); 
#line 193
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
#line 194
} 
#line 196
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar2> () 
#line 197
{ 
#line 198
int e = (((int)sizeof(unsigned char)) * 8); 
#line 200
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
#line 201
} 
#line 203
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< char4> () 
#line 204
{ 
#line 205
int e = (((int)sizeof(signed char)) * 8); 
#line 207
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
#line 208
} 
#line 210
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar4> () 
#line 211
{ 
#line 212
int e = (((int)sizeof(unsigned char)) * 8); 
#line 214
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
#line 215
} 
#line 217
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< short> () 
#line 218
{ 
#line 219
int e = (((int)sizeof(short)) * 8); 
#line 221
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 222
} 
#line 224
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned short> () 
#line 225
{ 
#line 226
int e = (((int)sizeof(unsigned short)) * 8); 
#line 228
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 229
} 
#line 231
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< short1> () 
#line 232
{ 
#line 233
int e = (((int)sizeof(short)) * 8); 
#line 235
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 236
} 
#line 238
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort1> () 
#line 239
{ 
#line 240
int e = (((int)sizeof(unsigned short)) * 8); 
#line 242
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 243
} 
#line 245
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< short2> () 
#line 246
{ 
#line 247
int e = (((int)sizeof(short)) * 8); 
#line 249
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
#line 250
} 
#line 252
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort2> () 
#line 253
{ 
#line 254
int e = (((int)sizeof(unsigned short)) * 8); 
#line 256
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
#line 257
} 
#line 259
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< short4> () 
#line 260
{ 
#line 261
int e = (((int)sizeof(short)) * 8); 
#line 263
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
#line 264
} 
#line 266
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort4> () 
#line 267
{ 
#line 268
int e = (((int)sizeof(unsigned short)) * 8); 
#line 270
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
#line 271
} 
#line 273
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< int> () 
#line 274
{ 
#line 275
int e = (((int)sizeof(int)) * 8); 
#line 277
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 278
} 
#line 280
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned> () 
#line 281
{ 
#line 282
int e = (((int)sizeof(unsigned)) * 8); 
#line 284
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 285
} 
#line 287
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< int1> () 
#line 288
{ 
#line 289
int e = (((int)sizeof(int)) * 8); 
#line 291
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 292
} 
#line 294
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< uint1> () 
#line 295
{ 
#line 296
int e = (((int)sizeof(unsigned)) * 8); 
#line 298
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 299
} 
#line 301
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< int2> () 
#line 302
{ 
#line 303
int e = (((int)sizeof(int)) * 8); 
#line 305
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
#line 306
} 
#line 308
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< uint2> () 
#line 309
{ 
#line 310
int e = (((int)sizeof(unsigned)) * 8); 
#line 312
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
#line 313
} 
#line 315
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< int4> () 
#line 316
{ 
#line 317
int e = (((int)sizeof(int)) * 8); 
#line 319
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
#line 320
} 
#line 322
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< uint4> () 
#line 323
{ 
#line 324
int e = (((int)sizeof(unsigned)) * 8); 
#line 326
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
#line 327
} 
#line 331
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< long> () 
#line 332
{ 
#line 333
int e = (((int)sizeof(long)) * 8); 
#line 335
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 336
} 
#line 338
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned long> () 
#line 339
{ 
#line 340
int e = (((int)sizeof(unsigned long)) * 8); 
#line 342
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 343
} 
#line 345
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< long1> () 
#line 346
{ 
#line 347
int e = (((int)sizeof(long)) * 8); 
#line 349
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 350
} 
#line 352
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< ulong1> () 
#line 353
{ 
#line 354
int e = (((int)sizeof(unsigned long)) * 8); 
#line 356
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 357
} 
#line 359
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< long2> () 
#line 360
{ 
#line 361
int e = (((int)sizeof(long)) * 8); 
#line 363
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
#line 364
} 
#line 366
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< ulong2> () 
#line 367
{ 
#line 368
int e = (((int)sizeof(unsigned long)) * 8); 
#line 370
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
#line 371
} 
#line 373
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< long4> () 
#line 374
{ 
#line 375
int e = (((int)sizeof(long)) * 8); 
#line 377
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
#line 378
} 
#line 380
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< ulong4> () 
#line 381
{ 
#line 382
int e = (((int)sizeof(unsigned long)) * 8); 
#line 384
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
#line 385
} 
#line 389 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\channel_descriptor.h"
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< float> () 
#line 390
{ 
#line 391
int e = (((int)sizeof(float)) * 8); 
#line 393
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
#line 394
} 
#line 396
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< float1> () 
#line 397
{ 
#line 398
int e = (((int)sizeof(float)) * 8); 
#line 400
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
#line 401
} 
#line 403
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< float2> () 
#line 404
{ 
#line 405
int e = (((int)sizeof(float)) * 8); 
#line 407
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat); 
#line 408
} 
#line 410
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< float4> () 
#line 411
{ 
#line 412
int e = (((int)sizeof(float)) * 8); 
#line 414
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat); 
#line 415
} 
#line 417
static __inline cudaChannelFormatDesc cudaCreateChannelDescNV12() 
#line 418
{ 
#line 419
int e = (((int)sizeof(char)) * 8); 
#line 421
return cudaCreateChannelDesc(e, e, e, 0, cudaChannelFormatKindNV12); 
#line 422
} 
#line 424
template< cudaChannelFormatKind > __inline ::cudaChannelFormatDesc cudaCreateChannelDesc() 
#line 425
{ 
#line 426
return cudaCreateChannelDesc(0, 0, 0, 0, cudaChannelFormatKindNone); 
#line 427
} 
#line 430
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindSignedNormalized8X1> () 
#line 431
{ 
#line 432
return cudaCreateChannelDesc(8, 0, 0, 0, cudaChannelFormatKindSignedNormalized8X1); 
#line 433
} 
#line 435
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindSignedNormalized8X2> () 
#line 436
{ 
#line 437
return cudaCreateChannelDesc(8, 8, 0, 0, cudaChannelFormatKindSignedNormalized8X2); 
#line 438
} 
#line 440
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindSignedNormalized8X4> () 
#line 441
{ 
#line 442
return cudaCreateChannelDesc(8, 8, 8, 8, cudaChannelFormatKindSignedNormalized8X4); 
#line 443
} 
#line 446
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedNormalized8X1> () 
#line 447
{ 
#line 448
return cudaCreateChannelDesc(8, 0, 0, 0, cudaChannelFormatKindUnsignedNormalized8X1); 
#line 449
} 
#line 451
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedNormalized8X2> () 
#line 452
{ 
#line 453
return cudaCreateChannelDesc(8, 8, 0, 0, cudaChannelFormatKindUnsignedNormalized8X2); 
#line 454
} 
#line 456
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedNormalized8X4> () 
#line 457
{ 
#line 458
return cudaCreateChannelDesc(8, 8, 8, 8, cudaChannelFormatKindUnsignedNormalized8X4); 
#line 459
} 
#line 462
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindSignedNormalized16X1> () 
#line 463
{ 
#line 464
return cudaCreateChannelDesc(16, 0, 0, 0, cudaChannelFormatKindSignedNormalized16X1); 
#line 465
} 
#line 467
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindSignedNormalized16X2> () 
#line 468
{ 
#line 469
return cudaCreateChannelDesc(16, 16, 0, 0, cudaChannelFormatKindSignedNormalized16X2); 
#line 470
} 
#line 472
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindSignedNormalized16X4> () 
#line 473
{ 
#line 474
return cudaCreateChannelDesc(16, 16, 16, 16, cudaChannelFormatKindSignedNormalized16X4); 
#line 475
} 
#line 478
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedNormalized16X1> () 
#line 479
{ 
#line 480
return cudaCreateChannelDesc(16, 0, 0, 0, cudaChannelFormatKindUnsignedNormalized16X1); 
#line 481
} 
#line 483
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedNormalized16X2> () 
#line 484
{ 
#line 485
return cudaCreateChannelDesc(16, 16, 0, 0, cudaChannelFormatKindUnsignedNormalized16X2); 
#line 486
} 
#line 488
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedNormalized16X4> () 
#line 489
{ 
#line 490
return cudaCreateChannelDesc(16, 16, 16, 16, cudaChannelFormatKindUnsignedNormalized16X4); 
#line 491
} 
#line 494
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindNV12> () 
#line 495
{ 
#line 496
return cudaCreateChannelDesc(8, 8, 8, 0, cudaChannelFormatKindNV12); 
#line 497
} 
#line 500
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed1> () 
#line 501
{ 
#line 502
return cudaCreateChannelDesc(8, 8, 8, 8, cudaChannelFormatKindUnsignedBlockCompressed1); 
#line 503
} 
#line 506
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed1SRGB> () 
#line 507
{ 
#line 508
return cudaCreateChannelDesc(8, 8, 8, 8, cudaChannelFormatKindUnsignedBlockCompressed1SRGB); 
#line 509
} 
#line 512
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed2> () 
#line 513
{ 
#line 514
return cudaCreateChannelDesc(8, 8, 8, 8, cudaChannelFormatKindUnsignedBlockCompressed2); 
#line 515
} 
#line 518
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed2SRGB> () 
#line 519
{ 
#line 520
return cudaCreateChannelDesc(8, 8, 8, 8, cudaChannelFormatKindUnsignedBlockCompressed2SRGB); 
#line 521
} 
#line 524
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed3> () 
#line 525
{ 
#line 526
return cudaCreateChannelDesc(8, 8, 8, 8, cudaChannelFormatKindUnsignedBlockCompressed3); 
#line 527
} 
#line 530
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed3SRGB> () 
#line 531
{ 
#line 532
return cudaCreateChannelDesc(8, 8, 8, 8, cudaChannelFormatKindUnsignedBlockCompressed3SRGB); 
#line 533
} 
#line 536
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed4> () 
#line 537
{ 
#line 538
return cudaCreateChannelDesc(8, 0, 0, 0, cudaChannelFormatKindUnsignedBlockCompressed4); 
#line 539
} 
#line 542
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindSignedBlockCompressed4> () 
#line 543
{ 
#line 544
return cudaCreateChannelDesc(8, 0, 0, 0, cudaChannelFormatKindSignedBlockCompressed4); 
#line 545
} 
#line 548
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed5> () 
#line 549
{ 
#line 550
return cudaCreateChannelDesc(8, 8, 0, 0, cudaChannelFormatKindUnsignedBlockCompressed5); 
#line 551
} 
#line 554
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindSignedBlockCompressed5> () 
#line 555
{ 
#line 556
return cudaCreateChannelDesc(8, 8, 0, 0, cudaChannelFormatKindSignedBlockCompressed5); 
#line 557
} 
#line 560
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed6H> () 
#line 561
{ 
#line 562
return cudaCreateChannelDesc(16, 16, 16, 0, cudaChannelFormatKindUnsignedBlockCompressed6H); 
#line 563
} 
#line 566
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindSignedBlockCompressed6H> () 
#line 567
{ 
#line 568
return cudaCreateChannelDesc(16, 16, 16, 0, cudaChannelFormatKindSignedBlockCompressed6H); 
#line 569
} 
#line 572
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed7> () 
#line 573
{ 
#line 574
return cudaCreateChannelDesc(8, 8, 8, 8, cudaChannelFormatKindUnsignedBlockCompressed7); 
#line 575
} 
#line 578
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed7SRGB> () 
#line 579
{ 
#line 580
return cudaCreateChannelDesc(8, 8, 8, 8, cudaChannelFormatKindUnsignedBlockCompressed7SRGB); 
#line 581
} 
#line 79 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\driver_functions.h"
static __inline cudaPitchedPtr make_cudaPitchedPtr(void *d, size_t p, size_t xsz, size_t ysz) 
#line 80
{ 
#line 81
cudaPitchedPtr s; 
#line 83
(s.ptr) = d; 
#line 84
(s.pitch) = p; 
#line 85
(s.xsize) = xsz; 
#line 86
(s.ysize) = ysz; 
#line 88
return s; 
#line 89
} 
#line 106
static __inline cudaPos make_cudaPos(size_t x, size_t y, size_t z) 
#line 107
{ 
#line 108
cudaPos p; 
#line 110
(p.x) = x; 
#line 111
(p.y) = y; 
#line 112
(p.z) = z; 
#line 114
return p; 
#line 115
} 
#line 132
static __inline cudaExtent make_cudaExtent(size_t w, size_t h, size_t d) 
#line 133
{ 
#line 134
cudaExtent e; 
#line 136
(e.width) = w; 
#line 137
(e.height) = h; 
#line 138
(e.depth) = d; 
#line 140
return e; 
#line 141
} 
#line 77 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_functions.h"
static __inline char1 make_char1(signed char x); 
#line 79
static __inline uchar1 make_uchar1(unsigned char x); 
#line 81
static __inline char2 make_char2(signed char x, signed char y); 
#line 83
static __inline uchar2 make_uchar2(unsigned char x, unsigned char y); 
#line 85
static __inline char3 make_char3(signed char x, signed char y, signed char z); 
#line 87
static __inline uchar3 make_uchar3(unsigned char x, unsigned char y, unsigned char z); 
#line 89
static __inline char4 make_char4(signed char x, signed char y, signed char z, signed char w); 
#line 91
static __inline uchar4 make_uchar4(unsigned char x, unsigned char y, unsigned char z, unsigned char w); 
#line 93
static __inline short1 make_short1(short x); 
#line 95
static __inline ushort1 make_ushort1(unsigned short x); 
#line 97
static __inline short2 make_short2(short x, short y); 
#line 99
static __inline ushort2 make_ushort2(unsigned short x, unsigned short y); 
#line 101
static __inline short3 make_short3(short x, short y, short z); 
#line 103
static __inline ushort3 make_ushort3(unsigned short x, unsigned short y, unsigned short z); 
#line 105
static __inline short4 make_short4(short x, short y, short z, short w); 
#line 107
static __inline ushort4 make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w); 
#line 109
static __inline int1 make_int1(int x); 
#line 111
static __inline uint1 make_uint1(unsigned x); 
#line 113
static __inline int2 make_int2(int x, int y); 
#line 115
static __inline uint2 make_uint2(unsigned x, unsigned y); 
#line 117
static __inline int3 make_int3(int x, int y, int z); 
#line 119
static __inline uint3 make_uint3(unsigned x, unsigned y, unsigned z); 
#line 121
static __inline int4 make_int4(int x, int y, int z, int w); 
#line 123
static __inline uint4 make_uint4(unsigned x, unsigned y, unsigned z, unsigned w); 
#line 125
static __inline long1 make_long1(long x); 
#line 127
static __inline ulong1 make_ulong1(unsigned long x); 
#line 129
static __inline long2 make_long2(long x, long y); 
#line 131
static __inline ulong2 make_ulong2(unsigned long x, unsigned long y); 
#line 133
static __inline long3 make_long3(long x, long y, long z); 
#line 135
static __inline ulong3 make_ulong3(unsigned long x, unsigned long y, unsigned long z); 
#line 137
static __inline long4 make_long4(long x, long y, long z, long w); 
#line 139
static __inline ulong4 make_ulong4(unsigned long x, unsigned long y, unsigned long z, unsigned long w); 
#line 141
static __inline float1 make_float1(float x); 
#line 143
static __inline float2 make_float2(float x, float y); 
#line 145
static __inline float3 make_float3(float x, float y, float z); 
#line 147
static __inline float4 make_float4(float x, float y, float z, float w); 
#line 149
static __inline longlong1 make_longlong1(__int64 x); 
#line 151
static __inline ulonglong1 make_ulonglong1(unsigned __int64 x); 
#line 153
static __inline longlong2 make_longlong2(__int64 x, __int64 y); 
#line 155
static __inline ulonglong2 make_ulonglong2(unsigned __int64 x, unsigned __int64 y); 
#line 157
static __inline longlong3 make_longlong3(__int64 x, __int64 y, __int64 z); 
#line 159
static __inline ulonglong3 make_ulonglong3(unsigned __int64 x, unsigned __int64 y, unsigned __int64 z); 
#line 161
static __inline longlong4 make_longlong4(__int64 x, __int64 y, __int64 z, __int64 w); 
#line 163
static __inline ulonglong4 make_ulonglong4(unsigned __int64 x, unsigned __int64 y, unsigned __int64 z, unsigned __int64 w); 
#line 165
static __inline double1 make_double1(double x); 
#line 167
static __inline double2 make_double2(double x, double y); 
#line 169
static __inline double3 make_double3(double x, double y, double z); 
#line 171
static __inline double4 make_double4(double x, double y, double z, double w); 
#line 73 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\vector_functions.hpp"
static __inline char1 make_char1(signed char x) 
#line 74
{ 
#line 75
char1 t; (t.x) = x; return t; 
#line 76
} 
#line 78
static __inline uchar1 make_uchar1(unsigned char x) 
#line 79
{ 
#line 80
uchar1 t; (t.x) = x; return t; 
#line 81
} 
#line 83
static __inline char2 make_char2(signed char x, signed char y) 
#line 84
{ 
#line 85
char2 t; (t.x) = x; (t.y) = y; return t; 
#line 86
} 
#line 88
static __inline uchar2 make_uchar2(unsigned char x, unsigned char y) 
#line 89
{ 
#line 90
uchar2 t; (t.x) = x; (t.y) = y; return t; 
#line 91
} 
#line 93
static __inline char3 make_char3(signed char x, signed char y, signed char z) 
#line 94
{ 
#line 95
char3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 96
} 
#line 98
static __inline uchar3 make_uchar3(unsigned char x, unsigned char y, unsigned char z) 
#line 99
{ 
#line 100
uchar3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 101
} 
#line 103
static __inline char4 make_char4(signed char x, signed char y, signed char z, signed char w) 
#line 104
{ 
#line 105
char4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 106
} 
#line 108
static __inline uchar4 make_uchar4(unsigned char x, unsigned char y, unsigned char z, unsigned char w) 
#line 109
{ 
#line 110
uchar4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 111
} 
#line 113
static __inline short1 make_short1(short x) 
#line 114
{ 
#line 115
short1 t; (t.x) = x; return t; 
#line 116
} 
#line 118
static __inline ushort1 make_ushort1(unsigned short x) 
#line 119
{ 
#line 120
ushort1 t; (t.x) = x; return t; 
#line 121
} 
#line 123
static __inline short2 make_short2(short x, short y) 
#line 124
{ 
#line 125
short2 t; (t.x) = x; (t.y) = y; return t; 
#line 126
} 
#line 128
static __inline ushort2 make_ushort2(unsigned short x, unsigned short y) 
#line 129
{ 
#line 130
ushort2 t; (t.x) = x; (t.y) = y; return t; 
#line 131
} 
#line 133
static __inline short3 make_short3(short x, short y, short z) 
#line 134
{ 
#line 135
short3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 136
} 
#line 138
static __inline ushort3 make_ushort3(unsigned short x, unsigned short y, unsigned short z) 
#line 139
{ 
#line 140
ushort3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 141
} 
#line 143
static __inline short4 make_short4(short x, short y, short z, short w) 
#line 144
{ 
#line 145
short4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 146
} 
#line 148
static __inline ushort4 make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w) 
#line 149
{ 
#line 150
ushort4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 151
} 
#line 153
static __inline int1 make_int1(int x) 
#line 154
{ 
#line 155
int1 t; (t.x) = x; return t; 
#line 156
} 
#line 158
static __inline uint1 make_uint1(unsigned x) 
#line 159
{ 
#line 160
uint1 t; (t.x) = x; return t; 
#line 161
} 
#line 163
static __inline int2 make_int2(int x, int y) 
#line 164
{ 
#line 165
int2 t; (t.x) = x; (t.y) = y; return t; 
#line 166
} 
#line 168
static __inline uint2 make_uint2(unsigned x, unsigned y) 
#line 169
{ 
#line 170
uint2 t; (t.x) = x; (t.y) = y; return t; 
#line 171
} 
#line 173
static __inline int3 make_int3(int x, int y, int z) 
#line 174
{ 
#line 175
int3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 176
} 
#line 178
static __inline uint3 make_uint3(unsigned x, unsigned y, unsigned z) 
#line 179
{ 
#line 180
uint3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 181
} 
#line 183
static __inline int4 make_int4(int x, int y, int z, int w) 
#line 184
{ 
#line 185
int4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 186
} 
#line 188
static __inline uint4 make_uint4(unsigned x, unsigned y, unsigned z, unsigned w) 
#line 189
{ 
#line 190
uint4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 191
} 
#line 193
static __inline long1 make_long1(long x) 
#line 194
{ 
#line 195
long1 t; (t.x) = x; return t; 
#line 196
} 
#line 198
static __inline ulong1 make_ulong1(unsigned long x) 
#line 199
{ 
#line 200
ulong1 t; (t.x) = x; return t; 
#line 201
} 
#line 203
static __inline long2 make_long2(long x, long y) 
#line 204
{ 
#line 205
long2 t; (t.x) = x; (t.y) = y; return t; 
#line 206
} 
#line 208
static __inline ulong2 make_ulong2(unsigned long x, unsigned long y) 
#line 209
{ 
#line 210
ulong2 t; (t.x) = x; (t.y) = y; return t; 
#line 211
} 
#line 213
static __inline long3 make_long3(long x, long y, long z) 
#line 214
{ 
#line 215
long3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 216
} 
#line 218
static __inline ulong3 make_ulong3(unsigned long x, unsigned long y, unsigned long z) 
#line 219
{ 
#line 220
ulong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 221
} 
#line 223
static __inline long4 make_long4(long x, long y, long z, long w) 
#line 224
{ 
#line 225
long4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 226
} 
#line 228
static __inline ulong4 make_ulong4(unsigned long x, unsigned long y, unsigned long z, unsigned long w) 
#line 229
{ 
#line 230
ulong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 231
} 
#line 233
static __inline float1 make_float1(float x) 
#line 234
{ 
#line 235
float1 t; (t.x) = x; return t; 
#line 236
} 
#line 238
static __inline float2 make_float2(float x, float y) 
#line 239
{ 
#line 240
float2 t; (t.x) = x; (t.y) = y; return t; 
#line 241
} 
#line 243
static __inline float3 make_float3(float x, float y, float z) 
#line 244
{ 
#line 245
float3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 246
} 
#line 248
static __inline float4 make_float4(float x, float y, float z, float w) 
#line 249
{ 
#line 250
float4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 251
} 
#line 253
static __inline longlong1 make_longlong1(__int64 x) 
#line 254
{ 
#line 255
longlong1 t; (t.x) = x; return t; 
#line 256
} 
#line 258
static __inline ulonglong1 make_ulonglong1(unsigned __int64 x) 
#line 259
{ 
#line 260
ulonglong1 t; (t.x) = x; return t; 
#line 261
} 
#line 263
static __inline longlong2 make_longlong2(__int64 x, __int64 y) 
#line 264
{ 
#line 265
longlong2 t; (t.x) = x; (t.y) = y; return t; 
#line 266
} 
#line 268
static __inline ulonglong2 make_ulonglong2(unsigned __int64 x, unsigned __int64 y) 
#line 269
{ 
#line 270
ulonglong2 t; (t.x) = x; (t.y) = y; return t; 
#line 271
} 
#line 273
static __inline longlong3 make_longlong3(__int64 x, __int64 y, __int64 z) 
#line 274
{ 
#line 275
longlong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 276
} 
#line 278
static __inline ulonglong3 make_ulonglong3(unsigned __int64 x, unsigned __int64 y, unsigned __int64 z) 
#line 279
{ 
#line 280
ulonglong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 281
} 
#line 283
static __inline longlong4 make_longlong4(__int64 x, __int64 y, __int64 z, __int64 w) 
#line 284
{ 
#line 285
longlong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 286
} 
#line 288
static __inline ulonglong4 make_ulonglong4(unsigned __int64 x, unsigned __int64 y, unsigned __int64 z, unsigned __int64 w) 
#line 289
{ 
#line 290
ulonglong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 291
} 
#line 293
static __inline double1 make_double1(double x) 
#line 294
{ 
#line 295
double1 t; (t.x) = x; return t; 
#line 296
} 
#line 298
static __inline double2 make_double2(double x, double y) 
#line 299
{ 
#line 300
double2 t; (t.x) = x; (t.y) = y; return t; 
#line 301
} 
#line 303
static __inline double3 make_double3(double x, double y, double z) 
#line 304
{ 
#line 305
double3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 306
} 
#line 308
static __inline double4 make_double4(double x, double y, double z, double w) 
#line 309
{ 
#line 310
double4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 311
} 
#line 14 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\errno.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727 )
#line 18
__pragma( pack ( push, 8 )) extern "C" {
#line 23
int *__cdecl _errno(); 
#line 26
errno_t __cdecl _set_errno(int _Value); 
#line 27
errno_t __cdecl _get_errno(int * _Value); 
#line 29
unsigned long *__cdecl __doserrno(); 
#line 32
errno_t __cdecl _set_doserrno(unsigned long _Value); 
#line 33
errno_t __cdecl _get_doserrno(unsigned long * _Value); 
#line 134 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\errno.h"
}__pragma( pack ( pop )) 
#line 136
#pragma warning(pop)
#line 12 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\vcruntime_string.h"
#pragma warning(push)
#pragma warning(disable: 4514 4820 )
#line 17
__pragma( pack ( push, 8 )) extern "C" {
#line 21
[[nodiscard]] const void *__cdecl 
#line 22
memchr(const void * _Buf, int _Val, size_t _MaxCount); 
#line 28
[[nodiscard]] int __cdecl 
#line 29
memcmp(const void * _Buf1, const void * _Buf2, size_t _Size); 
#line 43 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\vcruntime_string.h"
void *__cdecl memcpy(void * _Dst, const void * _Src, size_t _Size); 
#line 50
void *__cdecl memmove(void * _Dst, const void * _Src, size_t _Size); 
#line 63 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\vcruntime_string.h"
void *__cdecl memset(void * _Dst, int _Val, size_t _Size); 
#line 69
[[nodiscard]] const char *__cdecl 
#line 70
strchr(const char * _Str, int _Val); 
#line 75
[[nodiscard]] const char *__cdecl 
#line 76
strrchr(const char * _Str, int _Ch); 
#line 81
[[nodiscard]] const char *__cdecl 
#line 82
strstr(const char * _Str, const char * _SubStr); 
#line 87
[[nodiscard]] const __wchar_t *__cdecl 
#line 89
wcschr(const __wchar_t * _Str, __wchar_t _Ch); 
#line 94
[[nodiscard]] const __wchar_t *__cdecl 
#line 95
wcsrchr(const __wchar_t * _Str, __wchar_t _Ch); 
#line 100
[[nodiscard]] const __wchar_t *__cdecl 
#line 102
wcsstr(const __wchar_t * _Str, const __wchar_t * _SubStr); 
#line 109
}__pragma( pack ( pop )) 
#line 113 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\vcruntime_string.h"
#pragma warning(pop)
#line 14 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_memcpy_s.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727 )
#line 18
__pragma( pack ( push, 8 )) extern "C" {
#line 39 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_memcpy_s.h"
static __inline errno_t __cdecl memcpy_s(void *const 
#line 40
_Destination, const rsize_t 
#line 41
_DestinationSize, const void *const 
#line 42
_Source, const rsize_t 
#line 43
_SourceSize) 
#line 45
{ 
#line 46
if (_SourceSize == (0)) 
#line 47
{ 
#line 48
return 0; 
#line 49
}  
#line 51
{ int _Expr_val = !(!(_Destination != (0))); if (!_Expr_val) { (*_errno()) = 22; _invalid_parameter_noinfo(); return 22; }  } ; 
#line 52
if ((_Source == (0)) || (_DestinationSize < _SourceSize)) 
#line 53
{ 
#line 54
memset(_Destination, 0, _DestinationSize); 
#line 56
{ int _Expr_val = !(!(_Source != (0))); if (!_Expr_val) { (*_errno()) = 22; _invalid_parameter_noinfo(); return 22; }  } ; 
#line 57
{ int _Expr_val = !(!(_DestinationSize >= _SourceSize)); if (!_Expr_val) { (*_errno()) = 34; _invalid_parameter_noinfo(); return 34; }  } ; 
#line 60
return 22; 
#line 61
}  
#line 62
memcpy(_Destination, _Source, _SourceSize); 
#line 63
return 0; 
#line 64
} 
#line 67
static __inline errno_t __cdecl memmove_s(void *const 
#line 68
_Destination, const rsize_t 
#line 69
_DestinationSize, const void *const 
#line 70
_Source, const rsize_t 
#line 71
_SourceSize) 
#line 73
{ 
#line 74
if (_SourceSize == (0)) 
#line 75
{ 
#line 76
return 0; 
#line 77
}  
#line 79
{ int _Expr_val = !(!(_Destination != (0))); if (!_Expr_val) { (*_errno()) = 22; _invalid_parameter_noinfo(); return 22; }  } ; 
#line 80
{ int _Expr_val = !(!(_Source != (0))); if (!_Expr_val) { (*_errno()) = 22; _invalid_parameter_noinfo(); return 22; }  } ; 
#line 81
{ int _Expr_val = !(!(_DestinationSize >= _SourceSize)); if (!_Expr_val) { (*_errno()) = 34; _invalid_parameter_noinfo(); return 34; }  } ; 
#line 83
memmove(_Destination, _Source, _SourceSize); 
#line 84
return 0; 
#line 85
} 
#line 93 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_memcpy_s.h"
}
#line 92
#pragma warning(pop)
__pragma( pack ( pop )) 
#line 17 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_memory.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727 )
#line 23
__pragma( pack ( push, 8 )) extern "C" {
#line 28
int __cdecl _memicmp(const void * _Buf1, const void * _Buf2, size_t _Size); 
#line 35
int __cdecl _memicmp_l(const void * _Buf1, const void * _Buf2, size_t _Size, _locale_t _Locale); 
#line 83 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_memory.h"
void *__cdecl memccpy(void * _Dst, const void * _Src, int _Val, size_t _Size); 
#line 91
int __cdecl memicmp(const void * _Buf1, const void * _Buf2, size_t _Size); 
#line 104 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_memory.h"
extern "C++" inline void *__cdecl memchr(void *
#line 105
_Pv, int 
#line 106
_C, size_t 
#line 107
_N) 
#line 109
{ 
#line 110
const void *const _Pvc = _Pv; 
#line 111
return const_cast< void *>(memchr(_Pvc, _C, _N)); 
#line 112
} 
#line 118 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_memory.h"
}__pragma( pack ( pop )) 
#line 122 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_memory.h"
#pragma warning(pop)
#line 14 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wstring.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727 )
#line 20
__pragma( pack ( push, 8 )) extern "C" {
#line 32
errno_t __cdecl wcscat_s(__wchar_t * _Destination, rsize_t _SizeInWords, const __wchar_t * _Source); 
#line 39
errno_t __cdecl wcscpy_s(__wchar_t * _Destination, rsize_t _SizeInWords, const __wchar_t * _Source); 
#line 46
errno_t __cdecl wcsncat_s(__wchar_t * _Destination, rsize_t _SizeInWords, const __wchar_t * _Source, rsize_t _MaxCount); 
#line 54
errno_t __cdecl wcsncpy_s(__wchar_t * _Destination, rsize_t _SizeInWords, const __wchar_t * _Source, rsize_t _MaxCount); 
#line 62
__wchar_t *__cdecl wcstok_s(__wchar_t * _String, const __wchar_t * _Delimiter, __wchar_t ** _Context); 
#line 83 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wstring.h"
__declspec(allocator) __wchar_t *__cdecl _wcsdup(const __wchar_t * _String); 
#line 93 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wstring.h"
extern "C++" {template < size_t _Size > inline errno_t __cdecl wcscat_s ( wchar_t ( & _Destination ) [ _Size ], wchar_t const * _Source ) throw ( ) { return wcscat_s ( _Destination, _Size, _Source ); }}
#line 100 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wstring.h"
__wchar_t *__cdecl wcscat(__wchar_t * _Destination, const __wchar_t * _Source); 
#line 108 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wstring.h"
int __cdecl wcscmp(const __wchar_t * _String1, const __wchar_t * _String2); 
#line 113
extern "C++" {template < size_t _Size > inline errno_t __cdecl wcscpy_s ( wchar_t ( & _Destination ) [ _Size ], wchar_t const * _Source ) throw ( ) { return wcscpy_s ( _Destination, _Size, _Source ); }}
#line 119 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wstring.h"
__wchar_t *__cdecl wcscpy(__wchar_t * _Destination, const __wchar_t * _Source); 
#line 126 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wstring.h"
size_t __cdecl wcscspn(const __wchar_t * _String, const __wchar_t * _Control); 
#line 132
size_t __cdecl wcslen(const __wchar_t * _String); 
#line 145 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wstring.h"
size_t __cdecl wcsnlen(const __wchar_t * _Source, size_t _MaxCount); 
#line 161 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wstring.h"
static __inline size_t __cdecl wcsnlen_s(const __wchar_t *
#line 162
_Source, size_t 
#line 163
_MaxCount) 
#line 165
{ 
#line 166
return (_Source == (0)) ? 0 : wcsnlen(_Source, _MaxCount); 
#line 167
} 
#line 171 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wstring.h"
extern "C++" {template < size_t _Size > inline errno_t __cdecl wcsncat_s ( wchar_t ( & _Destination ) [ _Size ], wchar_t const * _Source, size_t _Count ) throw ( ) { return wcsncat_s ( _Destination, _Size, _Source, _Count ); }}
#line 178 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wstring.h"
__wchar_t *__cdecl wcsncat(__wchar_t * _Destination, const __wchar_t * _Source, size_t _Count); 
#line 187 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wstring.h"
int __cdecl wcsncmp(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount); 
#line 193
extern "C++" {template < size_t _Size > inline errno_t __cdecl wcsncpy_s ( wchar_t ( & _Destination ) [ _Size ], wchar_t const * _Source, size_t _Count ) throw ( ) { return wcsncpy_s ( _Destination, _Size, _Source, _Count ); }}
#line 200 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wstring.h"
__wchar_t *__cdecl wcsncpy(__wchar_t * _Destination, const __wchar_t * _Source, size_t _Count); 
#line 209 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wstring.h"
const __wchar_t *__cdecl wcspbrk(const __wchar_t * _String, const __wchar_t * _Control); 
#line 215
size_t __cdecl wcsspn(const __wchar_t * _String, const __wchar_t * _Control); 
#line 221
__wchar_t *__cdecl wcstok(__wchar_t * _String, const __wchar_t * _Delimiter, __wchar_t ** _Context); 
#line 239 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wstring.h"
static __inline __wchar_t *__cdecl _wcstok(__wchar_t *const 
#line 240
_String, const __wchar_t *const 
#line 241
_Delimiter) 
#line 243
{ 
#line 244
return wcstok(_String, _Delimiter, 0); 
#line 245
} 
#line 253 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wstring.h"
extern "C++" 
#line 252
__declspec(deprecated("wcstok has been changed to conform with the ISO C standard, adding an extra context parameter. To use the legacy Microsoft wcsto" "k, define _CRT_NON_CONFORMING_WCSTOK.")) inline __wchar_t *__cdecl 
#line 253
wcstok(__wchar_t *
#line 254
_String, const __wchar_t *
#line 255
_Delimiter) throw() 
#line 257
{ 
#line 258
return wcstok(_String, _Delimiter, 0); 
#line 259
} 
#line 268 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wstring.h"
__wchar_t *__cdecl _wcserror(int _ErrorNumber); 
#line 273
errno_t __cdecl _wcserror_s(__wchar_t * _Buffer, size_t _SizeInWords, int _ErrorNumber); 
#line 279
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wcserror_s ( wchar_t ( & _Buffer ) [ _Size ], int _Error ) throw ( ) { return _wcserror_s ( _Buffer, _Size, _Error ); }}
#line 288 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wstring.h"
__wchar_t *__cdecl __wcserror(const __wchar_t * _String); 
#line 292
errno_t __cdecl __wcserror_s(__wchar_t * _Buffer, size_t _SizeInWords, const __wchar_t * _ErrorMessage); 
#line 298
extern "C++" {template < size_t _Size > inline errno_t __cdecl __wcserror_s ( wchar_t ( & _Buffer ) [ _Size ], wchar_t const * _ErrorMessage ) throw ( ) { return __wcserror_s ( _Buffer, _Size, _ErrorMessage ); }}
#line 304 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wstring.h"
int __cdecl _wcsicmp(const __wchar_t * _String1, const __wchar_t * _String2); 
#line 309
int __cdecl _wcsicmp_l(const __wchar_t * _String1, const __wchar_t * _String2, _locale_t _Locale); 
#line 315
int __cdecl _wcsnicmp(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount); 
#line 321
int __cdecl _wcsnicmp_l(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 328
errno_t __cdecl _wcsnset_s(__wchar_t * _Destination, size_t _SizeInWords, __wchar_t _Value, size_t _MaxCount); 
#line 335
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wcsnset_s ( wchar_t ( & _Destination ) [ _Size ], wchar_t _Value, size_t _MaxCount ) throw ( ) { return _wcsnset_s ( _Destination, _Size, _Value, _MaxCount ); }}
#line 342 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wstring.h"
__wchar_t *__cdecl _wcsnset(__wchar_t * _String, __wchar_t _Value, size_t _MaxCount); 
#line 350 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wstring.h"
__wchar_t *__cdecl _wcsrev(__wchar_t * _String); 
#line 354
errno_t __cdecl _wcsset_s(__wchar_t * _Destination, size_t _SizeInWords, __wchar_t _Value); 
#line 360
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wcsset_s ( wchar_t ( & _String ) [ _Size ], wchar_t _Value ) throw ( ) { return _wcsset_s ( _String, _Size, _Value ); }}
#line 366 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wstring.h"
__wchar_t *__cdecl _wcsset(__wchar_t * _String, __wchar_t _Value); 
#line 373 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wstring.h"
errno_t __cdecl _wcslwr_s(__wchar_t * _String, size_t _SizeInWords); 
#line 378
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wcslwr_s ( wchar_t ( & _String ) [ _Size ] ) throw ( ) { return _wcslwr_s ( _String, _Size ); }}
#line 383 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wstring.h"
__wchar_t *__cdecl _wcslwr(__wchar_t * _String); 
#line 389 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wstring.h"
errno_t __cdecl _wcslwr_s_l(__wchar_t * _String, size_t _SizeInWords, _locale_t _Locale); 
#line 395
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wcslwr_s_l ( wchar_t ( & _String ) [ _Size ], _locale_t _Locale ) throw ( ) { return _wcslwr_s_l ( _String, _Size, _Locale ); }}
#line 401 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wstring.h"
__wchar_t *__cdecl _wcslwr_l(__wchar_t * _String, _locale_t _Locale); 
#line 409 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wstring.h"
errno_t __cdecl _wcsupr_s(__wchar_t * _String, size_t _Size); 
#line 414
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wcsupr_s ( wchar_t ( & _String ) [ _Size ] ) throw ( ) { return _wcsupr_s ( _String, _Size ); }}
#line 419 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wstring.h"
__wchar_t *__cdecl _wcsupr(__wchar_t * _String); 
#line 425 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wstring.h"
errno_t __cdecl _wcsupr_s_l(__wchar_t * _String, size_t _Size, _locale_t _Locale); 
#line 431
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wcsupr_s_l ( wchar_t ( & _String ) [ _Size ], _locale_t _Locale ) throw ( ) { return _wcsupr_s_l ( _String, _Size, _Locale ); }}
#line 437 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wstring.h"
__wchar_t *__cdecl _wcsupr_l(__wchar_t * _String, _locale_t _Locale); 
#line 446 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wstring.h"
size_t __cdecl wcsxfrm(__wchar_t * _Destination, const __wchar_t * _Source, size_t _MaxCount); 
#line 454
size_t __cdecl _wcsxfrm_l(__wchar_t * _Destination, const __wchar_t * _Source, size_t _MaxCount, _locale_t _Locale); 
#line 462
int __cdecl wcscoll(const __wchar_t * _String1, const __wchar_t * _String2); 
#line 468
int __cdecl _wcscoll_l(const __wchar_t * _String1, const __wchar_t * _String2, _locale_t _Locale); 
#line 475
int __cdecl _wcsicoll(const __wchar_t * _String1, const __wchar_t * _String2); 
#line 481
int __cdecl _wcsicoll_l(const __wchar_t * _String1, const __wchar_t * _String2, _locale_t _Locale); 
#line 488
int __cdecl _wcsncoll(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount); 
#line 495
int __cdecl _wcsncoll_l(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 503
int __cdecl _wcsnicoll(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount); 
#line 510
int __cdecl _wcsnicoll_l(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 525
extern "C++" {
#line 529
inline __wchar_t *__cdecl wcschr(__wchar_t *_String, __wchar_t _C) 
#line 530
{ 
#line 531
return const_cast< __wchar_t *>(wcschr(static_cast< const __wchar_t *>(_String), _C)); 
#line 532
} 
#line 535
inline __wchar_t *__cdecl wcspbrk(__wchar_t *_String, const __wchar_t *_Control) 
#line 536
{ 
#line 537
return const_cast< __wchar_t *>(wcspbrk(static_cast< const __wchar_t *>(_String), _Control)); 
#line 538
} 
#line 541
inline __wchar_t *__cdecl wcsrchr(__wchar_t *_String, __wchar_t _C) 
#line 542
{ 
#line 543
return const_cast< __wchar_t *>(wcsrchr(static_cast< const __wchar_t *>(_String), _C)); 
#line 544
} 
#line 548
inline __wchar_t *__cdecl wcsstr(__wchar_t *_String, const __wchar_t *_SubStr) 
#line 549
{ 
#line 550
return const_cast< __wchar_t *>(wcsstr(static_cast< const __wchar_t *>(_String), _SubStr)); 
#line 551
} 
#line 553
}
#line 570 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wstring.h"
__wchar_t *__cdecl wcsdup(const __wchar_t * _String); 
#line 582 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wstring.h"
int __cdecl wcsicmp(const __wchar_t * _String1, const __wchar_t * _String2); 
#line 588
int __cdecl wcsnicmp(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount); 
#line 596
__wchar_t *__cdecl wcsnset(__wchar_t * _String, __wchar_t _Value, size_t _MaxCount); 
#line 604
__wchar_t *__cdecl wcsrev(__wchar_t * _String); 
#line 610
__wchar_t *__cdecl wcsset(__wchar_t * _String, __wchar_t _Value); 
#line 617
__wchar_t *__cdecl wcslwr(__wchar_t * _String); 
#line 623
__wchar_t *__cdecl wcsupr(__wchar_t * _String); 
#line 628
int __cdecl wcsicoll(const __wchar_t * _String1, const __wchar_t * _String2); 
#line 637 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wstring.h"
}__pragma( pack ( pop )) 
#line 641 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wstring.h"
#pragma warning(pop)
#line 19 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\string.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727 )
#line 23
__pragma( pack ( push, 8 )) extern "C" {
#line 32
errno_t __cdecl strcpy_s(char * _Destination, rsize_t _SizeInBytes, const char * _Source); 
#line 39
errno_t __cdecl strcat_s(char * _Destination, rsize_t _SizeInBytes, const char * _Source); 
#line 46
errno_t __cdecl strerror_s(char * _Buffer, size_t _SizeInBytes, int _ErrorNumber); 
#line 52
errno_t __cdecl strncat_s(char * _Destination, rsize_t _SizeInBytes, const char * _Source, rsize_t _MaxCount); 
#line 60
errno_t __cdecl strncpy_s(char * _Destination, rsize_t _SizeInBytes, const char * _Source, rsize_t _MaxCount); 
#line 68
char *__cdecl strtok_s(char * _String, const char * _Delimiter, char ** _Context); 
#line 76 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\string.h"
void *__cdecl _memccpy(void * _Dst, const void * _Src, int _Val, size_t _MaxCount); 
#line 83
extern "C++" {template < size_t _Size > inline errno_t __cdecl strcat_s ( char ( & _Destination ) [ _Size ], char const * _Source ) throw ( ) { return strcat_s ( _Destination, _Size, _Source ); }}
#line 91 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\string.h"
char *__cdecl strcat(char * _Destination, const char * _Source); 
#line 100 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\string.h"
int __cdecl strcmp(const char * _Str1, const char * _Str2); 
#line 106
int __cdecl _strcmpi(const char * _String1, const char * _String2); 
#line 112
int __cdecl strcoll(const char * _String1, const char * _String2); 
#line 118
int __cdecl _strcoll_l(const char * _String1, const char * _String2, _locale_t _Locale); 
#line 124
extern "C++" {template < size_t _Size > inline errno_t __cdecl strcpy_s ( char ( & _Destination ) [ _Size ], char const * _Source ) throw ( ) { return strcpy_s ( _Destination, _Size, _Source ); }}
#line 130 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\string.h"
char *__cdecl strcpy(char * _Destination, const char * _Source); 
#line 137 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\string.h"
size_t __cdecl strcspn(const char * _Str, const char * _Control); 
#line 148 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\string.h"
__declspec(allocator) char *__cdecl _strdup(const char * _Source); 
#line 159 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\string.h"
char *__cdecl _strerror(const char * _ErrorMessage); 
#line 164
errno_t __cdecl _strerror_s(char * _Buffer, size_t _SizeInBytes, const char * _ErrorMessage); 
#line 170
extern "C++" {template < size_t _Size > inline errno_t __cdecl _strerror_s ( char ( & _Buffer ) [ _Size ], char const * _ErrorMessage ) throw ( ) { return _strerror_s ( _Buffer, _Size, _ErrorMessage ); }}
#line 178 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\string.h"
char *__cdecl strerror(int _ErrorMessage); 
#line 182
extern "C++" {template < size_t _Size > inline errno_t __cdecl strerror_s ( char ( & _Buffer ) [ _Size ], int _ErrorMessage ) throw ( ) { return strerror_s ( _Buffer, _Size, _ErrorMessage ); }}
#line 189 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\string.h"
int __cdecl _stricmp(const char * _String1, const char * _String2); 
#line 195
int __cdecl _stricoll(const char * _String1, const char * _String2); 
#line 201
int __cdecl _stricoll_l(const char * _String1, const char * _String2, _locale_t _Locale); 
#line 208
int __cdecl _stricmp_l(const char * _String1, const char * _String2, _locale_t _Locale); 
#line 215
size_t __cdecl strlen(const char * _Str); 
#line 220
errno_t __cdecl _strlwr_s(char * _String, size_t _Size); 
#line 225
extern "C++" {template < size_t _Size > inline errno_t __cdecl _strlwr_s ( char ( & _String ) [ _Size ] ) throw ( ) { return _strlwr_s ( _String, _Size ); }}
#line 230 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\string.h"
char *__cdecl _strlwr(char * _String); 
#line 236 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\string.h"
errno_t __cdecl _strlwr_s_l(char * _String, size_t _Size, _locale_t _Locale); 
#line 242
extern "C++" {template < size_t _Size > inline errno_t __cdecl _strlwr_s_l ( char ( & _String ) [ _Size ], _locale_t _Locale ) throw ( ) { return _strlwr_s_l ( _String, _Size, _Locale ); }}
#line 248 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\string.h"
char *__cdecl _strlwr_l(char * _String, _locale_t _Locale); 
#line 255 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\string.h"
extern "C++" {template < size_t _Size > inline errno_t __cdecl strncat_s ( char ( & _Destination ) [ _Size ], char const * _Source, size_t _Count ) throw ( ) { return strncat_s ( _Destination, _Size, _Source, _Count ); }}
#line 262 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\string.h"
char *__cdecl strncat(char * _Destination, const char * _Source, size_t _Count); 
#line 271 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\string.h"
int __cdecl strncmp(const char * _Str1, const char * _Str2, size_t _MaxCount); 
#line 278
int __cdecl _strnicmp(const char * _String1, const char * _String2, size_t _MaxCount); 
#line 285
int __cdecl _strnicmp_l(const char * _String1, const char * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 293
int __cdecl _strnicoll(const char * _String1, const char * _String2, size_t _MaxCount); 
#line 300
int __cdecl _strnicoll_l(const char * _String1, const char * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 308
int __cdecl _strncoll(const char * _String1, const char * _String2, size_t _MaxCount); 
#line 315
int __cdecl _strncoll_l(const char * _String1, const char * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 322
size_t __cdecl __strncnt(const char * _String, size_t _Count); 
#line 327
extern "C++" {template < size_t _Size > inline errno_t __cdecl strncpy_s ( char ( & _Destination ) [ _Size ], char const * _Source, size_t _Count ) throw ( ) { return strncpy_s ( _Destination, _Size, _Source, _Count ); }}
#line 334 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\string.h"
char *__cdecl strncpy(char * _Destination, const char * _Source, size_t _Count); 
#line 351 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\string.h"
size_t __cdecl strnlen(const char * _String, size_t _MaxCount); 
#line 367 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\string.h"
static __inline size_t __cdecl strnlen_s(const char *
#line 368
_String, size_t 
#line 369
_MaxCount) 
#line 371
{ 
#line 372
return (_String == (0)) ? 0 : strnlen(_String, _MaxCount); 
#line 373
} 
#line 378 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\string.h"
errno_t __cdecl _strnset_s(char * _String, size_t _SizeInBytes, int _Value, size_t _MaxCount); 
#line 385
extern "C++" {template < size_t _Size > inline errno_t __cdecl _strnset_s ( char ( & _Destination ) [ _Size ], int _Value, size_t _Count ) throw ( ) { return _strnset_s ( _Destination, _Size, _Value, _Count ); }}
#line 392 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\string.h"
char *__cdecl _strnset(char * _Destination, int _Value, size_t _Count); 
#line 401 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\string.h"
const char *__cdecl strpbrk(const char * _Str, const char * _Control); 
#line 406
char *__cdecl _strrev(char * _Str); 
#line 411
errno_t __cdecl _strset_s(char * _Destination, size_t _DestinationSize, int _Value); 
#line 417
extern "C++" {template < size_t _Size > inline errno_t __cdecl _strset_s ( char ( & _Destination ) [ _Size ], int _Value ) throw ( ) { return _strset_s ( _Destination, _Size, _Value ); }}
#line 423 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\string.h"
char *__cdecl _strset(char * _Destination, int _Value); 
#line 430 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\string.h"
size_t __cdecl strspn(const char * _Str, const char * _Control); 
#line 436
char *__cdecl strtok(char * _String, const char * _Delimiter); 
#line 442
errno_t __cdecl _strupr_s(char * _String, size_t _Size); 
#line 447
extern "C++" {template < size_t _Size > inline errno_t __cdecl _strupr_s ( char ( & _String ) [ _Size ] ) throw ( ) { return _strupr_s ( _String, _Size ); }}
#line 452 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\string.h"
char *__cdecl _strupr(char * _String); 
#line 458 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\string.h"
errno_t __cdecl _strupr_s_l(char * _String, size_t _Size, _locale_t _Locale); 
#line 464
extern "C++" {template < size_t _Size > inline errno_t __cdecl _strupr_s_l ( char ( & _String ) [ _Size ], _locale_t _Locale ) throw ( ) { return _strupr_s_l ( _String, _Size, _Locale ); }}
#line 470 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\string.h"
char *__cdecl _strupr_l(char * _String, _locale_t _Locale); 
#line 479 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\string.h"
size_t __cdecl strxfrm(char * _Destination, const char * _Source, size_t _MaxCount); 
#line 487
size_t __cdecl _strxfrm_l(char * _Destination, const char * _Source, size_t _MaxCount, _locale_t _Locale); 
#line 497
extern "C++" {
#line 500
inline char *__cdecl strchr(char *const _String, const int _Ch) 
#line 501
{ 
#line 502
return const_cast< char *>(strchr(static_cast< const char *>(_String), _Ch)); 
#line 503
} 
#line 506
inline char *__cdecl strpbrk(char *const _String, const char *const _Control) 
#line 507
{ 
#line 508
return const_cast< char *>(strpbrk(static_cast< const char *>(_String), _Control)); 
#line 509
} 
#line 512
inline char *__cdecl strrchr(char *const _String, const int _Ch) 
#line 513
{ 
#line 514
return const_cast< char *>(strrchr(static_cast< const char *>(_String), _Ch)); 
#line 515
} 
#line 518
inline char *__cdecl strstr(char *const _String, const char *const _SubString) 
#line 519
{ 
#line 520
return const_cast< char *>(strstr(static_cast< const char *>(_String), _SubString)); 
#line 521
} 
#line 522
}
#line 532 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\string.h"
char *__cdecl strdup(const char * _String); 
#line 539
int __cdecl strcmpi(const char * _String1, const char * _String2); 
#line 545
int __cdecl stricmp(const char * _String1, const char * _String2); 
#line 551
char *__cdecl strlwr(char * _String); 
#line 556
int __cdecl strnicmp(const char * _String1, const char * _String2, size_t _MaxCount); 
#line 563
char *__cdecl strnset(char * _String, int _Value, size_t _MaxCount); 
#line 570
char *__cdecl strrev(char * _String); 
#line 575
char *__cdecl strset(char * _String, int _Value); 
#line 580
char *__cdecl strupr(char * _String); 
#line 588 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\string.h"
}__pragma( pack ( pop )) 
#line 590
#pragma warning(pop)
#line 13 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wtime.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727 )
#line 17
__pragma( pack ( push, 8 )) extern "C" {
#line 26
struct tm { 
#line 28
int tm_sec; 
#line 29
int tm_min; 
#line 30
int tm_hour; 
#line 31
int tm_mday; 
#line 32
int tm_mon; 
#line 33
int tm_year; 
#line 34
int tm_wday; 
#line 35
int tm_yday; 
#line 36
int tm_isdst; 
#line 37
}; 
#line 48
__wchar_t *__cdecl _wasctime(const tm * _Tm); 
#line 54
errno_t __cdecl _wasctime_s(__wchar_t * _Buffer, size_t _SizeInWords, const tm * _Tm); 
#line 60
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wasctime_s ( wchar_t ( & _Buffer ) [ _Size ], struct tm const * _Time ) throw ( ) { return _wasctime_s ( _Buffer, _Size, _Time ); }}
#line 69 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wtime.h"
size_t __cdecl wcsftime(__wchar_t * _Buffer, size_t _SizeInWords, const __wchar_t * _Format, const tm * _Tm); 
#line 78
size_t __cdecl _wcsftime_l(__wchar_t * _Buffer, size_t _SizeInWords, const __wchar_t * _Format, const tm * _Tm, _locale_t _Locale); 
#line 88
__wchar_t *__cdecl _wctime32(const __time32_t * _Time); 
#line 93
errno_t __cdecl _wctime32_s(__wchar_t * _Buffer, size_t _SizeInWords, const __time32_t * _Time); 
#line 99
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wctime32_s ( wchar_t ( & _Buffer ) [ _Size ], __time32_t const * _Time ) throw ( ) { return _wctime32_s ( _Buffer, _Size, _Time ); }}
#line 108 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wtime.h"
__wchar_t *__cdecl _wctime64(const __time64_t * _Time); 
#line 113
errno_t __cdecl _wctime64_s(__wchar_t * _Buffer, size_t _SizeInWords, const __time64_t * _Time); 
#line 118
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wctime64_s ( wchar_t ( & _Buffer ) [ _Size ], __time64_t const * _Time ) throw ( ) { return _wctime64_s ( _Buffer, _Size, _Time ); }}
#line 125 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wtime.h"
errno_t __cdecl _wstrdate_s(__wchar_t * _Buffer, size_t _SizeInWords); 
#line 130
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wstrdate_s ( wchar_t ( & _Buffer ) [ _Size ] ) throw ( ) { return _wstrdate_s ( _Buffer, _Size ); }}
#line 135 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wtime.h"
__wchar_t *__cdecl _wstrdate(__wchar_t * _Buffer); 
#line 141 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wtime.h"
errno_t __cdecl _wstrtime_s(__wchar_t * _Buffer, size_t _SizeInWords); 
#line 146
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wstrtime_s ( wchar_t ( & _Buffer ) [ _Size ] ) throw ( ) { return _wstrtime_s ( _Buffer, _Size ); }}
#line 151 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wtime.h"
__wchar_t *__cdecl _wstrtime(__wchar_t * _Buffer); 
#line 186 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wtime.h"
static __inline __wchar_t *__cdecl _wctime(const time_t *const 
#line 187
_Time) 
#line 188
{ 
#line 189
return _wctime64(_Time); 
#line 190
} 
#line 193
static __inline errno_t __cdecl _wctime_s(__wchar_t *const 
#line 194
_Buffer, const size_t 
#line 195
_SizeInWords, const time_t *const 
#line 196
_Time) 
#line 198
{ 
#line 199
return _wctime64_s(_Buffer, _SizeInWords, _Time); 
#line 200
} 
#line 205 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_wtime.h"
}__pragma( pack ( pop )) 
#line 207
#pragma warning(pop)
#line 15 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\time.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727 )
#line 19
__pragma( pack ( push, 8 )) extern "C" {
#line 28
typedef long clock_t; 
#line 30
struct _timespec32 { 
#line 32
__time32_t tv_sec; 
#line 33
long tv_nsec; 
#line 34
}; 
#line 36
struct _timespec64 { 
#line 38
__time64_t tv_sec; 
#line 39
long tv_nsec; 
#line 40
}; 
#line 43
struct timespec { 
#line 45
time_t tv_sec; 
#line 46
long tv_nsec; 
#line 47
}; 
#line 66 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\time.h"
int *__cdecl __daylight(); 
#line 72
long *__cdecl __dstbias(); 
#line 78
long *__cdecl __timezone(); 
#line 84
char **__cdecl __tzname(); 
#line 89
errno_t __cdecl _get_daylight(int * _Daylight); 
#line 94
errno_t __cdecl _get_dstbias(long * _DaylightSavingsBias); 
#line 99
errno_t __cdecl _get_timezone(long * _TimeZone); 
#line 104
errno_t __cdecl _get_tzname(size_t * _ReturnValue, char * _Buffer, size_t _SizeInBytes, int _Index); 
#line 121
char *__cdecl asctime(const tm * _Tm); 
#line 128
errno_t __cdecl asctime_s(char * _Buffer, size_t _SizeInBytes, const tm * _Tm); 
#line 135 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\time.h"
extern "C++" {template < size_t _Size > inline errno_t __cdecl asctime_s ( char ( & _Buffer ) [ _Size ], struct tm const * _Time ) throw ( ) { return asctime_s ( _Buffer, _Size, _Time ); }}
#line 142 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\time.h"
clock_t __cdecl clock(); 
#line 147
char *__cdecl _ctime32(const __time32_t * _Time); 
#line 152
errno_t __cdecl _ctime32_s(char * _Buffer, size_t _SizeInBytes, const __time32_t * _Time); 
#line 158
extern "C++" {template < size_t _Size > inline errno_t __cdecl _ctime32_s ( char ( & _Buffer ) [ _Size ], __time32_t const * _Time ) throw ( ) { return _ctime32_s ( _Buffer, _Size, _Time ); }}
#line 167 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\time.h"
char *__cdecl _ctime64(const __time64_t * _Time); 
#line 172
errno_t __cdecl _ctime64_s(char * _Buffer, size_t _SizeInBytes, const __time64_t * _Time); 
#line 178
extern "C++" {template < size_t _Size > inline errno_t __cdecl _ctime64_s ( char ( & _Buffer ) [ _Size ], __time64_t const * _Time ) throw ( ) { return _ctime64_s ( _Buffer, _Size, _Time ); }}
#line 185 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\time.h"
double __cdecl _difftime32(__time32_t _Time1, __time32_t _Time2); 
#line 191
double __cdecl _difftime64(__time64_t _Time1, __time64_t _Time2); 
#line 198
tm *__cdecl _gmtime32(const __time32_t * _Time); 
#line 203
errno_t __cdecl _gmtime32_s(tm * _Tm, const __time32_t * _Time); 
#line 210
tm *__cdecl _gmtime64(const __time64_t * _Time); 
#line 215
errno_t __cdecl _gmtime64_s(tm * _Tm, const __time64_t * _Time); 
#line 222
tm *__cdecl _localtime32(const __time32_t * _Time); 
#line 227
errno_t __cdecl _localtime32_s(tm * _Tm, const __time32_t * _Time); 
#line 234
tm *__cdecl _localtime64(const __time64_t * _Time); 
#line 239
errno_t __cdecl _localtime64_s(tm * _Tm, const __time64_t * _Time); 
#line 245
__time32_t __cdecl _mkgmtime32(tm * _Tm); 
#line 250
__time64_t __cdecl _mkgmtime64(tm * _Tm); 
#line 255
__time32_t __cdecl _mktime32(tm * _Tm); 
#line 260
__time64_t __cdecl _mktime64(tm * _Tm); 
#line 266
size_t __cdecl strftime(char * _Buffer, size_t _SizeInBytes, const char * _Format, const tm * _Tm); 
#line 275
size_t __cdecl _strftime_l(char * _Buffer, size_t _MaxSize, const char * _Format, const tm * _Tm, _locale_t _Locale); 
#line 284
errno_t __cdecl _strdate_s(char * _Buffer, size_t _SizeInBytes); 
#line 289
extern "C++" {template < size_t _Size > inline errno_t __cdecl _strdate_s ( char ( & _Buffer ) [ _Size ] ) throw ( ) { return _strdate_s ( _Buffer, _Size ); }}
#line 294 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\time.h"
char *__cdecl _strdate(char * _Buffer); 
#line 300 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\time.h"
errno_t __cdecl _strtime_s(char * _Buffer, size_t _SizeInBytes); 
#line 305
extern "C++" {template < size_t _Size > inline errno_t __cdecl _strtime_s ( char ( & _Buffer ) [ _Size ] ) throw ( ) { return _strtime_s ( _Buffer, _Size ); }}
#line 310 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\time.h"
char *__cdecl _strtime(char * _Buffer); 
#line 315 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\time.h"
__time32_t __cdecl _time32(__time32_t * _Time); 
#line 319
__time64_t __cdecl _time64(__time64_t * _Time); 
#line 325
int __cdecl _timespec32_get(_timespec32 * _Ts, int _Base); 
#line 332
int __cdecl _timespec64_get(_timespec64 * _Ts, int _Base); 
#line 346
void __cdecl _tzset(); 
#line 349
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using GetLocalTime in" "stead. See online help for details.")) unsigned __cdecl 
#line 350
_getsystime(tm * _Tm); 
#line 354
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using SetLocalTime in" "stead. See online help for details.")) unsigned __cdecl 
#line 355
_setsystime(tm * _Tm, unsigned _Milliseconds); 
#line 471 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\time.h"
static __inline char *__cdecl ctime(const time_t *const 
#line 472
_Time) 
#line 474
{ 
#line 475
return _ctime64(_Time); 
#line 476
} 
#line 479
static __inline double __cdecl difftime(const time_t 
#line 480
_Time1, const time_t 
#line 481
_Time2) 
#line 483
{ 
#line 484
return _difftime64(_Time1, _Time2); 
#line 485
} 
#line 488
static __inline tm *__cdecl gmtime(const time_t *const 
#line 489
_Time) 
#line 490
{ 
#line 491
return _gmtime64(_Time); 
#line 492
} 
#line 495
static __inline tm *__cdecl localtime(const time_t *const 
#line 496
_Time) 
#line 498
{ 
#line 499
return _localtime64(_Time); 
#line 500
} 
#line 503
static __inline time_t __cdecl _mkgmtime(tm *const 
#line 504
_Tm) 
#line 506
{ 
#line 507
return _mkgmtime64(_Tm); 
#line 508
} 
#line 511
static __inline time_t __cdecl mktime(tm *const 
#line 512
_Tm) 
#line 514
{ 
#line 515
return _mktime64(_Tm); 
#line 516
} 
#line 518
static __inline time_t __cdecl time(time_t *const 
#line 519
_Time) 
#line 521
{ 
#line 522
return _time64(_Time); 
#line 523
} 
#line 526
static __inline int __cdecl timespec_get(timespec *const 
#line 527
_Ts, const int 
#line 528
_Base) 
#line 530
{ 
#line 531
return _timespec64_get((_timespec64 *)_Ts, _Base); 
#line 532
} 
#line 536
static __inline errno_t __cdecl ctime_s(char *const 
#line 537
_Buffer, const size_t 
#line 538
_SizeInBytes, const time_t *const 
#line 539
_Time) 
#line 541
{ 
#line 542
return _ctime64_s(_Buffer, _SizeInBytes, _Time); 
#line 543
} 
#line 546
static __inline errno_t __cdecl gmtime_s(tm *const 
#line 547
_Tm, const time_t *const 
#line 548
_Time) 
#line 550
{ 
#line 551
return _gmtime64_s(_Tm, _Time); 
#line 552
} 
#line 555
static __inline errno_t __cdecl localtime_s(tm *const 
#line 556
_Tm, const time_t *const 
#line 557
_Time) 
#line 559
{ 
#line 560
return _localtime64_s(_Tm, _Time); 
#line 561
} 
#line 580 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\time.h"
void __cdecl tzset(); 
#line 587 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\time.h"
}__pragma( pack ( pop )) 
#line 589
#pragma warning(pop)
#line 88 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt/common_functions.h"
extern "C" {
#line 91 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt/common_functions.h"
extern clock_t __cdecl clock(); 
#line 96 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt/common_functions.h"
extern void *__cdecl memset(void *, int, size_t); 
#line 97
extern void *__cdecl memcpy(void *, const void *, size_t); 
#line 99
}
#line 124 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern "C" {
#line 222 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern int __cdecl abs(int a); 
#line 230
extern long __cdecl labs(long a); 
#line 238
extern __int64 llabs(__int64 a); 
#line 288 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern double __cdecl fabs(double x); 
#line 331
extern __inline float fabsf(float x); 
#line 341 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern inline int min(const int a, const int b); 
#line 348
extern inline unsigned umin(const unsigned a, const unsigned b); 
#line 355
extern inline __int64 llmin(const __int64 a, const __int64 b); 
#line 362
extern inline unsigned __int64 ullmin(const unsigned __int64 a, const unsigned __int64 b); 
#line 385 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern float __cdecl fminf(float x, float y); 
#line 405 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern double __cdecl fmin(double x, double y); 
#line 416 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern inline int max(const int a, const int b); 
#line 424
extern inline unsigned umax(const unsigned a, const unsigned b); 
#line 431
extern inline __int64 llmax(const __int64 a, const __int64 b); 
#line 438
extern inline unsigned __int64 ullmax(const unsigned __int64 a, const unsigned __int64 b); 
#line 461 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern float __cdecl fmaxf(float x, float y); 
#line 481 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern double __cdecl fmax(double, double); 
#line 523 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern double __cdecl sin(double x); 
#line 556
extern double __cdecl cos(double x); 
#line 575 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern void sincos(double x, double * sptr, double * cptr); 
#line 591
extern void sincosf(float x, float * sptr, float * cptr); 
#line 636 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern double __cdecl tan(double x); 
#line 705
extern double __cdecl sqrt(double x); 
#line 777 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern double rsqrt(double x); 
#line 847
extern float rsqrtf(float x); 
#line 905 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern double __cdecl log2(double x); 
#line 970 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern double __cdecl exp2(double x); 
#line 1035 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern float __cdecl exp2f(float x); 
#line 1100 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern double exp10(double x); 
#line 1163
extern float exp10f(float x); 
#line 1258 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern double __cdecl expm1(double x); 
#line 1350 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern float __cdecl expm1f(float x); 
#line 1406 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern float __cdecl log2f(float x); 
#line 1458 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern double __cdecl log10(double x); 
#line 1528
extern double __cdecl log(double x); 
#line 1626 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern double __cdecl log1p(double x); 
#line 1725 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern float __cdecl log1pf(float x); 
#line 1787 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern double __cdecl floor(double x); 
#line 1866
extern double __cdecl exp(double x); 
#line 1907
extern double __cdecl cosh(double x); 
#line 1957
extern double __cdecl sinh(double x); 
#line 2007
extern double __cdecl tanh(double x); 
#line 2064 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern double __cdecl acosh(double x); 
#line 2122 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern float __cdecl acoshf(float x); 
#line 2175 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern double __cdecl asinh(double x); 
#line 2228 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern float __cdecl asinhf(float x); 
#line 2282 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern double __cdecl atanh(double x); 
#line 2336 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern float __cdecl atanhf(float x); 
#line 2383 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern double __cdecl ldexp(double x, int exp); 
#line 2429
extern __inline float ldexpf(float x, int exp); 
#line 2483 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern double __cdecl logb(double x); 
#line 2538 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern float __cdecl logbf(float x); 
#line 2578 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern int __cdecl ilogb(double x); 
#line 2618 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern int __cdecl ilogbf(float x); 
#line 2694 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern double __cdecl scalbn(double x, int n); 
#line 2770 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern float __cdecl scalbnf(float x, int n); 
#line 2846 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern double __cdecl scalbln(double x, long n); 
#line 2922 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern float __cdecl scalblnf(float x, long n); 
#line 2997 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern double __cdecl frexp(double x, int * nptr); 
#line 3071
extern __inline float frexpf(float x, int * nptr); 
#line 3125 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern double __cdecl round(double x); 
#line 3180 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern float __cdecl roundf(float x); 
#line 3198 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern long __cdecl lround(double x); 
#line 3216 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern long __cdecl lroundf(float x); 
#line 3234 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern __int64 __cdecl llround(double x); 
#line 3252 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern __int64 __cdecl llroundf(float x); 
#line 3380 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern float __cdecl rintf(float x); 
#line 3397 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern long __cdecl lrint(double x); 
#line 3414 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern long __cdecl lrintf(float x); 
#line 3431 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern __int64 __cdecl llrint(double x); 
#line 3448 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern __int64 __cdecl llrintf(float x); 
#line 3501 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern double __cdecl nearbyint(double x); 
#line 3554 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern float __cdecl nearbyintf(float x); 
#line 3614 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern double __cdecl ceil(double x); 
#line 3666 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern double __cdecl trunc(double x); 
#line 3719 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern float __cdecl truncf(float x); 
#line 3745 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern double __cdecl fdim(double x, double y); 
#line 3771 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern float __cdecl fdimf(float x, float y); 
#line 4069 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern double __cdecl atan2(double y, double x); 
#line 4140
extern double __cdecl atan(double x); 
#line 4163
extern double __cdecl acos(double x); 
#line 4214
extern double __cdecl asin(double x); 
#line 4279 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern double __cdecl hypot(double x, double y); 
#line 4403 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
static __inline float __cdecl hypotf(float x, float y); 
#line 5193 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern double __cdecl cbrt(double x); 
#line 5279 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern float __cdecl cbrtf(float x); 
#line 5332 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern double rcbrt(double x); 
#line 5382
extern float rcbrtf(float x); 
#line 5442
extern double sinpi(double x); 
#line 5502
extern float sinpif(float x); 
#line 5554
extern double cospi(double x); 
#line 5606
extern float cospif(float x); 
#line 5636
extern void sincospi(double x, double * sptr, double * cptr); 
#line 5666
extern void sincospif(float x, float * sptr, float * cptr); 
#line 5999 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern double __cdecl pow(double x, double y); 
#line 6055
extern double __cdecl modf(double x, double * iptr); 
#line 6114
extern double __cdecl fmod(double x, double y); 
#line 6212 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern double __cdecl remainder(double x, double y); 
#line 6311 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern float __cdecl remainderf(float x, float y); 
#line 6383 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern double __cdecl remquo(double x, double y, int * quo); 
#line 6455 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern float __cdecl remquof(float x, float y, int * quo); 
#line 6494 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern double __cdecl j0(double x); 
#line 6536 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern float j0f(float x); 
#line 6605 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern double __cdecl j1(double x); 
#line 6674 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern float j1f(float x); 
#line 6717 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern double __cdecl jn(int n, double x); 
#line 6760 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern float jnf(int n, float x); 
#line 6821 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern double __cdecl y0(double x); 
#line 6882 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern float y0f(float x); 
#line 6943 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern double __cdecl y1(double x); 
#line 7004 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern float y1f(float x); 
#line 7067 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern double __cdecl yn(int n, double x); 
#line 7130 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern float ynf(int n, float x); 
#line 7321 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern double __cdecl erf(double x); 
#line 7403 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern float __cdecl erff(float x); 
#line 7473 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern double erfinv(double x); 
#line 7538
extern float erfinvf(float x); 
#line 7579 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern double __cdecl erfc(double x); 
#line 7617 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern float __cdecl erfcf(float x); 
#line 7734 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern double __cdecl lgamma(double x); 
#line 7794 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern double erfcinv(double x); 
#line 7849
extern float erfcinvf(float x); 
#line 7917
extern double normcdfinv(double x); 
#line 7985
extern float normcdfinvf(float x); 
#line 8028
extern double normcdf(double x); 
#line 8071
extern float normcdff(float x); 
#line 8135
extern double erfcx(double x); 
#line 8199
extern float erfcxf(float x); 
#line 8320 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern float __cdecl lgammaf(float x); 
#line 8418 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern double __cdecl tgamma(double x); 
#line 8516 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern float __cdecl tgammaf(float x); 
#line 8529 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern double __cdecl copysign(double x, double y); 
#line 8542 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern float __cdecl copysignf(float x, float y); 
#line 8561 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern double __cdecl nextafter(double x, double y); 
#line 8580 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern float __cdecl nextafterf(float x, float y); 
#line 8596 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern double __cdecl nan(const char * tagp); 
#line 8612 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern float __cdecl nanf(const char * tagp); 
#line 8617 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern int __isinff(float); 
#line 8618
extern int __isnanf(float); 
#line 8628 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern int __finite(double); 
#line 8629
extern int __finitef(float); 
#line 8630
extern int __signbit(double); 
#line 8631
extern int __isnan(double); 
#line 8632
extern int __isinf(double); 
#line 8635 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern int __signbitf(float); 
#line 8796 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern double __cdecl fma(double x, double y, double z); 
#line 8954 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern float __cdecl fmaf(float x, float y, float z); 
#line 8963 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern int __signbitl(long double); 
#line 8969 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern int __finitel(long double); 
#line 8970
extern int __isinfl(long double); 
#line 8971
extern int __isnanl(long double); 
#line 8975 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern float __cdecl acosf(float); 
#line 8976
extern float __cdecl asinf(float); 
#line 8977
extern float __cdecl atanf(float); 
#line 8978
extern float __cdecl atan2f(float, float); 
#line 8979
extern float __cdecl cosf(float); 
#line 8980
extern float __cdecl sinf(float); 
#line 8981
extern float __cdecl tanf(float); 
#line 8982
extern float __cdecl coshf(float); 
#line 8983
extern float __cdecl sinhf(float); 
#line 8984
extern float __cdecl tanhf(float); 
#line 8985
extern float __cdecl expf(float); 
#line 8986
extern float __cdecl logf(float); 
#line 8987
extern float __cdecl log10f(float); 
#line 8988
extern float __cdecl modff(float, float *); 
#line 8989
extern float __cdecl powf(float, float); 
#line 8990
extern float __cdecl sqrtf(float); 
#line 8991
extern float __cdecl ceilf(float); 
#line 8992
extern float __cdecl floorf(float); 
#line 8993
extern float __cdecl fmodf(float, float); 
#line 10547 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
}
#line 14 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_math.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727 )
#line 18
__pragma( pack ( push, 8 )) extern "C" {
#line 23
struct _exception { 
#line 25
int type; 
#line 26
char *name; 
#line 27
double arg1; 
#line 28
double arg2; 
#line 29
double retval; 
#line 30
}; 
#line 37
struct _complex { 
#line 39
double x, y; 
#line 40
}; 
#line 59 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_math.h"
typedef float float_t; 
#line 60
typedef double double_t; 
#line 78 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_math.h"
extern const double _HUGE; 
#line 175 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_math.h"
void __cdecl _fperrraise(int _Except); 
#line 177
short __cdecl _dclass(double _X); 
#line 178
short __cdecl _ldclass(long double _X); 
#line 179
short __cdecl _fdclass(float _X); 
#line 181
int __cdecl _dsign(double _X); 
#line 182
int __cdecl _ldsign(long double _X); 
#line 183
int __cdecl _fdsign(float _X); 
#line 185
int __cdecl _dpcomp(double _X, double _Y); 
#line 186
int __cdecl _ldpcomp(long double _X, long double _Y); 
#line 187
int __cdecl _fdpcomp(float _X, float _Y); 
#line 189
short __cdecl _dtest(double * _Px); 
#line 190
short __cdecl _ldtest(long double * _Px); 
#line 191
short __cdecl _fdtest(float * _Px); 
#line 193
short __cdecl _d_int(double * _Px, short _Xexp); 
#line 194
short __cdecl _ld_int(long double * _Px, short _Xexp); 
#line 195
short __cdecl _fd_int(float * _Px, short _Xexp); 
#line 197
short __cdecl _dscale(double * _Px, long _Lexp); 
#line 198
short __cdecl _ldscale(long double * _Px, long _Lexp); 
#line 199
short __cdecl _fdscale(float * _Px, long _Lexp); 
#line 201
short __cdecl _dunscale(short * _Pex, double * _Px); 
#line 202
short __cdecl _ldunscale(short * _Pex, long double * _Px); 
#line 203
short __cdecl _fdunscale(short * _Pex, float * _Px); 
#line 205
short __cdecl _dexp(double * _Px, double _Y, long _Eoff); 
#line 206
short __cdecl _ldexp(long double * _Px, long double _Y, long _Eoff); 
#line 207
short __cdecl _fdexp(float * _Px, float _Y, long _Eoff); 
#line 209
short __cdecl _dnorm(unsigned short * _Ps); 
#line 210
short __cdecl _fdnorm(unsigned short * _Ps); 
#line 212
double __cdecl _dpoly(double _X, const double * _Tab, int _N); 
#line 213
long double __cdecl _ldpoly(long double _X, const long double * _Tab, int _N); 
#line 214
float __cdecl _fdpoly(float _X, const float * _Tab, int _N); 
#line 216
double __cdecl _dlog(double _X, int _Baseflag); 
#line 217
long double __cdecl _ldlog(long double _X, int _Baseflag); 
#line 218
float __cdecl _fdlog(float _X, int _Baseflag); 
#line 220
double __cdecl _dsin(double _X, unsigned _Qoff); 
#line 221
long double __cdecl _ldsin(long double _X, unsigned _Qoff); 
#line 222
float __cdecl _fdsin(float _X, unsigned _Qoff); 
#line 229
typedef 
#line 226
union { 
#line 227
unsigned short _Sh[4]; 
#line 228
double _Val; 
#line 229
} _double_val; 
#line 236
typedef 
#line 233
union { 
#line 234
unsigned short _Sh[2]; 
#line 235
float _Val; 
#line 236
} _float_val; 
#line 243
typedef 
#line 240
union { 
#line 241
unsigned short _Sh[4]; 
#line 242
long double _Val; 
#line 243
} _ldouble_val; 
#line 251
typedef 
#line 246
union { 
#line 247
unsigned short _Word[4]; 
#line 248
float _Float; 
#line 249
double _Double; 
#line 250
long double _Long_double; 
#line 251
} _float_const; 
#line 253
extern const _float_const _Denorm_C, _Inf_C, _Nan_C, _Snan_C, _Hugeval_C; 
#line 254
extern const _float_const _FDenorm_C, _FInf_C, _FNan_C, _FSnan_C; 
#line 255
extern const _float_const _LDenorm_C, _LInf_C, _LNan_C, _LSnan_C; 
#line 257
extern const _float_const _Eps_C, _Rteps_C; 
#line 258
extern const _float_const _FEps_C, _FRteps_C; 
#line 259
extern const _float_const _LEps_C, _LRteps_C; 
#line 261
extern const double _Zero_C, _Xbig_C; 
#line 262
extern const float _FZero_C, _FXbig_C; 
#line 263
extern const long double _LZero_C, _LXbig_C; 
#line 292
extern "C++" {
#line 294
inline int fpclassify(float _X) throw() 
#line 295
{ 
#line 296
return _fdtest(&_X); 
#line 297
} 
#line 299
inline int fpclassify(double _X) throw() 
#line 300
{ 
#line 301
return _dtest(&_X); 
#line 302
} 
#line 304
inline int fpclassify(long double _X) throw() 
#line 305
{ 
#line 306
return _ldtest(&_X); 
#line 307
} 
#line 309
inline bool signbit(float _X) throw() 
#line 310
{ 
#line 311
return _fdsign(_X) != 0; 
#line 312
} 
#line 314
inline bool signbit(double _X) throw() 
#line 315
{ 
#line 316
return _dsign(_X) != 0; 
#line 317
} 
#line 319
inline bool signbit(long double _X) throw() 
#line 320
{ 
#line 321
return _ldsign(_X) != 0; 
#line 322
} 
#line 324
inline int _fpcomp(float _X, float _Y) throw() 
#line 325
{ 
#line 326
return _fdpcomp(_X, _Y); 
#line 327
} 
#line 329
inline int _fpcomp(double _X, double _Y) throw() 
#line 330
{ 
#line 331
return _dpcomp(_X, _Y); 
#line 332
} 
#line 334
inline int _fpcomp(long double _X, long double _Y) throw() 
#line 335
{ 
#line 336
return _ldpcomp(_X, _Y); 
#line 337
} 
#line 339
template< class _Trc, class _Tre> struct _Combined_type { 
#line 341
typedef float _Type; 
#line 342
}; 
#line 344
template<> struct _Combined_type< float, double>  { 
#line 346
typedef double _Type; 
#line 347
}; 
#line 349
template<> struct _Combined_type< float, long double>  { 
#line 351
typedef long double _Type; 
#line 352
}; 
#line 354
template< class _Ty, class _T2> struct _Real_widened { 
#line 356
typedef long double _Type; 
#line 357
}; 
#line 359
template<> struct _Real_widened< float, float>  { 
#line 361
typedef float _Type; 
#line 362
}; 
#line 364
template<> struct _Real_widened< float, double>  { 
#line 366
typedef double _Type; 
#line 367
}; 
#line 369
template<> struct _Real_widened< double, float>  { 
#line 371
typedef double _Type; 
#line 372
}; 
#line 374
template<> struct _Real_widened< double, double>  { 
#line 376
typedef double _Type; 
#line 377
}; 
#line 379
template< class _Ty> struct _Real_type { 
#line 381
typedef double _Type; 
#line 382
}; 
#line 384
template<> struct _Real_type< float>  { 
#line 386
typedef float _Type; 
#line 387
}; 
#line 389
template<> struct _Real_type< long double>  { 
#line 391
typedef long double _Type; 
#line 392
}; 
#line 394
template < class _T1, class _T2 >
      inline int _fpcomp ( _T1 _X, _T2 _Y ) throw ( )
    {
        typedef typename _Combined_type < float,
            typename _Real_widened <
            typename _Real_type < _T1 > :: _Type,
            typename _Real_type < _T2 > :: _Type > :: _Type > :: _Type _Tw;
        return _fpcomp ( ( _Tw ) _X, ( _Tw ) _Y );
    }
#line 404
template < class _Ty >
      inline bool isfinite ( _Ty _X ) throw ( )
    {
        return fpclassify ( _X ) <= 0;
    }
#line 410
template < class _Ty >
      inline bool isinf ( _Ty _X ) throw ( )
    {
        return fpclassify ( _X ) == 1;
    }
#line 416
template < class _Ty >
      inline bool isnan ( _Ty _X ) throw ( )
    {
        return fpclassify ( _X ) == 2;
    }
#line 422
template < class _Ty >
      inline bool isnormal ( _Ty _X ) throw ( )
    {
        return fpclassify ( _X ) == ( - 1 );
    }
#line 428
template < class _Ty1, class _Ty2 >
      inline bool isgreater ( _Ty1 _X, _Ty2 _Y ) throw ( )
    {
        return ( _fpcomp ( _X, _Y ) & 4 ) != 0;
    }
#line 434
template < class _Ty1, class _Ty2 >
      inline bool isgreaterequal ( _Ty1 _X, _Ty2 _Y ) throw ( )
    {
        return ( _fpcomp ( _X, _Y ) & ( 2 | 4 ) ) != 0;
    }
#line 440
template < class _Ty1, class _Ty2 >
      inline bool isless ( _Ty1 _X, _Ty2 _Y ) throw ( )
    {
        return ( _fpcomp ( _X, _Y ) & 1 ) != 0;
    }
#line 446
template < class _Ty1, class _Ty2 >
      inline bool islessequal ( _Ty1 _X, _Ty2 _Y ) throw ( )
    {
        return ( _fpcomp ( _X, _Y ) & ( 1 | 2 ) ) != 0;
    }
#line 452
template < class _Ty1, class _Ty2 >
      inline bool islessgreater ( _Ty1 _X, _Ty2 _Y ) throw ( )
    {
        return ( _fpcomp ( _X, _Y ) & ( 1 | 4 ) ) != 0;
    }
#line 458
template < class _Ty1, class _Ty2 >
      inline bool isunordered ( _Ty1 _X, _Ty2 _Y ) throw ( )
    {
        return _fpcomp ( _X, _Y ) == 0;
    }
#line 463
}
#line 470 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_math.h"
int __cdecl abs(int _X); 
#line 471
long __cdecl labs(long _X); 
#line 472
__int64 __cdecl llabs(__int64 _X); 
#line 474
double __cdecl acos(double _X); 
#line 475
double __cdecl asin(double _X); 
#line 476
double __cdecl atan(double _X); 
#line 477
double __cdecl atan2(double _Y, double _X); 
#line 479
double __cdecl cos(double _X); 
#line 480
double __cdecl cosh(double _X); 
#line 481
double __cdecl exp(double _X); 
#line 482
double __cdecl fabs(double _X); 
#line 483
double __cdecl fmod(double _X, double _Y); 
#line 484
double __cdecl log(double _X); 
#line 485
double __cdecl log10(double _X); 
#line 486
double __cdecl pow(double _X, double _Y); 
#line 487
double __cdecl sin(double _X); 
#line 488
double __cdecl sinh(double _X); 
#line 489
double __cdecl sqrt(double _X); 
#line 490
double __cdecl tan(double _X); 
#line 491
double __cdecl tanh(double _X); 
#line 493
double __cdecl acosh(double _X); 
#line 494
double __cdecl asinh(double _X); 
#line 495
double __cdecl atanh(double _X); 
#line 496
double __cdecl atof(const char * _String); 
#line 497
double __cdecl _atof_l(const char * _String, _locale_t _Locale); 
#line 498
double __cdecl _cabs(_complex _Complex_value); 
#line 499
double __cdecl cbrt(double _X); 
#line 500
double __cdecl ceil(double _X); 
#line 501
double __cdecl _chgsign(double _X); 
#line 502
double __cdecl copysign(double _Number, double _Sign); 
#line 503
double __cdecl _copysign(double _Number, double _Sign); 
#line 504
double __cdecl erf(double _X); 
#line 505
double __cdecl erfc(double _X); 
#line 506
double __cdecl exp2(double _X); 
#line 507
double __cdecl expm1(double _X); 
#line 508
double __cdecl fdim(double _X, double _Y); 
#line 509
double __cdecl floor(double _X); 
#line 510
double __cdecl fma(double _X, double _Y, double _Z); 
#line 511
double __cdecl fmax(double _X, double _Y); 
#line 512
double __cdecl fmin(double _X, double _Y); 
#line 513
double __cdecl frexp(double _X, int * _Y); 
#line 514
double __cdecl hypot(double _X, double _Y); 
#line 515
double __cdecl _hypot(double _X, double _Y); 
#line 516
int __cdecl ilogb(double _X); 
#line 517
double __cdecl ldexp(double _X, int _Y); 
#line 518
double __cdecl lgamma(double _X); 
#line 519
__int64 __cdecl llrint(double _X); 
#line 520
__int64 __cdecl llround(double _X); 
#line 521
double __cdecl log1p(double _X); 
#line 522
double __cdecl log2(double _X); 
#line 523
double __cdecl logb(double _X); 
#line 524
long __cdecl lrint(double _X); 
#line 525
long __cdecl lround(double _X); 
#line 527
int __cdecl _matherr(_exception * _Except); 
#line 529
double __cdecl modf(double _X, double * _Y); 
#line 530
double __cdecl nan(const char * _X); 
#line 531
double __cdecl nearbyint(double _X); 
#line 532
double __cdecl nextafter(double _X, double _Y); 
#line 533
double __cdecl nexttoward(double _X, long double _Y); 
#line 534
double __cdecl remainder(double _X, double _Y); 
#line 535
double __cdecl remquo(double _X, double _Y, int * _Z); 
#line 536
double __cdecl rint(double _X); 
#line 537
double __cdecl round(double _X); 
#line 538
double __cdecl scalbln(double _X, long _Y); 
#line 539
double __cdecl scalbn(double _X, int _Y); 
#line 540
double __cdecl tgamma(double _X); 
#line 541
double __cdecl trunc(double _X); 
#line 542
double __cdecl _j0(double _X); 
#line 543
double __cdecl _j1(double _X); 
#line 544
double __cdecl _jn(int _X, double _Y); 
#line 545
double __cdecl _y0(double _X); 
#line 546
double __cdecl _y1(double _X); 
#line 547
double __cdecl _yn(int _X, double _Y); 
#line 549
float __cdecl acoshf(float _X); 
#line 550
float __cdecl asinhf(float _X); 
#line 551
float __cdecl atanhf(float _X); 
#line 552
float __cdecl cbrtf(float _X); 
#line 553
float __cdecl _chgsignf(float _X); 
#line 554
float __cdecl copysignf(float _Number, float _Sign); 
#line 555
float __cdecl _copysignf(float _Number, float _Sign); 
#line 556
float __cdecl erff(float _X); 
#line 557
float __cdecl erfcf(float _X); 
#line 558
float __cdecl expm1f(float _X); 
#line 559
float __cdecl exp2f(float _X); 
#line 560
float __cdecl fdimf(float _X, float _Y); 
#line 561
float __cdecl fmaf(float _X, float _Y, float _Z); 
#line 562
float __cdecl fmaxf(float _X, float _Y); 
#line 563
float __cdecl fminf(float _X, float _Y); 
#line 564
float __cdecl _hypotf(float _X, float _Y); 
#line 565
int __cdecl ilogbf(float _X); 
#line 566
float __cdecl lgammaf(float _X); 
#line 567
__int64 __cdecl llrintf(float _X); 
#line 568
__int64 __cdecl llroundf(float _X); 
#line 569
float __cdecl log1pf(float _X); 
#line 570
float __cdecl log2f(float _X); 
#line 571
float __cdecl logbf(float _X); 
#line 572
long __cdecl lrintf(float _X); 
#line 573
long __cdecl lroundf(float _X); 
#line 574
float __cdecl nanf(const char * _X); 
#line 575
float __cdecl nearbyintf(float _X); 
#line 576
float __cdecl nextafterf(float _X, float _Y); 
#line 577
float __cdecl nexttowardf(float _X, long double _Y); 
#line 578
float __cdecl remainderf(float _X, float _Y); 
#line 579
float __cdecl remquof(float _X, float _Y, int * _Z); 
#line 580
float __cdecl rintf(float _X); 
#line 581
float __cdecl roundf(float _X); 
#line 582
float __cdecl scalblnf(float _X, long _Y); 
#line 583
float __cdecl scalbnf(float _X, int _Y); 
#line 584
float __cdecl tgammaf(float _X); 
#line 585
float __cdecl truncf(float _X); 
#line 595 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_math.h"
float __cdecl _logbf(float _X); 
#line 596
float __cdecl _nextafterf(float _X, float _Y); 
#line 597
int __cdecl _finitef(float _X); 
#line 598
int __cdecl _isnanf(float _X); 
#line 599
int __cdecl _fpclassf(float _X); 
#line 601
int __cdecl _set_FMA3_enable(int _Flag); 
#line 602
int __cdecl _get_FMA3_enable(); 
#line 615 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_math.h"
float __cdecl acosf(float _X); 
#line 616
float __cdecl asinf(float _X); 
#line 617
float __cdecl atan2f(float _Y, float _X); 
#line 618
float __cdecl atanf(float _X); 
#line 619
float __cdecl ceilf(float _X); 
#line 620
float __cdecl cosf(float _X); 
#line 621
float __cdecl coshf(float _X); 
#line 622
float __cdecl expf(float _X); 
#line 674 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_math.h"
__inline float __cdecl fabsf(float _X) 
#line 675
{ 
#line 676
return (float)fabs(_X); 
#line 677
} 
#line 683 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_math.h"
float __cdecl floorf(float _X); 
#line 684
float __cdecl fmodf(float _X, float _Y); 
#line 700 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_math.h"
__inline float __cdecl frexpf(float _X, int *_Y) 
#line 701
{ 
#line 702
return (float)frexp(_X, _Y); 
#line 703
} 
#line 705
__inline float __cdecl hypotf(float _X, float _Y) 
#line 706
{ 
#line 707
return _hypotf(_X, _Y); 
#line 708
} 
#line 710
__inline float __cdecl ldexpf(float _X, int _Y) 
#line 711
{ 
#line 712
return (float)ldexp(_X, _Y); 
#line 713
} 
#line 717
float __cdecl log10f(float _X); 
#line 718
float __cdecl logf(float _X); 
#line 719
float __cdecl modff(float _X, float * _Y); 
#line 720
float __cdecl powf(float _X, float _Y); 
#line 721
float __cdecl sinf(float _X); 
#line 722
float __cdecl sinhf(float _X); 
#line 723
float __cdecl sqrtf(float _X); 
#line 724
float __cdecl tanf(float _X); 
#line 725
float __cdecl tanhf(float _X); 
#line 779 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_math.h"
long double __cdecl acoshl(long double _X); 
#line 781
__inline long double __cdecl acosl(long double _X) 
#line 782
{ 
#line 783
return acos((double)_X); 
#line 784
} 
#line 786
long double __cdecl asinhl(long double _X); 
#line 788
__inline long double __cdecl asinl(long double _X) 
#line 789
{ 
#line 790
return asin((double)_X); 
#line 791
} 
#line 793
__inline long double __cdecl atan2l(long double _Y, long double _X) 
#line 794
{ 
#line 795
return atan2((double)_Y, (double)_X); 
#line 796
} 
#line 798
long double __cdecl atanhl(long double _X); 
#line 800
__inline long double __cdecl atanl(long double _X) 
#line 801
{ 
#line 802
return atan((double)_X); 
#line 803
} 
#line 805
long double __cdecl cbrtl(long double _X); 
#line 807
__inline long double __cdecl ceill(long double _X) 
#line 808
{ 
#line 809
return ceil((double)_X); 
#line 810
} 
#line 812
__inline long double __cdecl _chgsignl(long double _X) 
#line 813
{ 
#line 814
return _chgsign((double)_X); 
#line 815
} 
#line 817
long double __cdecl copysignl(long double _Number, long double _Sign); 
#line 819
__inline long double __cdecl _copysignl(long double _Number, long double _Sign) 
#line 820
{ 
#line 821
return _copysign((double)_Number, (double)_Sign); 
#line 822
} 
#line 824
__inline long double __cdecl coshl(long double _X) 
#line 825
{ 
#line 826
return cosh((double)_X); 
#line 827
} 
#line 829
__inline long double __cdecl cosl(long double _X) 
#line 830
{ 
#line 831
return cos((double)_X); 
#line 832
} 
#line 834
long double __cdecl erfl(long double _X); 
#line 835
long double __cdecl erfcl(long double _X); 
#line 837
__inline long double __cdecl expl(long double _X) 
#line 838
{ 
#line 839
return exp((double)_X); 
#line 840
} 
#line 842
long double __cdecl exp2l(long double _X); 
#line 843
long double __cdecl expm1l(long double _X); 
#line 845
__inline long double __cdecl fabsl(long double _X) 
#line 846
{ 
#line 847
return fabs((double)_X); 
#line 848
} 
#line 850
long double __cdecl fdiml(long double _X, long double _Y); 
#line 852
__inline long double __cdecl floorl(long double _X) 
#line 853
{ 
#line 854
return floor((double)_X); 
#line 855
} 
#line 857
long double __cdecl fmal(long double _X, long double _Y, long double _Z); 
#line 858
long double __cdecl fmaxl(long double _X, long double _Y); 
#line 859
long double __cdecl fminl(long double _X, long double _Y); 
#line 861
__inline long double __cdecl fmodl(long double _X, long double _Y) 
#line 862
{ 
#line 863
return fmod((double)_X, (double)_Y); 
#line 864
} 
#line 866
__inline long double __cdecl frexpl(long double _X, int *_Y) 
#line 867
{ 
#line 868
return frexp((double)_X, _Y); 
#line 869
} 
#line 871
int __cdecl ilogbl(long double _X); 
#line 873
__inline long double __cdecl _hypotl(long double _X, long double _Y) 
#line 874
{ 
#line 875
return _hypot((double)_X, (double)_Y); 
#line 876
} 
#line 878
__inline long double __cdecl hypotl(long double _X, long double _Y) 
#line 879
{ 
#line 880
return _hypot((double)_X, (double)_Y); 
#line 881
} 
#line 883
__inline long double __cdecl ldexpl(long double _X, int _Y) 
#line 884
{ 
#line 885
return ldexp((double)_X, _Y); 
#line 886
} 
#line 888
long double __cdecl lgammal(long double _X); 
#line 889
__int64 __cdecl llrintl(long double _X); 
#line 890
__int64 __cdecl llroundl(long double _X); 
#line 892
__inline long double __cdecl logl(long double _X) 
#line 893
{ 
#line 894
return log((double)_X); 
#line 895
} 
#line 897
__inline long double __cdecl log10l(long double _X) 
#line 898
{ 
#line 899
return log10((double)_X); 
#line 900
} 
#line 902
long double __cdecl log1pl(long double _X); 
#line 903
long double __cdecl log2l(long double _X); 
#line 904
long double __cdecl logbl(long double _X); 
#line 905
long __cdecl lrintl(long double _X); 
#line 906
long __cdecl lroundl(long double _X); 
#line 908
__inline long double __cdecl modfl(long double _X, long double *_Y) 
#line 909
{ 
#line 910
double _F, _I; 
#line 911
_F = modf((double)_X, &_I); 
#line 912
(*_Y) = _I; 
#line 913
return _F; 
#line 914
} 
#line 916
long double __cdecl nanl(const char * _X); 
#line 917
long double __cdecl nearbyintl(long double _X); 
#line 918
long double __cdecl nextafterl(long double _X, long double _Y); 
#line 919
long double __cdecl nexttowardl(long double _X, long double _Y); 
#line 921
__inline long double __cdecl powl(long double _X, long double _Y) 
#line 922
{ 
#line 923
return pow((double)_X, (double)_Y); 
#line 924
} 
#line 926
long double __cdecl remainderl(long double _X, long double _Y); 
#line 927
long double __cdecl remquol(long double _X, long double _Y, int * _Z); 
#line 928
long double __cdecl rintl(long double _X); 
#line 929
long double __cdecl roundl(long double _X); 
#line 930
long double __cdecl scalblnl(long double _X, long _Y); 
#line 931
long double __cdecl scalbnl(long double _X, int _Y); 
#line 933
__inline long double __cdecl sinhl(long double _X) 
#line 934
{ 
#line 935
return sinh((double)_X); 
#line 936
} 
#line 938
__inline long double __cdecl sinl(long double _X) 
#line 939
{ 
#line 940
return sin((double)_X); 
#line 941
} 
#line 943
__inline long double __cdecl sqrtl(long double _X) 
#line 944
{ 
#line 945
return sqrt((double)_X); 
#line 946
} 
#line 948
__inline long double __cdecl tanhl(long double _X) 
#line 949
{ 
#line 950
return tanh((double)_X); 
#line 951
} 
#line 953
__inline long double __cdecl tanl(long double _X) 
#line 954
{ 
#line 955
return tan((double)_X); 
#line 956
} 
#line 958
long double __cdecl tgammal(long double _X); 
#line 959
long double __cdecl truncl(long double _X); 
#line 980 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_math.h"
extern double HUGE; 
#line 985 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_math.h"
double __cdecl j0(double _X); 
#line 986
double __cdecl j1(double _X); 
#line 987
double __cdecl jn(int _X, double _Y); 
#line 988
double __cdecl y0(double _X); 
#line 989
double __cdecl y1(double _X); 
#line 990
double __cdecl yn(int _X, double _Y); 
#line 995 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\corecrt_math.h"
}__pragma( pack ( pop )) 
#line 997
#pragma warning(pop)
#line 12 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\vcruntime_new.h"
#pragma warning(push)
#pragma warning(disable: 4514 4820 )
#pragma warning(disable: 4985)
#line 17
extern "C++" {
#line 19
#pragma pack ( push, 8 )
#line 33
namespace std { 
#line 35
struct nothrow_t { 
#line 36
explicit nothrow_t() = default;
#line 37
}; 
#line 42
extern const nothrow_t nothrow; 
#line 44 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\vcruntime_new.h"
}
#line 47 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\vcruntime_new.h"
[[nodiscard]] __declspec(allocator) void *__cdecl 
#line 48
operator new(size_t _Size); 
#line 52
[[nodiscard]] __declspec(allocator) void *__cdecl 
#line 53
operator new(size_t _Size, const std::nothrow_t &) noexcept; 
#line 58
[[nodiscard]] __declspec(allocator) void *__cdecl 
#line 59
operator new[](size_t _Size); 
#line 63
[[nodiscard]] __declspec(allocator) void *__cdecl 
#line 64
operator new[](size_t _Size, const std::nothrow_t &) noexcept; 
#line 69
void __cdecl operator delete(void * _Block) noexcept; 
#line 73
void __cdecl operator delete(void * _Block, const std::nothrow_t &) noexcept; 
#line 78
void __cdecl operator delete[](void * _Block) noexcept; 
#line 82
void __cdecl operator delete[](void * _Block, const std::nothrow_t &) noexcept; 
#line 87
void __cdecl operator delete(void * _Block, size_t _Size) noexcept; 
#line 92
void __cdecl operator delete[](void * _Block, size_t _Size) noexcept; 
#line 160
#pragma warning(push)
#pragma warning(disable: 4577)
#pragma warning(disable: 4514)
#line 165
[[nodiscard]] [[msvc::constexpr]] inline void *__cdecl 
#line 166
operator new(size_t _Size, void *
#line 167
_Where) noexcept 
#line 168
{ 
#line 169
(void)_Size; 
#line 170
return _Where; 
#line 171
} 
#line 173
inline void __cdecl operator delete(void *, void *) noexcept 
#line 174
{ 
#line 176
} 
#line 181 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\vcruntime_new.h"
[[nodiscard]] inline void *__cdecl 
#line 182
operator new[](size_t _Size, void *
#line 183
_Where) noexcept 
#line 184
{ 
#line 185
(void)_Size; 
#line 186
return _Where; 
#line 187
} 
#line 189
inline void __cdecl operator delete[](void *, void *) noexcept 
#line 190
{ 
#line 191
} 
#line 199 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\vcruntime_new.h"
}
#line 193
#pragma warning(pop)
#line 197
#pragma pack ( pop )
#line 202 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\vcruntime_new.h"
#pragma warning(pop)
#line 12 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\vcruntime_new_debug.h"
#pragma warning(push)
#pragma warning(disable: 4514 4820 )
#line 16
extern "C++" {
#line 18
#pragma pack ( push, 8 )
#line 25
[[nodiscard]] 
#line 26
__declspec(allocator) void *__cdecl operator new(size_t _Size, int _BlockUse, const char * _FileName, int _LineNumber); 
#line 33
[[nodiscard]] 
#line 34
__declspec(allocator) void *__cdecl operator new[](size_t _Size, int _BlockUse, const char * _FileName, int _LineNumber); 
#line 41
void __cdecl operator delete(void * _Block, int _BlockUse, const char * _FileName, int _LineNumber) noexcept; 
#line 48
void __cdecl operator delete[](void * _Block, int _BlockUse, const char * _FileName, int _LineNumber) noexcept; 
#line 61 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\vcruntime_new_debug.h"
}
#line 59
#pragma pack ( pop )
#line 64 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\vcruntime_new_debug.h"
#pragma warning(pop)
#line 15 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\crtdbg.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727 )
#line 19
__pragma( pack ( push, 8 )) extern "C" {
#line 23
typedef void *_HFILE; 
#line 49
typedef int (__cdecl *_CRT_REPORT_HOOK)(int, char *, int *); 
#line 50
typedef int (__cdecl *_CRT_REPORT_HOOKW)(int, __wchar_t *, int *); 
#line 56
typedef int (__cdecl *_CRT_ALLOC_HOOK)(int, void *, size_t, int, long, const unsigned char *, int); 
#line 112
typedef void (__cdecl *_CRT_DUMP_CLIENT)(void *, size_t); 
#line 118
struct _CrtMemBlockHeader; 
#line 127
typedef 
#line 120
struct _CrtMemState { 
#line 122
_CrtMemBlockHeader *pBlockHeader; 
#line 123
size_t lCounts[5]; 
#line 124
size_t lSizes[5]; 
#line 125
size_t lHighWaterCount; 
#line 126
size_t lTotalCount; 
#line 127
} _CrtMemState; 
#line 813 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.22000.0\\ucrt\\crtdbg.h"
}__pragma( pack ( pop )) 
#line 815
#pragma warning(pop)
#line 20 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\yvals.h"
#pragma pack ( push, 8 )
#pragma warning(push, 3)
#pragma warning(disable : 4180 4412 4455 4494 4514 4574 4582 4583 4587 4588 4619 4623 4625 4626 4643 4648 4702 4793 4820 4988 5026 5027 5045 6294 4984 5053 )
#line 138 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\yvals.h"
#pragma detect_mismatch("_MSC_VER", "1900")
#line 142 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\yvals.h"
#pragma detect_mismatch("_ITERATOR_DEBUG_LEVEL", "0")
#line 147 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\yvals.h"
#pragma detect_mismatch("RuntimeLibrary", "MT_StaticRelease")
#line 49 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\use_ansi.h"
#pragma comment(lib, "libcpmt")
#line 346 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\yvals.h"
namespace std { 
#line 347
enum _Uninitialized { 
#line 348
_Noinit
#line 349
}; 
#line 351
class _Lockit { 
#line 367
public: __thiscall _Lockit() noexcept; 
#line 368
explicit __thiscall _Lockit(int) noexcept; 
#line 369
__thiscall ~_Lockit() noexcept; 
#line 372 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\yvals.h"
static void __cdecl _Lockit_ctor(int) noexcept; 
#line 373
static void __cdecl _Lockit_dtor(int) noexcept; 
#line 376
private: static void __cdecl _Lockit_ctor(_Lockit *) noexcept; 
#line 377
static void __cdecl _Lockit_ctor(_Lockit *, int) noexcept; 
#line 378
static void __cdecl _Lockit_dtor(_Lockit *) noexcept; 
#line 381
public: _Lockit(const _Lockit &) = delete;
#line 382
_Lockit &operator=(const _Lockit &) = delete;
#line 385
private: int _Locktype; 
#line 386
}; 
#line 520 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\yvals.h"
}
#line 528
#pragma warning(pop)
#pragma pack ( pop )
#line 15 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\cstdlib"
#pragma pack ( push, 8 )
#pragma warning(push, 3)
#pragma warning(disable : 4180 4412 4455 4494 4514 4574 4582 4583 4587 4588 4619 4623 4625 4626 4643 4648 4702 4793 4820 4988 5026 5027 5045 6294 4984 5053 )
#line 23
[[nodiscard]] inline double abs(double _Xx) noexcept { 
#line 24
return ::fabs(_Xx); 
#line 25
} 
#line 27
[[nodiscard]] inline float abs(float _Xx) noexcept { 
#line 28
return ::fabsf(_Xx); 
#line 29
} 
#line 31
[[nodiscard]] inline long double abs(long double _Xx) noexcept { 
#line 32
return ::fabsl(_Xx); 
#line 33
} 
#line 35
namespace std { 
#line 36
using ::size_t;
#line 37
using ::div_t;
#line 38
using ::ldiv_t;
#line 39
using ::abort;
#line 40
using ::abs;
#line 41
using ::atexit;
#line 42
using ::atof;
#line 43
using ::atoi;
#line 44
using ::atol;
#line 45
using ::bsearch;
#line 46
using ::calloc;
#line 47
using ::div;
#line 48
using ::exit;
#line 49
using ::free;
#line 50
using ::labs;
#line 51
using ::ldiv;
#line 52
using ::malloc;
#line 53
using ::mblen;
#line 54
using ::mbstowcs;
#line 55
using ::mbtowc;
#line 56
using ::qsort;
#line 57
using ::rand;
#line 58
using ::realloc;
#line 59
using ::srand;
#line 60
using ::strtod;
#line 61
using ::strtol;
#line 62
using ::strtoul;
#line 63
using ::wcstombs;
#line 64
using ::wctomb;
#line 66
using ::lldiv_t;
#line 68
using ::getenv;
#line 69
using ::system;
#line 71
using ::atoll;
#line 72
using ::llabs;
#line 73
using ::lldiv;
#line 74
using ::strtof;
#line 75
using ::strtold;
#line 76
using ::strtoll;
#line 77
using ::strtoull;
#line 79
using ::_Exit;
#line 80
using ::at_quick_exit;
#line 81
using ::quick_exit;
#line 82
}
#line 86
#pragma warning(pop)
#pragma pack ( pop )
#line 12 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\xtr1common"
#pragma pack ( push, 8 )
#pragma warning(push, 3)
#pragma warning(disable : 4180 4412 4455 4494 4514 4574 4582 4583 4587 4588 4619 4623 4625 4626 4643 4648 4702 4793 4820 4988 5026 5027 5045 6294 4984 5053 )
#line 19
namespace std { 
#line 20
template < class _Ty, _Ty _Val >
struct integral_constant {
    static constexpr _Ty value = _Val;

    using value_type = _Ty;
    using type = integral_constant;

    constexpr operator value_type ( ) const noexcept {
        return value;
    }

    [ [ nodiscard ] ] constexpr value_type operator ( ) ( ) const noexcept {
        return value;
    }
};
#line 36
template< bool _Val> using bool_constant = integral_constant< bool, _Val> ; 
#line 39
using true_type = bool_constant< true> ; 
#line 40
using false_type = bool_constant< false> ; 
#line 42
template< bool _Test, class _Ty = void> 
#line 43
struct enable_if { }; 
#line 45
template< class _Ty> 
#line 46
struct enable_if< true, _Ty>  { 
#line 47
using type = _Ty; 
#line 48
}; 
#line 50
template< bool _Test, class _Ty = void> using enable_if_t = typename enable_if< _Test, _Ty> ::type; 
#line 53
template< bool _Test, class _Ty1, class _Ty2> 
#line 54
struct conditional { 
#line 55
using type = _Ty1; 
#line 56
}; 
#line 58
template< class _Ty1, class _Ty2> 
#line 59
struct conditional< false, _Ty1, _Ty2>  { 
#line 60
using type = _Ty2; 
#line 61
}; 
#line 63
template< bool _Test, class _Ty1, class _Ty2> using conditional_t = typename conditional< _Test, _Ty1, _Ty2> ::type; 
#line 73
template< class , class > constexpr bool 
#line 74
is_same_v = false; 
#line 75
template< class _Ty> constexpr bool 
#line 76
is_same_v< _Ty, _Ty>  = true; 
#line 78
template< class _Ty1, class _Ty2> 
#line 79
struct is_same : public bool_constant< is_same_v< _Ty1, _Ty2> >  { }; 
#line 82 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\xtr1common"
template< class _Ty> 
#line 83
struct remove_const { 
#line 84
using type = _Ty; 
#line 85
}; 
#line 87
template< class _Ty> 
#line 88
struct remove_const< const _Ty>  { 
#line 89
using type = _Ty; 
#line 90
}; 
#line 92
template< class _Ty> using remove_const_t = typename remove_const< _Ty> ::type; 
#line 95
template< class _Ty> 
#line 96
struct remove_volatile { 
#line 97
using type = _Ty; 
#line 98
}; 
#line 100
template< class _Ty> 
#line 101
struct remove_volatile< volatile _Ty>  { 
#line 102
using type = _Ty; 
#line 103
}; 
#line 105
template< class _Ty> using remove_volatile_t = typename remove_volatile< _Ty> ::type; 
#line 108
template< class _Ty> 
#line 109
struct remove_cv { 
#line 110
using type = _Ty; 
#line 112
template< template< class >  class _Fn> using _Apply = _Fn< _Ty> ; 
#line 114
}; 
#line 116
template< class _Ty> 
#line 117
struct remove_cv< const _Ty>  { 
#line 118
using type = _Ty; 
#line 120
template< template< class >  class _Fn> using _Apply = const _Fn< _Ty> ; 
#line 122
}; 
#line 124
template< class _Ty> 
#line 125
struct remove_cv< volatile _Ty>  { 
#line 126
using type = _Ty; 
#line 128
template< template< class >  class _Fn> using _Apply = volatile _Fn< _Ty> ; 
#line 130
}; 
#line 132
template< class _Ty> 
#line 133
struct remove_cv< const volatile _Ty>  { 
#line 134
using type = _Ty; 
#line 136
template< template< class >  class _Fn> using _Apply = const volatile _Fn< _Ty> ; 
#line 138
}; 
#line 140
template< class _Ty> using remove_cv_t = typename remove_cv< _Ty> ::type; 
#line 143
template< bool _First_value, class _First, class ..._Rest> 
#line 144
struct _Disjunction { 
#line 145
using type = _First; 
#line 146
}; 
#line 148
template< class _False, class _Next, class ..._Rest> 
#line 149
struct _Disjunction< false, _False, _Next, _Rest...>  { 
#line 150
using type = typename std::_Disjunction< _Next::value, _Next, _Rest...> ::type; 
#line 151
}; 
#line 153
template< class ..._Traits> 
#line 154
struct disjunction : public false_type { }; 
#line 156
template< class _First, class ..._Rest> 
#line 157
struct disjunction< _First, _Rest...>  : public _Disjunction< _First::value, _First, _Rest...> ::type { 
#line 159
}; 
#line 161
template< class ..._Traits> constexpr bool 
#line 162
disjunction_v = (disjunction< _Traits...> ::value); 
#line 164
template< class _Ty, class ..._Types> constexpr bool 
#line 165
_Is_any_of_v = disjunction_v< is_same< _Ty, _Types> ...> ; 
#line 168
[[nodiscard]] constexpr bool _Is_constant_evaluated() noexcept { 
#line 169
return __builtin_is_constant_evaluated(); 
#line 170
} 
#line 178 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\xtr1common"
template< class _Ty> constexpr bool 
#line 179
is_integral_v = _Is_any_of_v< remove_cv_t< _Ty> , bool, char, signed char, unsigned char, __wchar_t, char16_t, char32_t, short, unsigned short, int, unsigned, long, unsigned long, __int64, unsigned __int64> ; 
#line 186
template< class _Ty> 
#line 187
struct is_integral : public bool_constant< is_integral_v< _Ty> >  { }; 
#line 189
template< class _Ty> constexpr bool 
#line 190
is_floating_point_v = _Is_any_of_v< remove_cv_t< _Ty> , float, double, long double> ; 
#line 192
template< class _Ty> 
#line 193
struct is_floating_point : public bool_constant< is_floating_point_v< _Ty> >  { }; 
#line 195
template< class _Ty> constexpr bool 
#line 196
is_arithmetic_v = is_integral_v< _Ty>  || is_floating_point_v< _Ty> ; 
#line 199
template< class _Ty> 
#line 200
struct is_arithmetic : public bool_constant< is_arithmetic_v< _Ty> >  { }; 
#line 202
template< class _Ty> 
#line 203
struct remove_reference { 
#line 204
using type = _Ty; 
#line 205
using _Const_thru_ref_type = const _Ty; 
#line 206
}; 
#line 208
template< class _Ty> 
#line 209
struct remove_reference< _Ty &>  { 
#line 210
using type = _Ty; 
#line 211
using _Const_thru_ref_type = const _Ty &; 
#line 212
}; 
#line 214
template< class _Ty> 
#line 215
struct remove_reference< _Ty &&>  { 
#line 216
using type = _Ty; 
#line 217
using _Const_thru_ref_type = const _Ty &&; 
#line 218
}; 
#line 220
template< class _Ty> using remove_reference_t = typename remove_reference< _Ty> ::type; 
#line 223
template< class _Ty> using _Const_thru_ref = typename remove_reference< _Ty> ::_Const_thru_ref_type; 
#line 226
template< class _Ty> using _Remove_cvref_t = remove_cv_t< remove_reference_t< _Ty> > ; 
#line 239 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\xtr1common"
}
#line 242
#pragma warning(pop)
#pragma pack ( pop )
#line 29 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\cmath"
#pragma pack ( push, 8 )
#pragma warning(push, 3)
#pragma warning(disable : 4180 4412 4455 4494 4514 4574 4582 4583 4587 4588 4619 4623 4625 4626 4643 4648 4702 4793 4820 4988 5026 5027 5045 6294 4984 5053 )
#line 36
[[nodiscard]] inline float acos(float _Xx) noexcept { 
#line 37
return ::acosf(_Xx); 
#line 38
} 
#line 40
[[nodiscard]] inline float acosh(float _Xx) noexcept { 
#line 41
return ::acoshf(_Xx); 
#line 42
} 
#line 44
[[nodiscard]] inline float asin(float _Xx) noexcept { 
#line 45
return ::asinf(_Xx); 
#line 46
} 
#line 48
[[nodiscard]] inline float asinh(float _Xx) noexcept { 
#line 49
return ::asinhf(_Xx); 
#line 50
} 
#line 52
[[nodiscard]] inline float atan(float _Xx) noexcept { 
#line 53
return ::atanf(_Xx); 
#line 54
} 
#line 56
[[nodiscard]] inline float atanh(float _Xx) noexcept { 
#line 57
return ::atanhf(_Xx); 
#line 58
} 
#line 60
[[nodiscard]] inline float atan2(float _Yx, float _Xx) noexcept { 
#line 61
return ::atan2f(_Yx, _Xx); 
#line 62
} 
#line 64
[[nodiscard]] inline float cbrt(float _Xx) noexcept { 
#line 65
return ::cbrtf(_Xx); 
#line 66
} 
#line 68
[[nodiscard]] inline float ceil(float _Xx) noexcept { 
#line 74 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\cmath"
return ::ceilf(_Xx); 
#line 76 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\cmath"
} 
#line 78
[[nodiscard]] inline float copysign(float _Number, float _Sign) noexcept { 
#line 84 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\cmath"
return ::copysignf(_Number, _Sign); 
#line 86 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\cmath"
} 
#line 88
[[nodiscard]] inline float cos(float _Xx) noexcept { 
#line 89
return ::cosf(_Xx); 
#line 90
} 
#line 92
[[nodiscard]] inline float cosh(float _Xx) noexcept { 
#line 93
return ::coshf(_Xx); 
#line 94
} 
#line 96
[[nodiscard]] inline float erf(float _Xx) noexcept { 
#line 97
return ::erff(_Xx); 
#line 98
} 
#line 100
[[nodiscard]] inline float erfc(float _Xx) noexcept { 
#line 101
return ::erfcf(_Xx); 
#line 102
} 
#line 104
[[nodiscard]] inline float exp(float _Xx) noexcept { 
#line 105
return ::expf(_Xx); 
#line 106
} 
#line 108
[[nodiscard]] inline float exp2(float _Xx) noexcept { 
#line 109
return ::exp2f(_Xx); 
#line 110
} 
#line 112
[[nodiscard]] inline float expm1(float _Xx) noexcept { 
#line 113
return ::expm1f(_Xx); 
#line 114
} 
#line 116
[[nodiscard]] inline float fabs(float _Xx) noexcept { 
#line 117
return ::fabsf(_Xx); 
#line 118
} 
#line 120
[[nodiscard]] inline float fdim(float _Xx, float _Yx) noexcept { 
#line 121
return ::fdimf(_Xx, _Yx); 
#line 122
} 
#line 124
[[nodiscard]] inline float floor(float _Xx) noexcept { 
#line 130 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\cmath"
return ::floorf(_Xx); 
#line 132 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\cmath"
} 
#line 134
[[nodiscard]] inline float fma(float _Xx, float _Yx, float _Zx) noexcept { 
#line 135
return ::fmaf(_Xx, _Yx, _Zx); 
#line 136
} 
#line 138
[[nodiscard]] inline float fmax(float _Xx, float _Yx) noexcept { 
#line 139
return ::fmaxf(_Xx, _Yx); 
#line 140
} 
#line 142
[[nodiscard]] inline float fmin(float _Xx, float _Yx) noexcept { 
#line 143
return ::fminf(_Xx, _Yx); 
#line 144
} 
#line 146
[[nodiscard]] inline float fmod(float _Xx, float _Yx) noexcept { 
#line 147
return ::fmodf(_Xx, _Yx); 
#line 148
} 
#line 150
inline float frexp(float _Xx, int *_Yx) noexcept { 
#line 151
return ::frexpf(_Xx, _Yx); 
#line 152
} 
#line 154
[[nodiscard]] inline float hypot(float _Xx, float _Yx) noexcept { 
#line 155
return ::hypotf(_Xx, _Yx); 
#line 156
} 
#line 158
[[nodiscard]] inline int ilogb(float _Xx) noexcept { 
#line 159
return ::ilogbf(_Xx); 
#line 160
} 
#line 162
[[nodiscard]] inline float ldexp(float _Xx, int _Yx) noexcept { 
#line 163
return ::ldexpf(_Xx, _Yx); 
#line 164
} 
#line 166
[[nodiscard]] inline float lgamma(float _Xx) noexcept { 
#line 167
return ::lgammaf(_Xx); 
#line 168
} 
#line 170
[[nodiscard]] inline __int64 llrint(float _Xx) noexcept { 
#line 171
return ::llrintf(_Xx); 
#line 172
} 
#line 174
[[nodiscard]] inline __int64 llround(float _Xx) noexcept { 
#line 175
return ::llroundf(_Xx); 
#line 176
} 
#line 178
[[nodiscard]] inline float log(float _Xx) noexcept { 
#line 179
return ::logf(_Xx); 
#line 180
} 
#line 182
[[nodiscard]] inline float log10(float _Xx) noexcept { 
#line 183
return ::log10f(_Xx); 
#line 184
} 
#line 186
[[nodiscard]] inline float log1p(float _Xx) noexcept { 
#line 187
return ::log1pf(_Xx); 
#line 188
} 
#line 190
[[nodiscard]] inline float log2(float _Xx) noexcept { 
#line 191
return ::log2f(_Xx); 
#line 192
} 
#line 194
[[nodiscard]] inline float logb(float _Xx) noexcept { 
#line 195
return ::logbf(_Xx); 
#line 196
} 
#line 198
[[nodiscard]] inline long lrint(float _Xx) noexcept { 
#line 199
return ::lrintf(_Xx); 
#line 200
} 
#line 202
[[nodiscard]] inline long lround(float _Xx) noexcept { 
#line 203
return ::lroundf(_Xx); 
#line 204
} 
#line 206
inline float modf(float _Xx, float *_Yx) noexcept { 
#line 207
return ::modff(_Xx, _Yx); 
#line 208
} 
#line 210
[[nodiscard]] inline float nearbyint(float _Xx) noexcept { 
#line 211
return ::nearbyintf(_Xx); 
#line 212
} 
#line 214
[[nodiscard]] inline float nextafter(float _Xx, float _Yx) noexcept { 
#line 215
return ::nextafterf(_Xx, _Yx); 
#line 216
} 
#line 218
[[nodiscard]] inline float nexttoward(float _Xx, long double _Yx) noexcept { 
#line 219
return ::nexttowardf(_Xx, _Yx); 
#line 220
} 
#line 222
[[nodiscard]] inline float pow(float _Xx, float _Yx) noexcept { 
#line 223
return ::powf(_Xx, _Yx); 
#line 224
} 
#line 226
[[nodiscard]] inline float remainder(float _Xx, float _Yx) noexcept { 
#line 227
return ::remainderf(_Xx, _Yx); 
#line 228
} 
#line 230
inline float remquo(float _Xx, float _Yx, int *_Zx) noexcept { 
#line 231
return ::remquof(_Xx, _Yx, _Zx); 
#line 232
} 
#line 234
[[nodiscard]] inline float rint(float _Xx) noexcept { 
#line 235
return ::rintf(_Xx); 
#line 236
} 
#line 238
[[nodiscard]] inline float round(float _Xx) noexcept { 
#line 244 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\cmath"
return ::roundf(_Xx); 
#line 246 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\cmath"
} 
#line 248
[[nodiscard]] inline float scalbln(float _Xx, long _Yx) noexcept { 
#line 249
return ::scalblnf(_Xx, _Yx); 
#line 250
} 
#line 252
[[nodiscard]] inline float scalbn(float _Xx, int _Yx) noexcept { 
#line 253
return ::scalbnf(_Xx, _Yx); 
#line 254
} 
#line 256
[[nodiscard]] inline float sin(float _Xx) noexcept { 
#line 257
return ::sinf(_Xx); 
#line 258
} 
#line 260
[[nodiscard]] inline float sinh(float _Xx) noexcept { 
#line 261
return ::sinhf(_Xx); 
#line 262
} 
#line 264
[[nodiscard]] inline float sqrt(float _Xx) noexcept { 
#line 265
return ::sqrtf(_Xx); 
#line 266
} 
#line 268
[[nodiscard]] inline float tan(float _Xx) noexcept { 
#line 269
return ::tanf(_Xx); 
#line 270
} 
#line 272
[[nodiscard]] inline float tanh(float _Xx) noexcept { 
#line 273
return ::tanhf(_Xx); 
#line 274
} 
#line 276
[[nodiscard]] inline float tgamma(float _Xx) noexcept { 
#line 277
return ::tgammaf(_Xx); 
#line 278
} 
#line 280
[[nodiscard]] inline float trunc(float _Xx) noexcept { 
#line 286 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\cmath"
return ::truncf(_Xx); 
#line 288 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\cmath"
} 
#line 290
[[nodiscard]] inline long double acos(long double _Xx) noexcept { 
#line 291
return ::acosl(_Xx); 
#line 292
} 
#line 294
[[nodiscard]] inline long double acosh(long double _Xx) noexcept { 
#line 295
return ::acoshl(_Xx); 
#line 296
} 
#line 298
[[nodiscard]] inline long double asin(long double _Xx) noexcept { 
#line 299
return ::asinl(_Xx); 
#line 300
} 
#line 302
[[nodiscard]] inline long double asinh(long double _Xx) noexcept { 
#line 303
return ::asinhl(_Xx); 
#line 304
} 
#line 306
[[nodiscard]] inline long double atan(long double _Xx) noexcept { 
#line 307
return ::atanl(_Xx); 
#line 308
} 
#line 310
[[nodiscard]] inline long double atanh(long double _Xx) noexcept { 
#line 311
return ::atanhl(_Xx); 
#line 312
} 
#line 314
[[nodiscard]] inline long double atan2(long double _Yx, long double _Xx) noexcept 
#line 315
{ 
#line 316
return ::atan2l(_Yx, _Xx); 
#line 317
} 
#line 319
[[nodiscard]] inline long double cbrt(long double _Xx) noexcept { 
#line 320
return ::cbrtl(_Xx); 
#line 321
} 
#line 323
[[nodiscard]] inline long double ceil(long double _Xx) noexcept { 
#line 329 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\cmath"
return ::ceill(_Xx); 
#line 331 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\cmath"
} 
#line 333
[[nodiscard]] inline long double copysign(long double _Number, long double _Sign) noexcept 
#line 334
{ 
#line 340 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\cmath"
return ::copysignl(_Number, _Sign); 
#line 342 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\cmath"
} 
#line 344
[[nodiscard]] inline long double cos(long double _Xx) noexcept { 
#line 345
return ::cosl(_Xx); 
#line 346
} 
#line 348
[[nodiscard]] inline long double cosh(long double _Xx) noexcept { 
#line 349
return ::coshl(_Xx); 
#line 350
} 
#line 352
[[nodiscard]] inline long double erf(long double _Xx) noexcept { 
#line 353
return ::erfl(_Xx); 
#line 354
} 
#line 356
[[nodiscard]] inline long double erfc(long double _Xx) noexcept { 
#line 357
return ::erfcl(_Xx); 
#line 358
} 
#line 360
[[nodiscard]] inline long double exp(long double _Xx) noexcept { 
#line 361
return ::expl(_Xx); 
#line 362
} 
#line 364
[[nodiscard]] inline long double exp2(long double _Xx) noexcept { 
#line 365
return ::exp2l(_Xx); 
#line 366
} 
#line 368
[[nodiscard]] inline long double expm1(long double _Xx) noexcept { 
#line 369
return ::expm1l(_Xx); 
#line 370
} 
#line 372
[[nodiscard]] inline long double fabs(long double _Xx) noexcept { 
#line 373
return ::fabsl(_Xx); 
#line 374
} 
#line 376
[[nodiscard]] inline long double fdim(long double _Xx, long double _Yx) noexcept 
#line 377
{ 
#line 378
return ::fdiml(_Xx, _Yx); 
#line 379
} 
#line 381
[[nodiscard]] inline long double floor(long double _Xx) noexcept { 
#line 387 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\cmath"
return ::floorl(_Xx); 
#line 389 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\cmath"
} 
#line 391
[[nodiscard]] inline long double fma(long double 
#line 392
_Xx, long double _Yx, long double _Zx) noexcept { 
#line 393
return ::fmal(_Xx, _Yx, _Zx); 
#line 394
} 
#line 396
[[nodiscard]] inline long double fmax(long double _Xx, long double _Yx) noexcept 
#line 397
{ 
#line 398
return ::fmaxl(_Xx, _Yx); 
#line 399
} 
#line 401
[[nodiscard]] inline long double fmin(long double _Xx, long double _Yx) noexcept 
#line 402
{ 
#line 403
return ::fminl(_Xx, _Yx); 
#line 404
} 
#line 406
[[nodiscard]] inline long double fmod(long double _Xx, long double _Yx) noexcept 
#line 407
{ 
#line 408
return ::fmodl(_Xx, _Yx); 
#line 409
} 
#line 411
inline long double frexp(long double _Xx, int *_Yx) noexcept { 
#line 412
return ::frexpl(_Xx, _Yx); 
#line 413
} 
#line 415
[[nodiscard]] inline long double hypot(long double _Xx, long double _Yx) noexcept 
#line 416
{ 
#line 417
return ::hypotl(_Xx, _Yx); 
#line 418
} 
#line 420
[[nodiscard]] inline int ilogb(long double _Xx) noexcept { 
#line 421
return ::ilogbl(_Xx); 
#line 422
} 
#line 424
[[nodiscard]] inline long double ldexp(long double _Xx, int _Yx) noexcept { 
#line 425
return ::ldexpl(_Xx, _Yx); 
#line 426
} 
#line 428
[[nodiscard]] inline long double lgamma(long double _Xx) noexcept { 
#line 429
return ::lgammal(_Xx); 
#line 430
} 
#line 432
[[nodiscard]] inline __int64 llrint(long double _Xx) noexcept { 
#line 433
return ::llrintl(_Xx); 
#line 434
} 
#line 436
[[nodiscard]] inline __int64 llround(long double _Xx) noexcept { 
#line 437
return ::llroundl(_Xx); 
#line 438
} 
#line 440
[[nodiscard]] inline long double log(long double _Xx) noexcept { 
#line 441
return ::logl(_Xx); 
#line 442
} 
#line 444
[[nodiscard]] inline long double log10(long double _Xx) noexcept { 
#line 445
return ::log10l(_Xx); 
#line 446
} 
#line 448
[[nodiscard]] inline long double log1p(long double _Xx) noexcept { 
#line 449
return ::log1pl(_Xx); 
#line 450
} 
#line 452
[[nodiscard]] inline long double log2(long double _Xx) noexcept { 
#line 453
return ::log2l(_Xx); 
#line 454
} 
#line 456
[[nodiscard]] inline long double logb(long double _Xx) noexcept { 
#line 457
return ::logbl(_Xx); 
#line 458
} 
#line 460
[[nodiscard]] inline long lrint(long double _Xx) noexcept { 
#line 461
return ::lrintl(_Xx); 
#line 462
} 
#line 464
[[nodiscard]] inline long lround(long double _Xx) noexcept { 
#line 465
return ::lroundl(_Xx); 
#line 466
} 
#line 468
inline long double modf(long double _Xx, long double *_Yx) noexcept { 
#line 469
return ::modfl(_Xx, _Yx); 
#line 470
} 
#line 472
[[nodiscard]] inline long double nearbyint(long double _Xx) noexcept { 
#line 473
return ::nearbyintl(_Xx); 
#line 474
} 
#line 476
[[nodiscard]] inline long double nextafter(long double _Xx, long double _Yx) noexcept 
#line 477
{ 
#line 478
return ::nextafterl(_Xx, _Yx); 
#line 479
} 
#line 481
[[nodiscard]] inline long double nexttoward(long double _Xx, long double _Yx) noexcept 
#line 482
{ 
#line 483
return ::nexttowardl(_Xx, _Yx); 
#line 484
} 
#line 486
[[nodiscard]] inline long double pow(long double _Xx, long double _Yx) noexcept 
#line 487
{ 
#line 488
return ::powl(_Xx, _Yx); 
#line 489
} 
#line 491
[[nodiscard]] inline long double remainder(long double _Xx, long double _Yx) noexcept 
#line 492
{ 
#line 493
return ::remainderl(_Xx, _Yx); 
#line 494
} 
#line 496
inline long double remquo(long double _Xx, long double _Yx, int *_Zx) noexcept { 
#line 497
return ::remquol(_Xx, _Yx, _Zx); 
#line 498
} 
#line 500
[[nodiscard]] inline long double rint(long double _Xx) noexcept { 
#line 501
return ::rintl(_Xx); 
#line 502
} 
#line 504
[[nodiscard]] inline long double round(long double _Xx) noexcept { 
#line 510 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\cmath"
return ::roundl(_Xx); 
#line 512 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\cmath"
} 
#line 514
[[nodiscard]] inline long double scalbln(long double _Xx, long _Yx) noexcept { 
#line 515
return ::scalblnl(_Xx, _Yx); 
#line 516
} 
#line 518
[[nodiscard]] inline long double scalbn(long double _Xx, int _Yx) noexcept { 
#line 519
return ::scalbnl(_Xx, _Yx); 
#line 520
} 
#line 522
[[nodiscard]] inline long double sin(long double _Xx) noexcept { 
#line 523
return ::sinl(_Xx); 
#line 524
} 
#line 526
[[nodiscard]] inline long double sinh(long double _Xx) noexcept { 
#line 527
return ::sinhl(_Xx); 
#line 528
} 
#line 530
[[nodiscard]] inline long double sqrt(long double _Xx) noexcept { 
#line 531
return ::sqrtl(_Xx); 
#line 532
} 
#line 534
[[nodiscard]] inline long double tan(long double _Xx) noexcept { 
#line 535
return ::tanl(_Xx); 
#line 536
} 
#line 538
[[nodiscard]] inline long double tanh(long double _Xx) noexcept { 
#line 539
return ::tanhl(_Xx); 
#line 540
} 
#line 542
[[nodiscard]] inline long double tgamma(long double _Xx) noexcept { 
#line 543
return ::tgammal(_Xx); 
#line 544
} 
#line 546
[[nodiscard]] inline long double trunc(long double _Xx) noexcept { 
#line 552 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\cmath"
return ::truncl(_Xx); 
#line 554 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\cmath"
} 
#line 557
namespace std { 
#line 558
template< class _Ty1, class _Ty2> using _Common_float_type_t = conditional_t< is_same_v< _Ty1, long double>  || is_same_v< _Ty2, long double> , long double, conditional_t< is_same_v< _Ty1, float>  && is_same_v< _Ty2, float> , float, double> > ; 
#line 562
}
#line 564
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 >
double frexp ( _Ty _Value, int * const _Exp ) noexcept {
    return :: frexp ( static_cast < double > ( _Value ), _Exp );
}
#line 569
template < class _Ty1, class _Ty2, class _Ty3,
    :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 > && :: std :: is_arithmetic_v < _Ty3 >, int > = 0 >
[ [ nodiscard ] ] :: std :: _Common_float_type_t < _Ty1, :: std :: _Common_float_type_t < _Ty2, _Ty3 > > fma (
    _Ty1 _Left, _Ty2 _Middle, _Ty3 _Right ) noexcept {
    using _Common = :: std :: _Common_float_type_t < _Ty1, :: std :: _Common_float_type_t < _Ty2, _Ty3 >>;
    if constexpr ( :: std :: is_same_v < _Common, float > ) {
        return :: fmaf ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Middle ), static_cast < _Common > ( _Right ) );
    } else if constexpr ( :: std :: is_same_v < _Common, double > ) {
        return :: fma ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Middle ), static_cast < _Common > ( _Right ) );
    } else {
        return :: fmal ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Middle ), static_cast < _Common > ( _Right ) );
    }
}
#line 583
template < class _Ty1, class _Ty2, :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 >, int > = 0 >
:: std :: _Common_float_type_t < _Ty1, _Ty2 > remquo ( _Ty1 _Left, _Ty2 _Right, int * _Pquo ) noexcept {
    using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >;
    if constexpr ( :: std :: is_same_v < _Common, float > ) {
        return :: remquof ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ), _Pquo );
    } else if constexpr ( :: std :: is_same_v < _Common, double > ) {
        return :: remquo ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ), _Pquo );
    } else {
        return :: remquol ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ), _Pquo );
    }
}
#line 637 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\cmath"
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double acos ( _Ty _Left ) noexcept { return :: acos ( static_cast < double > ( _Left ) ); }
#line 638
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double asin ( _Ty _Left ) noexcept { return :: asin ( static_cast < double > ( _Left ) ); }
#line 639
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double atan ( _Ty _Left ) noexcept { return :: atan ( static_cast < double > ( _Left ) ); }
#line 640
template < class _Ty1, class _Ty2, :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 >, int > = 0 > [ [ nodiscard ] ] :: std :: _Common_float_type_t < _Ty1, _Ty2 > atan2 ( _Ty1 _Left, _Ty2 _Right ) noexcept { using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >; return :: atan2 ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ) ); }
#line 641
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double cos ( _Ty _Left ) noexcept { return :: cos ( static_cast < double > ( _Left ) ); }
#line 642
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double sin ( _Ty _Left ) noexcept { return :: sin ( static_cast < double > ( _Left ) ); }
#line 643
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double tan ( _Ty _Left ) noexcept { return :: tan ( static_cast < double > ( _Left ) ); }
#line 644
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double acosh ( _Ty _Left ) noexcept { return :: acosh ( static_cast < double > ( _Left ) ); }
#line 645
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double asinh ( _Ty _Left ) noexcept { return :: asinh ( static_cast < double > ( _Left ) ); }
#line 646
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double atanh ( _Ty _Left ) noexcept { return :: atanh ( static_cast < double > ( _Left ) ); }
#line 647
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double cosh ( _Ty _Left ) noexcept { return :: cosh ( static_cast < double > ( _Left ) ); }
#line 648
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double sinh ( _Ty _Left ) noexcept { return :: sinh ( static_cast < double > ( _Left ) ); }
#line 649
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double tanh ( _Ty _Left ) noexcept { return :: tanh ( static_cast < double > ( _Left ) ); }
#line 650
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double exp ( _Ty _Left ) noexcept { return :: exp ( static_cast < double > ( _Left ) ); }
#line 651
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double exp2 ( _Ty _Left ) noexcept { return :: exp2 ( static_cast < double > ( _Left ) ); }
#line 652
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double expm1 ( _Ty _Left ) noexcept { return :: expm1 ( static_cast < double > ( _Left ) ); }
#line 654
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] int ilogb ( _Ty _Left ) noexcept { return :: ilogb ( static_cast < double > ( _Left ) ); }
#line 655
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double ldexp ( _Ty _Left, int _Arg2 ) noexcept { return :: ldexp ( static_cast < double > ( _Left ), _Arg2 ); }
#line 656
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double log ( _Ty _Left ) noexcept { return :: log ( static_cast < double > ( _Left ) ); }
#line 657
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double log10 ( _Ty _Left ) noexcept { return :: log10 ( static_cast < double > ( _Left ) ); }
#line 658
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double log1p ( _Ty _Left ) noexcept { return :: log1p ( static_cast < double > ( _Left ) ); }
#line 659
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double log2 ( _Ty _Left ) noexcept { return :: log2 ( static_cast < double > ( _Left ) ); }
#line 660
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double logb ( _Ty _Left ) noexcept { return :: logb ( static_cast < double > ( _Left ) ); }
#line 662
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double scalbn ( _Ty _Left, int _Arg2 ) noexcept { return :: scalbn ( static_cast < double > ( _Left ), _Arg2 ); }
#line 663
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double scalbln ( _Ty _Left, long _Arg2 ) noexcept { return :: scalbln ( static_cast < double > ( _Left ), _Arg2 ); }
#line 664
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double cbrt ( _Ty _Left ) noexcept { return :: cbrt ( static_cast < double > ( _Left ) ); }
#line 666
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double fabs ( _Ty _Left ) noexcept { return :: fabs ( static_cast < double > ( _Left ) ); }
#line 667
template < class _Ty1, class _Ty2, :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 >, int > = 0 > [ [ nodiscard ] ] :: std :: _Common_float_type_t < _Ty1, _Ty2 > hypot ( _Ty1 _Left, _Ty2 _Right ) noexcept { using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >; return :: hypot ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ) ); }
#line 669
template < class _Ty1, class _Ty2, :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 >, int > = 0 > [ [ nodiscard ] ] :: std :: _Common_float_type_t < _Ty1, _Ty2 > pow ( _Ty1 _Left, _Ty2 _Right ) noexcept { using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >; return :: pow ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ) ); }
#line 670
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double sqrt ( _Ty _Left ) noexcept { return :: sqrt ( static_cast < double > ( _Left ) ); }
#line 671
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double erf ( _Ty _Left ) noexcept { return :: erf ( static_cast < double > ( _Left ) ); }
#line 672
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double erfc ( _Ty _Left ) noexcept { return :: erfc ( static_cast < double > ( _Left ) ); }
#line 673
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double lgamma ( _Ty _Left ) noexcept { return :: lgamma ( static_cast < double > ( _Left ) ); }
#line 674
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double tgamma ( _Ty _Left ) noexcept { return :: tgamma ( static_cast < double > ( _Left ) ); }
#line 675
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double ceil ( _Ty _Left ) noexcept { return :: ceil ( static_cast < double > ( _Left ) ); }
#line 676
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double floor ( _Ty _Left ) noexcept { return :: floor ( static_cast < double > ( _Left ) ); }
#line 677
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double nearbyint ( _Ty _Left ) noexcept { return :: nearbyint ( static_cast < double > ( _Left ) ); }
#line 678
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double rint ( _Ty _Left ) noexcept { return :: rint ( static_cast < double > ( _Left ) ); }
#line 679
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] long lrint ( _Ty _Left ) noexcept { return :: lrint ( static_cast < double > ( _Left ) ); }
#line 680
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] long long llrint ( _Ty _Left ) noexcept { return :: llrint ( static_cast < double > ( _Left ) ); }
#line 681
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double round ( _Ty _Left ) noexcept { return :: round ( static_cast < double > ( _Left ) ); }
#line 682
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] long lround ( _Ty _Left ) noexcept { return :: lround ( static_cast < double > ( _Left ) ); }
#line 683
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] long long llround ( _Ty _Left ) noexcept { return :: llround ( static_cast < double > ( _Left ) ); }
#line 684
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double trunc ( _Ty _Left ) noexcept { return :: trunc ( static_cast < double > ( _Left ) ); }
#line 685
template < class _Ty1, class _Ty2, :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 >, int > = 0 > [ [ nodiscard ] ] :: std :: _Common_float_type_t < _Ty1, _Ty2 > fmod ( _Ty1 _Left, _Ty2 _Right ) noexcept { using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >; return :: fmod ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ) ); }
#line 686
template < class _Ty1, class _Ty2, :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 >, int > = 0 > [ [ nodiscard ] ] :: std :: _Common_float_type_t < _Ty1, _Ty2 > remainder ( _Ty1 _Left, _Ty2 _Right ) noexcept { using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >; return :: remainder ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ) ); }
#line 688
template < class _Ty1, class _Ty2, :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 >, int > = 0 > [ [ nodiscard ] ] :: std :: _Common_float_type_t < _Ty1, _Ty2 > copysign ( _Ty1 _Left, _Ty2 _Right ) noexcept { using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >; return :: copysign ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ) ); }
#line 690
template < class _Ty1, class _Ty2, :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 >, int > = 0 > [ [ nodiscard ] ] :: std :: _Common_float_type_t < _Ty1, _Ty2 > nextafter ( _Ty1 _Left, _Ty2 _Right ) noexcept { using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >; return :: nextafter ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ) ); }
#line 691
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double nexttoward ( _Ty _Left, long double _Arg2 ) noexcept { return :: nexttoward ( static_cast < double > ( _Left ), _Arg2 ); }
#line 692
template < class _Ty1, class _Ty2, :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 >, int > = 0 > [ [ nodiscard ] ] :: std :: _Common_float_type_t < _Ty1, _Ty2 > fdim ( _Ty1 _Left, _Ty2 _Right ) noexcept { using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >; return :: fdim ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ) ); }
#line 693
template < class _Ty1, class _Ty2, :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 >, int > = 0 > [ [ nodiscard ] ] :: std :: _Common_float_type_t < _Ty1, _Ty2 > fmax ( _Ty1 _Left, _Ty2 _Right ) noexcept { using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >; return :: fmax ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ) ); }
#line 694
template < class _Ty1, class _Ty2, :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 >, int > = 0 > [ [ nodiscard ] ] :: std :: _Common_float_type_t < _Ty1, _Ty2 > fmin ( _Ty1 _Left, _Ty2 _Right ) noexcept { using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >; return :: fmin ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ) ); }
#line 710
namespace std { 
#line 711
using ::abs;
#line 712
using ::acos;
#line 713
using ::asin;
#line 714
using ::atan;
#line 715
using ::atan2;
#line 716
using ::ceil;
#line 717
using ::cos;
#line 718
using ::cosh;
#line 719
using ::exp;
#line 720
using ::fabs;
#line 721
using ::floor;
#line 722
using ::fmod;
#line 723
using ::frexp;
#line 724
using ::ldexp;
#line 725
using ::log;
#line 726
using ::log10;
#line 727
using ::modf;
#line 728
using ::pow;
#line 729
using ::sin;
#line 730
using ::sinh;
#line 731
using ::sqrt;
#line 732
using ::tan;
#line 733
using ::tanh;
#line 735
using ::acosf;
#line 736
using ::asinf;
#line 737
using ::atanf;
#line 738
using ::atan2f;
#line 739
using ::ceilf;
#line 740
using ::cosf;
#line 741
using ::coshf;
#line 742
using ::expf;
#line 743
using ::fabsf;
#line 744
using ::floorf;
#line 745
using ::fmodf;
#line 746
using ::frexpf;
#line 747
using ::ldexpf;
#line 748
using ::logf;
#line 749
using ::log10f;
#line 750
using ::modff;
#line 751
using ::powf;
#line 752
using ::sinf;
#line 753
using ::sinhf;
#line 754
using ::sqrtf;
#line 755
using ::tanf;
#line 756
using ::tanhf;
#line 758
using ::acosl;
#line 759
using ::asinl;
#line 760
using ::atanl;
#line 761
using ::atan2l;
#line 762
using ::ceill;
#line 763
using ::cosl;
#line 764
using ::coshl;
#line 765
using ::expl;
#line 766
using ::fabsl;
#line 767
using ::floorl;
#line 768
using ::fmodl;
#line 769
using ::frexpl;
#line 770
using ::ldexpl;
#line 771
using ::logl;
#line 772
using ::log10l;
#line 773
using ::modfl;
#line 774
using ::powl;
#line 775
using ::sinl;
#line 776
using ::sinhl;
#line 777
using ::sqrtl;
#line 778
using ::tanl;
#line 779
using ::tanhl;
#line 781
using ::float_t;
#line 782
using ::double_t;
#line 784
using ::acosh;
#line 785
using ::asinh;
#line 786
using ::atanh;
#line 787
using ::cbrt;
#line 788
using ::erf;
#line 789
using ::erfc;
#line 790
using ::expm1;
#line 791
using ::exp2;
#line 792
using ::hypot;
#line 793
using ::ilogb;
#line 794
using ::lgamma;
#line 795
using ::log1p;
#line 796
using ::log2;
#line 797
using ::logb;
#line 798
using ::llrint;
#line 799
using ::lrint;
#line 800
using ::nearbyint;
#line 801
using ::rint;
#line 802
using ::llround;
#line 803
using ::lround;
#line 804
using ::fdim;
#line 805
using ::fma;
#line 806
using ::fmax;
#line 807
using ::fmin;
#line 808
using ::round;
#line 809
using ::trunc;
#line 810
using ::remainder;
#line 811
using ::remquo;
#line 812
using ::copysign;
#line 813
using ::nan;
#line 814
using ::nextafter;
#line 815
using ::scalbn;
#line 816
using ::scalbln;
#line 817
using ::nexttoward;
#line 818
using ::tgamma;
#line 820
using ::acoshf;
#line 821
using ::asinhf;
#line 822
using ::atanhf;
#line 823
using ::cbrtf;
#line 824
using ::erff;
#line 825
using ::erfcf;
#line 826
using ::expm1f;
#line 827
using ::exp2f;
#line 828
using ::hypotf;
#line 829
using ::ilogbf;
#line 830
using ::lgammaf;
#line 831
using ::log1pf;
#line 832
using ::log2f;
#line 833
using ::logbf;
#line 834
using ::llrintf;
#line 835
using ::lrintf;
#line 836
using ::nearbyintf;
#line 837
using ::rintf;
#line 838
using ::llroundf;
#line 839
using ::lroundf;
#line 840
using ::fdimf;
#line 841
using ::fmaf;
#line 842
using ::fmaxf;
#line 843
using ::fminf;
#line 844
using ::roundf;
#line 845
using ::truncf;
#line 846
using ::remainderf;
#line 847
using ::remquof;
#line 848
using ::copysignf;
#line 849
using ::nanf;
#line 850
using ::nextafterf;
#line 851
using ::scalbnf;
#line 852
using ::scalblnf;
#line 853
using ::nexttowardf;
#line 854
using ::tgammaf;
#line 856
using ::acoshl;
#line 857
using ::asinhl;
#line 858
using ::atanhl;
#line 859
using ::cbrtl;
#line 860
using ::erfl;
#line 861
using ::erfcl;
#line 862
using ::expm1l;
#line 863
using ::exp2l;
#line 864
using ::hypotl;
#line 865
using ::ilogbl;
#line 866
using ::lgammal;
#line 867
using ::log1pl;
#line 868
using ::log2l;
#line 869
using ::logbl;
#line 870
using ::llrintl;
#line 871
using ::lrintl;
#line 872
using ::nearbyintl;
#line 873
using ::rintl;
#line 874
using ::llroundl;
#line 875
using ::lroundl;
#line 876
using ::fdiml;
#line 877
using ::fmal;
#line 878
using ::fmaxl;
#line 879
using ::fminl;
#line 880
using ::roundl;
#line 881
using ::truncl;
#line 882
using ::remainderl;
#line 883
using ::remquol;
#line 884
using ::copysignl;
#line 885
using ::nanl;
#line 886
using ::nextafterl;
#line 887
using ::scalbnl;
#line 888
using ::scalblnl;
#line 889
using ::nexttowardl;
#line 890
using ::tgammal;
#line 892
using ::fpclassify;
#line 893
using ::signbit;
#line 894
using ::isfinite;
#line 895
using ::isinf;
#line 896
using ::isnan;
#line 897
using ::isnormal;
#line 898
using ::isgreater;
#line 899
using ::isgreaterequal;
#line 900
using ::isless;
#line 901
using ::islessequal;
#line 902
using ::islessgreater;
#line 903
using ::isunordered;
#line 904
}
#line 1464 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\cmath"
#pragma warning(pop)
#pragma pack ( pop )
#line 10839 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern "C" double __cdecl _hypot(double x, double y); 
#line 10840
extern "C" float __cdecl _hypotf(float x, float y); 
#line 10850 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern inline bool signbit(long double) throw(); 
#line 10851
extern "C" int _ldsign(long double); 
#line 10894 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern inline bool signbit(double) throw(); 
#line 10895
extern "C" int _dsign(double); 
#line 10939 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern inline bool signbit(float) throw(); 
#line 10940
extern "C" int _fdsign(float); 
#line 10948 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
static __inline bool isinf(long double a); 
#line 10983 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
static __inline bool isinf(double a); 
#line 11021 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
static __inline bool isinf(float a); 
#line 11028 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
static __inline bool isnan(long double a); 
#line 11061 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
static __inline bool isnan(double a); 
#line 11097 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
static __inline bool isnan(float a); 
#line 11104 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
static __inline bool isfinite(long double a); 
#line 11141 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
static __inline bool isfinite(double a); 
#line 11177 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
static __inline bool isfinite(float a); 
#line 11185 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
template< class T> extern T _Pow_int(T, int) throw(); 
#line 11186
extern inline __int64 abs(__int64) throw(); 
#line 11267 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern inline long __cdecl abs(long) throw(); 
#line 11271 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern inline float __cdecl abs(float) throw(); 
#line 11272
extern inline double __cdecl abs(double) throw(); 
#line 11273
extern inline float __cdecl fabs(float) throw(); 
#line 11274
extern inline float __cdecl ceil(float) throw(); 
#line 11275
extern inline float __cdecl floor(float) throw(); 
#line 11276
extern inline float __cdecl sqrt(float) throw(); 
#line 11277
extern inline float __cdecl pow(float, float) throw(); 
#line 11314 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
template< class _Ty1, class _Ty2, std::enable_if_t< std::is_arithmetic_v< _Ty1>  && std::is_arithmetic_v< _Ty2> , int>  > [[nodiscard]] std::_Common_float_type_t< _Ty1, _Ty2>  __cdecl pow(_Ty1 _Left, _Ty2 _Right) noexcept; 
#line 11321 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern inline float __cdecl log(float) throw(); 
#line 11322
extern inline float __cdecl log10(float) throw(); 
#line 11323
extern inline float __cdecl fmod(float, float) throw(); 
#line 11324
extern inline float __cdecl modf(float, float *) throw(); 
#line 11325
extern inline float __cdecl exp(float) throw(); 
#line 11326
extern inline float __cdecl frexp(float, int *) throw(); 
#line 11327
extern inline float __cdecl ldexp(float, int) throw(); 
#line 11328
extern inline float __cdecl asin(float) throw(); 
#line 11329
extern inline float __cdecl sin(float) throw(); 
#line 11330
extern inline float __cdecl sinh(float) throw(); 
#line 11331
extern inline float __cdecl acos(float) throw(); 
#line 11332
extern inline float __cdecl cos(float) throw(); 
#line 11333
extern inline float __cdecl cosh(float) throw(); 
#line 11334
extern inline float __cdecl atan(float) throw(); 
#line 11335
extern inline float __cdecl atan2(float, float) throw(); 
#line 11336
extern inline float __cdecl tan(float) throw(); 
#line 11337
extern inline float __cdecl tanh(float) throw(); 
#line 11560 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
extern inline float __cdecl logb(float) throw(); 
#line 11561
extern inline int __cdecl ilogb(float) throw(); 
#line 11562
extern float __cdecl scalbn(float, float) throw(); 
#line 11563
extern inline float __cdecl scalbln(float, long) throw(); 
#line 11564
extern inline float __cdecl exp2(float) throw(); 
#line 11565
extern inline float __cdecl expm1(float) throw(); 
#line 11566
extern inline float __cdecl log2(float) throw(); 
#line 11567
extern inline float __cdecl log1p(float) throw(); 
#line 11568
extern inline float __cdecl acosh(float) throw(); 
#line 11569
extern inline float __cdecl asinh(float) throw(); 
#line 11570
extern inline float __cdecl atanh(float) throw(); 
#line 11571
extern inline float __cdecl hypot(float, float) throw(); 
#line 11572
extern inline float __cdecl cbrt(float) throw(); 
#line 11573
extern inline float __cdecl erf(float) throw(); 
#line 11574
extern inline float __cdecl erfc(float) throw(); 
#line 11575
extern inline float __cdecl lgamma(float) throw(); 
#line 11576
extern inline float __cdecl tgamma(float) throw(); 
#line 11577
extern inline float __cdecl copysign(float, float) throw(); 
#line 11578
extern inline float __cdecl nextafter(float, float) throw(); 
#line 11579
extern inline float __cdecl remainder(float, float) throw(); 
#line 11580
extern inline float __cdecl remquo(float, float, int *) throw(); 
#line 11581
extern inline float __cdecl round(float) throw(); 
#line 11582
extern inline long __cdecl lround(float) throw(); 
#line 11583
extern inline __int64 __cdecl llround(float) throw(); 
#line 11584
extern inline float __cdecl trunc(float) throw(); 
#line 11585
extern inline float __cdecl rint(float) throw(); 
#line 11586
extern inline long __cdecl lrint(float) throw(); 
#line 11587
extern inline __int64 __cdecl llrint(float) throw(); 
#line 11588
extern inline float __cdecl nearbyint(float) throw(); 
#line 11589
extern inline float __cdecl fdim(float, float) throw(); 
#line 11590
extern inline float __cdecl fma(float, float, float) throw(); 
#line 11591
extern inline float __cdecl fmax(float, float) throw(); 
#line 11592
extern inline float __cdecl fmin(float, float) throw(); 
#line 11595 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
static inline float exp10(const float a); 
#line 11597
static inline float rsqrt(const float a); 
#line 11599
static inline float rcbrt(const float a); 
#line 11601
static inline float sinpi(const float a); 
#line 11603
static inline float cospi(const float a); 
#line 11605
static inline void sincospi(const float a, float *const sptr, float *const cptr); 
#line 11607
static inline void sincos(const float a, float *const sptr, float *const cptr); 
#line 11609
static inline float j0(const float a); 
#line 11611
static inline float j1(const float a); 
#line 11613
static inline float jn(const int n, const float a); 
#line 11615
static inline float y0(const float a); 
#line 11617
static inline float y1(const float a); 
#line 11619
static inline float yn(const int n, const float a); 
#line 11621
static inline float cyl_bessel_i0(const float a); 
#line 11623
static inline float cyl_bessel_i1(const float a); 
#line 11625
static inline float erfinv(const float a); 
#line 11627
static inline float erfcinv(const float a); 
#line 11629
static inline float normcdfinv(const float a); 
#line 11631
static inline float normcdf(const float a); 
#line 11633
static inline float erfcx(const float a); 
#line 11635
static inline double copysign(const double a, const float b); 
#line 11637
static inline double copysign(const float a, const double b); 
#line 11645
static inline unsigned min(const unsigned a, const unsigned b); 
#line 11653
static inline unsigned min(const int a, const unsigned b); 
#line 11661
static inline unsigned min(const unsigned a, const int b); 
#line 11669
static inline long min(const long a, const long b); 
#line 11677
static inline unsigned long min(const unsigned long a, const unsigned long b); 
#line 11685
static inline unsigned long min(const long a, const unsigned long b); 
#line 11693
static inline unsigned long min(const unsigned long a, const long b); 
#line 11701
static inline __int64 min(const __int64 a, const __int64 b); 
#line 11709
static inline unsigned __int64 min(const unsigned __int64 a, const unsigned __int64 b); 
#line 11717
static inline unsigned __int64 min(const __int64 a, const unsigned __int64 b); 
#line 11725
static inline unsigned __int64 min(const unsigned __int64 a, const __int64 b); 
#line 11736
static inline float min(const float a, const float b); 
#line 11747
static inline double min(const double a, const double b); 
#line 11757
static inline double min(const float a, const double b); 
#line 11767
static inline double min(const double a, const float b); 
#line 11775
static inline unsigned max(const unsigned a, const unsigned b); 
#line 11783
static inline unsigned max(const int a, const unsigned b); 
#line 11791
static inline unsigned max(const unsigned a, const int b); 
#line 11799
static inline long max(const long a, const long b); 
#line 11807
static inline unsigned long max(const unsigned long a, const unsigned long b); 
#line 11815
static inline unsigned long max(const long a, const unsigned long b); 
#line 11823
static inline unsigned long max(const unsigned long a, const long b); 
#line 11831
static inline __int64 max(const __int64 a, const __int64 b); 
#line 11839
static inline unsigned __int64 max(const unsigned __int64 a, const unsigned __int64 b); 
#line 11847
static inline unsigned __int64 max(const __int64 a, const unsigned __int64 b); 
#line 11855
static inline unsigned __int64 max(const unsigned __int64 a, const __int64 b); 
#line 11866
static inline float max(const float a, const float b); 
#line 11877
static inline double max(const double a, const double b); 
#line 11887
static inline double max(const float a, const double b); 
#line 11897
static inline double max(const double a, const float b); 
#line 11909
extern "C" {
#line 11910
inline void *__nv_aligned_device_malloc(size_t size, size_t align) {int volatile ___ = 1;(void)size;(void)align;::exit(___);}
#if 0
#line 11911
{ 
#line 11912
void *__nv_aligned_device_malloc_impl(size_t, size_t); 
#line 11913
return __nv_aligned_device_malloc_impl(size, align); 
#line 11914
} 
#endif
#line 11915 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.h"
}
#line 433 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.hpp"
static __inline bool isinf(const long double a) 
#line 434
{ 
#line 438 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.hpp"
return isinf< long double> (a); 
#line 440 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.hpp"
} 
#line 449 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.hpp"
static __inline bool isinf(const double a) 
#line 450
{ 
#line 454 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.hpp"
return isinf< double> (a); 
#line 456 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.hpp"
} 
#line 465 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.hpp"
static __inline bool isinf(const float a) 
#line 466
{ 
#line 470 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.hpp"
return isinf< float> (a); 
#line 472 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.hpp"
} 
#line 481 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.hpp"
static __inline bool isnan(const long double a) 
#line 482
{ 
#line 486 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.hpp"
return isnan< long double> (a); 
#line 488 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.hpp"
} 
#line 497 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.hpp"
static __inline bool isnan(const double a) 
#line 498
{ 
#line 502 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.hpp"
return isnan< double> (a); 
#line 504 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.hpp"
} 
#line 513 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.hpp"
static __inline bool isnan(const float a) 
#line 514
{ 
#line 518 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.hpp"
return isnan< float> (a); 
#line 520 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.hpp"
} 
#line 529 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.hpp"
static __inline bool isfinite(const long double a) 
#line 530
{ 
#line 534 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.hpp"
return isfinite< long double> (a); 
#line 536 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.hpp"
} 
#line 545 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.hpp"
static __inline bool isfinite(const double a) 
#line 546
{ 
#line 550 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.hpp"
return isfinite< double> (a); 
#line 552 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.hpp"
} 
#line 561 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.hpp"
static __inline bool isfinite(const float a) 
#line 562
{ 
#line 566 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.hpp"
return isfinite< float> (a); 
#line 568 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.hpp"
} 
#line 758 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.hpp"
static inline float exp10(const float a) 
#line 759
{ 
#line 760
return exp10f(a); 
#line 761
} 
#line 763
static inline float rsqrt(const float a) 
#line 764
{ 
#line 765
return rsqrtf(a); 
#line 766
} 
#line 768
static inline float rcbrt(const float a) 
#line 769
{ 
#line 770
return rcbrtf(a); 
#line 771
} 
#line 773
static inline float sinpi(const float a) 
#line 774
{ 
#line 775
return sinpif(a); 
#line 776
} 
#line 778
static inline float cospi(const float a) 
#line 779
{ 
#line 780
return cospif(a); 
#line 781
} 
#line 783
static inline void sincospi(const float a, float *const sptr, float *const cptr) 
#line 784
{ 
#line 785
sincospif(a, sptr, cptr); 
#line 786
} 
#line 788
static inline void sincos(const float a, float *const sptr, float *const cptr) 
#line 789
{ 
#line 790
sincosf(a, sptr, cptr); 
#line 791
} 
#line 793
static inline float j0(const float a) 
#line 794
{ 
#line 795
return j0f(a); 
#line 796
} 
#line 798
static inline float j1(const float a) 
#line 799
{ 
#line 800
return j1f(a); 
#line 801
} 
#line 803
static inline float jn(const int n, const float a) 
#line 804
{ 
#line 805
return jnf(n, a); 
#line 806
} 
#line 808
static inline float y0(const float a) 
#line 809
{ 
#line 810
return y0f(a); 
#line 811
} 
#line 813
static inline float y1(const float a) 
#line 814
{ 
#line 815
return y1f(a); 
#line 816
} 
#line 818
static inline float yn(const int n, const float a) 
#line 819
{ 
#line 820
return ynf(n, a); 
#line 821
} 
__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 823
static inline float cyl_bessel_i0(const float a) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)a;::exit(___);}
#if 0
#line 824
{ 
#line 825
return cyl_bessel_i0f(a); 
#line 826
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 828 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.hpp"
static inline float cyl_bessel_i1(const float a) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)a;::exit(___);}
#if 0
#line 829
{ 
#line 830
return cyl_bessel_i1f(a); 
#line 831
} 
#endif
#line 833 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.hpp"
static inline float erfinv(const float a) 
#line 834
{ 
#line 835
return erfinvf(a); 
#line 836
} 
#line 838
static inline float erfcinv(const float a) 
#line 839
{ 
#line 840
return erfcinvf(a); 
#line 841
} 
#line 843
static inline float normcdfinv(const float a) 
#line 844
{ 
#line 845
return normcdfinvf(a); 
#line 846
} 
#line 848
static inline float normcdf(const float a) 
#line 849
{ 
#line 850
return normcdff(a); 
#line 851
} 
#line 853
static inline float erfcx(const float a) 
#line 854
{ 
#line 855
return erfcxf(a); 
#line 856
} 
#line 858
static inline double copysign(const double a, const float b) 
#line 859
{ 
#line 860
return copysign(a, static_cast< double>(b)); 
#line 861
} 
#line 863
static inline double copysign(const float a, const double b) 
#line 864
{ 
#line 865
return copysign(static_cast< double>(a), b); 
#line 866
} 
#line 868
static inline unsigned min(const unsigned a, const unsigned b) 
#line 869
{ 
#line 870
return umin(a, b); 
#line 871
} 
#line 873
static inline unsigned min(const int a, const unsigned b) 
#line 874
{ 
#line 875
return umin(static_cast< unsigned>(a), b); 
#line 876
} 
#line 878
static inline unsigned min(const unsigned a, const int b) 
#line 879
{ 
#line 880
return umin(a, static_cast< unsigned>(b)); 
#line 881
} 
#line 883
static inline long min(const long a, const long b) 
#line 884
{ 
#line 885
long retval; 
#line 888
#pragma warning (disable: 4127)
#line 891 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.hpp"
if (sizeof(long) == sizeof(int)) { 
#line 893
#pragma warning (default: 4127)
#line 895 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.hpp"
retval = (static_cast< long>(min(static_cast< int>(a), static_cast< int>(b)))); 
#line 896
} else { 
#line 897
retval = (static_cast< long>(llmin(static_cast< __int64>(a), static_cast< __int64>(b)))); 
#line 898
}  
#line 899
return retval; 
#line 900
} 
#line 902
static inline unsigned long min(const unsigned long a, const unsigned long b) 
#line 903
{ 
#line 904
unsigned long retval; 
#line 906
#pragma warning (disable: 4127)
#line 908 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.hpp"
if (sizeof(unsigned long) == sizeof(unsigned)) { 
#line 910
#pragma warning (default: 4127)
#line 912 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.hpp"
retval = (static_cast< unsigned long>(umin(static_cast< unsigned>(a), static_cast< unsigned>(b)))); 
#line 913
} else { 
#line 914
retval = (static_cast< unsigned long>(ullmin(static_cast< unsigned __int64>(a), static_cast< unsigned __int64>(b)))); 
#line 915
}  
#line 916
return retval; 
#line 917
} 
#line 919
static inline unsigned long min(const long a, const unsigned long b) 
#line 920
{ 
#line 921
unsigned long retval; 
#line 923
#pragma warning (disable: 4127)
#line 925 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.hpp"
if (sizeof(unsigned long) == sizeof(unsigned)) { 
#line 927
#pragma warning (default: 4127)
#line 929 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.hpp"
retval = (static_cast< unsigned long>(umin(static_cast< unsigned>(a), static_cast< unsigned>(b)))); 
#line 930
} else { 
#line 931
retval = (static_cast< unsigned long>(ullmin(static_cast< unsigned __int64>(a), static_cast< unsigned __int64>(b)))); 
#line 932
}  
#line 933
return retval; 
#line 934
} 
#line 936
static inline unsigned long min(const unsigned long a, const long b) 
#line 937
{ 
#line 938
unsigned long retval; 
#line 940
#pragma warning (disable: 4127)
#line 942 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.hpp"
if (sizeof(unsigned long) == sizeof(unsigned)) { 
#line 944
#pragma warning (default: 4127)
#line 946 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.hpp"
retval = (static_cast< unsigned long>(umin(static_cast< unsigned>(a), static_cast< unsigned>(b)))); 
#line 947
} else { 
#line 948
retval = (static_cast< unsigned long>(ullmin(static_cast< unsigned __int64>(a), static_cast< unsigned __int64>(b)))); 
#line 949
}  
#line 950
return retval; 
#line 951
} 
#line 953
static inline __int64 min(const __int64 a, const __int64 b) 
#line 954
{ 
#line 955
return llmin(a, b); 
#line 956
} 
#line 958
static inline unsigned __int64 min(const unsigned __int64 a, const unsigned __int64 b) 
#line 959
{ 
#line 960
return ullmin(a, b); 
#line 961
} 
#line 963
static inline unsigned __int64 min(const __int64 a, const unsigned __int64 b) 
#line 964
{ 
#line 965
return ullmin(static_cast< unsigned __int64>(a), b); 
#line 966
} 
#line 968
static inline unsigned __int64 min(const unsigned __int64 a, const __int64 b) 
#line 969
{ 
#line 970
return ullmin(a, static_cast< unsigned __int64>(b)); 
#line 971
} 
#line 973
static inline float min(const float a, const float b) 
#line 974
{ 
#line 975
return fminf(a, b); 
#line 976
} 
#line 978
static inline double min(const double a, const double b) 
#line 979
{ 
#line 980
return fmin(a, b); 
#line 981
} 
#line 983
static inline double min(const float a, const double b) 
#line 984
{ 
#line 985
return fmin(static_cast< double>(a), b); 
#line 986
} 
#line 988
static inline double min(const double a, const float b) 
#line 989
{ 
#line 990
return fmin(a, static_cast< double>(b)); 
#line 991
} 
#line 993
static inline unsigned max(const unsigned a, const unsigned b) 
#line 994
{ 
#line 995
return umax(a, b); 
#line 996
} 
#line 998
static inline unsigned max(const int a, const unsigned b) 
#line 999
{ 
#line 1000
return umax(static_cast< unsigned>(a), b); 
#line 1001
} 
#line 1003
static inline unsigned max(const unsigned a, const int b) 
#line 1004
{ 
#line 1005
return umax(a, static_cast< unsigned>(b)); 
#line 1006
} 
#line 1008
static inline long max(const long a, const long b) 
#line 1009
{ 
#line 1010
long retval; 
#line 1013
#pragma warning (disable: 4127)
#line 1015 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.hpp"
if (sizeof(long) == sizeof(int)) { 
#line 1017
#pragma warning (default: 4127)
#line 1019 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.hpp"
retval = (static_cast< long>(max(static_cast< int>(a), static_cast< int>(b)))); 
#line 1020
} else { 
#line 1021
retval = (static_cast< long>(llmax(static_cast< __int64>(a), static_cast< __int64>(b)))); 
#line 1022
}  
#line 1023
return retval; 
#line 1024
} 
#line 1026
static inline unsigned long max(const unsigned long a, const unsigned long b) 
#line 1027
{ 
#line 1028
unsigned long retval; 
#line 1030
#pragma warning (disable: 4127)
#line 1032 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.hpp"
if (sizeof(unsigned long) == sizeof(unsigned)) { 
#line 1034
#pragma warning (default: 4127)
#line 1036 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.hpp"
retval = (static_cast< unsigned long>(umax(static_cast< unsigned>(a), static_cast< unsigned>(b)))); 
#line 1037
} else { 
#line 1038
retval = (static_cast< unsigned long>(ullmax(static_cast< unsigned __int64>(a), static_cast< unsigned __int64>(b)))); 
#line 1039
}  
#line 1040
return retval; 
#line 1041
} 
#line 1043
static inline unsigned long max(const long a, const unsigned long b) 
#line 1044
{ 
#line 1045
unsigned long retval; 
#line 1047
#pragma warning (disable: 4127)
#line 1049 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.hpp"
if (sizeof(unsigned long) == sizeof(unsigned)) { 
#line 1051
#pragma warning (default: 4127)
#line 1053 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.hpp"
retval = (static_cast< unsigned long>(umax(static_cast< unsigned>(a), static_cast< unsigned>(b)))); 
#line 1054
} else { 
#line 1055
retval = (static_cast< unsigned long>(ullmax(static_cast< unsigned __int64>(a), static_cast< unsigned __int64>(b)))); 
#line 1056
}  
#line 1057
return retval; 
#line 1058
} 
#line 1060
static inline unsigned long max(const unsigned long a, const long b) 
#line 1061
{ 
#line 1062
unsigned long retval; 
#line 1064
#pragma warning (disable: 4127)
#line 1066 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.hpp"
if (sizeof(unsigned long) == sizeof(unsigned)) { 
#line 1068
#pragma warning (default: 4127)
#line 1070 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.hpp"
retval = (static_cast< unsigned long>(umax(static_cast< unsigned>(a), static_cast< unsigned>(b)))); 
#line 1071
} else { 
#line 1072
retval = (static_cast< unsigned long>(ullmax(static_cast< unsigned __int64>(a), static_cast< unsigned __int64>(b)))); 
#line 1073
}  
#line 1074
return retval; 
#line 1075
} 
#line 1077
static inline __int64 max(const __int64 a, const __int64 b) 
#line 1078
{ 
#line 1079
return llmax(a, b); 
#line 1080
} 
#line 1082
static inline unsigned __int64 max(const unsigned __int64 a, const unsigned __int64 b) 
#line 1083
{ 
#line 1084
return ullmax(a, b); 
#line 1085
} 
#line 1087
static inline unsigned __int64 max(const __int64 a, const unsigned __int64 b) 
#line 1088
{ 
#line 1089
return ullmax(static_cast< unsigned __int64>(a), b); 
#line 1090
} 
#line 1092
static inline unsigned __int64 max(const unsigned __int64 a, const __int64 b) 
#line 1093
{ 
#line 1094
return ullmax(a, static_cast< unsigned __int64>(b)); 
#line 1095
} 
#line 1097
static inline float max(const float a, const float b) 
#line 1098
{ 
#line 1099
return fmaxf(a, b); 
#line 1100
} 
#line 1102
static inline double max(const double a, const double b) 
#line 1103
{ 
#line 1104
return fmax(a, b); 
#line 1105
} 
#line 1107
static inline double max(const float a, const double b) 
#line 1108
{ 
#line 1109
return fmax(static_cast< double>(a), b); 
#line 1110
} 
#line 1112
static inline double max(const double a, const float b) 
#line 1113
{ 
#line 1114
return fmax(a, static_cast< double>(b)); 
#line 1115
} 
#line 1121
#pragma warning(disable : 4211)
#line 1126 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\math_functions.hpp"
static inline int min(const int a, const int b) 
#line 1127
{ 
#line 1128
return (a < b) ? a : b; 
#line 1129
} 
#line 1131
static inline unsigned umin(const unsigned a, const unsigned b) 
#line 1132
{ 
#line 1133
return (a < b) ? a : b; 
#line 1134
} 
#line 1136
static inline __int64 llmin(const __int64 a, const __int64 b) 
#line 1137
{ 
#line 1138
return (a < b) ? a : b; 
#line 1139
} 
#line 1141
static inline unsigned __int64 ullmin(const unsigned __int64 a, const unsigned __int64 
#line 1142
b) 
#line 1143
{ 
#line 1144
return (a < b) ? a : b; 
#line 1145
} 
#line 1147
static inline int max(const int a, const int b) 
#line 1148
{ 
#line 1149
return (a > b) ? a : b; 
#line 1150
} 
#line 1152
static inline unsigned umax(const unsigned a, const unsigned b) 
#line 1153
{ 
#line 1154
return (a > b) ? a : b; 
#line 1155
} 
#line 1157
static inline __int64 llmax(const __int64 a, const __int64 b) 
#line 1158
{ 
#line 1159
return (a > b) ? a : b; 
#line 1160
} 
#line 1162
static inline unsigned __int64 ullmax(const unsigned __int64 a, const unsigned __int64 
#line 1163
b) 
#line 1164
{ 
#line 1165
return (a > b) ? a : b; 
#line 1166
} 
#line 1169
#pragma warning(default: 4211)
#line 95 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt/device_functions.h"
extern "C" {
#line 3215 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt/device_functions.h"
static __inline int __vimax_s32_relu(const int a, const int b); 
#line 3227
static __inline unsigned __vimax_s16x2_relu(const unsigned a, const unsigned b); 
#line 3236
static __inline int __vimin_s32_relu(const int a, const int b); 
#line 3248
static __inline unsigned __vimin_s16x2_relu(const unsigned a, const unsigned b); 
#line 3257
static __inline int __vimax3_s32(const int a, const int b, const int c); 
#line 3269
static __inline unsigned __vimax3_s16x2(const unsigned a, const unsigned b, const unsigned c); 
#line 3278
static __inline unsigned __vimax3_u32(const unsigned a, const unsigned b, const unsigned c); 
#line 3290
static __inline unsigned __vimax3_u16x2(const unsigned a, const unsigned b, const unsigned c); 
#line 3299
static __inline int __vimin3_s32(const int a, const int b, const int c); 
#line 3311
static __inline unsigned __vimin3_s16x2(const unsigned a, const unsigned b, const unsigned c); 
#line 3320
static __inline unsigned __vimin3_u32(const unsigned a, const unsigned b, const unsigned c); 
#line 3332
static __inline unsigned __vimin3_u16x2(const unsigned a, const unsigned b, const unsigned c); 
#line 3341
static __inline int __vimax3_s32_relu(const int a, const int b, const int c); 
#line 3353
static __inline unsigned __vimax3_s16x2_relu(const unsigned a, const unsigned b, const unsigned c); 
#line 3362
static __inline int __vimin3_s32_relu(const int a, const int b, const int c); 
#line 3374
static __inline unsigned __vimin3_s16x2_relu(const unsigned a, const unsigned b, const unsigned c); 
#line 3383
static __inline int __viaddmax_s32(const int a, const int b, const int c); 
#line 3395
static __inline unsigned __viaddmax_s16x2(const unsigned a, const unsigned b, const unsigned c); 
#line 3404
static __inline unsigned __viaddmax_u32(const unsigned a, const unsigned b, const unsigned c); 
#line 3416
static __inline unsigned __viaddmax_u16x2(const unsigned a, const unsigned b, const unsigned c); 
#line 3425
static __inline int __viaddmin_s32(const int a, const int b, const int c); 
#line 3437
static __inline unsigned __viaddmin_s16x2(const unsigned a, const unsigned b, const unsigned c); 
#line 3446
static __inline unsigned __viaddmin_u32(const unsigned a, const unsigned b, const unsigned c); 
#line 3458
static __inline unsigned __viaddmin_u16x2(const unsigned a, const unsigned b, const unsigned c); 
#line 3468
static __inline int __viaddmax_s32_relu(const int a, const int b, const int c); 
#line 3480
static __inline unsigned __viaddmax_s16x2_relu(const unsigned a, const unsigned b, const unsigned c); 
#line 3490
static __inline int __viaddmin_s32_relu(const int a, const int b, const int c); 
#line 3502
static __inline unsigned __viaddmin_s16x2_relu(const unsigned a, const unsigned b, const unsigned c); 
#line 3511
static __inline int __vibmax_s32(const int a, const int b, bool *const pred); 
#line 3520
static __inline unsigned __vibmax_u32(const unsigned a, const unsigned b, bool *const pred); 
#line 3529
static __inline int __vibmin_s32(const int a, const int b, bool *const pred); 
#line 3538
static __inline unsigned __vibmin_u32(const unsigned a, const unsigned b, bool *const pred); 
#line 3552
static __inline unsigned __vibmax_s16x2(const unsigned a, const unsigned b, bool *const pred_hi, bool *const pred_lo); 
#line 3566
static __inline unsigned __vibmax_u16x2(const unsigned a, const unsigned b, bool *const pred_hi, bool *const pred_lo); 
#line 3580
static __inline unsigned __vibmin_s16x2(const unsigned a, const unsigned b, bool *const pred_hi, bool *const pred_lo); 
#line 3594
static __inline unsigned __vibmin_u16x2(const unsigned a, const unsigned b, bool *const pred_hi, bool *const pred_lo); 
#line 3601
}
#line 108 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_functions.hpp"
static __inline int __vimax_s32_relu(const int a, const int b) { 
#line 115
int ans = max(a, b); 
#line 117
return (ans > 0) ? ans : 0; 
#line 119 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_functions.hpp"
} 
#line 121
static __inline unsigned __vimax_s16x2_relu(const unsigned a, const unsigned b) { 
#line 122
unsigned res; 
#line 130 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_functions.hpp"
unsigned short aU_lo = (unsigned short)(a & 65535U); 
#line 131
unsigned short aU_hi = (unsigned short)(a >> 16); 
#line 133
unsigned short bU_lo = (unsigned short)(b & 65535U); 
#line 134
unsigned short bU_hi = (unsigned short)(b >> 16); 
#line 137
short aS_lo = *((short *)(&aU_lo)); 
#line 138
short aS_hi = *((short *)(&aU_hi)); 
#line 140
short bS_lo = *((short *)(&bU_lo)); 
#line 141
short bS_hi = *((short *)(&bU_hi)); 
#line 144
short ansS_lo = (short)max(aS_lo, bS_lo); 
#line 145
short ansS_hi = (short)max(aS_hi, bS_hi); 
#line 148
if (ansS_lo < 0) { ansS_lo = (0); }  
#line 149
if (ansS_hi < 0) { ansS_hi = (0); }  
#line 152
unsigned short ansU_lo = *((unsigned short *)(&ansS_lo)); 
#line 153
unsigned short ansU_hi = *((unsigned short *)(&ansS_hi)); 
#line 156
res = (((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16)); 
#line 159 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_functions.hpp"
return res; 
#line 160
} 
#line 162
static __inline int __vimin_s32_relu(const int a, const int b) { 
#line 169
int ans = min(a, b); 
#line 171
return (ans > 0) ? ans : 0; 
#line 173 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_functions.hpp"
} 
#line 175
static __inline unsigned __vimin_s16x2_relu(const unsigned a, const unsigned b) { 
#line 176
unsigned res; 
#line 184 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_functions.hpp"
unsigned short aU_lo = (unsigned short)(a & 65535U); 
#line 185
unsigned short aU_hi = (unsigned short)(a >> 16); 
#line 187
unsigned short bU_lo = (unsigned short)(b & 65535U); 
#line 188
unsigned short bU_hi = (unsigned short)(b >> 16); 
#line 191
short aS_lo = *((short *)(&aU_lo)); 
#line 192
short aS_hi = *((short *)(&aU_hi)); 
#line 194
short bS_lo = *((short *)(&bU_lo)); 
#line 195
short bS_hi = *((short *)(&bU_hi)); 
#line 198
short ansS_lo = (short)min(aS_lo, bS_lo); 
#line 199
short ansS_hi = (short)min(aS_hi, bS_hi); 
#line 202
if (ansS_lo < 0) { ansS_lo = (0); }  
#line 203
if (ansS_hi < 0) { ansS_hi = (0); }  
#line 206
unsigned short ansU_lo = *((unsigned short *)(&ansS_lo)); 
#line 207
unsigned short ansU_hi = *((unsigned short *)(&ansS_hi)); 
#line 210
res = (((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16)); 
#line 213 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_functions.hpp"
return res; 
#line 214
} 
#line 216
static __inline int __vimax3_s32(const int a, const int b, const int c) { 
#line 226
return max(max(a, b), c); 
#line 228 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_functions.hpp"
} 
#line 230
static __inline unsigned __vimax3_s16x2(const unsigned a, const unsigned b, const unsigned c) { 
#line 231
unsigned res; 
#line 243 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_functions.hpp"
unsigned short aU_lo = (unsigned short)(a & 65535U); 
#line 244
unsigned short aU_hi = (unsigned short)(a >> 16); 
#line 246
unsigned short bU_lo = (unsigned short)(b & 65535U); 
#line 247
unsigned short bU_hi = (unsigned short)(b >> 16); 
#line 249
unsigned short cU_lo = (unsigned short)(c & 65535U); 
#line 250
unsigned short cU_hi = (unsigned short)(c >> 16); 
#line 253
short aS_lo = *((short *)(&aU_lo)); 
#line 254
short aS_hi = *((short *)(&aU_hi)); 
#line 256
short bS_lo = *((short *)(&bU_lo)); 
#line 257
short bS_hi = *((short *)(&bU_hi)); 
#line 259
short cS_lo = *((short *)(&cU_lo)); 
#line 260
short cS_hi = *((short *)(&cU_hi)); 
#line 263
short ansS_lo = (short)max(max(aS_lo, bS_lo), cS_lo); 
#line 264
short ansS_hi = (short)max(max(aS_hi, bS_hi), cS_hi); 
#line 267
unsigned short ansU_lo = *((unsigned short *)(&ansS_lo)); 
#line 268
unsigned short ansU_hi = *((unsigned short *)(&ansS_hi)); 
#line 271
res = (((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16)); 
#line 273 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_functions.hpp"
return res; 
#line 274
} 
#line 276
static __inline unsigned __vimax3_u32(const unsigned a, const unsigned b, const unsigned c) { 
#line 286
return max(max(a, b), c); 
#line 288 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_functions.hpp"
} 
#line 290
static __inline unsigned __vimax3_u16x2(const unsigned a, const unsigned b, const unsigned c) { 
#line 291
unsigned res; 
#line 302 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_functions.hpp"
unsigned short aU_lo = (unsigned short)(a & 65535U); 
#line 303
unsigned short aU_hi = (unsigned short)(a >> 16); 
#line 305
unsigned short bU_lo = (unsigned short)(b & 65535U); 
#line 306
unsigned short bU_hi = (unsigned short)(b >> 16); 
#line 308
unsigned short cU_lo = (unsigned short)(c & 65535U); 
#line 309
unsigned short cU_hi = (unsigned short)(c >> 16); 
#line 312
unsigned short ansU_lo = (unsigned short)max(max(aU_lo, bU_lo), cU_lo); 
#line 313
unsigned short ansU_hi = (unsigned short)max(max(aU_hi, bU_hi), cU_hi); 
#line 316
res = (((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16)); 
#line 319 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_functions.hpp"
return res; 
#line 320
} 
#line 322
static __inline int __vimin3_s32(const int a, const int b, const int c) { 
#line 332
return min(min(a, b), c); 
#line 334 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_functions.hpp"
} 
#line 336
static __inline unsigned __vimin3_s16x2(const unsigned a, const unsigned b, const unsigned c) { 
#line 337
unsigned res; 
#line 348 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_functions.hpp"
unsigned short aU_lo = (unsigned short)(a & 65535U); 
#line 349
unsigned short aU_hi = (unsigned short)(a >> 16); 
#line 351
unsigned short bU_lo = (unsigned short)(b & 65535U); 
#line 352
unsigned short bU_hi = (unsigned short)(b >> 16); 
#line 354
unsigned short cU_lo = (unsigned short)(c & 65535U); 
#line 355
unsigned short cU_hi = (unsigned short)(c >> 16); 
#line 358
short aS_lo = *((short *)(&aU_lo)); 
#line 359
short aS_hi = *((short *)(&aU_hi)); 
#line 361
short bS_lo = *((short *)(&bU_lo)); 
#line 362
short bS_hi = *((short *)(&bU_hi)); 
#line 364
short cS_lo = *((short *)(&cU_lo)); 
#line 365
short cS_hi = *((short *)(&cU_hi)); 
#line 368
short ansS_lo = (short)min(min(aS_lo, bS_lo), cS_lo); 
#line 369
short ansS_hi = (short)min(min(aS_hi, bS_hi), cS_hi); 
#line 372
unsigned short ansU_lo = *((unsigned short *)(&ansS_lo)); 
#line 373
unsigned short ansU_hi = *((unsigned short *)(&ansS_hi)); 
#line 376
res = (((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16)); 
#line 379 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_functions.hpp"
return res; 
#line 380
} 
#line 382
static __inline unsigned __vimin3_u32(const unsigned a, const unsigned b, const unsigned c) { 
#line 392
return min(min(a, b), c); 
#line 394 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_functions.hpp"
} 
#line 396
static __inline unsigned __vimin3_u16x2(const unsigned a, const unsigned b, const unsigned c) { 
#line 397
unsigned res; 
#line 408 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_functions.hpp"
unsigned short aU_lo = (unsigned short)(a & 65535U); 
#line 409
unsigned short aU_hi = (unsigned short)(a >> 16); 
#line 411
unsigned short bU_lo = (unsigned short)(b & 65535U); 
#line 412
unsigned short bU_hi = (unsigned short)(b >> 16); 
#line 414
unsigned short cU_lo = (unsigned short)(c & 65535U); 
#line 415
unsigned short cU_hi = (unsigned short)(c >> 16); 
#line 418
unsigned short ansU_lo = (unsigned short)min(min(aU_lo, bU_lo), cU_lo); 
#line 419
unsigned short ansU_hi = (unsigned short)min(min(aU_hi, bU_hi), cU_hi); 
#line 422
res = (((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16)); 
#line 425 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_functions.hpp"
return res; 
#line 426
} 
#line 428
static __inline int __vimax3_s32_relu(const int a, const int b, const int c) { 
#line 438
int ans = max(max(a, b), c); 
#line 440
return (ans > 0) ? ans : 0; 
#line 442 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_functions.hpp"
} 
#line 444
static __inline unsigned __vimax3_s16x2_relu(const unsigned a, const unsigned b, const unsigned c) { 
#line 445
unsigned res; 
#line 456 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_functions.hpp"
unsigned short aU_lo = (unsigned short)(a & 65535U); 
#line 457
unsigned short aU_hi = (unsigned short)(a >> 16); 
#line 459
unsigned short bU_lo = (unsigned short)(b & 65535U); 
#line 460
unsigned short bU_hi = (unsigned short)(b >> 16); 
#line 462
unsigned short cU_lo = (unsigned short)(c & 65535U); 
#line 463
unsigned short cU_hi = (unsigned short)(c >> 16); 
#line 466
short aS_lo = *((short *)(&aU_lo)); 
#line 467
short aS_hi = *((short *)(&aU_hi)); 
#line 469
short bS_lo = *((short *)(&bU_lo)); 
#line 470
short bS_hi = *((short *)(&bU_hi)); 
#line 472
short cS_lo = *((short *)(&cU_lo)); 
#line 473
short cS_hi = *((short *)(&cU_hi)); 
#line 476
short ansS_lo = (short)max(max(aS_lo, bS_lo), cS_lo); 
#line 477
short ansS_hi = (short)max(max(aS_hi, bS_hi), cS_hi); 
#line 480
if (ansS_lo < 0) { ansS_lo = (0); }  
#line 481
if (ansS_hi < 0) { ansS_hi = (0); }  
#line 484
unsigned short ansU_lo = *((unsigned short *)(&ansS_lo)); 
#line 485
unsigned short ansU_hi = *((unsigned short *)(&ansS_hi)); 
#line 488
res = (((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16)); 
#line 491 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_functions.hpp"
return res; 
#line 492
} 
#line 494
static __inline int __vimin3_s32_relu(const int a, const int b, const int c) { 
#line 504
int ans = min(min(a, b), c); 
#line 506
return (ans > 0) ? ans : 0; 
#line 508 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_functions.hpp"
} 
#line 510
static __inline unsigned __vimin3_s16x2_relu(const unsigned a, const unsigned b, const unsigned c) { 
#line 511
unsigned res; 
#line 522 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_functions.hpp"
unsigned short aU_lo = (unsigned short)(a & 65535U); 
#line 523
unsigned short aU_hi = (unsigned short)(a >> 16); 
#line 525
unsigned short bU_lo = (unsigned short)(b & 65535U); 
#line 526
unsigned short bU_hi = (unsigned short)(b >> 16); 
#line 528
unsigned short cU_lo = (unsigned short)(c & 65535U); 
#line 529
unsigned short cU_hi = (unsigned short)(c >> 16); 
#line 532
short aS_lo = *((short *)(&aU_lo)); 
#line 533
short aS_hi = *((short *)(&aU_hi)); 
#line 535
short bS_lo = *((short *)(&bU_lo)); 
#line 536
short bS_hi = *((short *)(&bU_hi)); 
#line 538
short cS_lo = *((short *)(&cU_lo)); 
#line 539
short cS_hi = *((short *)(&cU_hi)); 
#line 542
short ansS_lo = (short)min(min(aS_lo, bS_lo), cS_lo); 
#line 543
short ansS_hi = (short)min(min(aS_hi, bS_hi), cS_hi); 
#line 546
if (ansS_lo < 0) { ansS_lo = (0); }  
#line 547
if (ansS_hi < 0) { ansS_hi = (0); }  
#line 550
unsigned short ansU_lo = *((unsigned short *)(&ansS_lo)); 
#line 551
unsigned short ansU_hi = *((unsigned short *)(&ansS_hi)); 
#line 554
res = (((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16)); 
#line 557 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_functions.hpp"
return res; 
#line 558
} 
#line 560
static __inline int __viaddmax_s32(const int a, const int b, const int c) { 
#line 570
return max(a + b, c); 
#line 572 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_functions.hpp"
} 
#line 574
static __inline unsigned __viaddmax_s16x2(const unsigned a, const unsigned b, const unsigned c) { 
#line 575
unsigned res; 
#line 586 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_functions.hpp"
unsigned short aU_lo = (unsigned short)(a & 65535U); 
#line 587
unsigned short aU_hi = (unsigned short)(a >> 16); 
#line 589
unsigned short bU_lo = (unsigned short)(b & 65535U); 
#line 590
unsigned short bU_hi = (unsigned short)(b >> 16); 
#line 592
unsigned short cU_lo = (unsigned short)(c & 65535U); 
#line 593
unsigned short cU_hi = (unsigned short)(c >> 16); 
#line 596
short aS_lo = *((short *)(&aU_lo)); 
#line 597
short aS_hi = *((short *)(&aU_hi)); 
#line 599
short bS_lo = *((short *)(&bU_lo)); 
#line 600
short bS_hi = *((short *)(&bU_hi)); 
#line 602
short cS_lo = *((short *)(&cU_lo)); 
#line 603
short cS_hi = *((short *)(&cU_hi)); 
#line 606
short ansS_lo = (short)max((short)(aS_lo + bS_lo), cS_lo); 
#line 607
short ansS_hi = (short)max((short)(aS_hi + bS_hi), cS_hi); 
#line 610
unsigned short ansU_lo = *((unsigned short *)(&ansS_lo)); 
#line 611
unsigned short ansU_hi = *((unsigned short *)(&ansS_hi)); 
#line 614
res = (((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16)); 
#line 617 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_functions.hpp"
return res; 
#line 618
} 
#line 620
static __inline unsigned __viaddmax_u32(const unsigned a, const unsigned b, const unsigned c) { 
#line 630
return max(a + b, c); 
#line 632 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_functions.hpp"
} 
#line 634
static __inline unsigned __viaddmax_u16x2(const unsigned a, const unsigned b, const unsigned c) { 
#line 635
unsigned res; 
#line 646 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_functions.hpp"
unsigned short aU_lo = (unsigned short)(a & 65535U); 
#line 647
unsigned short aU_hi = (unsigned short)(a >> 16); 
#line 649
unsigned short bU_lo = (unsigned short)(b & 65535U); 
#line 650
unsigned short bU_hi = (unsigned short)(b >> 16); 
#line 652
unsigned short cU_lo = (unsigned short)(c & 65535U); 
#line 653
unsigned short cU_hi = (unsigned short)(c >> 16); 
#line 656
unsigned short ansU_lo = (unsigned short)max((unsigned short)(aU_lo + bU_lo), cU_lo); 
#line 657
unsigned short ansU_hi = (unsigned short)max((unsigned short)(aU_hi + bU_hi), cU_hi); 
#line 660
res = (((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16)); 
#line 663 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_functions.hpp"
return res; 
#line 664
} 
#line 666
static __inline int __viaddmin_s32(const int a, const int b, const int c) { 
#line 676
return min(a + b, c); 
#line 678 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_functions.hpp"
} 
#line 680
static __inline unsigned __viaddmin_s16x2(const unsigned a, const unsigned b, const unsigned c) { 
#line 681
unsigned res; 
#line 692 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_functions.hpp"
unsigned short aU_lo = (unsigned short)(a & 65535U); 
#line 693
unsigned short aU_hi = (unsigned short)(a >> 16); 
#line 695
unsigned short bU_lo = (unsigned short)(b & 65535U); 
#line 696
unsigned short bU_hi = (unsigned short)(b >> 16); 
#line 698
unsigned short cU_lo = (unsigned short)(c & 65535U); 
#line 699
unsigned short cU_hi = (unsigned short)(c >> 16); 
#line 702
short aS_lo = *((short *)(&aU_lo)); 
#line 703
short aS_hi = *((short *)(&aU_hi)); 
#line 705
short bS_lo = *((short *)(&bU_lo)); 
#line 706
short bS_hi = *((short *)(&bU_hi)); 
#line 708
short cS_lo = *((short *)(&cU_lo)); 
#line 709
short cS_hi = *((short *)(&cU_hi)); 
#line 712
short ansS_lo = (short)min((short)(aS_lo + bS_lo), cS_lo); 
#line 713
short ansS_hi = (short)min((short)(aS_hi + bS_hi), cS_hi); 
#line 716
unsigned short ansU_lo = *((unsigned short *)(&ansS_lo)); 
#line 717
unsigned short ansU_hi = *((unsigned short *)(&ansS_hi)); 
#line 720
res = (((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16)); 
#line 723 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_functions.hpp"
return res; 
#line 724
} 
#line 726
static __inline unsigned __viaddmin_u32(const unsigned a, const unsigned b, const unsigned c) { 
#line 736
return min(a + b, c); 
#line 738 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_functions.hpp"
} 
#line 740
static __inline unsigned __viaddmin_u16x2(const unsigned a, const unsigned b, const unsigned c) { 
#line 741
unsigned res; 
#line 752 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_functions.hpp"
unsigned short aU_lo = (unsigned short)(a & 65535U); 
#line 753
unsigned short aU_hi = (unsigned short)(a >> 16); 
#line 755
unsigned short bU_lo = (unsigned short)(b & 65535U); 
#line 756
unsigned short bU_hi = (unsigned short)(b >> 16); 
#line 758
unsigned short cU_lo = (unsigned short)(c & 65535U); 
#line 759
unsigned short cU_hi = (unsigned short)(c >> 16); 
#line 762
unsigned short ansU_lo = (unsigned short)min((unsigned short)(aU_lo + bU_lo), cU_lo); 
#line 763
unsigned short ansU_hi = (unsigned short)min((unsigned short)(aU_hi + bU_hi), cU_hi); 
#line 766
res = (((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16)); 
#line 769 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_functions.hpp"
return res; 
#line 770
} 
#line 772
static __inline int __viaddmax_s32_relu(const int a, const int b, const int c) { 
#line 782
int ans = max(a + b, c); 
#line 784
return (ans > 0) ? ans : 0; 
#line 786 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_functions.hpp"
} 
#line 788
static __inline unsigned __viaddmax_s16x2_relu(const unsigned a, const unsigned b, const unsigned c) { 
#line 789
unsigned res; 
#line 800 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_functions.hpp"
unsigned short aU_lo = (unsigned short)(a & 65535U); 
#line 801
unsigned short aU_hi = (unsigned short)(a >> 16); 
#line 803
unsigned short bU_lo = (unsigned short)(b & 65535U); 
#line 804
unsigned short bU_hi = (unsigned short)(b >> 16); 
#line 806
unsigned short cU_lo = (unsigned short)(c & 65535U); 
#line 807
unsigned short cU_hi = (unsigned short)(c >> 16); 
#line 810
short aS_lo = *((short *)(&aU_lo)); 
#line 811
short aS_hi = *((short *)(&aU_hi)); 
#line 813
short bS_lo = *((short *)(&bU_lo)); 
#line 814
short bS_hi = *((short *)(&bU_hi)); 
#line 816
short cS_lo = *((short *)(&cU_lo)); 
#line 817
short cS_hi = *((short *)(&cU_hi)); 
#line 820
short ansS_lo = (short)max((short)(aS_lo + bS_lo), cS_lo); 
#line 821
short ansS_hi = (short)max((short)(aS_hi + bS_hi), cS_hi); 
#line 823
if (ansS_lo < 0) { ansS_lo = (0); }  
#line 824
if (ansS_hi < 0) { ansS_hi = (0); }  
#line 827
unsigned short ansU_lo = *((unsigned short *)(&ansS_lo)); 
#line 828
unsigned short ansU_hi = *((unsigned short *)(&ansS_hi)); 
#line 831
res = (((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16)); 
#line 834 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_functions.hpp"
return res; 
#line 835
} 
#line 837
static __inline int __viaddmin_s32_relu(const int a, const int b, const int c) { 
#line 847
int ans = min(a + b, c); 
#line 849
return (ans > 0) ? ans : 0; 
#line 851 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_functions.hpp"
} 
#line 853
static __inline unsigned __viaddmin_s16x2_relu(const unsigned a, const unsigned b, const unsigned c) { 
#line 854
unsigned res; 
#line 865 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_functions.hpp"
unsigned short aU_lo = (unsigned short)(a & 65535U); 
#line 866
unsigned short aU_hi = (unsigned short)(a >> 16); 
#line 868
unsigned short bU_lo = (unsigned short)(b & 65535U); 
#line 869
unsigned short bU_hi = (unsigned short)(b >> 16); 
#line 871
unsigned short cU_lo = (unsigned short)(c & 65535U); 
#line 872
unsigned short cU_hi = (unsigned short)(c >> 16); 
#line 875
short aS_lo = *((short *)(&aU_lo)); 
#line 876
short aS_hi = *((short *)(&aU_hi)); 
#line 878
short bS_lo = *((short *)(&bU_lo)); 
#line 879
short bS_hi = *((short *)(&bU_hi)); 
#line 881
short cS_lo = *((short *)(&cU_lo)); 
#line 882
short cS_hi = *((short *)(&cU_hi)); 
#line 885
short ansS_lo = (short)min((short)(aS_lo + bS_lo), cS_lo); 
#line 886
short ansS_hi = (short)min((short)(aS_hi + bS_hi), cS_hi); 
#line 888
if (ansS_lo < 0) { ansS_lo = (0); }  
#line 889
if (ansS_hi < 0) { ansS_hi = (0); }  
#line 892
unsigned short ansU_lo = *((unsigned short *)(&ansS_lo)); 
#line 893
unsigned short ansU_hi = *((unsigned short *)(&ansS_hi)); 
#line 896
res = (((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16)); 
#line 899 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_functions.hpp"
return res; 
#line 900
} 
#line 904
static __inline int __vibmax_s32(const int a, const int b, bool *const pred) { 
#line 918
int ans = max(a, b); 
#line 920
(*pred) = (a >= b); 
#line 921
return ans; 
#line 923 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_functions.hpp"
} 
#line 925
static __inline unsigned __vibmax_u32(const unsigned a, const unsigned b, bool *const pred) { 
#line 939
unsigned ans = max(a, b); 
#line 941
(*pred) = (a >= b); 
#line 942
return ans; 
#line 944 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_functions.hpp"
} 
#line 947
static __inline int __vibmin_s32(const int a, const int b, bool *const pred) { 
#line 961
int ans = min(a, b); 
#line 963
(*pred) = (a <= b); 
#line 964
return ans; 
#line 966 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_functions.hpp"
} 
#line 969
static __inline unsigned __vibmin_u32(const unsigned a, const unsigned b, bool *const pred) { 
#line 983
unsigned ans = min(a, b); 
#line 985
(*pred) = (a <= b); 
#line 986
return ans; 
#line 988 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_functions.hpp"
} 
#line 990
static __inline unsigned __vibmax_s16x2(const unsigned a, const unsigned b, bool *const pred_hi, bool *const pred_lo) { 
#line 1012
unsigned short aU_lo = (unsigned short)(a & 65535U); 
#line 1013
unsigned short aU_hi = (unsigned short)(a >> 16); 
#line 1015
unsigned short bU_lo = (unsigned short)(b & 65535U); 
#line 1016
unsigned short bU_hi = (unsigned short)(b >> 16); 
#line 1019
short aS_lo = *((short *)(&aU_lo)); 
#line 1020
short aS_hi = *((short *)(&aU_hi)); 
#line 1022
short bS_lo = *((short *)(&bU_lo)); 
#line 1023
short bS_hi = *((short *)(&bU_hi)); 
#line 1026
short ansS_lo = (short)max(aS_lo, bS_lo); 
#line 1027
short ansS_hi = (short)max(aS_hi, bS_hi); 
#line 1029
(*pred_hi) = (aS_hi >= bS_hi); 
#line 1030
(*pred_lo) = (aS_lo >= bS_lo); 
#line 1033
unsigned short ansU_lo = *((unsigned short *)(&ansS_lo)); 
#line 1034
unsigned short ansU_hi = *((unsigned short *)(&ansS_hi)); 
#line 1037
unsigned ans = ((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16); 
#line 1039
return ans; 
#line 1041 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_functions.hpp"
} 
#line 1043
static __inline unsigned __vibmax_u16x2(const unsigned a, const unsigned b, bool *const pred_hi, bool *const pred_lo) { 
#line 1065
unsigned short aU_lo = (unsigned short)(a & 65535U); 
#line 1066
unsigned short aU_hi = (unsigned short)(a >> 16); 
#line 1068
unsigned short bU_lo = (unsigned short)(b & 65535U); 
#line 1069
unsigned short bU_hi = (unsigned short)(b >> 16); 
#line 1072
unsigned short ansU_lo = (unsigned short)max(aU_lo, bU_lo); 
#line 1073
unsigned short ansU_hi = (unsigned short)max(aU_hi, bU_hi); 
#line 1075
(*pred_hi) = (aU_hi >= bU_hi); 
#line 1076
(*pred_lo) = (aU_lo >= bU_lo); 
#line 1079
unsigned ans = ((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16); 
#line 1081
return ans; 
#line 1083 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_functions.hpp"
} 
#line 1085
static __inline unsigned __vibmin_s16x2(const unsigned a, const unsigned b, bool *const pred_hi, bool *const pred_lo) { 
#line 1107
unsigned short aU_lo = (unsigned short)(a & 65535U); 
#line 1108
unsigned short aU_hi = (unsigned short)(a >> 16); 
#line 1110
unsigned short bU_lo = (unsigned short)(b & 65535U); 
#line 1111
unsigned short bU_hi = (unsigned short)(b >> 16); 
#line 1114
short aS_lo = *((short *)(&aU_lo)); 
#line 1115
short aS_hi = *((short *)(&aU_hi)); 
#line 1117
short bS_lo = *((short *)(&bU_lo)); 
#line 1118
short bS_hi = *((short *)(&bU_hi)); 
#line 1121
short ansS_lo = (short)min(aS_lo, bS_lo); 
#line 1122
short ansS_hi = (short)min(aS_hi, bS_hi); 
#line 1124
(*pred_hi) = (aS_hi <= bS_hi); 
#line 1125
(*pred_lo) = (aS_lo <= bS_lo); 
#line 1128
unsigned short ansU_lo = *((unsigned short *)(&ansS_lo)); 
#line 1129
unsigned short ansU_hi = *((unsigned short *)(&ansS_hi)); 
#line 1132
unsigned ans = ((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16); 
#line 1134
return ans; 
#line 1136 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_functions.hpp"
} 
#line 1138
static __inline unsigned __vibmin_u16x2(const unsigned a, const unsigned b, bool *const pred_hi, bool *const pred_lo) { 
#line 1160
unsigned short aU_lo = (unsigned short)(a & 65535U); 
#line 1161
unsigned short aU_hi = (unsigned short)(a >> 16); 
#line 1163
unsigned short bU_lo = (unsigned short)(b & 65535U); 
#line 1164
unsigned short bU_hi = (unsigned short)(b >> 16); 
#line 1167
unsigned short ansU_lo = (unsigned short)min(aU_lo, bU_lo); 
#line 1168
unsigned short ansU_hi = (unsigned short)min(aU_hi, bU_hi); 
#line 1170
(*pred_hi) = (aU_hi <= bU_hi); 
#line 1171
(*pred_lo) = (aU_lo <= bU_lo); 
#line 1174
unsigned ans = ((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16); 
#line 1176
return ans; 
#line 1178 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_functions.hpp"
} 
__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 89 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\device_atomic_functions.h"
static __inline int atomicAdd(int *address, int val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 89
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 91 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\device_atomic_functions.h"
static __inline unsigned atomicAdd(unsigned *address, unsigned val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 91
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 93 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\device_atomic_functions.h"
static __inline int atomicSub(int *address, int val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 93
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 95 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\device_atomic_functions.h"
static __inline unsigned atomicSub(unsigned *address, unsigned val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 95
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 97 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\device_atomic_functions.h"
static __inline int atomicExch(int *address, int val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 97
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 99 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\device_atomic_functions.h"
static __inline unsigned atomicExch(unsigned *address, unsigned val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 99
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 101 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\device_atomic_functions.h"
static __inline float atomicExch(float *address, float val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 101
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 103 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\device_atomic_functions.h"
static __inline int atomicMin(int *address, int val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 103
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 105 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\device_atomic_functions.h"
static __inline unsigned atomicMin(unsigned *address, unsigned val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 105
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 107 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\device_atomic_functions.h"
static __inline int atomicMax(int *address, int val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 107
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 109 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\device_atomic_functions.h"
static __inline unsigned atomicMax(unsigned *address, unsigned val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 109
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 111 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\device_atomic_functions.h"
static __inline unsigned atomicInc(unsigned *address, unsigned val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 111
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 113 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\device_atomic_functions.h"
static __inline unsigned atomicDec(unsigned *address, unsigned val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 113
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 115 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\device_atomic_functions.h"
static __inline int atomicAnd(int *address, int val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 115
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 117 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\device_atomic_functions.h"
static __inline unsigned atomicAnd(unsigned *address, unsigned val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 117
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 119 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\device_atomic_functions.h"
static __inline int atomicOr(int *address, int val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 119
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 121 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\device_atomic_functions.h"
static __inline unsigned atomicOr(unsigned *address, unsigned val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 121
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 123 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\device_atomic_functions.h"
static __inline int atomicXor(int *address, int val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 123
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 125 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\device_atomic_functions.h"
static __inline unsigned atomicXor(unsigned *address, unsigned val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 125
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 127 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\device_atomic_functions.h"
static __inline int atomicCAS(int *address, int compare, int val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
#line 127
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 129 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\device_atomic_functions.h"
static __inline unsigned atomicCAS(unsigned *address, unsigned compare, unsigned val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
#line 129
{ } 
#endif
#line 156 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\device_atomic_functions.h"
extern "C" {
#line 160
}
__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 169
static __inline unsigned __int64 atomicAdd(unsigned __int64 *address, unsigned __int64 val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 169
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 171 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\device_atomic_functions.h"
static __inline unsigned __int64 atomicExch(unsigned __int64 *address, unsigned __int64 val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 171
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 173 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\device_atomic_functions.h"
static __inline unsigned __int64 atomicCAS(unsigned __int64 *address, unsigned __int64 compare, unsigned __int64 val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
#line 173
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 175 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\device_atomic_functions.h"
__declspec(deprecated("__any() is deprecated in favor of __any_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to suppr" "ess this warning).")) static __inline bool any(bool cond) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)cond;::exit(___);}
#if 0
#line 175
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 177 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\device_atomic_functions.h"
__declspec(deprecated("__all() is deprecated in favor of __all_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to suppr" "ess this warning).")) static __inline bool all(bool cond) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)cond;::exit(___);}
#if 0
#line 177
{ } 
#endif
#line 90 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_double_functions.h"
extern "C" {
#line 1142
}
#line 1150
static __inline double fma(double a, double b, double c, cudaRoundMode mode); 
#line 1154
static __inline double dmul(double a, double b, cudaRoundMode mode = cudaRoundNearest); 
#line 1156
static __inline double dadd(double a, double b, cudaRoundMode mode = cudaRoundNearest); 
#line 1158
static __inline double dsub(double a, double b, cudaRoundMode mode = cudaRoundNearest); 
#line 1160
static __inline int double2int(double a, cudaRoundMode mode = cudaRoundZero); 
#line 1162
static __inline unsigned double2uint(double a, cudaRoundMode mode = cudaRoundZero); 
#line 1164
static __inline __int64 double2ll(double a, cudaRoundMode mode = cudaRoundZero); 
#line 1166
static __inline unsigned __int64 double2ull(double a, cudaRoundMode mode = cudaRoundZero); 
#line 1168
static __inline double ll2double(__int64 a, cudaRoundMode mode = cudaRoundNearest); 
#line 1170
static __inline double ull2double(unsigned __int64 a, cudaRoundMode mode = cudaRoundNearest); 
#line 1172
static __inline double int2double(int a, cudaRoundMode mode = cudaRoundNearest); 
#line 1174
static __inline double uint2double(unsigned a, cudaRoundMode mode = cudaRoundNearest); 
#line 1176
static __inline double float2double(float a, cudaRoundMode mode = cudaRoundNearest); 
__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 93 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_double_functions.hpp"
static __inline double fma(double a, double b, double c, cudaRoundMode mode) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)a;(void)b;(void)c;(void)mode;::exit(___);}
#if 0
#line 94
{ 
#line 95
return (mode == (cudaRoundZero)) ? __fma_rz(a, b, c) : ((mode == (cudaRoundPosInf)) ? __fma_ru(a, b, c) : ((mode == (cudaRoundMinInf)) ? __fma_rd(a, b, c) : __fma_rn(a, b, c))); 
#line 99
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 101 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_double_functions.hpp"
static __inline double dmul(double a, double b, cudaRoundMode mode) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)a;(void)b;(void)mode;::exit(___);}
#if 0
#line 102
{ 
#line 103
return (mode == (cudaRoundZero)) ? __dmul_rz(a, b) : ((mode == (cudaRoundPosInf)) ? __dmul_ru(a, b) : ((mode == (cudaRoundMinInf)) ? __dmul_rd(a, b) : __dmul_rn(a, b))); 
#line 107
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 109 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_double_functions.hpp"
static __inline double dadd(double a, double b, cudaRoundMode mode) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)a;(void)b;(void)mode;::exit(___);}
#if 0
#line 110
{ 
#line 111
return (mode == (cudaRoundZero)) ? __dadd_rz(a, b) : ((mode == (cudaRoundPosInf)) ? __dadd_ru(a, b) : ((mode == (cudaRoundMinInf)) ? __dadd_rd(a, b) : __dadd_rn(a, b))); 
#line 115
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 117 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_double_functions.hpp"
static __inline double dsub(double a, double b, cudaRoundMode mode) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)a;(void)b;(void)mode;::exit(___);}
#if 0
#line 118
{ 
#line 119
return (mode == (cudaRoundZero)) ? __dsub_rz(a, b) : ((mode == (cudaRoundPosInf)) ? __dsub_ru(a, b) : ((mode == (cudaRoundMinInf)) ? __dsub_rd(a, b) : __dsub_rn(a, b))); 
#line 123
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 125 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_double_functions.hpp"
static __inline int double2int(double a, cudaRoundMode mode) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)a;(void)mode;::exit(___);}
#if 0
#line 126
{ 
#line 127
return (mode == (cudaRoundNearest)) ? __double2int_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2int_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2int_rd(a) : __double2int_rz(a))); 
#line 131
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 133 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_double_functions.hpp"
static __inline unsigned double2uint(double a, cudaRoundMode mode) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)a;(void)mode;::exit(___);}
#if 0
#line 134
{ 
#line 135
return (mode == (cudaRoundNearest)) ? __double2uint_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2uint_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2uint_rd(a) : __double2uint_rz(a))); 
#line 139
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 141 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_double_functions.hpp"
static __inline __int64 double2ll(double a, cudaRoundMode mode) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)a;(void)mode;::exit(___);}
#if 0
#line 142
{ 
#line 143
return (mode == (cudaRoundNearest)) ? __double2ll_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2ll_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2ll_rd(a) : __double2ll_rz(a))); 
#line 147
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 149 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_double_functions.hpp"
static __inline unsigned __int64 double2ull(double a, cudaRoundMode mode) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)a;(void)mode;::exit(___);}
#if 0
#line 150
{ 
#line 151
return (mode == (cudaRoundNearest)) ? __double2ull_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2ull_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2ull_rd(a) : __double2ull_rz(a))); 
#line 155
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 157 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_double_functions.hpp"
static __inline double ll2double(__int64 a, cudaRoundMode mode) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)a;(void)mode;::exit(___);}
#if 0
#line 158
{ 
#line 159
return (mode == (cudaRoundZero)) ? __ll2double_rz(a) : ((mode == (cudaRoundPosInf)) ? __ll2double_ru(a) : ((mode == (cudaRoundMinInf)) ? __ll2double_rd(a) : __ll2double_rn(a))); 
#line 163
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 165 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_double_functions.hpp"
static __inline double ull2double(unsigned __int64 a, cudaRoundMode mode) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)a;(void)mode;::exit(___);}
#if 0
#line 166
{ 
#line 167
return (mode == (cudaRoundZero)) ? __ull2double_rz(a) : ((mode == (cudaRoundPosInf)) ? __ull2double_ru(a) : ((mode == (cudaRoundMinInf)) ? __ull2double_rd(a) : __ull2double_rn(a))); 
#line 171
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 173 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_double_functions.hpp"
static __inline double int2double(int a, cudaRoundMode mode) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)a;(void)mode;::exit(___);}
#if 0
#line 174
{ 
#line 175
return (double)a; 
#line 176
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 178 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_double_functions.hpp"
static __inline double uint2double(unsigned a, cudaRoundMode mode) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)a;(void)mode;::exit(___);}
#if 0
#line 179
{ 
#line 180
return (double)a; 
#line 181
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 183 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\device_double_functions.hpp"
static __inline double float2double(float a, cudaRoundMode mode) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)a;(void)mode;::exit(___);}
#if 0
#line 184
{ 
#line 185
return (double)a; 
#line 186
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 99 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_20_atomic_functions.h"
static __inline float atomicAdd(float *address, float val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 99
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 92 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_atomic_functions.h"
static __inline __int64 atomicMin(__int64 *address, __int64 val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 92
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 94 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_atomic_functions.h"
static __inline __int64 atomicMax(__int64 *address, __int64 val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 94
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 96 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_atomic_functions.h"
static __inline __int64 atomicAnd(__int64 *address, __int64 val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 96
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 98 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_atomic_functions.h"
static __inline __int64 atomicOr(__int64 *address, __int64 val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 98
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 100 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_atomic_functions.h"
static __inline __int64 atomicXor(__int64 *address, __int64 val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 100
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 102 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_atomic_functions.h"
static __inline unsigned __int64 atomicMin(unsigned __int64 *address, unsigned __int64 val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 102
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 104 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_atomic_functions.h"
static __inline unsigned __int64 atomicMax(unsigned __int64 *address, unsigned __int64 val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 104
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 106 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_atomic_functions.h"
static __inline unsigned __int64 atomicAnd(unsigned __int64 *address, unsigned __int64 val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 106
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 108 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_atomic_functions.h"
static __inline unsigned __int64 atomicOr(unsigned __int64 *address, unsigned __int64 val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 108
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 110 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_atomic_functions.h"
static __inline unsigned __int64 atomicXor(unsigned __int64 *address, unsigned __int64 val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 110
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 93 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline double atomicAdd(double *address, double val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 93
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 96 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline int atomicAdd_block(int *address, int val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 96
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 99 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline int atomicAdd_system(int *address, int val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 99
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 102 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicAdd_block(unsigned *address, unsigned val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 102
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 105 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicAdd_system(unsigned *address, unsigned val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 105
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 108 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicAdd_block(unsigned __int64 *address, unsigned __int64 val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 108
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 111 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicAdd_system(unsigned __int64 *address, unsigned __int64 val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 111
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 114 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline float atomicAdd_block(float *address, float val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 114
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 117 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline float atomicAdd_system(float *address, float val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 117
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 120 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline double atomicAdd_block(double *address, double val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 120
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 123 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline double atomicAdd_system(double *address, double val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 123
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 126 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline int atomicSub_block(int *address, int val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 126
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 129 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline int atomicSub_system(int *address, int val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 129
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 132 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicSub_block(unsigned *address, unsigned val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 132
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 135 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicSub_system(unsigned *address, unsigned val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 135
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 138 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline int atomicExch_block(int *address, int val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 138
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 141 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline int atomicExch_system(int *address, int val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 141
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 144 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicExch_block(unsigned *address, unsigned val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 144
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 147 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicExch_system(unsigned *address, unsigned val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 147
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 150 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicExch_block(unsigned __int64 *address, unsigned __int64 val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 150
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 153 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicExch_system(unsigned __int64 *address, unsigned __int64 val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 153
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 156 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline float atomicExch_block(float *address, float val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 156
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 159 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline float atomicExch_system(float *address, float val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 159
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 162 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline int atomicMin_block(int *address, int val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 162
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 165 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline int atomicMin_system(int *address, int val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 165
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 168 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline __int64 atomicMin_block(__int64 *address, __int64 val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 168
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 171 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline __int64 atomicMin_system(__int64 *address, __int64 val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 171
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 174 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicMin_block(unsigned *address, unsigned val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 174
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 177 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicMin_system(unsigned *address, unsigned val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 177
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 180 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicMin_block(unsigned __int64 *address, unsigned __int64 val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 180
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 183 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicMin_system(unsigned __int64 *address, unsigned __int64 val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 183
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 186 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline int atomicMax_block(int *address, int val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 186
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 189 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline int atomicMax_system(int *address, int val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 189
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 192 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline __int64 atomicMax_block(__int64 *address, __int64 val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 192
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 195 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline __int64 atomicMax_system(__int64 *address, __int64 val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 195
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 198 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicMax_block(unsigned *address, unsigned val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 198
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 201 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicMax_system(unsigned *address, unsigned val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 201
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 204 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicMax_block(unsigned __int64 *address, unsigned __int64 val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 204
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 207 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicMax_system(unsigned __int64 *address, unsigned __int64 val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 207
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 210 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicInc_block(unsigned *address, unsigned val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 210
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 213 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicInc_system(unsigned *address, unsigned val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 213
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 216 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicDec_block(unsigned *address, unsigned val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 216
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 219 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicDec_system(unsigned *address, unsigned val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 219
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 222 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline int atomicCAS_block(int *address, int compare, int val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
#line 222
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 225 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline int atomicCAS_system(int *address, int compare, int val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
#line 225
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 228 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicCAS_block(unsigned *address, unsigned compare, unsigned 
#line 229
val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
#line 229
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 232 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicCAS_system(unsigned *address, unsigned compare, unsigned 
#line 233
val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
#line 233
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 236 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicCAS_block(unsigned __int64 *address, unsigned __int64 
#line 237
compare, unsigned __int64 
#line 238
val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
#line 238
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 241 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicCAS_system(unsigned __int64 *address, unsigned __int64 
#line 242
compare, unsigned __int64 
#line 243
val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
#line 243
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 246 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline int atomicAnd_block(int *address, int val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 246
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 249 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline int atomicAnd_system(int *address, int val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 249
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 252 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline __int64 atomicAnd_block(__int64 *address, __int64 val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 252
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 255 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline __int64 atomicAnd_system(__int64 *address, __int64 val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 255
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 258 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicAnd_block(unsigned *address, unsigned val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 258
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 261 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicAnd_system(unsigned *address, unsigned val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 261
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 264 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicAnd_block(unsigned __int64 *address, unsigned __int64 val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 264
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 267 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicAnd_system(unsigned __int64 *address, unsigned __int64 val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 267
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 270 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline int atomicOr_block(int *address, int val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 270
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 273 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline int atomicOr_system(int *address, int val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 273
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 276 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline __int64 atomicOr_block(__int64 *address, __int64 val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 276
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 279 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline __int64 atomicOr_system(__int64 *address, __int64 val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 279
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 282 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicOr_block(unsigned *address, unsigned val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 282
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 285 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicOr_system(unsigned *address, unsigned val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 285
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 288 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicOr_block(unsigned __int64 *address, unsigned __int64 val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 288
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 291 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicOr_system(unsigned __int64 *address, unsigned __int64 val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 291
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 294 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline int atomicXor_block(int *address, int val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 294
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 297 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline int atomicXor_system(int *address, int val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 297
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 300 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline __int64 atomicXor_block(__int64 *address, __int64 val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 300
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 303 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline __int64 atomicXor_system(__int64 *address, __int64 val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 303
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 306 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicXor_block(unsigned *address, unsigned val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 306
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 309 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicXor_system(unsigned *address, unsigned val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 309
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 312 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicXor_block(unsigned __int64 *address, unsigned __int64 val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 312
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 315 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicXor_system(unsigned __int64 *address, unsigned __int64 val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 315
{ } 
#endif
#line 100 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_20_intrinsics.h"
extern "C" {
#line 1513
}
__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 1525 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_20_intrinsics.h"
__declspec(deprecated("__ballot() is deprecated in favor of __ballot_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to" " suppress this warning).")) static __inline unsigned ballot(bool pred) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
#line 1525
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 1527 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_20_intrinsics.h"
static __inline int syncthreads_count(bool pred) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
#line 1527
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 1529 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_20_intrinsics.h"
static __inline bool syncthreads_and(bool pred) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
#line 1529
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 1531 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_20_intrinsics.h"
static __inline bool syncthreads_or(bool pred) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
#line 1531
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 1536 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_20_intrinsics.h"
static __inline unsigned __isGlobal(const void *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 1536
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 1537 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_20_intrinsics.h"
static __inline unsigned __isShared(const void *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 1537
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 1538 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_20_intrinsics.h"
static __inline unsigned __isConstant(const void *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 1538
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 1539 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_20_intrinsics.h"
static __inline unsigned __isLocal(const void *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 1539
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 1541 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_20_intrinsics.h"
static __inline unsigned __isGridConstant(const void *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 1541
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 1543 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_20_intrinsics.h"
static __inline size_t __cvta_generic_to_global(const void *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 1543
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 1544 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_20_intrinsics.h"
static __inline size_t __cvta_generic_to_shared(const void *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 1544
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 1545 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_20_intrinsics.h"
static __inline size_t __cvta_generic_to_constant(const void *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 1545
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 1546 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_20_intrinsics.h"
static __inline size_t __cvta_generic_to_local(const void *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 1546
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 1548 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_20_intrinsics.h"
static __inline size_t __cvta_generic_to_grid_constant(const void *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 1548
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 1551 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_20_intrinsics.h"
static __inline void *__cvta_global_to_generic(size_t rawbits) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)rawbits;::exit(___);}
#if 0
#line 1551
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 1552 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_20_intrinsics.h"
static __inline void *__cvta_shared_to_generic(size_t rawbits) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)rawbits;::exit(___);}
#if 0
#line 1552
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 1553 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_20_intrinsics.h"
static __inline void *__cvta_constant_to_generic(size_t rawbits) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)rawbits;::exit(___);}
#if 0
#line 1553
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 1554 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_20_intrinsics.h"
static __inline void *__cvta_local_to_generic(size_t rawbits) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)rawbits;::exit(___);}
#if 0
#line 1554
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 1556 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_20_intrinsics.h"
static __inline void *__cvta_grid_constant_to_generic(size_t rawbits) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)rawbits;::exit(___);}
#if 0
#line 1556
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 123 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
static __inline unsigned __fns(unsigned mask, unsigned base, int offset) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)base;(void)offset;::exit(___);}
#if 0
#line 123
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 124 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
static __inline void __barrier_sync(unsigned id) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)id;::exit(___);}
#if 0
#line 124
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 125 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
static __inline void __barrier_sync_count(unsigned id, unsigned cnt) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)id;(void)cnt;::exit(___);}
#if 0
#line 125
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 126 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
static __inline void __syncwarp(unsigned mask = 4294967295U) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;::exit(___);}
#if 0
#line 126
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 127 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
static __inline int __all_sync(unsigned mask, int pred) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)pred;::exit(___);}
#if 0
#line 127
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 128 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
static __inline int __any_sync(unsigned mask, int pred) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)pred;::exit(___);}
#if 0
#line 128
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 129 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
static __inline int __uni_sync(unsigned mask, int pred) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)pred;::exit(___);}
#if 0
#line 129
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 130 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
static __inline unsigned __ballot_sync(unsigned mask, int pred) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)pred;::exit(___);}
#if 0
#line 130
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 131 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
static __inline unsigned __activemask() 
__pragma(warning(pop))
{int volatile ___ = 1;::exit(___);}
#if 0
#line 131
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 140 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning).")) static __inline int __shfl(int var, int srcLane, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 140
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 141 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning).")) static __inline unsigned __shfl(unsigned var, int srcLane, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 141
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 142 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning).")) static __inline int __shfl_up(int var, unsigned delta, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 142
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 143 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning).")) static __inline unsigned __shfl_up(unsigned var, unsigned delta, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 143
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 144 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning).")) static __inline int __shfl_down(int var, unsigned delta, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 144
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 145 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning).")) static __inline unsigned __shfl_down(unsigned var, unsigned delta, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 145
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 146 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning).")) static __inline int __shfl_xor(int var, int laneMask, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 146
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 147 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning).")) static __inline unsigned __shfl_xor(unsigned var, int laneMask, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 147
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 148 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning).")) static __inline float __shfl(float var, int srcLane, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 148
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 149 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning).")) static __inline float __shfl_up(float var, unsigned delta, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 149
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 150 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning).")) static __inline float __shfl_down(float var, unsigned delta, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 150
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 151 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning).")) static __inline float __shfl_xor(float var, int laneMask, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 151
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 154 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
static __inline int __shfl_sync(unsigned mask, int var, int srcLane, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 154
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 155 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
static __inline unsigned __shfl_sync(unsigned mask, unsigned var, int srcLane, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 155
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 156 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
static __inline int __shfl_up_sync(unsigned mask, int var, unsigned delta, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 156
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 157 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
static __inline unsigned __shfl_up_sync(unsigned mask, unsigned var, unsigned delta, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 157
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 158 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
static __inline int __shfl_down_sync(unsigned mask, int var, unsigned delta, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 158
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 159 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
static __inline unsigned __shfl_down_sync(unsigned mask, unsigned var, unsigned delta, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 159
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 160 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
static __inline int __shfl_xor_sync(unsigned mask, int var, int laneMask, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 160
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 161 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
static __inline unsigned __shfl_xor_sync(unsigned mask, unsigned var, int laneMask, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 161
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 162 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
static __inline float __shfl_sync(unsigned mask, float var, int srcLane, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 162
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 163 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
static __inline float __shfl_up_sync(unsigned mask, float var, unsigned delta, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 163
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 164 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
static __inline float __shfl_down_sync(unsigned mask, float var, unsigned delta, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 164
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 165 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
static __inline float __shfl_xor_sync(unsigned mask, float var, int laneMask, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 165
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 169 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning).")) static __inline unsigned __int64 __shfl(unsigned __int64 var, int srcLane, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 169
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 170 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning).")) static __inline __int64 __shfl(__int64 var, int srcLane, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 170
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 171 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning).")) static __inline __int64 __shfl_up(__int64 var, unsigned delta, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 171
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 172 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning).")) static __inline unsigned __int64 __shfl_up(unsigned __int64 var, unsigned delta, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 172
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 173 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning).")) static __inline __int64 __shfl_down(__int64 var, unsigned delta, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 173
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 174 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning).")) static __inline unsigned __int64 __shfl_down(unsigned __int64 var, unsigned delta, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 174
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 175 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning).")) static __inline __int64 __shfl_xor(__int64 var, int laneMask, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 175
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 176 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning).")) static __inline unsigned __int64 __shfl_xor(unsigned __int64 var, int laneMask, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 176
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 177 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning).")) static __inline double __shfl(double var, int srcLane, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 177
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 178 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning).")) static __inline double __shfl_up(double var, unsigned delta, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 178
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 179 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning).")) static __inline double __shfl_down(double var, unsigned delta, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 179
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 180 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning).")) static __inline double __shfl_xor(double var, int laneMask, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 180
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 183 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
static __inline __int64 __shfl_sync(unsigned mask, __int64 var, int srcLane, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 183
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 184 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
static __inline unsigned __int64 __shfl_sync(unsigned mask, unsigned __int64 var, int srcLane, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 184
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 185 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
static __inline __int64 __shfl_up_sync(unsigned mask, __int64 var, unsigned delta, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 185
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 186 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
static __inline unsigned __int64 __shfl_up_sync(unsigned mask, unsigned __int64 var, unsigned delta, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 186
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 187 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
static __inline __int64 __shfl_down_sync(unsigned mask, __int64 var, unsigned delta, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 187
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 188 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
static __inline unsigned __int64 __shfl_down_sync(unsigned mask, unsigned __int64 var, unsigned delta, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 188
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 189 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
static __inline __int64 __shfl_xor_sync(unsigned mask, __int64 var, int laneMask, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 189
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 190 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
static __inline unsigned __int64 __shfl_xor_sync(unsigned mask, unsigned __int64 var, int laneMask, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 190
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 191 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
static __inline double __shfl_sync(unsigned mask, double var, int srcLane, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 191
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 192 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
static __inline double __shfl_up_sync(unsigned mask, double var, unsigned delta, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 192
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 193 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
static __inline double __shfl_down_sync(unsigned mask, double var, unsigned delta, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 193
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 194 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
static __inline double __shfl_xor_sync(unsigned mask, double var, int laneMask, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 194
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 198 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning).")) static __inline long __shfl(long var, int srcLane, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 198
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 199 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning).")) static __inline unsigned long __shfl(unsigned long var, int srcLane, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 199
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 200 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning).")) static __inline long __shfl_up(long var, unsigned delta, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 200
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 201 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning).")) static __inline unsigned long __shfl_up(unsigned long var, unsigned delta, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 201
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 202 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning).")) static __inline long __shfl_down(long var, unsigned delta, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 202
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 203 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning).")) static __inline unsigned long __shfl_down(unsigned long var, unsigned delta, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 203
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 204 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning).")) static __inline long __shfl_xor(long var, int laneMask, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 204
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 205 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning).")) static __inline unsigned long __shfl_xor(unsigned long var, int laneMask, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 205
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 208 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
static __inline long __shfl_sync(unsigned mask, long var, int srcLane, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 208
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 209 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
static __inline unsigned long __shfl_sync(unsigned mask, unsigned long var, int srcLane, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 209
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 210 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
static __inline long __shfl_up_sync(unsigned mask, long var, unsigned delta, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 210
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 211 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
static __inline unsigned long __shfl_up_sync(unsigned mask, unsigned long var, unsigned delta, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 211
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 212 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
static __inline long __shfl_down_sync(unsigned mask, long var, unsigned delta, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 212
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 213 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
static __inline unsigned long __shfl_down_sync(unsigned mask, unsigned long var, unsigned delta, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 213
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 214 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
static __inline long __shfl_xor_sync(unsigned mask, long var, int laneMask, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 214
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 215 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_30_intrinsics.h"
static __inline unsigned long __shfl_xor_sync(unsigned mask, unsigned long var, int laneMask, int width = 32) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 215
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 91 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline long __ldg(const long *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 91
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 92 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline unsigned long __ldg(const unsigned long *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 92
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 94 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline char __ldg(const char *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 94
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 95 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline signed char __ldg(const signed char *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 95
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 96 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline short __ldg(const short *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 96
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 97 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline int __ldg(const int *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 97
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 98 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline __int64 __ldg(const __int64 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 98
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 99 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline char2 __ldg(const char2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 99
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 100 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline char4 __ldg(const char4 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 100
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 101 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline short2 __ldg(const short2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 101
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 102 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline short4 __ldg(const short4 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 102
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 103 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline int2 __ldg(const int2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 103
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 104 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline int4 __ldg(const int4 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 104
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 105 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline longlong2 __ldg(const longlong2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 105
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 107 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline unsigned char __ldg(const unsigned char *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 107
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 108 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline unsigned short __ldg(const unsigned short *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 108
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 109 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline unsigned __ldg(const unsigned *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 109
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 110 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline unsigned __int64 __ldg(const unsigned __int64 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 110
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 111 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline uchar2 __ldg(const uchar2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 111
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 112 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline uchar4 __ldg(const uchar4 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 112
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 113 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline ushort2 __ldg(const ushort2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 113
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 114 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline ushort4 __ldg(const ushort4 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 114
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 115 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline uint2 __ldg(const uint2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 115
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 116 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline uint4 __ldg(const uint4 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 116
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 117 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline ulonglong2 __ldg(const ulonglong2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 117
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 119 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline float __ldg(const float *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 119
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 120 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline double __ldg(const double *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 120
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 121 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline float2 __ldg(const float2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 121
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 122 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline float4 __ldg(const float4 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 122
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 123 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline double2 __ldg(const double2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 123
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 128 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline long __ldcg(const long *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 128
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 129 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline unsigned long __ldcg(const unsigned long *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 129
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 131 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline char __ldcg(const char *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 131
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 132 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline signed char __ldcg(const signed char *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 132
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 133 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline short __ldcg(const short *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 133
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 134 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline int __ldcg(const int *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 134
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 135 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline __int64 __ldcg(const __int64 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 135
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 136 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline char2 __ldcg(const char2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 136
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 137 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline char4 __ldcg(const char4 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 137
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 138 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline short2 __ldcg(const short2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 138
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 139 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline short4 __ldcg(const short4 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 139
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 140 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline int2 __ldcg(const int2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 140
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 141 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline int4 __ldcg(const int4 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 141
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 142 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline longlong2 __ldcg(const longlong2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 142
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 144 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline unsigned char __ldcg(const unsigned char *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 144
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 145 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline unsigned short __ldcg(const unsigned short *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 145
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 146 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline unsigned __ldcg(const unsigned *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 146
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 147 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline unsigned __int64 __ldcg(const unsigned __int64 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 147
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 148 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline uchar2 __ldcg(const uchar2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 148
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 149 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline uchar4 __ldcg(const uchar4 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 149
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 150 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline ushort2 __ldcg(const ushort2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 150
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 151 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline ushort4 __ldcg(const ushort4 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 151
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 152 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline uint2 __ldcg(const uint2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 152
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 153 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline uint4 __ldcg(const uint4 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 153
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 154 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline ulonglong2 __ldcg(const ulonglong2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 154
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 156 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline float __ldcg(const float *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 156
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 157 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline double __ldcg(const double *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 157
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 158 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline float2 __ldcg(const float2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 158
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 159 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline float4 __ldcg(const float4 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 159
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 160 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline double2 __ldcg(const double2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 160
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 164 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline long __ldca(const long *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 164
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 165 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline unsigned long __ldca(const unsigned long *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 165
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 167 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline char __ldca(const char *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 167
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 168 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline signed char __ldca(const signed char *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 168
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 169 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline short __ldca(const short *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 169
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 170 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline int __ldca(const int *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 170
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 171 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline __int64 __ldca(const __int64 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 171
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 172 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline char2 __ldca(const char2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 172
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 173 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline char4 __ldca(const char4 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 173
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 174 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline short2 __ldca(const short2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 174
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 175 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline short4 __ldca(const short4 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 175
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 176 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline int2 __ldca(const int2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 176
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 177 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline int4 __ldca(const int4 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 177
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 178 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline longlong2 __ldca(const longlong2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 178
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 180 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline unsigned char __ldca(const unsigned char *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 180
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 181 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline unsigned short __ldca(const unsigned short *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 181
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 182 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline unsigned __ldca(const unsigned *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 182
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 183 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline unsigned __int64 __ldca(const unsigned __int64 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 183
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 184 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline uchar2 __ldca(const uchar2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 184
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 185 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline uchar4 __ldca(const uchar4 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 185
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 186 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline ushort2 __ldca(const ushort2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 186
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 187 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline ushort4 __ldca(const ushort4 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 187
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 188 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline uint2 __ldca(const uint2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 188
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 189 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline uint4 __ldca(const uint4 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 189
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 190 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline ulonglong2 __ldca(const ulonglong2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 190
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 192 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline float __ldca(const float *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 192
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 193 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline double __ldca(const double *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 193
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 194 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline float2 __ldca(const float2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 194
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 195 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline float4 __ldca(const float4 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 195
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 196 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline double2 __ldca(const double2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 196
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 200 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline long __ldcs(const long *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 200
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 201 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline unsigned long __ldcs(const unsigned long *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 201
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 203 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline char __ldcs(const char *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 203
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 204 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline signed char __ldcs(const signed char *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 204
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 205 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline short __ldcs(const short *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 205
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 206 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline int __ldcs(const int *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 206
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 207 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline __int64 __ldcs(const __int64 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 207
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 208 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline char2 __ldcs(const char2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 208
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 209 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline char4 __ldcs(const char4 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 209
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 210 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline short2 __ldcs(const short2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 210
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 211 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline short4 __ldcs(const short4 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 211
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 212 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline int2 __ldcs(const int2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 212
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 213 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline int4 __ldcs(const int4 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 213
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 214 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline longlong2 __ldcs(const longlong2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 214
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 216 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline unsigned char __ldcs(const unsigned char *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 216
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 217 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline unsigned short __ldcs(const unsigned short *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 217
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 218 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline unsigned __ldcs(const unsigned *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 218
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 219 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline unsigned __int64 __ldcs(const unsigned __int64 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 219
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 220 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline uchar2 __ldcs(const uchar2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 220
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 221 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline uchar4 __ldcs(const uchar4 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 221
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 222 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline ushort2 __ldcs(const ushort2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 222
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 223 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline ushort4 __ldcs(const ushort4 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 223
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 224 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline uint2 __ldcs(const uint2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 224
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 225 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline uint4 __ldcs(const uint4 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 225
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 226 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline ulonglong2 __ldcs(const ulonglong2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 226
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 228 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline float __ldcs(const float *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 228
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 229 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline double __ldcs(const double *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 229
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 230 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline float2 __ldcs(const float2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 230
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 231 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline float4 __ldcs(const float4 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 231
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 232 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline double2 __ldcs(const double2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 232
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 236 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline long __ldlu(const long *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 236
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 237 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline unsigned long __ldlu(const unsigned long *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 237
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 239 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline char __ldlu(const char *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 239
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 240 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline signed char __ldlu(const signed char *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 240
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 241 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline short __ldlu(const short *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 241
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 242 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline int __ldlu(const int *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 242
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 243 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline __int64 __ldlu(const __int64 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 243
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 244 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline char2 __ldlu(const char2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 244
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 245 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline char4 __ldlu(const char4 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 245
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 246 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline short2 __ldlu(const short2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 246
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 247 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline short4 __ldlu(const short4 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 247
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 248 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline int2 __ldlu(const int2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 248
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 249 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline int4 __ldlu(const int4 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 249
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 250 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline longlong2 __ldlu(const longlong2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 250
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 252 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline unsigned char __ldlu(const unsigned char *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 252
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 253 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline unsigned short __ldlu(const unsigned short *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 253
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 254 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline unsigned __ldlu(const unsigned *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 254
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 255 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline unsigned __int64 __ldlu(const unsigned __int64 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 255
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 256 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline uchar2 __ldlu(const uchar2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 256
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 257 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline uchar4 __ldlu(const uchar4 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 257
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 258 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline ushort2 __ldlu(const ushort2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 258
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 259 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline ushort4 __ldlu(const ushort4 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 259
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 260 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline uint2 __ldlu(const uint2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 260
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 261 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline uint4 __ldlu(const uint4 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 261
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 262 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline ulonglong2 __ldlu(const ulonglong2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 262
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 264 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline float __ldlu(const float *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 264
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 265 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline double __ldlu(const double *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 265
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 266 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline float2 __ldlu(const float2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 266
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 267 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline float4 __ldlu(const float4 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 267
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 268 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline double2 __ldlu(const double2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 268
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 272 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline long __ldcv(const long *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 272
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 273 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline unsigned long __ldcv(const unsigned long *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 273
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 275 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline char __ldcv(const char *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 275
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 276 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline signed char __ldcv(const signed char *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 276
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 277 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline short __ldcv(const short *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 277
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 278 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline int __ldcv(const int *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 278
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 279 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline __int64 __ldcv(const __int64 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 279
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 280 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline char2 __ldcv(const char2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 280
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 281 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline char4 __ldcv(const char4 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 281
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 282 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline short2 __ldcv(const short2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 282
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 283 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline short4 __ldcv(const short4 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 283
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 284 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline int2 __ldcv(const int2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 284
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 285 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline int4 __ldcv(const int4 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 285
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 286 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline longlong2 __ldcv(const longlong2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 286
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 288 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline unsigned char __ldcv(const unsigned char *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 288
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 289 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline unsigned short __ldcv(const unsigned short *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 289
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 290 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline unsigned __ldcv(const unsigned *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 290
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 291 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline unsigned __int64 __ldcv(const unsigned __int64 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 291
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 292 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline uchar2 __ldcv(const uchar2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 292
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 293 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline uchar4 __ldcv(const uchar4 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 293
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 294 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline ushort2 __ldcv(const ushort2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 294
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 295 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline ushort4 __ldcv(const ushort4 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 295
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 296 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline uint2 __ldcv(const uint2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 296
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 297 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline uint4 __ldcv(const uint4 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 297
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 298 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline ulonglong2 __ldcv(const ulonglong2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 298
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 300 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline float __ldcv(const float *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 300
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 301 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline double __ldcv(const double *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 301
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 302 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline float2 __ldcv(const float2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 302
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 303 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline float4 __ldcv(const float4 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 303
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 304 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline double2 __ldcv(const double2 *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 304
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 308 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwb(long *ptr, long value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 308
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 309 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwb(unsigned long *ptr, unsigned long value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 309
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 311 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwb(char *ptr, char value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 311
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 312 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwb(signed char *ptr, signed char value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 312
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 313 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwb(short *ptr, short value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 313
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 314 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwb(int *ptr, int value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 314
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 315 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwb(__int64 *ptr, __int64 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 315
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 316 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwb(char2 *ptr, char2 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 316
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 317 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwb(char4 *ptr, char4 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 317
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 318 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwb(short2 *ptr, short2 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 318
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 319 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwb(short4 *ptr, short4 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 319
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 320 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwb(int2 *ptr, int2 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 320
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 321 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwb(int4 *ptr, int4 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 321
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 322 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwb(longlong2 *ptr, longlong2 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 322
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 324 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwb(unsigned char *ptr, unsigned char value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 324
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 325 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwb(unsigned short *ptr, unsigned short value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 325
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 326 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwb(unsigned *ptr, unsigned value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 326
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 327 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwb(unsigned __int64 *ptr, unsigned __int64 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 327
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 328 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwb(uchar2 *ptr, uchar2 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 328
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 329 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwb(uchar4 *ptr, uchar4 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 329
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 330 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwb(ushort2 *ptr, ushort2 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 330
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 331 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwb(ushort4 *ptr, ushort4 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 331
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 332 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwb(uint2 *ptr, uint2 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 332
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 333 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwb(uint4 *ptr, uint4 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 333
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 334 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwb(ulonglong2 *ptr, ulonglong2 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 334
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 336 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwb(float *ptr, float value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 336
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 337 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwb(double *ptr, double value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 337
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 338 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwb(float2 *ptr, float2 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 338
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 339 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwb(float4 *ptr, float4 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 339
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 340 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwb(double2 *ptr, double2 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 340
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 344 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcg(long *ptr, long value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 344
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 345 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcg(unsigned long *ptr, unsigned long value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 345
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 347 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcg(char *ptr, char value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 347
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 348 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcg(signed char *ptr, signed char value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 348
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 349 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcg(short *ptr, short value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 349
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 350 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcg(int *ptr, int value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 350
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 351 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcg(__int64 *ptr, __int64 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 351
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 352 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcg(char2 *ptr, char2 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 352
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 353 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcg(char4 *ptr, char4 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 353
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 354 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcg(short2 *ptr, short2 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 354
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 355 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcg(short4 *ptr, short4 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 355
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 356 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcg(int2 *ptr, int2 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 356
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 357 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcg(int4 *ptr, int4 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 357
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 358 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcg(longlong2 *ptr, longlong2 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 358
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 360 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcg(unsigned char *ptr, unsigned char value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 360
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 361 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcg(unsigned short *ptr, unsigned short value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 361
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 362 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcg(unsigned *ptr, unsigned value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 362
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 363 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcg(unsigned __int64 *ptr, unsigned __int64 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 363
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 364 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcg(uchar2 *ptr, uchar2 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 364
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 365 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcg(uchar4 *ptr, uchar4 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 365
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 366 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcg(ushort2 *ptr, ushort2 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 366
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 367 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcg(ushort4 *ptr, ushort4 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 367
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 368 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcg(uint2 *ptr, uint2 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 368
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 369 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcg(uint4 *ptr, uint4 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 369
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 370 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcg(ulonglong2 *ptr, ulonglong2 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 370
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 372 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcg(float *ptr, float value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 372
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 373 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcg(double *ptr, double value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 373
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 374 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcg(float2 *ptr, float2 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 374
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 375 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcg(float4 *ptr, float4 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 375
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 376 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcg(double2 *ptr, double2 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 376
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 380 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcs(long *ptr, long value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 380
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 381 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcs(unsigned long *ptr, unsigned long value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 381
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 383 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcs(char *ptr, char value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 383
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 384 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcs(signed char *ptr, signed char value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 384
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 385 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcs(short *ptr, short value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 385
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 386 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcs(int *ptr, int value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 386
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 387 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcs(__int64 *ptr, __int64 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 387
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 388 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcs(char2 *ptr, char2 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 388
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 389 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcs(char4 *ptr, char4 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 389
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 390 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcs(short2 *ptr, short2 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 390
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 391 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcs(short4 *ptr, short4 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 391
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 392 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcs(int2 *ptr, int2 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 392
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 393 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcs(int4 *ptr, int4 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 393
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 394 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcs(longlong2 *ptr, longlong2 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 394
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 396 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcs(unsigned char *ptr, unsigned char value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 396
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 397 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcs(unsigned short *ptr, unsigned short value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 397
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 398 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcs(unsigned *ptr, unsigned value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 398
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 399 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcs(unsigned __int64 *ptr, unsigned __int64 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 399
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 400 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcs(uchar2 *ptr, uchar2 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 400
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 401 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcs(uchar4 *ptr, uchar4 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 401
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 402 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcs(ushort2 *ptr, ushort2 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 402
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 403 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcs(ushort4 *ptr, ushort4 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 403
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 404 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcs(uint2 *ptr, uint2 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 404
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 405 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcs(uint4 *ptr, uint4 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 405
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 406 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcs(ulonglong2 *ptr, ulonglong2 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 406
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 408 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcs(float *ptr, float value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 408
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 409 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcs(double *ptr, double value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 409
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 410 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcs(float2 *ptr, float2 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 410
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 411 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcs(float4 *ptr, float4 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 411
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 412 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stcs(double2 *ptr, double2 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 412
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 416 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwt(long *ptr, long value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 416
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 417 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwt(unsigned long *ptr, unsigned long value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 417
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 419 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwt(char *ptr, char value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 419
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 420 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwt(signed char *ptr, signed char value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 420
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 421 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwt(short *ptr, short value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 421
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 422 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwt(int *ptr, int value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 422
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 423 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwt(__int64 *ptr, __int64 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 423
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 424 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwt(char2 *ptr, char2 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 424
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 425 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwt(char4 *ptr, char4 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 425
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 426 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwt(short2 *ptr, short2 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 426
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 427 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwt(short4 *ptr, short4 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 427
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 428 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwt(int2 *ptr, int2 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 428
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 429 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwt(int4 *ptr, int4 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 429
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 430 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwt(longlong2 *ptr, longlong2 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 430
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 432 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwt(unsigned char *ptr, unsigned char value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 432
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 433 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwt(unsigned short *ptr, unsigned short value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 433
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 434 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwt(unsigned *ptr, unsigned value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 434
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 435 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwt(unsigned __int64 *ptr, unsigned __int64 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 435
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 436 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwt(uchar2 *ptr, uchar2 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 436
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 437 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwt(uchar4 *ptr, uchar4 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 437
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 438 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwt(ushort2 *ptr, ushort2 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 438
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 439 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwt(ushort4 *ptr, ushort4 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 439
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 440 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwt(uint2 *ptr, uint2 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 440
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 441 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwt(uint4 *ptr, uint4 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 441
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 442 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwt(ulonglong2 *ptr, ulonglong2 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 442
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 444 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwt(float *ptr, float value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 444
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 445 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwt(double *ptr, double value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 445
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 446 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwt(float2 *ptr, float2 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 446
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 447 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwt(float4 *ptr, float4 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 447
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 448 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline void __stwt(double2 *ptr, double2 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 448
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 465 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline unsigned __funnelshift_l(unsigned lo, unsigned hi, unsigned shift) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
#line 465
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 477 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline unsigned __funnelshift_lc(unsigned lo, unsigned hi, unsigned shift) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
#line 477
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 490 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline unsigned __funnelshift_r(unsigned lo, unsigned hi, unsigned shift) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
#line 490
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 502 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_32_intrinsics.h"
static __inline unsigned __funnelshift_rc(unsigned lo, unsigned hi, unsigned shift) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
#line 502
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 102 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_61_intrinsics.h"
static __inline int __dp2a_lo(int srcA, int srcB, int c) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 102
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 113 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_61_intrinsics.h"
static __inline unsigned __dp2a_lo(unsigned srcA, unsigned srcB, unsigned c) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 113
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 125 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_61_intrinsics.h"
static __inline int __dp2a_lo(short2 srcA, char4 srcB, int c) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 125
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 136 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_61_intrinsics.h"
static __inline unsigned __dp2a_lo(ushort2 srcA, uchar4 srcB, unsigned c) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 136
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 148 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_61_intrinsics.h"
static __inline int __dp2a_hi(int srcA, int srcB, int c) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 148
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 159 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_61_intrinsics.h"
static __inline unsigned __dp2a_hi(unsigned srcA, unsigned srcB, unsigned c) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 159
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 171 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_61_intrinsics.h"
static __inline int __dp2a_hi(short2 srcA, char4 srcB, int c) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 171
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 182 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_61_intrinsics.h"
static __inline unsigned __dp2a_hi(ushort2 srcA, uchar4 srcB, unsigned c) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 182
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 197 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_61_intrinsics.h"
static __inline int __dp4a(int srcA, int srcB, int c) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 197
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 206 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_61_intrinsics.h"
static __inline unsigned __dp4a(unsigned srcA, unsigned srcB, unsigned c) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 206
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 216 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_61_intrinsics.h"
static __inline int __dp4a(char4 srcA, char4 srcB, int c) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 216
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 225 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\sm_61_intrinsics.h"
static __inline unsigned __dp4a(uchar4 srcA, uchar4 srcB, unsigned c) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 225
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 96 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_any_sync(unsigned mask, unsigned value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 96
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 97 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_any_sync(unsigned mask, int value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 97
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 98 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_any_sync(unsigned mask, unsigned long value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 98
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 99 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_any_sync(unsigned mask, long value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 99
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 100 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_any_sync(unsigned mask, unsigned __int64 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 100
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 101 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_any_sync(unsigned mask, __int64 value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 101
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 102 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_any_sync(unsigned mask, float value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 102
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 103 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_any_sync(unsigned mask, double value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 103
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 105 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_all_sync(unsigned mask, unsigned value, int *pred) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
#line 105
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 106 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_all_sync(unsigned mask, int value, int *pred) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
#line 106
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 107 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_all_sync(unsigned mask, unsigned long value, int *pred) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
#line 107
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 108 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_all_sync(unsigned mask, long value, int *pred) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
#line 108
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 109 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_all_sync(unsigned mask, unsigned __int64 value, int *pred) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
#line 109
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 110 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_all_sync(unsigned mask, __int64 value, int *pred) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
#line 110
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 111 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_all_sync(unsigned mask, float value, int *pred) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
#line 111
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 112 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_all_sync(unsigned mask, double value, int *pred) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
#line 112
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 114 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_70_rt.h"
static __inline void __nanosleep(unsigned ns) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ns;::exit(___);}
#if 0
#line 114
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 116 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_70_rt.h"
static __inline unsigned short atomicCAS(unsigned short *address, unsigned short compare, unsigned short val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
#line 116
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 95 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_80_rt.h"
static __inline unsigned __reduce_add_sync(unsigned mask, unsigned value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 95
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 96 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_80_rt.h"
static __inline unsigned __reduce_min_sync(unsigned mask, unsigned value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 96
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 97 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_80_rt.h"
static __inline unsigned __reduce_max_sync(unsigned mask, unsigned value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 97
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 99 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_80_rt.h"
static __inline int __reduce_add_sync(unsigned mask, int value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 99
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 100 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_80_rt.h"
static __inline int __reduce_min_sync(unsigned mask, int value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 100
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 101 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_80_rt.h"
static __inline int __reduce_max_sync(unsigned mask, int value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 101
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 103 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_80_rt.h"
static __inline unsigned __reduce_and_sync(unsigned mask, unsigned value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 103
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 104 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_80_rt.h"
static __inline unsigned __reduce_or_sync(unsigned mask, unsigned value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 104
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 105 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_80_rt.h"
static __inline unsigned __reduce_xor_sync(unsigned mask, unsigned value) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 105
{ } 
#endif
#line 110 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_80_rt.h"
extern "C" {
#line 111
inline void *__nv_associate_access_property(const void *ptr, unsigned __int64 
#line 112
property) {int volatile ___ = 1;(void)ptr;(void)property;::exit(___);}
#if 0
#line 112
{ 
#line 113
extern void *__nv_associate_access_property_impl(const void *, unsigned __int64); 
#line 115
return __nv_associate_access_property_impl(ptr, property); 
#line 116
} 
#endif
#line 118 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_80_rt.h"
inline void __nv_memcpy_async_shared_global_4(void *dst, const void *
#line 119
src, unsigned 
#line 120
src_size) {int volatile ___ = 1;(void)dst;(void)src;(void)src_size;::exit(___);}
#if 0
#line 120
{ 
#line 121
extern void __nv_memcpy_async_shared_global_4_impl(void *, const void *, unsigned); 
#line 124
__nv_memcpy_async_shared_global_4_impl(dst, src, src_size); 
#line 125
} 
#endif
#line 127 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_80_rt.h"
inline void __nv_memcpy_async_shared_global_8(void *dst, const void *
#line 128
src, unsigned 
#line 129
src_size) {int volatile ___ = 1;(void)dst;(void)src;(void)src_size;::exit(___);}
#if 0
#line 129
{ 
#line 130
extern void __nv_memcpy_async_shared_global_8_impl(void *, const void *, unsigned); 
#line 133
__nv_memcpy_async_shared_global_8_impl(dst, src, src_size); 
#line 134
} 
#endif
#line 136 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_80_rt.h"
inline void __nv_memcpy_async_shared_global_16(void *dst, const void *
#line 137
src, unsigned 
#line 138
src_size) {int volatile ___ = 1;(void)dst;(void)src;(void)src_size;::exit(___);}
#if 0
#line 138
{ 
#line 139
extern void __nv_memcpy_async_shared_global_16_impl(void *, const void *, unsigned); 
#line 142
__nv_memcpy_async_shared_global_16_impl(dst, src, src_size); 
#line 143
} 
#endif
#line 145 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_80_rt.h"
}
__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 92 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_90_rt.h"
static __inline unsigned __isCtaShared(const void *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 92
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 93 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_90_rt.h"
static __inline unsigned __isClusterShared(const void *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 93
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 94 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_90_rt.h"
static __inline void *__cluster_map_shared_rank(const void *ptr, unsigned target_block_rank) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)target_block_rank;::exit(___);}
#if 0
#line 94
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 95 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_90_rt.h"
static __inline unsigned __cluster_query_shared_rank(const void *ptr) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 95
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 96 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_90_rt.h"
static __inline uint2 __cluster_map_shared_multicast(const void *ptr, unsigned cluster_cta_mask) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)cluster_cta_mask;::exit(___);}
#if 0
#line 96
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 97 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_90_rt.h"
static __inline unsigned __clusterDimIsSpecified() 
__pragma(warning(pop))
{int volatile ___ = 1;::exit(___);}
#if 0
#line 97
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 98 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_90_rt.h"
static __inline dim3 __clusterDim() 
__pragma(warning(pop))
{int volatile ___ = 1;::exit(___);}
#if 0
#line 98
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 99 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_90_rt.h"
static __inline dim3 __clusterRelativeBlockIdx() 
__pragma(warning(pop))
{int volatile ___ = 1;::exit(___);}
#if 0
#line 99
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 100 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_90_rt.h"
static __inline dim3 __clusterGridDimInClusters() 
__pragma(warning(pop))
{int volatile ___ = 1;::exit(___);}
#if 0
#line 100
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 101 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_90_rt.h"
static __inline dim3 __clusterIdx() 
__pragma(warning(pop))
{int volatile ___ = 1;::exit(___);}
#if 0
#line 101
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 102 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_90_rt.h"
static __inline unsigned __clusterRelativeBlockRank() 
__pragma(warning(pop))
{int volatile ___ = 1;::exit(___);}
#if 0
#line 102
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 103 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_90_rt.h"
static __inline unsigned __clusterSizeInBlocks() 
__pragma(warning(pop))
{int volatile ___ = 1;::exit(___);}
#if 0
#line 103
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 104 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_90_rt.h"
static __inline void __cluster_barrier_arrive() 
__pragma(warning(pop))
{int volatile ___ = 1;::exit(___);}
#if 0
#line 104
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 105 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_90_rt.h"
static __inline void __cluster_barrier_arrive_relaxed() 
__pragma(warning(pop))
{int volatile ___ = 1;::exit(___);}
#if 0
#line 105
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 106 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_90_rt.h"
static __inline void __cluster_barrier_wait() 
__pragma(warning(pop))
{int volatile ___ = 1;::exit(___);}
#if 0
#line 106
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 107 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_90_rt.h"
static __inline void __threadfence_cluster() 
__pragma(warning(pop))
{int volatile ___ = 1;::exit(___);}
#if 0
#line 107
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 109 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_90_rt.h"
static __inline float2 atomicAdd(float2 *__address, float2 val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)__address;(void)val;::exit(___);}
#if 0
#line 109
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 110 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_90_rt.h"
static __inline float2 atomicAdd_block(float2 *__address, float2 val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)__address;(void)val;::exit(___);}
#if 0
#line 110
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 111 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_90_rt.h"
static __inline float2 atomicAdd_system(float2 *__address, float2 val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)__address;(void)val;::exit(___);}
#if 0
#line 111
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 112 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_90_rt.h"
static __inline float4 atomicAdd(float4 *__address, float4 val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)__address;(void)val;::exit(___);}
#if 0
#line 112
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 113 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_90_rt.h"
static __inline float4 atomicAdd_block(float4 *__address, float4 val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)__address;(void)val;::exit(___);}
#if 0
#line 113
{ } 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 114 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_90_rt.h"
static __inline float4 atomicAdd_system(float4 *__address, float4 val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)__address;(void)val;::exit(___);}
#if 0
#line 114
{ } 
#endif
#line 125 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_90_rt.h"
extern "C" {
#line 130
}
#line 137
template< bool __b, class _T> 
#line 138
struct __nv_atomic_enable_if { }; 
#line 140
template< class _T> 
#line 141
struct __nv_atomic_enable_if< true, _T>  { typedef _T __type; }; 
#line 151 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_90_rt.h"
template< class _T> 
#line 152
struct __nv_atomic_triv_cp_helper { 
#line 162 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_90_rt.h"
static const bool __val = __is_trivially_copyable(_T); 
#line 164 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_90_rt.h"
}; 
__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 199 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_90_rt.h"
template< class _T> static __inline typename __nv_atomic_enable_if< ((sizeof(_T) == (16)) && (__alignof(_T) >= (16))) && __nv_atomic_triv_cp_helper< _T> ::__val, _T> ::__type 
#line 201
atomicCAS(_T *__address, _T __compare, _T __val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)__address;(void)__compare;(void)__val;::exit(___);}
#if 0
#line 201
{ 
#line 202
union _U { _T __ret; __inline _U() {int *volatile ___ = 0;::free(___);}
#if 0
#line 202
{ } 
#endif
#line 202 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_90_rt.h"
}; _U __u; 
#line 203
__u128AtomicCAS((void *)__address, (void *)(&(const_cast< char &>(reinterpret_cast< const volatile char &>(__compare)))), (void *)(&(const_cast< char &>(reinterpret_cast< const volatile char &>(__val)))), (void *)(&(const_cast< char &>(reinterpret_cast< const volatile char &>(__u.__ret))))); 
#line 207
return __u.__ret; 
#line 208
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 210 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_90_rt.h"
template< class _T> static __inline typename __nv_atomic_enable_if< ((sizeof(_T) == (16)) && (__alignof(_T) >= (16))) && __nv_atomic_triv_cp_helper< _T> ::__val, _T> ::__type 
#line 212
atomicCAS_block(_T *__address, _T __compare, _T __val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)__address;(void)__compare;(void)__val;::exit(___);}
#if 0
#line 212
{ 
#line 213
union _U { _T __ret; __inline _U() {int *volatile ___ = 0;::free(___);}
#if 0
#line 213
{ } 
#endif
#line 213 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_90_rt.h"
}; _U __u; 
#line 214
__u128AtomicCAS_block((void *)__address, (void *)(&(const_cast< char &>(reinterpret_cast< const volatile char &>(__compare)))), (void *)(&(const_cast< char &>(reinterpret_cast< const volatile char &>(__val)))), (void *)(&(const_cast< char &>(reinterpret_cast< const volatile char &>(__u.__ret))))); 
#line 218
return __u.__ret; 
#line 219
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 221 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_90_rt.h"
template< class _T> static __inline typename __nv_atomic_enable_if< ((sizeof(_T) == (16)) && (__alignof(_T) >= (16))) && __nv_atomic_triv_cp_helper< _T> ::__val, _T> ::__type 
#line 223
atomicExch(_T *__address, _T __val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)__address;(void)__val;::exit(___);}
#if 0
#line 223
{ 
#line 224
union _U { _T __ret; __inline _U() {int *volatile ___ = 0;::free(___);}
#if 0
#line 224
{ } 
#endif
#line 224 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_90_rt.h"
}; _U __u; 
#line 225
__u128AtomicExch((void *)__address, (void *)(&(const_cast< char &>(reinterpret_cast< const volatile char &>(__val)))), (void *)(&(const_cast< char &>(reinterpret_cast< const volatile char &>(__u.__ret))))); 
#line 228
return __u.__ret; 
#line 229
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 231 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_90_rt.h"
template< class _T> static __inline typename __nv_atomic_enable_if< ((sizeof(_T) == (16)) && (__alignof(_T) >= (16))) && __nv_atomic_triv_cp_helper< _T> ::__val, _T> ::__type 
#line 233
atomicExch_block(_T *__address, _T __val) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)__address;(void)__val;::exit(___);}
#if 0
#line 233
{ 
#line 234
union _U { _T __ret; __inline _U() {int *volatile ___ = 0;::free(___);}
#if 0
#line 234
{ } 
#endif
#line 234 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt\\sm_90_rt.h"
}; _U __u; 
#line 235
__u128AtomicExch_block((void *)__address, (void *)(&(const_cast< char &>(reinterpret_cast< const volatile char &>(__val)))), (void *)(&(const_cast< char &>(reinterpret_cast< const volatile char &>(__u.__ret))))); 
#line 238
return __u.__ret; 
#line 239
} 
#endif
#line 65 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> struct __nv_itex_trait { }; 
#line 66
template<> struct __nv_itex_trait< char>  { typedef void type; }; 
#line 67
template<> struct __nv_itex_trait< signed char>  { typedef void type; }; 
#line 68
template<> struct __nv_itex_trait< char1>  { typedef void type; }; 
#line 69
template<> struct __nv_itex_trait< char2>  { typedef void type; }; 
#line 70
template<> struct __nv_itex_trait< char4>  { typedef void type; }; 
#line 71
template<> struct __nv_itex_trait< unsigned char>  { typedef void type; }; 
#line 72
template<> struct __nv_itex_trait< uchar1>  { typedef void type; }; 
#line 73
template<> struct __nv_itex_trait< uchar2>  { typedef void type; }; 
#line 74
template<> struct __nv_itex_trait< uchar4>  { typedef void type; }; 
#line 75
template<> struct __nv_itex_trait< short>  { typedef void type; }; 
#line 76
template<> struct __nv_itex_trait< short1>  { typedef void type; }; 
#line 77
template<> struct __nv_itex_trait< short2>  { typedef void type; }; 
#line 78
template<> struct __nv_itex_trait< short4>  { typedef void type; }; 
#line 79
template<> struct __nv_itex_trait< unsigned short>  { typedef void type; }; 
#line 80
template<> struct __nv_itex_trait< ushort1>  { typedef void type; }; 
#line 81
template<> struct __nv_itex_trait< ushort2>  { typedef void type; }; 
#line 82
template<> struct __nv_itex_trait< ushort4>  { typedef void type; }; 
#line 83
template<> struct __nv_itex_trait< int>  { typedef void type; }; 
#line 84
template<> struct __nv_itex_trait< int1>  { typedef void type; }; 
#line 85
template<> struct __nv_itex_trait< int2>  { typedef void type; }; 
#line 86
template<> struct __nv_itex_trait< int4>  { typedef void type; }; 
#line 87
template<> struct __nv_itex_trait< unsigned>  { typedef void type; }; 
#line 88
template<> struct __nv_itex_trait< uint1>  { typedef void type; }; 
#line 89
template<> struct __nv_itex_trait< uint2>  { typedef void type; }; 
#line 90
template<> struct __nv_itex_trait< uint4>  { typedef void type; }; 
#line 92
template<> struct __nv_itex_trait< long>  { typedef void type; }; 
#line 93
template<> struct __nv_itex_trait< long1>  { typedef void type; }; 
#line 94
template<> struct __nv_itex_trait< long2>  { typedef void type; }; 
#line 95
template<> struct __nv_itex_trait< long4>  { typedef void type; }; 
#line 96
template<> struct __nv_itex_trait< unsigned long>  { typedef void type; }; 
#line 97
template<> struct __nv_itex_trait< ulong1>  { typedef void type; }; 
#line 98
template<> struct __nv_itex_trait< ulong2>  { typedef void type; }; 
#line 99
template<> struct __nv_itex_trait< ulong4>  { typedef void type; }; 
#line 101 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template<> struct __nv_itex_trait< float>  { typedef void type; }; 
#line 102
template<> struct __nv_itex_trait< float1>  { typedef void type; }; 
#line 103
template<> struct __nv_itex_trait< float2>  { typedef void type; }; 
#line 104
template<> struct __nv_itex_trait< float4>  { typedef void type; }; 
__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 108
template< class T> static typename __nv_itex_trait< T> ::type 
#line 109
tex1Dfetch(T *ptr, ::cudaTextureObject_t obj, int x) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;::exit(___);}
#if 0
#line 110
{ 
#line 111
__nv_tex_surf_handler("__itex1Dfetch", ptr, obj, x); 
#line 112
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 114 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 115
tex1Dfetch(::cudaTextureObject_t texObject, int x) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)texObject;(void)x;::exit(___);}
#if 0
#line 116
{ 
#line 117
T ret; 
#line 118
tex1Dfetch(&ret, texObject, x); 
#line 119
return ret; 
#line 120
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 122 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 123
tex1D(T *ptr, ::cudaTextureObject_t obj, float x) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;::exit(___);}
#if 0
#line 124
{ 
#line 125
__nv_tex_surf_handler("__itex1D", ptr, obj, x); 
#line 126
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 129 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 130
tex1D(::cudaTextureObject_t texObject, float x) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)texObject;(void)x;::exit(___);}
#if 0
#line 131
{ 
#line 132
T ret; 
#line 133
tex1D(&ret, texObject, x); 
#line 134
return ret; 
#line 135
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 138 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 139
tex2D(T *ptr, ::cudaTextureObject_t obj, float x, float y) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;::exit(___);}
#if 0
#line 140
{ 
#line 141
__nv_tex_surf_handler("__itex2D", ptr, obj, x, y); 
#line 142
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 144 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 145
tex2D(::cudaTextureObject_t texObject, float x, float y) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;::exit(___);}
#if 0
#line 146
{ 
#line 147
T ret; 
#line 148
tex2D(&ret, texObject, x, y); 
#line 149
return ret; 
#line 150
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 153 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 154
tex2D(T *ptr, ::cudaTextureObject_t obj, float x, float y, bool *
#line 155
isResident) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)isResident;::exit(___);}
#if 0
#line 156
{ 
#line 157
unsigned char res; 
#line 158
__nv_tex_surf_handler("__itex2D_sparse", ptr, obj, x, y, &res); 
#line 159
(*isResident) = (res != 0); 
#line 160
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 162 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 163
tex2D(::cudaTextureObject_t texObject, float x, float y, bool *isResident) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)isResident;::exit(___);}
#if 0
#line 164
{ 
#line 165
T ret; 
#line 166
tex2D(&ret, texObject, x, y, isResident); 
#line 167
return ret; 
#line 168
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 173 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 174
tex3D(T *ptr, ::cudaTextureObject_t obj, float x, float y, float z) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;::exit(___);}
#if 0
#line 175
{ 
#line 176
__nv_tex_surf_handler("__itex3D", ptr, obj, x, y, z); 
#line 177
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 179 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 180
tex3D(::cudaTextureObject_t texObject, float x, float y, float z) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;::exit(___);}
#if 0
#line 181
{ 
#line 182
T ret; 
#line 183
tex3D(&ret, texObject, x, y, z); 
#line 184
return ret; 
#line 185
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 188 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 189
tex3D(T *ptr, ::cudaTextureObject_t obj, float x, float y, float z, bool *
#line 190
isResident) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)isResident;::exit(___);}
#if 0
#line 191
{ 
#line 192
unsigned char res; 
#line 193
__nv_tex_surf_handler("__itex3D_sparse", ptr, obj, x, y, z, &res); 
#line 194
(*isResident) = (res != 0); 
#line 195
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 197 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 198
tex3D(::cudaTextureObject_t texObject, float x, float y, float z, bool *isResident) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)isResident;::exit(___);}
#if 0
#line 199
{ 
#line 200
T ret; 
#line 201
tex3D(&ret, texObject, x, y, z, isResident); 
#line 202
return ret; 
#line 203
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 207 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 208
tex1DLayered(T *ptr, ::cudaTextureObject_t obj, float x, int layer) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)layer;::exit(___);}
#if 0
#line 209
{ 
#line 210
__nv_tex_surf_handler("__itex1DLayered", ptr, obj, x, layer); 
#line 211
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 213 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 214
tex1DLayered(::cudaTextureObject_t texObject, float x, int layer) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)texObject;(void)x;(void)layer;::exit(___);}
#if 0
#line 215
{ 
#line 216
T ret; 
#line 217
tex1DLayered(&ret, texObject, x, layer); 
#line 218
return ret; 
#line 219
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 221 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 222
tex2DLayered(T *ptr, ::cudaTextureObject_t obj, float x, float y, int layer) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;::exit(___);}
#if 0
#line 223
{ 
#line 224
__nv_tex_surf_handler("__itex2DLayered", ptr, obj, x, y, layer); 
#line 225
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 227 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 228
tex2DLayered(::cudaTextureObject_t texObject, float x, float y, int layer) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;::exit(___);}
#if 0
#line 229
{ 
#line 230
T ret; 
#line 231
tex2DLayered(&ret, texObject, x, y, layer); 
#line 232
return ret; 
#line 233
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 236 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 237
tex2DLayered(T *ptr, ::cudaTextureObject_t obj, float x, float y, int layer, bool *isResident) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)isResident;::exit(___);}
#if 0
#line 238
{ 
#line 239
unsigned char res; 
#line 240
__nv_tex_surf_handler("__itex2DLayered_sparse", ptr, obj, x, y, layer, &res); 
#line 241
(*isResident) = (res != 0); 
#line 242
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 244 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 245
tex2DLayered(::cudaTextureObject_t texObject, float x, float y, int layer, bool *isResident) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;(void)isResident;::exit(___);}
#if 0
#line 246
{ 
#line 247
T ret; 
#line 248
tex2DLayered(&ret, texObject, x, y, layer, isResident); 
#line 249
return ret; 
#line 250
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 254 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 255
texCubemap(T *ptr, ::cudaTextureObject_t obj, float x, float y, float z) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;::exit(___);}
#if 0
#line 256
{ 
#line 257
__nv_tex_surf_handler("__itexCubemap", ptr, obj, x, y, z); 
#line 258
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 261 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 262
texCubemap(::cudaTextureObject_t texObject, float x, float y, float z) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;::exit(___);}
#if 0
#line 263
{ 
#line 264
T ret; 
#line 265
texCubemap(&ret, texObject, x, y, z); 
#line 266
return ret; 
#line 267
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 270 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 271
texCubemapLayered(T *ptr, ::cudaTextureObject_t obj, float x, float y, float z, int layer) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)layer;::exit(___);}
#if 0
#line 272
{ 
#line 273
__nv_tex_surf_handler("__itexCubemapLayered", ptr, obj, x, y, z, layer); 
#line 274
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 276 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 277
texCubemapLayered(::cudaTextureObject_t texObject, float x, float y, float z, int layer) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)layer;::exit(___);}
#if 0
#line 278
{ 
#line 279
T ret; 
#line 280
texCubemapLayered(&ret, texObject, x, y, z, layer); 
#line 281
return ret; 
#line 282
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 284 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 285
tex2Dgather(T *ptr, ::cudaTextureObject_t obj, float x, float y, int comp = 0) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)comp;::exit(___);}
#if 0
#line 286
{ 
#line 287
__nv_tex_surf_handler("__itex2Dgather", ptr, obj, x, y, comp); 
#line 288
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 290 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 291
tex2Dgather(::cudaTextureObject_t to, float x, float y, int comp = 0) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)to;(void)x;(void)y;(void)comp;::exit(___);}
#if 0
#line 292
{ 
#line 293
T ret; 
#line 294
tex2Dgather(&ret, to, x, y, comp); 
#line 295
return ret; 
#line 296
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 299 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 300
tex2Dgather(T *ptr, ::cudaTextureObject_t obj, float x, float y, bool *isResident, int comp = 0) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)isResident;(void)comp;::exit(___);}
#if 0
#line 301
{ 
#line 302
unsigned char res; 
#line 303
__nv_tex_surf_handler("__itex2Dgather_sparse", ptr, obj, x, y, comp, &res); 
#line 304
(*isResident) = (res != 0); 
#line 305
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 307 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 308
tex2Dgather(::cudaTextureObject_t to, float x, float y, bool *isResident, int comp = 0) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)to;(void)x;(void)y;(void)isResident;(void)comp;::exit(___);}
#if 0
#line 309
{ 
#line 310
T ret; 
#line 311
tex2Dgather(&ret, to, x, y, isResident, comp); 
#line 312
return ret; 
#line 313
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 317 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 318
tex1DLod(T *ptr, ::cudaTextureObject_t obj, float x, float level) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)level;::exit(___);}
#if 0
#line 319
{ 
#line 320
__nv_tex_surf_handler("__itex1DLod", ptr, obj, x, level); 
#line 321
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 323 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 324
tex1DLod(::cudaTextureObject_t texObject, float x, float level) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)texObject;(void)x;(void)level;::exit(___);}
#if 0
#line 325
{ 
#line 326
T ret; 
#line 327
tex1DLod(&ret, texObject, x, level); 
#line 328
return ret; 
#line 329
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 332 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 333
tex2DLod(T *ptr, ::cudaTextureObject_t obj, float x, float y, float level) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)level;::exit(___);}
#if 0
#line 334
{ 
#line 335
__nv_tex_surf_handler("__itex2DLod", ptr, obj, x, y, level); 
#line 336
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 338 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 339
tex2DLod(::cudaTextureObject_t texObject, float x, float y, float level) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)level;::exit(___);}
#if 0
#line 340
{ 
#line 341
T ret; 
#line 342
tex2DLod(&ret, texObject, x, y, level); 
#line 343
return ret; 
#line 344
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 348 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 349
tex2DLod(T *ptr, ::cudaTextureObject_t obj, float x, float y, float level, bool *isResident) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)level;(void)isResident;::exit(___);}
#if 0
#line 350
{ 
#line 351
unsigned char res; 
#line 352
__nv_tex_surf_handler("__itex2DLod_sparse", ptr, obj, x, y, level, &res); 
#line 353
(*isResident) = (res != 0); 
#line 354
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 356 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 357
tex2DLod(::cudaTextureObject_t texObject, float x, float y, float level, bool *isResident) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)level;(void)isResident;::exit(___);}
#if 0
#line 358
{ 
#line 359
T ret; 
#line 360
tex2DLod(&ret, texObject, x, y, level, isResident); 
#line 361
return ret; 
#line 362
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 367 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 368
tex3DLod(T *ptr, ::cudaTextureObject_t obj, float x, float y, float z, float level) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)level;::exit(___);}
#if 0
#line 369
{ 
#line 370
__nv_tex_surf_handler("__itex3DLod", ptr, obj, x, y, z, level); 
#line 371
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 373 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 374
tex3DLod(::cudaTextureObject_t texObject, float x, float y, float z, float level) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)level;::exit(___);}
#if 0
#line 375
{ 
#line 376
T ret; 
#line 377
tex3DLod(&ret, texObject, x, y, z, level); 
#line 378
return ret; 
#line 379
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 382 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 383
tex3DLod(T *ptr, ::cudaTextureObject_t obj, float x, float y, float z, float level, bool *isResident) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)level;(void)isResident;::exit(___);}
#if 0
#line 384
{ 
#line 385
unsigned char res; 
#line 386
__nv_tex_surf_handler("__itex3DLod_sparse", ptr, obj, x, y, z, level, &res); 
#line 387
(*isResident) = (res != 0); 
#line 388
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 390 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 391
tex3DLod(::cudaTextureObject_t texObject, float x, float y, float z, float level, bool *isResident) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)level;(void)isResident;::exit(___);}
#if 0
#line 392
{ 
#line 393
T ret; 
#line 394
tex3DLod(&ret, texObject, x, y, z, level, isResident); 
#line 395
return ret; 
#line 396
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 401 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 402
tex1DLayeredLod(T *ptr, ::cudaTextureObject_t obj, float x, int layer, float level) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)layer;(void)level;::exit(___);}
#if 0
#line 403
{ 
#line 404
__nv_tex_surf_handler("__itex1DLayeredLod", ptr, obj, x, layer, level); 
#line 405
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 407 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 408
tex1DLayeredLod(::cudaTextureObject_t texObject, float x, int layer, float level) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)texObject;(void)x;(void)layer;(void)level;::exit(___);}
#if 0
#line 409
{ 
#line 410
T ret; 
#line 411
tex1DLayeredLod(&ret, texObject, x, layer, level); 
#line 412
return ret; 
#line 413
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 416 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 417
tex2DLayeredLod(T *ptr, ::cudaTextureObject_t obj, float x, float y, int layer, float level) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)level;::exit(___);}
#if 0
#line 418
{ 
#line 419
__nv_tex_surf_handler("__itex2DLayeredLod", ptr, obj, x, y, layer, level); 
#line 420
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 422 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 423
tex2DLayeredLod(::cudaTextureObject_t texObject, float x, float y, int layer, float level) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;(void)level;::exit(___);}
#if 0
#line 424
{ 
#line 425
T ret; 
#line 426
tex2DLayeredLod(&ret, texObject, x, y, layer, level); 
#line 427
return ret; 
#line 428
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 431 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 432
tex2DLayeredLod(T *ptr, ::cudaTextureObject_t obj, float x, float y, int layer, float level, bool *isResident) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)level;(void)isResident;::exit(___);}
#if 0
#line 433
{ 
#line 434
unsigned char res; 
#line 435
__nv_tex_surf_handler("__itex2DLayeredLod_sparse", ptr, obj, x, y, layer, level, &res); 
#line 436
(*isResident) = (res != 0); 
#line 437
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 439 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 440
tex2DLayeredLod(::cudaTextureObject_t texObject, float x, float y, int layer, float level, bool *isResident) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;(void)level;(void)isResident;::exit(___);}
#if 0
#line 441
{ 
#line 442
T ret; 
#line 443
tex2DLayeredLod(&ret, texObject, x, y, layer, level, isResident); 
#line 444
return ret; 
#line 445
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 448 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 449
texCubemapLod(T *ptr, ::cudaTextureObject_t obj, float x, float y, float z, float level) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)level;::exit(___);}
#if 0
#line 450
{ 
#line 451
__nv_tex_surf_handler("__itexCubemapLod", ptr, obj, x, y, z, level); 
#line 452
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 454 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 455
texCubemapLod(::cudaTextureObject_t texObject, float x, float y, float z, float level) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)level;::exit(___);}
#if 0
#line 456
{ 
#line 457
T ret; 
#line 458
texCubemapLod(&ret, texObject, x, y, z, level); 
#line 459
return ret; 
#line 460
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 463 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 464
texCubemapGrad(T *ptr, ::cudaTextureObject_t obj, float x, float y, float z, ::float4 dPdx, ::float4 dPdy) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 465
{ 
#line 466
__nv_tex_surf_handler("__itexCubemapGrad_v2", ptr, obj, x, y, z, &dPdx, &dPdy); 
#line 467
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 469 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 470
texCubemapGrad(::cudaTextureObject_t texObject, float x, float y, float z, ::float4 dPdx, ::float4 dPdy) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 471
{ 
#line 472
T ret; 
#line 473
texCubemapGrad(&ret, texObject, x, y, z, dPdx, dPdy); 
#line 474
return ret; 
#line 475
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 477 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 478
texCubemapLayeredLod(T *ptr, ::cudaTextureObject_t obj, float x, float y, float z, int layer, float level) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)layer;(void)level;::exit(___);}
#if 0
#line 479
{ 
#line 480
__nv_tex_surf_handler("__itexCubemapLayeredLod", ptr, obj, x, y, z, layer, level); 
#line 481
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 483 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 484
texCubemapLayeredLod(::cudaTextureObject_t texObject, float x, float y, float z, int layer, float level) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)layer;(void)level;::exit(___);}
#if 0
#line 485
{ 
#line 486
T ret; 
#line 487
texCubemapLayeredLod(&ret, texObject, x, y, z, layer, level); 
#line 488
return ret; 
#line 489
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 491 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 492
tex1DGrad(T *ptr, ::cudaTextureObject_t obj, float x, float dPdx, float dPdy) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 493
{ 
#line 494
__nv_tex_surf_handler("__itex1DGrad", ptr, obj, x, dPdx, dPdy); 
#line 495
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 497 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 498
tex1DGrad(::cudaTextureObject_t texObject, float x, float dPdx, float dPdy) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)texObject;(void)x;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 499
{ 
#line 500
T ret; 
#line 501
tex1DGrad(&ret, texObject, x, dPdx, dPdy); 
#line 502
return ret; 
#line 503
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 506 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 507
tex2DGrad(T *ptr, ::cudaTextureObject_t obj, float x, float y, ::float2 dPdx, ::float2 dPdy) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 508
{ 
#line 509
__nv_tex_surf_handler("__itex2DGrad_v2", ptr, obj, x, y, &dPdx, &dPdy); 
#line 510
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 512 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 513
tex2DGrad(::cudaTextureObject_t texObject, float x, float y, ::float2 dPdx, ::float2 dPdy) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 514
{ 
#line 515
T ret; 
#line 516
tex2DGrad(&ret, texObject, x, y, dPdx, dPdy); 
#line 517
return ret; 
#line 518
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 521 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 522
tex2DGrad(T *ptr, ::cudaTextureObject_t obj, float x, float y, ::float2 dPdx, ::float2 dPdy, bool *isResident) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)dPdx;(void)dPdy;(void)isResident;::exit(___);}
#if 0
#line 523
{ 
#line 524
unsigned char res; 
#line 525
__nv_tex_surf_handler("__itex2DGrad_sparse", ptr, obj, x, y, &dPdx, &dPdy, &res); 
#line 526
(*isResident) = (res != 0); 
#line 527
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 529 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 530
tex2DGrad(::cudaTextureObject_t texObject, float x, float y, ::float2 dPdx, ::float2 dPdy, bool *isResident) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)dPdx;(void)dPdy;(void)isResident;::exit(___);}
#if 0
#line 531
{ 
#line 532
T ret; 
#line 533
tex2DGrad(&ret, texObject, x, y, dPdx, dPdy, isResident); 
#line 534
return ret; 
#line 535
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 539 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 540
tex3DGrad(T *ptr, ::cudaTextureObject_t obj, float x, float y, float z, ::float4 dPdx, ::float4 dPdy) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 541
{ 
#line 542
__nv_tex_surf_handler("__itex3DGrad_v2", ptr, obj, x, y, z, &dPdx, &dPdy); 
#line 543
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 545 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 546
tex3DGrad(::cudaTextureObject_t texObject, float x, float y, float z, ::float4 dPdx, ::float4 dPdy) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 547
{ 
#line 548
T ret; 
#line 549
tex3DGrad(&ret, texObject, x, y, z, dPdx, dPdy); 
#line 550
return ret; 
#line 551
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 554 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 555
tex3DGrad(T *ptr, ::cudaTextureObject_t obj, float x, float y, float z, ::float4 dPdx, ::float4 dPdy, bool *isResident) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;(void)isResident;::exit(___);}
#if 0
#line 556
{ 
#line 557
unsigned char res; 
#line 558
__nv_tex_surf_handler("__itex3DGrad_sparse", ptr, obj, x, y, z, &dPdx, &dPdy, &res); 
#line 559
(*isResident) = (res != 0); 
#line 560
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 562 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 563
tex3DGrad(::cudaTextureObject_t texObject, float x, float y, float z, ::float4 dPdx, ::float4 dPdy, bool *isResident) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;(void)isResident;::exit(___);}
#if 0
#line 564
{ 
#line 565
T ret; 
#line 566
tex3DGrad(&ret, texObject, x, y, z, dPdx, dPdy, isResident); 
#line 567
return ret; 
#line 568
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 573 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 574
tex1DLayeredGrad(T *ptr, ::cudaTextureObject_t obj, float x, int layer, float dPdx, float dPdy) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)layer;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 575
{ 
#line 576
__nv_tex_surf_handler("__itex1DLayeredGrad", ptr, obj, x, layer, dPdx, dPdy); 
#line 577
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 579 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 580
tex1DLayeredGrad(::cudaTextureObject_t texObject, float x, int layer, float dPdx, float dPdy) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)texObject;(void)x;(void)layer;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 581
{ 
#line 582
T ret; 
#line 583
tex1DLayeredGrad(&ret, texObject, x, layer, dPdx, dPdy); 
#line 584
return ret; 
#line 585
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 588 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 589
tex2DLayeredGrad(T *ptr, ::cudaTextureObject_t obj, float x, float y, int layer, ::float2 dPdx, ::float2 dPdy) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 590
{ 
#line 591
__nv_tex_surf_handler("__itex2DLayeredGrad_v2", ptr, obj, x, y, layer, &dPdx, &dPdy); 
#line 592
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 594 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 595
tex2DLayeredGrad(::cudaTextureObject_t texObject, float x, float y, int layer, ::float2 dPdx, ::float2 dPdy) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 596
{ 
#line 597
T ret; 
#line 598
tex2DLayeredGrad(&ret, texObject, x, y, layer, dPdx, dPdy); 
#line 599
return ret; 
#line 600
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 603 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 604
tex2DLayeredGrad(T *ptr, ::cudaTextureObject_t obj, float x, float y, int layer, ::float2 dPdx, ::float2 dPdy, bool *isResident) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;(void)isResident;::exit(___);}
#if 0
#line 605
{ 
#line 606
unsigned char res; 
#line 607
__nv_tex_surf_handler("__itex2DLayeredGrad_sparse", ptr, obj, x, y, layer, &dPdx, &dPdy, &res); 
#line 608
(*isResident) = (res != 0); 
#line 609
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 611 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 612
tex2DLayeredGrad(::cudaTextureObject_t texObject, float x, float y, int layer, ::float2 dPdx, ::float2 dPdy, bool *isResident) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;(void)isResident;::exit(___);}
#if 0
#line 613
{ 
#line 614
T ret; 
#line 615
tex2DLayeredGrad(&ret, texObject, x, y, layer, dPdx, dPdy, isResident); 
#line 616
return ret; 
#line 617
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 621 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 622
texCubemapLayeredGrad(T *ptr, ::cudaTextureObject_t obj, float x, float y, float z, int layer, ::float4 dPdx, ::float4 dPdy) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)layer;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 623
{ 
#line 624
__nv_tex_surf_handler("__itexCubemapLayeredGrad_v2", ptr, obj, x, y, z, layer, &dPdx, &dPdy); 
#line 625
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 627 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 628
texCubemapLayeredGrad(::cudaTextureObject_t texObject, float x, float y, float z, int layer, ::float4 dPdx, ::float4 dPdy) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)layer;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 629
{ 
#line 630
T ret; 
#line 631
texCubemapLayeredGrad(&ret, texObject, x, y, z, layer, dPdx, dPdy); 
#line 632
return ret; 
#line 633
} 
#endif
#line 58 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\surface_indirect_functions.h"
template< class T> struct __nv_isurf_trait { }; 
#line 59
template<> struct __nv_isurf_trait< char>  { typedef void type; }; 
#line 60
template<> struct __nv_isurf_trait< signed char>  { typedef void type; }; 
#line 61
template<> struct __nv_isurf_trait< char1>  { typedef void type; }; 
#line 62
template<> struct __nv_isurf_trait< unsigned char>  { typedef void type; }; 
#line 63
template<> struct __nv_isurf_trait< uchar1>  { typedef void type; }; 
#line 64
template<> struct __nv_isurf_trait< short>  { typedef void type; }; 
#line 65
template<> struct __nv_isurf_trait< short1>  { typedef void type; }; 
#line 66
template<> struct __nv_isurf_trait< unsigned short>  { typedef void type; }; 
#line 67
template<> struct __nv_isurf_trait< ushort1>  { typedef void type; }; 
#line 68
template<> struct __nv_isurf_trait< int>  { typedef void type; }; 
#line 69
template<> struct __nv_isurf_trait< int1>  { typedef void type; }; 
#line 70
template<> struct __nv_isurf_trait< unsigned>  { typedef void type; }; 
#line 71
template<> struct __nv_isurf_trait< uint1>  { typedef void type; }; 
#line 72
template<> struct __nv_isurf_trait< __int64>  { typedef void type; }; 
#line 73
template<> struct __nv_isurf_trait< longlong1>  { typedef void type; }; 
#line 74
template<> struct __nv_isurf_trait< unsigned __int64>  { typedef void type; }; 
#line 75
template<> struct __nv_isurf_trait< ulonglong1>  { typedef void type; }; 
#line 76
template<> struct __nv_isurf_trait< float>  { typedef void type; }; 
#line 77
template<> struct __nv_isurf_trait< float1>  { typedef void type; }; 
#line 79
template<> struct __nv_isurf_trait< char2>  { typedef void type; }; 
#line 80
template<> struct __nv_isurf_trait< uchar2>  { typedef void type; }; 
#line 81
template<> struct __nv_isurf_trait< short2>  { typedef void type; }; 
#line 82
template<> struct __nv_isurf_trait< ushort2>  { typedef void type; }; 
#line 83
template<> struct __nv_isurf_trait< int2>  { typedef void type; }; 
#line 84
template<> struct __nv_isurf_trait< uint2>  { typedef void type; }; 
#line 85
template<> struct __nv_isurf_trait< longlong2>  { typedef void type; }; 
#line 86
template<> struct __nv_isurf_trait< ulonglong2>  { typedef void type; }; 
#line 87
template<> struct __nv_isurf_trait< float2>  { typedef void type; }; 
#line 89
template<> struct __nv_isurf_trait< char4>  { typedef void type; }; 
#line 90
template<> struct __nv_isurf_trait< uchar4>  { typedef void type; }; 
#line 91
template<> struct __nv_isurf_trait< short4>  { typedef void type; }; 
#line 92
template<> struct __nv_isurf_trait< ushort4>  { typedef void type; }; 
#line 93
template<> struct __nv_isurf_trait< int4>  { typedef void type; }; 
#line 94
template<> struct __nv_isurf_trait< uint4>  { typedef void type; }; 
#line 95
template<> struct __nv_isurf_trait< float4>  { typedef void type; }; 
__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 98
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 99
surf1Dread(T *ptr, ::cudaSurfaceObject_t obj, int x, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)mode;::exit(___);}
#if 0
#line 100
{ 
#line 101
__nv_tex_surf_handler("__isurf1Dread", ptr, obj, x, mode); 
#line 102
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 104 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\surface_indirect_functions.h"
template< class T> static T 
#line 105
surf1Dread(::cudaSurfaceObject_t surfObject, int x, ::cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)surfObject;(void)x;(void)boundaryMode;::exit(___);}
#if 0
#line 106
{ 
#line 107
T ret; 
#line 108
surf1Dread(&ret, surfObject, x, boundaryMode); 
#line 109
return ret; 
#line 110
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 112 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 113
surf2Dread(T *ptr, ::cudaSurfaceObject_t obj, int x, int y, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)mode;::exit(___);}
#if 0
#line 114
{ 
#line 115
__nv_tex_surf_handler("__isurf2Dread", ptr, obj, x, y, mode); 
#line 116
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 118 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\surface_indirect_functions.h"
template< class T> static T 
#line 119
surf2Dread(::cudaSurfaceObject_t surfObject, int x, int y, ::cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)boundaryMode;::exit(___);}
#if 0
#line 120
{ 
#line 121
T ret; 
#line 122
surf2Dread(&ret, surfObject, x, y, boundaryMode); 
#line 123
return ret; 
#line 124
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 127 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 128
surf3Dread(T *ptr, ::cudaSurfaceObject_t obj, int x, int y, int z, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)mode;::exit(___);}
#if 0
#line 129
{ 
#line 130
__nv_tex_surf_handler("__isurf3Dread", ptr, obj, x, y, z, mode); 
#line 131
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 133 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\surface_indirect_functions.h"
template< class T> static T 
#line 134
surf3Dread(::cudaSurfaceObject_t surfObject, int x, int y, int z, ::cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)z;(void)boundaryMode;::exit(___);}
#if 0
#line 135
{ 
#line 136
T ret; 
#line 137
surf3Dread(&ret, surfObject, x, y, z, boundaryMode); 
#line 138
return ret; 
#line 139
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 141 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 142
surf1DLayeredread(T *ptr, ::cudaSurfaceObject_t obj, int x, int layer, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)layer;(void)mode;::exit(___);}
#if 0
#line 143
{ 
#line 144
__nv_tex_surf_handler("__isurf1DLayeredread", ptr, obj, x, layer, mode); 
#line 145
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 147 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\surface_indirect_functions.h"
template< class T> static T 
#line 148
surf1DLayeredread(::cudaSurfaceObject_t surfObject, int x, int layer, ::cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)surfObject;(void)x;(void)layer;(void)boundaryMode;::exit(___);}
#if 0
#line 149
{ 
#line 150
T ret; 
#line 151
surf1DLayeredread(&ret, surfObject, x, layer, boundaryMode); 
#line 152
return ret; 
#line 153
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 155 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 156
surf2DLayeredread(T *ptr, ::cudaSurfaceObject_t obj, int x, int y, int layer, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)mode;::exit(___);}
#if 0
#line 157
{ 
#line 158
__nv_tex_surf_handler("__isurf2DLayeredread", ptr, obj, x, y, layer, mode); 
#line 159
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 161 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\surface_indirect_functions.h"
template< class T> static T 
#line 162
surf2DLayeredread(::cudaSurfaceObject_t surfObject, int x, int y, int layer, ::cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)layer;(void)boundaryMode;::exit(___);}
#if 0
#line 163
{ 
#line 164
T ret; 
#line 165
surf2DLayeredread(&ret, surfObject, x, y, layer, boundaryMode); 
#line 166
return ret; 
#line 167
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 169 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 170
surfCubemapread(T *ptr, ::cudaSurfaceObject_t obj, int x, int y, int face, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)face;(void)mode;::exit(___);}
#if 0
#line 171
{ 
#line 172
__nv_tex_surf_handler("__isurfCubemapread", ptr, obj, x, y, face, mode); 
#line 173
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 175 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\surface_indirect_functions.h"
template< class T> static T 
#line 176
surfCubemapread(::cudaSurfaceObject_t surfObject, int x, int y, int face, ::cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)face;(void)boundaryMode;::exit(___);}
#if 0
#line 177
{ 
#line 178
T ret; 
#line 179
surfCubemapread(&ret, surfObject, x, y, face, boundaryMode); 
#line 180
return ret; 
#line 181
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 183 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 184
surfCubemapLayeredread(T *ptr, ::cudaSurfaceObject_t obj, int x, int y, int layerface, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layerface;(void)mode;::exit(___);}
#if 0
#line 185
{ 
#line 186
__nv_tex_surf_handler("__isurfCubemapLayeredread", ptr, obj, x, y, layerface, mode); 
#line 187
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 189 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\surface_indirect_functions.h"
template< class T> static T 
#line 190
surfCubemapLayeredread(::cudaSurfaceObject_t surfObject, int x, int y, int layerface, ::cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)layerface;(void)boundaryMode;::exit(___);}
#if 0
#line 191
{ 
#line 192
T ret; 
#line 193
surfCubemapLayeredread(&ret, surfObject, x, y, layerface, boundaryMode); 
#line 194
return ret; 
#line 195
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 197 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 198
surf1Dwrite(T val, ::cudaSurfaceObject_t obj, int x, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)mode;::exit(___);}
#if 0
#line 199
{ 
#line 200
__nv_tex_surf_handler("__isurf1Dwrite_v2", &val, obj, x, mode); 
#line 201
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 203 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 204
surf2Dwrite(T val, ::cudaSurfaceObject_t obj, int x, int y, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)mode;::exit(___);}
#if 0
#line 205
{ 
#line 206
__nv_tex_surf_handler("__isurf2Dwrite_v2", &val, obj, x, y, mode); 
#line 207
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 209 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 210
surf3Dwrite(T val, ::cudaSurfaceObject_t obj, int x, int y, int z, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)z;(void)mode;::exit(___);}
#if 0
#line 211
{ 
#line 212
__nv_tex_surf_handler("__isurf3Dwrite_v2", &val, obj, x, y, z, mode); 
#line 213
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 215 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 216
surf1DLayeredwrite(T val, ::cudaSurfaceObject_t obj, int x, int layer, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)layer;(void)mode;::exit(___);}
#if 0
#line 217
{ 
#line 218
__nv_tex_surf_handler("__isurf1DLayeredwrite_v2", &val, obj, x, layer, mode); 
#line 219
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 221 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 222
surf2DLayeredwrite(T val, ::cudaSurfaceObject_t obj, int x, int y, int layer, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)layer;(void)mode;::exit(___);}
#if 0
#line 223
{ 
#line 224
__nv_tex_surf_handler("__isurf2DLayeredwrite_v2", &val, obj, x, y, layer, mode); 
#line 225
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 227 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 228
surfCubemapwrite(T val, ::cudaSurfaceObject_t obj, int x, int y, int face, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)face;(void)mode;::exit(___);}
#if 0
#line 229
{ 
#line 230
__nv_tex_surf_handler("__isurfCubemapwrite_v2", &val, obj, x, y, face, mode); 
#line 231
} 
#endif

__pragma(warning(push))
__pragma(warning(disable : 4505)) /* "unreferenced local function has been removed" */

#line 233 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 234
surfCubemapLayeredwrite(T val, ::cudaSurfaceObject_t obj, int x, int y, int layerface, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
__pragma(warning(pop))
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)layerface;(void)mode;::exit(___);}
#if 0
#line 235
{ 
#line 236
__nv_tex_surf_handler("__isurfCubemapLayeredwrite_v2", &val, obj, x, y, layerface, mode); 
#line 237
} 
#endif
#line 3639 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\crt/device_functions.h"
extern "C" unsigned __stdcall __cudaPushCallConfiguration(dim3 gridDim, dim3 blockDim, size_t sharedMem = 0, CUstream_st * stream = 0); 
#line 68 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\device_launch_parameters.h"
extern "C" {
#line 71 "C:\\Program Files\\NVIDIA GPU Computing Toolkit\\CUDA\\v12.3\\include\\device_launch_parameters.h"
extern const uint3 __device_builtin_variable_threadIdx; 
#line 72
extern const uint3 __device_builtin_variable_blockIdx; 
#line 73
extern const dim3 __device_builtin_variable_blockDim; 
#line 74
extern const dim3 __device_builtin_variable_gridDim; 
#line 75
extern const int __device_builtin_variable_warpSize; 
#line 80
}
#line 15 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\stdint.h"
#pragma warning(push)
#pragma warning(disable: 4514 4820 )
#line 18
typedef signed char int8_t; 
#line 19
typedef short int16_t; 
#line 20
typedef int int32_t; 
#line 21
typedef __int64 int64_t; 
#line 22
typedef unsigned char uint8_t; 
#line 23
typedef unsigned short uint16_t; 
#line 24
typedef unsigned uint32_t; 
#line 25
typedef unsigned __int64 uint64_t; 
#line 27
typedef signed char int_least8_t; 
#line 28
typedef short int_least16_t; 
#line 29
typedef int int_least32_t; 
#line 30
typedef __int64 int_least64_t; 
#line 31
typedef unsigned char uint_least8_t; 
#line 32
typedef unsigned short uint_least16_t; 
#line 33
typedef unsigned uint_least32_t; 
#line 34
typedef unsigned __int64 uint_least64_t; 
#line 36
typedef signed char int_fast8_t; 
#line 37
typedef int int_fast16_t; 
#line 38
typedef int int_fast32_t; 
#line 39
typedef __int64 int_fast64_t; 
#line 40
typedef unsigned char uint_fast8_t; 
#line 41
typedef unsigned uint_fast16_t; 
#line 42
typedef unsigned uint_fast32_t; 
#line 43
typedef unsigned __int64 uint_fast64_t; 
#line 45
typedef __int64 intmax_t; 
#line 46
typedef unsigned __int64 uintmax_t; 
#line 136 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\stdint.h"
#pragma warning(pop)
#line 14 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\cstdint"
#pragma pack ( push, 8 )
#pragma warning(push, 3)
#pragma warning(disable : 4180 4412 4455 4494 4514 4574 4582 4583 4587 4588 4619 4623 4625 4626 4643 4648 4702 4793 4820 4988 5026 5027 5045 6294 4984 5053 )
#line 21
namespace std { 
#line 22
using ::int8_t;
#line 23
using ::int16_t;
#line 24
using ::int32_t;
#line 25
using ::int64_t;
#line 26
using ::uint8_t;
#line 27
using ::uint16_t;
#line 28
using ::uint32_t;
#line 29
using ::uint64_t;
#line 31
using ::int_least8_t;
#line 32
using ::int_least16_t;
#line 33
using ::int_least32_t;
#line 34
using ::int_least64_t;
#line 35
using ::uint_least8_t;
#line 36
using ::uint_least16_t;
#line 37
using ::uint_least32_t;
#line 38
using ::uint_least64_t;
#line 40
using ::int_fast8_t;
#line 41
using ::int_fast16_t;
#line 42
using ::int_fast32_t;
#line 43
using ::int_fast64_t;
#line 44
using ::uint_fast8_t;
#line 45
using ::uint_fast16_t;
#line 46
using ::uint_fast32_t;
#line 47
using ::uint_fast64_t;
#line 49
using ::intmax_t;
#line 50
using ::intptr_t;
#line 51
using ::uintmax_t;
#line 52
using ::uintptr_t;
#line 55
namespace [[deprecated("warning STL4002: The non-Standard std::tr1 namespace and TR1-only machinery are deprecated and will be REMOVED. You can define _" "SILENCE_TR1_NAMESPACE_DEPRECATION_WARNING to suppress this warning.")]] tr1 { 
#line 56
using ::int8_t;
#line 57
using ::int16_t;
#line 58
using ::int32_t;
#line 59
using ::int64_t;
#line 60
using ::uint8_t;
#line 61
using ::uint16_t;
#line 62
using ::uint32_t;
#line 63
using ::uint64_t;
#line 65
using ::int_least8_t;
#line 66
using ::int_least16_t;
#line 67
using ::int_least32_t;
#line 68
using ::int_least64_t;
#line 69
using ::uint_least8_t;
#line 70
using ::uint_least16_t;
#line 71
using ::uint_least32_t;
#line 72
using ::uint_least64_t;
#line 74
using ::int_fast8_t;
#line 75
using ::int_fast16_t;
#line 76
using ::int_fast32_t;
#line 77
using ::int_fast64_t;
#line 78
using ::uint_fast8_t;
#line 79
using ::uint_fast16_t;
#line 80
using ::uint_fast32_t;
#line 81
using ::uint_fast64_t;
#line 83
using ::intmax_t;
#line 84
using ::intptr_t;
#line 85
using ::uintmax_t;
#line 86
using ::uintptr_t;
#line 87
}
#line 89 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\cstdint"
}
#line 93
#pragma warning(pop)
#pragma pack ( pop )
#line 15 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\cstddef"
#pragma pack ( push, 8 )
#pragma warning(push, 3)
#pragma warning(disable : 4180 4412 4455 4494 4514 4574 4582 4583 4587 4588 4619 4623 4625 4626 4643 4648 4702 4793 4820 4988 5026 5027 5045 6294 4984 5053 )
#line 22
namespace std { 
#line 23
using ::ptrdiff_t;
#line 25
using max_align_t = double; 
#line 93
}
#line 95
using std::max_align_t;
#line 99
#pragma warning(pop)
#pragma pack ( pop )
#line 13 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\initializer_list"
#pragma pack ( push, 8 )
#pragma warning(push, 3)
#pragma warning(disable : 4180 4412 4455 4494 4514 4574 4582 4583 4587 4588 4619 4623 4625 4626 4643 4648 4702 4793 4820 4988 5026 5027 5045 6294 4984 5053 )
#line 20
namespace std { 
#line 21
template < class _Elem >
class initializer_list {
public :
    using value_type = _Elem;
    using reference = const _Elem &;
    using const_reference = const _Elem &;
    using size_type = size_t;

    using iterator = const _Elem *;
    using const_iterator = const _Elem *;

    constexpr initializer_list ( ) noexcept : _First ( nullptr ), _Last ( nullptr ) { }

    constexpr initializer_list ( const _Elem * _First_arg, const _Elem * _Last_arg ) noexcept
        : _First ( _First_arg ), _Last ( _Last_arg ) { }

    [ [ nodiscard ] ] constexpr const _Elem * begin ( ) const noexcept {
        return _First;
    }

    [ [ nodiscard ] ] constexpr const _Elem * end ( ) const noexcept {
        return _Last;
    }

    [ [ nodiscard ] ] constexpr size_t size ( ) const noexcept {
        return static_cast < size_t > ( _Last - _First );
    }

private :
    const _Elem * _First;
    const _Elem * _Last;
};
#line 54
template < class _Elem >
[ [ nodiscard ] ] constexpr const _Elem * begin ( initializer_list < _Elem > _Ilist ) noexcept {
    return _Ilist . begin ( );
}
#line 59
template < class _Elem >
[ [ nodiscard ] ] constexpr const _Elem * end ( initializer_list < _Elem > _Ilist ) noexcept {
    return _Ilist . end ( );
}
#line 63
}
#line 66
#pragma warning(pop)
#pragma pack ( pop )
#line 16 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\xstddef"
#pragma pack ( push, 8 )
#pragma warning(push, 3)
#pragma warning(disable : 4180 4412 4455 4494 4514 4574 4582 4583 4587 4588 4619 4623 4625 4626 4643 4648 4702 4793 4820 4988 5026 5027 5045 6294 4984 5053 )
#line 23
namespace std { 
#line 24
template< class > constexpr bool 
#line 26
_Always_false = false; 
#line 30
template< class _Arg, class _Result> 
#line 31
struct unary_function { 
#line 32
using argument_type = _Arg; 
#line 33
using result_type = _Result; 
#line 34
}; 
#line 36
template< class _Arg1, class _Arg2, class _Result> 
#line 37
struct binary_function { 
#line 38
using first_argument_type = _Arg1; 
#line 39
using second_argument_type = _Arg2; 
#line 40
using result_type = _Result; 
#line 41
}; 
#line 44 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\xstddef"
#pragma warning(push)
#pragma warning(disable : 5215)
#pragma warning(disable : 5216)
#line 53
template< class _Ty> 
#line 54
[[nodiscard]] _Ty 
#line 53
_Fake_copy_init(_Ty) noexcept; 
#line 64
#pragma warning(pop)
#line 66
template < class _Ty = void >
struct plus {
    using first_argument_type = _Ty;
    using second_argument_type = _Ty;
    using result_type = _Ty;

    [ [ nodiscard ] ] constexpr _Ty operator ( ) ( const _Ty & _Left, const _Ty & _Right ) const {
        return _Left + _Right;
    }
};
#line 77
template < class _Ty = void >
struct minus {
    using first_argument_type = _Ty;
    using second_argument_type = _Ty;
    using result_type = _Ty;

    [ [ nodiscard ] ] constexpr _Ty operator ( ) ( const _Ty & _Left, const _Ty & _Right ) const {
        return _Left - _Right;
    }
};
#line 88
template < class _Ty = void >
struct multiplies {
    using first_argument_type = _Ty;
    using second_argument_type = _Ty;
    using result_type = _Ty;

    [ [ nodiscard ] ] constexpr _Ty operator ( ) ( const _Ty & _Left, const _Ty & _Right ) const {
        return _Left * _Right;
    }
};
#line 99
template < class _Ty = void >
struct equal_to {
    using first_argument_type = _Ty;
    using second_argument_type = _Ty;
    using result_type = bool;

    [ [ nodiscard ] ] constexpr bool operator ( ) ( const _Ty & _Left, const _Ty & _Right ) const
        noexcept ( noexcept ( _Fake_copy_init < bool > ( _Left == _Right ) ) ) {
        return _Left == _Right;
    }
};
#line 111
template < class _Ty = void >
struct not_equal_to {
    using first_argument_type = _Ty;
    using second_argument_type = _Ty;
    using result_type = bool;

    [ [ nodiscard ] ] constexpr bool operator ( ) ( const _Ty & _Left, const _Ty & _Right ) const
        noexcept ( noexcept ( _Fake_copy_init < bool > ( _Left != _Right ) ) ) {
        return _Left != _Right;
    }
};
#line 123
template < class _Ty = void >
struct greater {
    using first_argument_type = _Ty;
    using second_argument_type = _Ty;
    using result_type = bool;

    [ [ nodiscard ] ] constexpr bool operator ( ) ( const _Ty & _Left, const _Ty & _Right ) const
        noexcept ( noexcept ( _Fake_copy_init < bool > ( _Left > _Right ) ) ) {
        return _Left > _Right;
    }
};
#line 135
template < class _Ty = void >
struct less {
    using first_argument_type = _Ty;
    using second_argument_type = _Ty;
    using result_type = bool;

    [ [ nodiscard ] ] constexpr bool operator ( ) ( const _Ty & _Left, const _Ty & _Right ) const
        noexcept ( noexcept ( _Fake_copy_init < bool > ( _Left < _Right ) ) ) {
        return _Left < _Right;
    }
};
#line 147
template < class _Ty = void >
struct greater_equal {
    using first_argument_type = _Ty;
    using second_argument_type = _Ty;
    using result_type = bool;

    [ [ nodiscard ] ] constexpr bool operator ( ) ( const _Ty & _Left, const _Ty & _Right ) const
        noexcept ( noexcept ( _Fake_copy_init < bool > ( _Left >= _Right ) ) ) {
        return _Left >= _Right;
    }
};
#line 159
template < class _Ty = void >
struct less_equal {
    using first_argument_type = _Ty;
    using second_argument_type = _Ty;
    using result_type = bool;

    [ [ nodiscard ] ] constexpr bool operator ( ) ( const _Ty & _Left, const _Ty & _Right ) const
        noexcept ( noexcept ( _Fake_copy_init < bool > ( _Left <= _Right ) ) ) {
        return _Left <= _Right;
    }
};
#line 172
template<> struct plus< void>  { 
#line 173
template < class _Ty1, class _Ty2 >
    [ [ nodiscard ] ] constexpr auto operator ( ) ( _Ty1 && _Left, _Ty2 && _Right ) const
        noexcept ( noexcept ( static_cast < _Ty1 && > ( _Left ) + static_cast < _Ty2 && > ( _Right ) ) )
        -> decltype ( static_cast < _Ty1 && > ( _Left ) + static_cast < _Ty2 && > ( _Right ) ) {
        return static_cast < _Ty1 && > ( _Left ) + static_cast < _Ty2 && > ( _Right );
    }
#line 180
using is_transparent = int; 
#line 181
}; 
#line 184
template<> struct minus< void>  { 
#line 185
template < class _Ty1, class _Ty2 >
    [ [ nodiscard ] ] constexpr auto operator ( ) ( _Ty1 && _Left, _Ty2 && _Right ) const
        noexcept ( noexcept ( static_cast < _Ty1 && > ( _Left ) - static_cast < _Ty2 && > ( _Right ) ) )
        -> decltype ( static_cast < _Ty1 && > ( _Left ) - static_cast < _Ty2 && > ( _Right ) ) {
        return static_cast < _Ty1 && > ( _Left ) - static_cast < _Ty2 && > ( _Right );
    }
#line 192
using is_transparent = int; 
#line 193
}; 
#line 196
template<> struct multiplies< void>  { 
#line 197
template < class _Ty1, class _Ty2 >
    [ [ nodiscard ] ] constexpr auto operator ( ) ( _Ty1 && _Left, _Ty2 && _Right ) const
        noexcept ( noexcept ( static_cast < _Ty1 && > ( _Left ) * static_cast < _Ty2 && > ( _Right ) ) )
        -> decltype ( static_cast < _Ty1 && > ( _Left ) * static_cast < _Ty2 && > ( _Right ) ) {
        return static_cast < _Ty1 && > ( _Left ) * static_cast < _Ty2 && > ( _Right );
    }
#line 204
using is_transparent = int; 
#line 205
}; 
#line 208
template<> struct equal_to< void>  { 
#line 209
template < class _Ty1, class _Ty2 >
    [ [ nodiscard ] ] constexpr auto operator ( ) ( _Ty1 && _Left, _Ty2 && _Right ) const
        noexcept ( noexcept ( static_cast < _Ty1 && > ( _Left ) == static_cast < _Ty2 && > ( _Right ) ) )
        -> decltype ( static_cast < _Ty1 && > ( _Left ) == static_cast < _Ty2 && > ( _Right ) ) {
        return static_cast < _Ty1 && > ( _Left ) == static_cast < _Ty2 && > ( _Right );
    }
#line 216
using is_transparent = int; 
#line 217
}; 
#line 220
template<> struct not_equal_to< void>  { 
#line 221
template < class _Ty1, class _Ty2 >
    [ [ nodiscard ] ] constexpr auto operator ( ) ( _Ty1 && _Left, _Ty2 && _Right ) const
        noexcept ( noexcept ( static_cast < _Ty1 && > ( _Left ) != static_cast < _Ty2 && > ( _Right ) ) )
        -> decltype ( static_cast < _Ty1 && > ( _Left ) != static_cast < _Ty2 && > ( _Right ) ) {
        return static_cast < _Ty1 && > ( _Left ) != static_cast < _Ty2 && > ( _Right );
    }
#line 228
using is_transparent = int; 
#line 229
}; 
#line 232
template<> struct greater< void>  { 
#line 233
template < class _Ty1, class _Ty2 >
    [ [ nodiscard ] ] constexpr auto operator ( ) ( _Ty1 && _Left, _Ty2 && _Right ) const
        noexcept ( noexcept ( static_cast < _Ty1 && > ( _Left ) > static_cast < _Ty2 && > ( _Right ) ) )
        -> decltype ( static_cast < _Ty1 && > ( _Left ) > static_cast < _Ty2 && > ( _Right ) ) {
        return static_cast < _Ty1 && > ( _Left ) > static_cast < _Ty2 && > ( _Right );
    }
#line 240
using is_transparent = int; 
#line 241
}; 
#line 244
template<> struct less< void>  { 
#line 245
template < class _Ty1, class _Ty2 >
    [ [ nodiscard ] ] constexpr auto operator ( ) ( _Ty1 && _Left, _Ty2 && _Right ) const
        noexcept ( noexcept ( static_cast < _Ty1 && > ( _Left ) < static_cast < _Ty2 && > ( _Right ) ) )
        -> decltype ( static_cast < _Ty1 && > ( _Left ) < static_cast < _Ty2 && > ( _Right ) ) {
        return static_cast < _Ty1 && > ( _Left ) < static_cast < _Ty2 && > ( _Right );
    }
#line 252
using is_transparent = int; 
#line 253
}; 
#line 256
template<> struct greater_equal< void>  { 
#line 257
template < class _Ty1, class _Ty2 >
    [ [ nodiscard ] ] constexpr auto operator ( ) ( _Ty1 && _Left, _Ty2 && _Right ) const
        noexcept ( noexcept ( static_cast < _Ty1 && > ( _Left ) >= static_cast < _Ty2 && > ( _Right ) ) )
        -> decltype ( static_cast < _Ty1 && > ( _Left ) >= static_cast < _Ty2 && > ( _Right ) ) {
        return static_cast < _Ty1 && > ( _Left ) >= static_cast < _Ty2 && > ( _Right );
    }
#line 264
using is_transparent = int; 
#line 265
}; 
#line 268
template<> struct less_equal< void>  { 
#line 269
template < class _Ty1, class _Ty2 >
    [ [ nodiscard ] ] constexpr auto operator ( ) ( _Ty1 && _Left, _Ty2 && _Right ) const
        noexcept ( noexcept ( static_cast < _Ty1 && > ( _Left ) <= static_cast < _Ty2 && > ( _Right ) ) )
        -> decltype ( static_cast < _Ty1 && > ( _Left ) <= static_cast < _Ty2 && > ( _Right ) ) {
        return static_cast < _Ty1 && > ( _Left ) <= static_cast < _Ty2 && > ( _Right );
    }
#line 276
using is_transparent = int; 
#line 277
}; 
#line 279
template < class _Ty >
[ [ nodiscard ] ] constexpr _Ty * addressof ( _Ty & _Val ) noexcept {
    return __builtin_addressof ( _Val );
}
#line 284
template < class _Ty >
const _Ty * addressof ( const _Ty && ) = delete;
#line 287
template < class _Ptrty >
[ [ nodiscard ] ] constexpr auto _Unfancy ( _Ptrty _Ptr ) noexcept {
    return :: std :: addressof ( * _Ptr );
}
#line 292
template < class _Ty >
[ [ nodiscard ] ] constexpr _Ty * _Unfancy ( _Ty * _Ptr ) noexcept {
    return _Ptr;
}
#line 296
}
#line 427 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\xstddef"
#pragma warning(pop)
#pragma pack ( pop )
#line 14 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\type_traits"
#pragma pack ( push, 8 )
#pragma warning(push, 3)
#pragma warning(disable : 4180 4412 4455 4494 4514 4574 4582 4583 4587 4588 4619 4623 4625 4626 4643 4648 4702 4793 4820 4988 5026 5027 5045 6294 4984 5053 )
#line 21
namespace std { 
#line 22
template < class _Ty, _Ty ... _Vals >
struct integer_sequence {
    static_assert ( is_integral_v < _Ty >, "integer_sequence<T, I...> requires T to be an integral type." );

    using value_type = _Ty;

    [ [ nodiscard ] ] static constexpr size_t size ( ) noexcept {
        return sizeof ... ( _Vals );
    }
};
#line 33
template< class _Ty, _Ty _Size> using make_integer_sequence = __make_integer_seq< integer_sequence, _Ty, _Size> ; 
#line 36
template< size_t ..._Vals> using index_sequence = integer_sequence< unsigned __int64, _Vals...> ; 
#line 39
template< size_t _Size> using make_index_sequence = make_integer_sequence< unsigned __int64, _Size> ; 
#line 42
template< class ..._Types> using index_sequence_for = make_index_sequence< sizeof...(_Types)> ; 
#line 45
template< bool _First_value, class _First, class ..._Rest> 
#line 46
struct _Conjunction { 
#line 47
using type = _First; 
#line 48
}; 
#line 50
template< class _True, class _Next, class ..._Rest> 
#line 51
struct _Conjunction< true, _True, _Next, _Rest...>  { 
#line 52
using type = typename std::_Conjunction< _Next::value, _Next, _Rest...> ::type; 
#line 53
}; 
#line 55
template< class ..._Traits> 
#line 56
struct conjunction : public true_type { }; 
#line 58
template< class _First, class ..._Rest> 
#line 59
struct conjunction< _First, _Rest...>  : public _Conjunction< _First::value, _First, _Rest...> ::type { 
#line 61
}; 
#line 63
template< class ..._Traits> constexpr bool 
#line 64
conjunction_v = (conjunction< _Traits...> ::value); 
#line 66
template< class _Trait> 
#line 67
struct negation : public bool_constant< !(static_cast< bool>(_Trait::value))>  { }; 
#line 69
template< class _Trait> constexpr bool 
#line 70
negation_v = (negation< _Trait> ::value); 
#line 72
template< class _Ty> constexpr bool 
#line 73
is_void_v = is_same_v< remove_cv_t< _Ty> , void> ; 
#line 75
template< class _Ty> 
#line 76
struct is_void : public bool_constant< is_void_v< _Ty> >  { }; 
#line 78
template< class ..._Types> using void_t = void; 
#line 81
template< class _Ty> 
#line 82
struct _Identity { 
#line 83
using type = _Ty; 
#line 84
}; 
#line 85
template< class _Ty> using _Identity_t = typename _Identity< _Ty> ::type; 
#line 89
template< class _Ty> 
#line 90
struct add_const { 
#line 91
using type = const _Ty; 
#line 92
}; 
#line 94
template< class _Ty> using add_const_t = typename add_const< _Ty> ::type; 
#line 97
template< class _Ty> 
#line 98
struct add_volatile { 
#line 99
using type = volatile _Ty; 
#line 100
}; 
#line 102
template< class _Ty> using add_volatile_t = typename add_volatile< _Ty> ::type; 
#line 105
template< class _Ty> 
#line 106
struct add_cv { 
#line 107
using type = const volatile _Ty; 
#line 108
}; 
#line 110
template< class _Ty> using add_cv_t = typename add_cv< _Ty> ::type; 
#line 113
template< class _Ty, class  = void> 
#line 114
struct _Add_reference { 
#line 115
using _Lvalue = _Ty; 
#line 116
using _Rvalue = _Ty; 
#line 117
}; 
#line 119
template< class _Ty> 
#line 120
struct _Add_reference< _Ty, void_t< _Ty &> >  { 
#line 121
using _Lvalue = _Ty &; 
#line 122
using _Rvalue = _Ty &&; 
#line 123
}; 
#line 125
template< class _Ty> 
#line 126
struct add_lvalue_reference { 
#line 127
using type = typename _Add_reference< _Ty> ::_Lvalue; 
#line 128
}; 
#line 130
template< class _Ty> using add_lvalue_reference_t = typename _Add_reference< _Ty> ::_Lvalue; 
#line 133
template< class _Ty> 
#line 134
struct add_rvalue_reference { 
#line 135
using type = typename _Add_reference< _Ty> ::_Rvalue; 
#line 136
}; 
#line 138
template< class _Ty> using add_rvalue_reference_t = typename _Add_reference< _Ty> ::_Rvalue; 
#line 141
template < class _Ty >
add_rvalue_reference_t < _Ty > declval ( ) noexcept {
    static_assert ( _Always_false < _Ty >, "Calling declval is ill-formed, see N4892 [declval]/2." );
}
#line 146
template< class _Ty> 
#line 147
struct remove_extent { 
#line 148
using type = _Ty; 
#line 149
}; 
#line 151
template< class _Ty, size_t _Ix> 
#line 152
struct remove_extent< _Ty [_Ix]>  { 
#line 153
using type = _Ty; 
#line 154
}; 
#line 156
template< class _Ty> 
#line 157
struct remove_extent< _Ty []>  { 
#line 158
using type = _Ty; 
#line 159
}; 
#line 161
template< class _Ty> using remove_extent_t = typename remove_extent< _Ty> ::type; 
#line 164
template< class _Ty> 
#line 165
struct remove_all_extents { 
#line 166
using type = _Ty; 
#line 167
}; 
#line 169
template< class _Ty, size_t _Ix> 
#line 170
struct remove_all_extents< _Ty [_Ix]>  { 
#line 171
using type = typename std::remove_all_extents< _Ty> ::type; 
#line 172
}; 
#line 174
template< class _Ty> 
#line 175
struct remove_all_extents< _Ty []>  { 
#line 176
using type = typename std::remove_all_extents< _Ty> ::type; 
#line 177
}; 
#line 179
template< class _Ty> using remove_all_extents_t = typename remove_all_extents< _Ty> ::type; 
#line 182
template< class _Ty> 
#line 183
struct remove_pointer { 
#line 184
using type = _Ty; 
#line 185
}; 
#line 187
template< class _Ty> 
#line 188
struct remove_pointer< _Ty *>  { 
#line 189
using type = _Ty; 
#line 190
}; 
#line 192
template< class _Ty> 
#line 193
struct remove_pointer< _Ty *const>  { 
#line 194
using type = _Ty; 
#line 195
}; 
#line 197
template< class _Ty> 
#line 198
struct remove_pointer< _Ty *volatile>  { 
#line 199
using type = _Ty; 
#line 200
}; 
#line 202
template< class _Ty> 
#line 203
struct remove_pointer< _Ty *const volatile>  { 
#line 204
using type = _Ty; 
#line 205
}; 
#line 207
template< class _Ty> using remove_pointer_t = typename remove_pointer< _Ty> ::type; 
#line 210
template< class _Ty, class  = void> 
#line 211
struct _Add_pointer { 
#line 212
using type = _Ty; 
#line 213
}; 
#line 215
template< class _Ty> 
#line 216
struct _Add_pointer< _Ty, void_t< remove_reference_t< _Ty>  *> >  { 
#line 217
using type = remove_reference_t< _Ty>  *; 
#line 218
}; 
#line 220
template< class _Ty> 
#line 221
struct add_pointer { 
#line 222
using type = typename _Add_pointer< _Ty> ::type; 
#line 223
}; 
#line 225
template< class _Ty> using add_pointer_t = typename _Add_pointer< _Ty> ::type; 
#line 228
template< class > constexpr bool 
#line 229
is_array_v = false; 
#line 231
template< class _Ty, size_t _Nx> constexpr bool 
#line 232
is_array_v< _Ty [_Nx]>  = true; 
#line 234
template< class _Ty> constexpr bool 
#line 235
is_array_v< _Ty []>  = true; 
#line 237
template< class _Ty> 
#line 238
struct is_array : public bool_constant< is_array_v< _Ty> >  { }; 
#line 260 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\type_traits"
template< class > constexpr bool 
#line 261
is_lvalue_reference_v = false; 
#line 263
template< class _Ty> constexpr bool 
#line 264
is_lvalue_reference_v< _Ty &>  = true; 
#line 266
template< class _Ty> 
#line 267
struct is_lvalue_reference : public bool_constant< is_lvalue_reference_v< _Ty> >  { }; 
#line 269
template< class > constexpr bool 
#line 270
is_rvalue_reference_v = false; 
#line 272
template< class _Ty> constexpr bool 
#line 273
is_rvalue_reference_v< _Ty &&>  = true; 
#line 275
template< class _Ty> 
#line 276
struct is_rvalue_reference : public bool_constant< is_rvalue_reference_v< _Ty> >  { }; 
#line 278
template< class > constexpr bool 
#line 279
is_reference_v = false; 
#line 281
template< class _Ty> constexpr bool 
#line 282
is_reference_v< _Ty &>  = true; 
#line 284
template< class _Ty> constexpr bool 
#line 285
is_reference_v< _Ty &&>  = true; 
#line 287
template< class _Ty> 
#line 288
struct is_reference : public bool_constant< is_reference_v< _Ty> >  { }; 
#line 290
template< class > constexpr bool 
#line 291
is_pointer_v = false; 
#line 293
template< class _Ty> constexpr bool 
#line 294
is_pointer_v< _Ty *>  = true; 
#line 296
template< class _Ty> constexpr bool 
#line 297
is_pointer_v< _Ty *const>  = true; 
#line 299
template< class _Ty> constexpr bool 
#line 300
is_pointer_v< _Ty *volatile>  = true; 
#line 302
template< class _Ty> constexpr bool 
#line 303
is_pointer_v< _Ty *const volatile>  = true; 
#line 305
template< class _Ty> 
#line 306
struct is_pointer : public bool_constant< is_pointer_v< _Ty> >  { }; 
#line 308
template< class _Ty> constexpr bool 
#line 309
is_null_pointer_v = is_same_v< remove_cv_t< _Ty> , std::nullptr_t> ; 
#line 312
template< class _Ty> 
#line 313
struct is_null_pointer : public bool_constant< is_null_pointer_v< _Ty> >  { }; 
#line 315
template< class _Ty> 
#line 316
struct is_union : public bool_constant< __is_union(_Ty)>  { }; 
#line 318
template< class _Ty> constexpr bool 
#line 319
is_union_v = __is_union(_Ty); 
#line 321
template< class _Ty> 
#line 322
struct is_class : public bool_constant< __is_class(_Ty)>  { }; 
#line 324
template< class _Ty> constexpr bool 
#line 325
is_class_v = __is_class(_Ty); 
#line 327
template< class _Ty> constexpr bool 
#line 328
is_fundamental_v = (is_arithmetic_v< _Ty>  || is_void_v< _Ty> ) || is_null_pointer_v< _Ty> ; 
#line 330
template< class _Ty> 
#line 331
struct is_fundamental : public bool_constant< is_fundamental_v< _Ty> >  { }; 
#line 333
template< class _From, class _To> 
#line 334
struct is_convertible : public bool_constant< __is_convertible_to(_From, _To)>  { 
#line 336
}; 
#line 338
template< class _From, class _To> constexpr bool 
#line 339
is_convertible_v = __is_convertible_to(_From, _To); 
#line 342
template< class _Ty> 
#line 343
struct is_convertible< _Ty &, volatile _Ty &>  : public true_type { }; 
#line 345
template< class _Ty> 
#line 346
struct is_convertible< volatile _Ty &, volatile _Ty &>  : public true_type { }; 
#line 348
template< class _Ty> 
#line 349
struct is_convertible< _Ty &, const volatile _Ty &>  : public true_type { }; 
#line 351
template< class _Ty> 
#line 352
struct is_convertible< volatile _Ty &, const volatile _Ty &>  : public true_type { }; 
#line 354
template< class _Ty> constexpr bool 
#line 355
is_convertible_v< _Ty &, volatile _Ty &>  = true; 
#line 357
template< class _Ty> constexpr bool 
#line 358
is_convertible_v< volatile _Ty &, volatile _Ty &>  = true; 
#line 360
template< class _Ty> constexpr bool 
#line 361
is_convertible_v< _Ty &, const volatile _Ty &>  = true; 
#line 363
template< class _Ty> constexpr bool 
#line 364
is_convertible_v< volatile _Ty &, const volatile _Ty &>  = true; 
#line 367 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\type_traits"
template< class _Ty> 
#line 368
struct is_enum : public bool_constant< __is_enum(_Ty)>  { }; 
#line 370
template< class _Ty> constexpr bool 
#line 371
is_enum_v = __is_enum(_Ty); 
#line 381 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\type_traits"
template< class _Ty> 
#line 382
struct is_compound : public bool_constant< !is_fundamental_v< _Ty> >  { }; 
#line 384
template< class _Ty> constexpr bool 
#line 385
is_compound_v = (!is_fundamental_v< _Ty> ); 
#line 387
template< class ..._Types> 
#line 388
struct _Arg_types { }; 
#line 390
template< class _Ty1> 
#line 391
struct _Arg_types< _Ty1>  { 
#line 392
using argument_type = _Ty1; 
#line 393
}; 
#line 395
template< class _Ty1, class _Ty2> 
#line 396
struct _Arg_types< _Ty1, _Ty2>  { 
#line 397
using first_argument_type = _Ty1; 
#line 398
using second_argument_type = _Ty2; 
#line 399
}; 
#line 401
template< class _Ty> 
#line 402
struct _Is_memfunptr { 
#line 403
using _Bool_type = false_type; 
#line 404
}; 
#line 416
template< class _Ret, class _Arg0, class ..._Types> struct _Is_memfunptr< _Ret (__cdecl _Arg0::*)(_Types ...)>  : public _Arg_types< _Arg0 *, _Types...>  { using _Bool_type = std::true_type; using result_type = _Ret; using _Class_type = _Arg0; using _Guide_type = enable_if< true, _Ret (_Types ...)> ; }; template< class _Ret, class _Arg0, class ..._Types> struct _Is_memfunptr< _Ret (__vectorcall _Arg0::*)(_Types ...)>  : public _Arg_types< _Arg0 *, _Types...>  { using _Bool_type = std::true_type; using result_type = _Ret; using _Class_type = _Arg0; using _Guide_type = enable_if< true, _Ret (_Types ...)> ; }; template< class _Ret, class _Arg0, class ..._Types> struct _Is_memfunptr< _Ret (__cdecl _Arg0::*)(_Types ...) const>  : public _Arg_types< const _Arg0 *, _Types...>  { using _Bool_type = std::true_type; using result_type = _Ret; using _Class_type = _Arg0; using _Guide_type = enable_if< true, _Ret (_Types ...)> ; }; template< class _Ret, class _Arg0, class ..._Types> struct _Is_memfunptr< _Ret (__vectorcall _Arg0::*)(_Types ...) const>  : public _Arg_types< const _Arg0 *, _Types...>  { using _Bool_type = std::true_type; using result_type = _Ret; using _Class_type = _Arg0; using _Guide_type = enable_if< true, _Ret (_Types ...)> ; }; template< class _Ret, class _Arg0, class ..._Types> struct _Is_memfunptr< _Ret (__cdecl _Arg0::*)(_Types ...) volatile>  : public _Arg_types< volatile _Arg0 *, _Types...>  { using _Bool_type = std::true_type; using result_type = _Ret; using _Class_type = _Arg0; using _Guide_type = enable_if< true, _Ret (_Types ...)> ; }; template< class _Ret, class _Arg0, class ..._Types> struct _Is_memfunptr< _Ret (__vectorcall _Arg0::*)(_Types ...) volatile>  : public _Arg_types< volatile _Arg0 *, _Types...>  { using _Bool_type = std::true_type; using result_type = _Ret; using _Class_type = _Arg0; using _Guide_type = enable_if< true, _Ret (_Types ...)> ; }; template< class _Ret, class _Arg0, class ..._Types> struct _Is_memfunptr< _Ret (__cdecl _Arg0::*)(_Types ...) const volatile>  : public _Arg_types< const volatile _Arg0 *, _Types...>  { using _Bool_type = std::true_type; using result_type = _Ret; using _Class_type = _Arg0; using _Guide_type = enable_if< true, _Ret (_Types ...)> ; }; template< class _Ret, class _Arg0, class ..._Types> struct _Is_memfunptr< _Ret (__vectorcall _Arg0::*)(_Types ...) const volatile>  : public _Arg_types< const volatile _Arg0 *, _Types...>  { using _Bool_type = std::true_type; using result_type = _Ret; using _Class_type = _Arg0; using _Guide_type = enable_if< true, _Ret (_Types ...)> ; }; template< class _Ret, class _Arg0, class ..._Types> struct _Is_memfunptr< _Ret (__cdecl _Arg0::*)(_Types ...) &>  : public _Arg_types< _Arg0 *, _Types...>  { using _Bool_type = std::true_type; using result_type = _Ret; using _Class_type = _Arg0; using _Guide_type = enable_if< true, _Ret (_Types ...)> ; }; template< class _Ret, class _Arg0, class ..._Types> struct _Is_memfunptr< _Ret (__vectorcall _Arg0::*)(_Types ...) &>  : public _Arg_types< _Arg0 *, _Types...>  { using _Bool_type = std::true_type; using result_type = _Ret; using _Class_type = _Arg0; using _Guide_type = enable_if< true, _Ret (_Types ...)> ; }; template< class _Ret, class _Arg0, class ..._Types> struct _Is_memfunptr< _Ret (__cdecl _Arg0::*)(_Types ...) const &>  : public _Arg_types< const _Arg0 *, _Types...>  { using _Bool_type = std::true_type; using result_type = _Ret; using _Class_type = _Arg0; using _Guide_type = enable_if< true, _Ret (_Types ...)> ; }; template< class _Ret, class _Arg0, class ..._Types> struct _Is_memfunptr< _Ret (__vectorcall _Arg0::*)(_Types ...) const &>  : public _Arg_types< const _Arg0 *, _Types...>  { using _Bool_type = std::true_type; using result_type = _Ret; using _Class_type = _Arg0; using _Guide_type = enable_if< true, _Ret (_Types ...)> ; }; template< class _Ret, class _Arg0, class ..._Types> struct _Is_memfunptr< _Ret (__cdecl _Arg0::*)(_Types ...) volatile &>  : public _Arg_types< volatile _Arg0 *, _Types...>  { using _Bool_type = std::true_type; using result_type = _Ret; using _Class_type = _Arg0; using _Guide_type = enable_if< true, _Ret (_Types ...)> ; }; template< class _Ret, class _Arg0, class ..._Types> struct _Is_memfunptr< _Ret (__vectorcall _Arg0::*)(_Types ...) volatile &>  : public _Arg_types< volatile _Arg0 *, _Types...>  { using _Bool_type = std::true_type; using result_type = _Ret; using _Class_type = _Arg0; using _Guide_type = enable_if< true, _Ret (_Types ...)> ; }; template< class _Ret, class _Arg0, class ..._Types> struct _Is_memfunptr< _Ret (__cdecl _Arg0::*)(_Types ...) const volatile &>  : public _Arg_types< const volatile _Arg0 *, _Types...>  { using _Bool_type = std::true_type; using result_type = _Ret; using _Class_type = _Arg0; using _Guide_type = enable_if< true, _Ret (_Types ...)> ; }; template< class _Ret, class _Arg0, class ..._Types> struct _Is_memfunptr< _Ret (__vectorcall _Arg0::*)(_Types ...) const volatile &>  : public _Arg_types< const volatile _Arg0 *, _Types...>  { using _Bool_type = std::true_type; using result_type = _Ret; using _Class_type = _Arg0; using _Guide_type = enable_if< true, _Ret (_Types ...)> ; }; template< class _Ret, class _Arg0, class ..._Types> struct _Is_memfunptr< _Ret (__cdecl _Arg0::*)(_Types ...) &&>  : public _Arg_types< _Arg0 *, _Types...>  { using _Bool_type = std::true_type; using result_type = _Ret; using _Class_type = _Arg0; using _Guide_type = enable_if< false, _Ret (_Types ...)> ; }; template< class _Ret, class _Arg0, class ..._Types> struct _Is_memfunptr< _Ret (__vectorcall _Arg0::*)(_Types ...) &&>  : public _Arg_types< _Arg0 *, _Types...>  { using _Bool_type = std::true_type; using result_type = _Ret; using _Class_type = _Arg0; using _Guide_type = enable_if< false, _Ret (_Types ...)> ; }; template< class _Ret, class _Arg0, class ..._Types> struct _Is_memfunptr< _Ret (__cdecl _Arg0::*)(_Types ...) const &&>  : public _Arg_types< const _Arg0 *, _Types...>  { using _Bool_type = std::true_type; using result_type = _Ret; using _Class_type = _Arg0; using _Guide_type = enable_if< false, _Ret (_Types ...)> ; }; template< class _Ret, class _Arg0, class ..._Types> struct _Is_memfunptr< _Ret (__vectorcall _Arg0::*)(_Types ...) const &&>  : public _Arg_types< const _Arg0 *, _Types...>  { using _Bool_type = std::true_type; using result_type = _Ret; using _Class_type = _Arg0; using _Guide_type = enable_if< false, _Ret (_Types ...)> ; }; template< class _Ret, class _Arg0, class ..._Types> struct _Is_memfunptr< _Ret (__cdecl _Arg0::*)(_Types ...) volatile &&>  : public _Arg_types< volatile _Arg0 *, _Types...>  { using _Bool_type = std::true_type; using result_type = _Ret; using _Class_type = _Arg0; using _Guide_type = enable_if< false, _Ret (_Types ...)> ; }; template< class _Ret, class _Arg0, class ..._Types> struct _Is_memfunptr< _Ret (__vectorcall _Arg0::*)(_Types ...) volatile &&>  : public _Arg_types< volatile _Arg0 *, _Types...>  { using _Bool_type = std::true_type; using result_type = _Ret; using _Class_type = _Arg0; using _Guide_type = enable_if< false, _Ret (_Types ...)> ; }; template< class _Ret, class _Arg0, class ..._Types> struct _Is_memfunptr< _Ret (__cdecl _Arg0::*)(_Types ...) const volatile &&>  : public _Arg_types< const volatile _Arg0 *, _Types...>  { using _Bool_type = std::true_type; using result_type = _Ret; using _Class_type = _Arg0; using _Guide_type = enable_if< false, _Ret (_Types ...)> ; }; template< class _Ret, class _Arg0, class ..._Types> struct _Is_memfunptr< _Ret (__vectorcall _Arg0::*)(_Types ...) const volatile &&>  : public _Arg_types< const volatile _Arg0 *, _Types...>  { using _Bool_type = std::true_type; using result_type = _Ret; using _Class_type = _Arg0; using _Guide_type = enable_if< false, _Ret (_Types ...)> ; }; 
#line 429
template< class _Ret, class _Arg0, class ..._Types> struct _Is_memfunptr< _Ret (_Arg0::*)(_Types ..., ...)>  { using _Bool_type = true_type; using result_type = _Ret; using _Class_type = _Arg0; using _Guide_type = enable_if< false> ; }; template< class _Ret, class _Arg0, class ..._Types> struct _Is_memfunptr< _Ret (_Arg0::*)(_Types ..., ...) const>  { using _Bool_type = true_type; using result_type = _Ret; using _Class_type = _Arg0; using _Guide_type = enable_if< false> ; }; template< class _Ret, class _Arg0, class ..._Types> struct _Is_memfunptr< _Ret (_Arg0::*)(_Types ..., ...) volatile>  { using _Bool_type = true_type; using result_type = _Ret; using _Class_type = _Arg0; using _Guide_type = enable_if< false> ; }; template< class _Ret, class _Arg0, class ..._Types> struct _Is_memfunptr< _Ret (_Arg0::*)(_Types ..., ...) const volatile>  { using _Bool_type = true_type; using result_type = _Ret; using _Class_type = _Arg0; using _Guide_type = enable_if< false> ; }; template< class _Ret, class _Arg0, class ..._Types> struct _Is_memfunptr< _Ret (_Arg0::*)(_Types ..., ...) &>  { using _Bool_type = true_type; using result_type = _Ret; using _Class_type = _Arg0; using _Guide_type = enable_if< false> ; }; template< class _Ret, class _Arg0, class ..._Types> struct _Is_memfunptr< _Ret (_Arg0::*)(_Types ..., ...) const &>  { using _Bool_type = true_type; using result_type = _Ret; using _Class_type = _Arg0; using _Guide_type = enable_if< false> ; }; template< class _Ret, class _Arg0, class ..._Types> struct _Is_memfunptr< _Ret (_Arg0::*)(_Types ..., ...) volatile &>  { using _Bool_type = true_type; using result_type = _Ret; using _Class_type = _Arg0; using _Guide_type = enable_if< false> ; }; template< class _Ret, class _Arg0, class ..._Types> struct _Is_memfunptr< _Ret (_Arg0::*)(_Types ..., ...) const volatile &>  { using _Bool_type = true_type; using result_type = _Ret; using _Class_type = _Arg0; using _Guide_type = enable_if< false> ; }; template< class _Ret, class _Arg0, class ..._Types> struct _Is_memfunptr< _Ret (_Arg0::*)(_Types ..., ...) &&>  { using _Bool_type = true_type; using result_type = _Ret; using _Class_type = _Arg0; using _Guide_type = enable_if< false> ; }; template< class _Ret, class _Arg0, class ..._Types> struct _Is_memfunptr< _Ret (_Arg0::*)(_Types ..., ...) const &&>  { using _Bool_type = true_type; using result_type = _Ret; using _Class_type = _Arg0; using _Guide_type = enable_if< false> ; }; template< class _Ret, class _Arg0, class ..._Types> struct _Is_memfunptr< _Ret (_Arg0::*)(_Types ..., ...) volatile &&>  { using _Bool_type = true_type; using result_type = _Ret; using _Class_type = _Arg0; using _Guide_type = enable_if< false> ; }; template< class _Ret, class _Arg0, class ..._Types> struct _Is_memfunptr< _Ret (_Arg0::*)(_Types ..., ...) const volatile &&>  { using _Bool_type = true_type; using result_type = _Ret; using _Class_type = _Arg0; using _Guide_type = enable_if< false> ; }; 
#line 452 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\type_traits"
template< class _Ty> constexpr bool 
#line 453
is_member_function_pointer_v = (_Is_memfunptr< remove_cv_t< _Ty> > ::_Bool_type::value); 
#line 456 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\type_traits"
template< class _Ty> 
#line 457
struct is_member_function_pointer : public bool_constant< is_member_function_pointer_v< _Ty> >  { }; 
#line 459
template< class > constexpr bool 
#line 460
is_const_v = false; 
#line 462
template< class _Ty> constexpr bool 
#line 463
is_const_v< const _Ty>  = true; 
#line 465
template< class _Ty> 
#line 466
struct is_const : public bool_constant< is_const_v< _Ty> >  { }; 
#line 468
template< class > constexpr bool 
#line 469
is_volatile_v = false; 
#line 471
template< class _Ty> constexpr bool 
#line 472
is_volatile_v< volatile _Ty>  = true; 
#line 474
template< class _Ty> 
#line 475
struct is_volatile : public bool_constant< is_volatile_v< _Ty> >  { }; 
#line 477
template< class _Ty> constexpr bool 
#line 478
is_function_v = ((!is_const_v< const _Ty> ) && (!is_reference_v< _Ty> )); 
#line 481
template< class _Ty> 
#line 482
struct is_function : public bool_constant< is_function_v< _Ty> >  { }; 
#line 484
template< class _Ty> constexpr bool 
#line 485
is_object_v = is_const_v< const _Ty>  && (!is_void_v< _Ty> ); 
#line 488
template< class _Ty> 
#line 489
struct is_object : public bool_constant< is_object_v< _Ty> >  { }; 
#line 491
template< class > 
#line 492
struct _Is_member_object_pointer { 
#line 493
static constexpr bool value = false; 
#line 494
}; 
#line 496
template< class _Ty1, class _Ty2> 
#line 497
struct _Is_member_object_pointer< _Ty1 _Ty2::*>  { 
#line 498
static constexpr bool value = (!is_function_v< _Ty1> ); 
#line 499
using _Class_type = _Ty2; 
#line 500
}; 
#line 506
template< class _Ty> constexpr bool 
#line 507
is_member_object_pointer_v = (_Is_member_object_pointer< remove_cv_t< _Ty> > ::value); 
#line 510 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\type_traits"
template< class _Ty> 
#line 511
struct is_member_object_pointer : public bool_constant< is_member_object_pointer_v< _Ty> >  { }; 
#line 517
template< class _Ty> constexpr bool 
#line 518
is_member_pointer_v = is_member_object_pointer_v< _Ty>  || is_member_function_pointer_v< _Ty> ; 
#line 521 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\type_traits"
template< class _Ty> 
#line 522
struct is_member_pointer : public bool_constant< is_member_pointer_v< _Ty> >  { }; 
#line 524
template< class _Ty> constexpr bool 
#line 525
is_scalar_v = (((is_arithmetic_v< _Ty>  || is_enum_v< _Ty> ) || is_pointer_v< _Ty> ) || is_member_pointer_v< _Ty> ) || is_null_pointer_v< _Ty> ; 
#line 528
template< class _Ty> 
#line 529
struct is_scalar : public bool_constant< is_scalar_v< _Ty> >  { }; 
#line 531
template< class _Ty> 
#line 532
struct is_pod : public bool_constant< __is_pod(_Ty)>  { }; 
#line 534
template< class _Ty> constexpr bool 
#line 535
is_pod_v = __is_pod(_Ty); 
#line 537
template< class _Ty> 
#line 538
struct is_empty : public bool_constant< __is_empty(_Ty)>  { }; 
#line 540
template< class _Ty> constexpr bool 
#line 541
is_empty_v = __is_empty(_Ty); 
#line 543
template< class _Ty> 
#line 544
struct is_polymorphic : public bool_constant< __is_polymorphic(_Ty)>  { }; 
#line 546
template< class _Ty> constexpr bool 
#line 547
is_polymorphic_v = __is_polymorphic(_Ty); 
#line 549
template< class _Ty> 
#line 550
struct is_abstract : public bool_constant< __is_abstract(_Ty)>  { }; 
#line 552
template< class _Ty> constexpr bool 
#line 553
is_abstract_v = __is_abstract(_Ty); 
#line 555
template< class _Ty> 
#line 556
struct is_final : public bool_constant< __is_final(_Ty)>  { }; 
#line 558
template< class _Ty> constexpr bool 
#line 559
is_final_v = __is_final(_Ty); 
#line 561
template< class _Ty> 
#line 562
struct is_standard_layout : public bool_constant< __is_standard_layout(_Ty)>  { }; 
#line 564
template< class _Ty> constexpr bool 
#line 565
is_standard_layout_v = __is_standard_layout(_Ty); 
#line 568
template< class _Ty> 
#line 569
struct is_literal_type : public bool_constant< __is_literal_type(_Ty)>  { 
#line 571
}; 
#line 573
template< class _Ty> constexpr bool 
#line 574
is_literal_type_v = __is_literal_type(_Ty); 
#line 578 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\type_traits"
template< class _Ty> 
#line 579
struct is_trivial : public bool_constant< __is_trivially_constructible(_Ty) && __is_trivially_copyable(_Ty)>  { 
#line 581
}; 
#line 583
template< class _Ty> constexpr bool 
#line 584
is_trivial_v = (__is_trivially_constructible(_Ty) && __is_trivially_copyable(_Ty)); 
#line 593 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\type_traits"
template< class _Ty> 
#line 594
struct is_trivially_copyable : public bool_constant< __is_trivially_copyable(_Ty)>  { 
#line 596
}; 
#line 598
template< class _Ty> constexpr bool 
#line 599
is_trivially_copyable_v = __is_trivially_copyable(_Ty); 
#line 601
template< class _Ty> 
#line 602
struct has_virtual_destructor : public bool_constant< __has_virtual_destructor(_Ty)>  { 
#line 604
}; 
#line 606
template< class _Ty> constexpr bool 
#line 607
has_virtual_destructor_v = __has_virtual_destructor(_Ty); 
#line 625 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\type_traits"
template< class _Ty, class ..._Args> 
#line 626
struct is_constructible : public bool_constant< __is_constructible(_Ty, _Args...)>  { 
#line 628
}; 
#line 630
template< class _Ty, class ..._Args> constexpr bool 
#line 631
is_constructible_v = __is_constructible(_Ty, _Args...); 
#line 633
template< class _Ty> 
#line 634
struct is_copy_constructible : public bool_constant< __is_constructible(_Ty, add_lvalue_reference_t< const _Ty> )>  { 
#line 636
}; 
#line 638
template< class _Ty> constexpr bool 
#line 639
is_copy_constructible_v = __is_constructible(_Ty, add_lvalue_reference_t< const _Ty> ); 
#line 641
template< class _Ty> 
#line 642
struct is_default_constructible : public bool_constant< __is_constructible(_Ty)>  { 
#line 644
}; 
#line 646
template< class _Ty> constexpr bool 
#line 647
is_default_constructible_v = __is_constructible(_Ty); 
#line 649
template< class _Ty, class  = void> 
#line 650
struct _Is_implicitly_default_constructible : public false_type { 
#line 652
}; 
#line 654
template< class _Ty> void _Implicitly_default_construct(const _Ty &); 
#line 657
template< class _Ty> 
#line 658
struct _Is_implicitly_default_constructible< _Ty, void_t< decltype(_Implicitly_default_construct< _Ty> ({}))> >  : public true_type { 
#line 659
}; 
#line 661
template< class _Ty> 
#line 662
struct is_move_constructible : public bool_constant< __is_constructible(_Ty, _Ty)>  { 
#line 664
}; 
#line 666
template< class _Ty> constexpr bool 
#line 667
is_move_constructible_v = __is_constructible(_Ty, _Ty); 
#line 669
template< class _To, class _From> 
#line 670
struct is_assignable : public bool_constant< __is_assignable(_To, _From)>  { }; 
#line 672
template< class _To, class _From> constexpr bool 
#line 673
is_assignable_v = __is_assignable(_To, _From); 
#line 679 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\type_traits"
template< class _To, class _From> using _Is_assignable_no_precondition_check = is_assignable< _To, _From> ; 
#line 683 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\type_traits"
template< class _Ty> 
#line 684
struct is_copy_assignable : public bool_constant< __is_assignable(add_lvalue_reference_t< _Ty> , add_lvalue_reference_t< const _Ty> )>  { 
#line 687
}; 
#line 689
template< class _Ty> constexpr bool 
#line 690
is_copy_assignable_v = __is_assignable(add_lvalue_reference_t< _Ty> , add_lvalue_reference_t< const _Ty> ); 
#line 703 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\type_traits"
template< class _Ty> using _Is_copy_assignable_no_precondition_check = is_copy_assignable< _Ty> ; 
#line 706
template< class _Ty> constexpr bool 
#line 707
_Is_copy_assignable_unchecked_v = is_copy_assignable_v< _Ty> ; 
#line 710 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\type_traits"
template< class _Ty> 
#line 711
struct is_move_assignable : public bool_constant< __is_assignable(add_lvalue_reference_t< _Ty> , _Ty)>  { 
#line 713
}; 
#line 715
template< class _Ty> constexpr bool 
#line 716
is_move_assignable_v = __is_assignable(add_lvalue_reference_t< _Ty> , _Ty); 
#line 727 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\type_traits"
template< class _Ty> using _Is_move_assignable_no_precondition_check = is_move_assignable< _Ty> ; 
#line 730
template< class _Ty> constexpr bool 
#line 731
_Is_move_assignable_unchecked_v = is_move_assignable_v< _Ty> ; 
#line 734 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\type_traits"
template< class _Ty> 
#line 735
struct is_destructible : public bool_constant< __is_destructible(_Ty)>  { 
#line 737
}; 
#line 739
template< class _Ty> constexpr bool 
#line 740
is_destructible_v = __is_destructible(_Ty); 
#line 742
template< class _Ty, class ..._Args> 
#line 743
struct is_trivially_constructible : public bool_constant< __is_trivially_constructible(_Ty, _Args...)>  { 
#line 745
}; 
#line 747
template< class _Ty, class ..._Args> constexpr bool 
#line 748
is_trivially_constructible_v = __is_trivially_constructible(_Ty, _Args...); 
#line 750
template< class _Ty> 
#line 751
struct is_trivially_copy_constructible : public bool_constant< __is_trivially_constructible(_Ty, add_lvalue_reference_t< const _Ty> )>  { 
#line 754
}; 
#line 756
template< class _Ty> constexpr bool 
#line 757
is_trivially_copy_constructible_v = __is_trivially_constructible(_Ty, add_lvalue_reference_t< const _Ty> ); 
#line 760
template< class _Ty> 
#line 761
struct is_trivially_default_constructible : public bool_constant< __is_trivially_constructible(_Ty)>  { 
#line 763
}; 
#line 765
template< class _Ty> constexpr bool 
#line 766
is_trivially_default_constructible_v = __is_trivially_constructible(_Ty); 
#line 768
template< class _Ty> 
#line 769
struct is_trivially_move_constructible : public bool_constant< __is_trivially_constructible(_Ty, _Ty)>  { 
#line 771
}; 
#line 773
template< class _Ty> constexpr bool 
#line 774
is_trivially_move_constructible_v = __is_trivially_constructible(_Ty, _Ty); 
#line 776
template< class _To, class _From> 
#line 777
struct is_trivially_assignable : public bool_constant< __is_trivially_assignable(_To, _From)>  { 
#line 779
}; 
#line 781
template< class _To, class _From> constexpr bool 
#line 782
is_trivially_assignable_v = __is_trivially_assignable(_To, _From); 
#line 784
template< class _Ty> 
#line 785
struct is_trivially_copy_assignable : public bool_constant< __is_trivially_assignable(add_lvalue_reference_t< _Ty> , add_lvalue_reference_t< const _Ty> )>  { 
#line 788
}; 
#line 790
template< class _Ty> constexpr bool 
#line 791
is_trivially_copy_assignable_v = __is_trivially_assignable(add_lvalue_reference_t< _Ty> , add_lvalue_reference_t< const _Ty> ); 
#line 794
template< class _Ty> 
#line 795
struct is_trivially_move_assignable : public bool_constant< __is_trivially_assignable(add_lvalue_reference_t< _Ty> , _Ty)>  { 
#line 797
}; 
#line 799
template< class _Ty> constexpr bool 
#line 800
is_trivially_move_assignable_v = __is_trivially_assignable(add_lvalue_reference_t< _Ty> , _Ty); 
#line 802
template< class _Ty> 
#line 803
struct is_trivially_destructible : public bool_constant< __is_trivially_destructible(_Ty)>  { 
#line 805
}; 
#line 807
template< class _Ty> constexpr bool 
#line 808
is_trivially_destructible_v = __is_trivially_destructible(_Ty); 
#line 810
template< class _Ty, class ..._Args> 
#line 811
struct is_nothrow_constructible : public bool_constant< __is_nothrow_constructible(_Ty, _Args...)>  { 
#line 813
}; 
#line 815
template< class _Ty, class ..._Args> constexpr bool 
#line 816
is_nothrow_constructible_v = __is_nothrow_constructible(_Ty, _Args...); 
#line 818
template< class _Ty> 
#line 819
struct is_nothrow_copy_constructible : public bool_constant< __is_nothrow_constructible(_Ty, add_lvalue_reference_t< const _Ty> )>  { 
#line 823
}; 
#line 825
template< class _Ty> constexpr bool 
#line 826
is_nothrow_copy_constructible_v = __is_nothrow_constructible(_Ty, add_lvalue_reference_t< const _Ty> ); 
#line 829
template< class _Ty> 
#line 830
struct is_nothrow_default_constructible : public bool_constant< __is_nothrow_constructible(_Ty)>  { 
#line 832
}; 
#line 834
template< class _Ty> constexpr bool 
#line 835
is_nothrow_default_constructible_v = __is_nothrow_constructible(_Ty); 
#line 837
template< class _Ty> 
#line 838
struct is_nothrow_move_constructible : public bool_constant< __is_nothrow_constructible(_Ty, _Ty)>  { 
#line 840
}; 
#line 842
template< class _Ty> constexpr bool 
#line 843
is_nothrow_move_constructible_v = __is_nothrow_constructible(_Ty, _Ty); 
#line 845
template< class _To, class _From> 
#line 846
struct is_nothrow_assignable : public bool_constant< __is_nothrow_assignable(_To, _From)>  { 
#line 848
}; 
#line 850
template< class _To, class _From> constexpr bool 
#line 851
is_nothrow_assignable_v = __is_nothrow_assignable(_To, _From); 
#line 853
template< class _Ty> 
#line 854
struct is_nothrow_copy_assignable : public bool_constant< __is_nothrow_assignable(add_lvalue_reference_t< _Ty> , add_lvalue_reference_t< const _Ty> )>  { 
#line 857
}; 
#line 859
template< class _Ty> constexpr bool 
#line 860
is_nothrow_copy_assignable_v = __is_nothrow_assignable(add_lvalue_reference_t< _Ty> , add_lvalue_reference_t< const _Ty> ); 
#line 863
template< class _Ty> 
#line 864
struct is_nothrow_move_assignable : public bool_constant< __is_nothrow_assignable(add_lvalue_reference_t< _Ty> , _Ty)>  { 
#line 866
}; 
#line 868
template< class _Ty> constexpr bool 
#line 869
is_nothrow_move_assignable_v = __is_nothrow_assignable(add_lvalue_reference_t< _Ty> , _Ty); 
#line 871
template< class _Ty> 
#line 872
struct is_nothrow_destructible : public bool_constant< __is_nothrow_destructible(_Ty)>  { 
#line 875
}; 
#line 877
template< class _Ty> constexpr bool 
#line 878
is_nothrow_destructible_v = __is_nothrow_destructible(_Ty); 
#line 880
template< class _Ty, bool  = is_integral_v< _Ty> > 
#line 881
struct _Sign_base { 
#line 882
using _Uty = remove_cv_t< _Ty> ; 
#line 884
static constexpr bool _Signed = ((static_cast< _Uty>(-1)) < (static_cast< _Uty>(0))); 
#line 885
static constexpr bool _Unsigned = (!_Signed); 
#line 886
}; 
#line 888
template< class _Ty> 
#line 889
struct _Sign_base< _Ty, false>  { 
#line 891
static constexpr bool _Signed = is_floating_point_v< _Ty> ; 
#line 892
static constexpr bool _Unsigned = false; 
#line 893
}; 
#line 895
template< class _Ty> 
#line 896
struct is_signed : public bool_constant< _Sign_base< _Ty> ::_Signed>  { }; 
#line 898
template< class _Ty> constexpr bool 
#line 899
is_signed_v = (_Sign_base< _Ty> ::_Signed); 
#line 901
template< class _Ty> 
#line 902
struct is_unsigned : public bool_constant< _Sign_base< _Ty> ::_Unsigned>  { }; 
#line 904
template< class _Ty> constexpr bool 
#line 905
is_unsigned_v = (_Sign_base< _Ty> ::_Unsigned); 
#line 907
template< class _Ty> constexpr bool 
#line 908
_Is_nonbool_integral = is_integral_v< _Ty>  && (!is_same_v< remove_cv_t< _Ty> , bool> ); 
#line 910
template< bool > 
#line 911
struct _Select { 
#line 912
template< class _Ty1, class > using _Apply = _Ty1; 
#line 914
}; 
#line 917
template<> struct _Select< false>  { 
#line 918
template< class , class _Ty2> using _Apply = _Ty2; 
#line 920
}; 
#line 922
template< size_t > struct _Make_signed2; 
#line 926
template<> struct _Make_signed2< 1Ui64>  { 
#line 927
template< class > using _Apply = signed char; 
#line 929
}; 
#line 932
template<> struct _Make_signed2< 2Ui64>  { 
#line 933
template< class > using _Apply = short; 
#line 935
}; 
#line 938
template<> struct _Make_signed2< 4Ui64>  { 
#line 939
template< class _Ty> using _Apply = typename _Select< is_same_v< _Ty, long>  || is_same_v< _Ty, unsigned long> > ::template _Apply< long, int> ; 
#line 942
}; 
#line 945
template<> struct _Make_signed2< 8Ui64>  { 
#line 946
template< class > using _Apply = __int64; 
#line 948
}; 
#line 950
template< class _Ty> using _Make_signed1 = typename _Make_signed2< sizeof(_Ty)> ::template _Apply< _Ty> ; 
#line 954
template< class _Ty> 
#line 955
struct make_signed { 
#line 956
static_assert((_Is_nonbool_integral< _Ty>  || is_enum_v< _Ty> ), "make_signed<T> requires that T shall be a (possibly cv-qualified) integral type or enumeration but not a bool type.");
#line 960
using type = typename remove_cv< _Ty> ::template _Apply< _Make_signed1> ; 
#line 961
}; 
#line 963
template< class _Ty> using make_signed_t = typename make_signed< _Ty> ::type; 
#line 966
template< size_t > struct _Make_unsigned2; 
#line 970
template<> struct _Make_unsigned2< 1Ui64>  { 
#line 971
template< class > using _Apply = unsigned char; 
#line 973
}; 
#line 976
template<> struct _Make_unsigned2< 2Ui64>  { 
#line 977
template< class > using _Apply = unsigned short; 
#line 979
}; 
#line 982
template<> struct _Make_unsigned2< 4Ui64>  { 
#line 983
template< class _Ty> using _Apply = typename _Select< is_same_v< _Ty, long>  || is_same_v< _Ty, unsigned long> > ::template _Apply< unsigned long, unsigned> ; 
#line 987
}; 
#line 990
template<> struct _Make_unsigned2< 8Ui64>  { 
#line 991
template< class > using _Apply = unsigned __int64; 
#line 993
}; 
#line 995
template< class _Ty> using _Make_unsigned1 = typename _Make_unsigned2< sizeof(_Ty)> ::template _Apply< _Ty> ; 
#line 999
template< class _Ty> 
#line 1000
struct make_unsigned { 
#line 1001
static_assert((_Is_nonbool_integral< _Ty>  || is_enum_v< _Ty> ), "make_unsigned<T> requires that T shall be a (possibly cv-qualified) integral type or enumeration but not a bool type.");
#line 1005
using type = typename remove_cv< _Ty> ::template _Apply< _Make_unsigned1> ; 
#line 1006
}; 
#line 1008
template< class _Ty> using make_unsigned_t = typename make_unsigned< _Ty> ::type; 
#line 1011
template < class _Rep >
constexpr make_unsigned_t < _Rep > _Unsigned_value ( _Rep _Val ) {
    return static_cast < make_unsigned_t < _Rep >> ( _Val );
}
#line 1016
template< class _Ty> 
#line 1017
struct alignment_of : public integral_constant< unsigned __int64, __alignof(_Ty)>  { }; 
#line 1019
template< class _Ty> constexpr size_t 
#line 1020
alignment_of_v = __alignof(_Ty); 
#line 1022
template< class _Ty, size_t _Len> 
#line 1023
union _Align_type { 
#line 1024
_Ty _Val; 
#line 1025
char _Pad[_Len]; 
#line 1026
}; 
#line 1028
template< size_t _Len, size_t _Align, class _Ty, bool _Ok> struct _Aligned; 
#line 1031
template< size_t _Len, size_t _Align, class _Ty> 
#line 1032
struct _Aligned< _Len, _Align, _Ty, true>  { 
#line 1033
using type = _Align_type< _Ty, _Len> ; 
#line 1034
}; 
#line 1036
template< size_t _Len, size_t _Align> 
#line 1037
struct _Aligned< _Len, _Align, double, false>  { 
#line 1044
static_assert((_Always_false< _Aligned> ), "You\'ve instantiated std::aligned_storage<Len, Align> with an extended alignment (in other words, Align > alignof(max_align_t))." " Before VS 2017 15.8, the member \"type\" would non-conformingly have an alignment of only alignof(max_align_t). VS 2017 15.8 wa" "s fixed to handle this correctly, but the fix inherently changes layout and breaks binary compatibility (*only* for uses of alig" "ned_storage with extended alignments). To suppress this error, please define either (1) _ENABLE_EXTENDED_ALIGNED_STORAGE to conf" "irm that you want a type with an extended alignment, or (2) _DISABLE_EXTENDED_ALIGNED_STORAGE to get the old non-conforming beha" "vior.");
#line 1054 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\type_traits"
using type = _Align_type< max_align_t, _Len> ; 
#line 1056 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\type_traits"
}; 
#line 1058
template< size_t _Len, size_t _Align> 
#line 1059
struct _Aligned< _Len, _Align, int, false>  { 
#line 1060
using _Next = double; 
#line 1061
static constexpr bool _Fits = (_Align <= __alignof(_Next)); 
#line 1062
using type = typename std::_Aligned< _Len, _Align, double, _Fits> ::type; 
#line 1063
}; 
#line 1065
template< size_t _Len, size_t _Align> 
#line 1066
struct _Aligned< _Len, _Align, short, false>  { 
#line 1067
using _Next = int; 
#line 1068
static constexpr bool _Fits = (_Align <= __alignof(_Next)); 
#line 1069
using type = typename std::_Aligned< _Len, _Align, int, _Fits> ::type; 
#line 1070
}; 
#line 1072
template< size_t _Len, size_t _Align> 
#line 1073
struct _Aligned< _Len, _Align, char, false>  { 
#line 1074
using _Next = short; 
#line 1075
static constexpr bool _Fits = (_Align <= __alignof(_Next)); 
#line 1076
using type = typename std::_Aligned< _Len, _Align, short, _Fits> ::type; 
#line 1077
}; 
#line 1080
template< size_t _Len, size_t _Align = 8Ui64> 
#line 1081
struct _Aligned_storage { 
#line 1082
using _Next = char; 
#line 1083
static constexpr bool _Fits = (_Align <= __alignof(_Next)); 
#line 1084
using type = typename _Aligned< _Len, _Align, char, _Fits> ::type; 
#line 1085
}; 
#line 1087
template< size_t _Len, size_t _Align = 8Ui64> using _Aligned_storage_t = typename _Aligned_storage< _Len, _Align> ::type; 
#line 1090
template< size_t _Len, size_t _Align = 8Ui64> 
#line 1091
struct aligned_storage { 
#line 1092
using type = _Aligned_storage_t< _Len, _Align> ; 
#line 1093
}; 
#line 1095
template< size_t _Len, size_t _Align = 8Ui64> using aligned_storage_t = _Aligned_storage_t< _Len, _Align> ; 
#line 1098
template< size_t ..._Vals> struct _Maximum; 
#line 1102
template<> struct _Maximum< >  : public integral_constant< unsigned __int64, 0Ui64>  { }; 
#line 1104
template< size_t _Val> 
#line 1105
struct _Maximum< _Val>  : public integral_constant< unsigned __int64, _Val>  { }; 
#line 1107
template< size_t _First, size_t _Second, size_t ..._Rest> 
#line 1108
struct _Maximum< _First, _Second, _Rest...>  : public std::_Maximum< (((_First) < _Second) ? _Second : _First), _Rest...> ::type { 
#line 1110
}; 
#line 1112
template< size_t _Len, class ..._Types> 
#line 1113
struct aligned_union { 
#line 1115
static constexpr size_t _Max_len = (_Maximum< _Len, sizeof(_Types)...> ::value); 
#line 1116
static constexpr size_t alignment_value = (_Maximum< __alignof(_Types)...> ::value); 
#line 1118
using type = _Aligned_storage_t< _Max_len, alignment_value> ; 
#line 1119
}; 
#line 1121
__pragma( warning(push)) __pragma( warning(disable : 4996)) 
#line 1122
template< size_t _Len, class ..._Types> using aligned_union_t = typename aligned_union< _Len, _Types...> ::type; 
#line 1124
__pragma( warning(pop)) 
#line 1126
template< class _Ty, bool  = is_enum_v< _Ty> > 
#line 1127
struct _Underlying_type { 
#line 1128
using type = __underlying_type(_Ty); 
#line 1129
}; 
#line 1131
template< class _Ty> 
#line 1132
struct _Underlying_type< _Ty, false>  { }; 
#line 1134
template< class _Ty> 
#line 1135
struct underlying_type : public _Underlying_type< _Ty>  { }; 
#line 1137
template< class _Ty> using underlying_type_t = typename _Underlying_type< _Ty> ::type; 
#line 1140
template< class _Ty> constexpr size_t 
#line 1141
rank_v = (0); 
#line 1143
template< class _Ty, size_t _Nx> constexpr size_t 
#line 1144
rank_v< _Ty [_Nx]>  = rank_v< _Ty>  + 1; 
#line 1146
template< class _Ty> constexpr size_t 
#line 1147
rank_v< _Ty []>  = rank_v< _Ty>  + 1; 
#line 1149
template< class _Ty> 
#line 1150
struct rank : public integral_constant< unsigned __int64, rank_v< _Ty> >  { }; 
#line 1152
template< class _Ty, unsigned _Ix = 0U> constexpr size_t 
#line 1153
extent_v = (0); 
#line 1155
template< class _Ty, size_t _Nx> constexpr size_t 
#line 1156
extent_v< _Ty [_Nx], 0>  = _Nx; 
#line 1158
template< class _Ty, unsigned _Ix, size_t _Nx> constexpr size_t 
#line 1159
extent_v< _Ty [_Nx], _Ix>  = extent_v< _Ty, _Ix - (1)> ; 
#line 1161
template< class _Ty, unsigned _Ix> constexpr size_t 
#line 1162
extent_v< _Ty [], _Ix>  = extent_v< _Ty, _Ix - (1)> ; 
#line 1164
template< class _Ty, unsigned _Ix = 0U> 
#line 1165
struct extent : public integral_constant< unsigned __int64, extent_v< _Ty, _Ix> >  { }; 
#line 1167
template< class _Base, class _Derived> 
#line 1168
struct is_base_of : public bool_constant< __is_base_of(_Base, _Derived)>  { 
#line 1170
}; 
#line 1172
template< class _Base, class _Derived> constexpr bool 
#line 1173
is_base_of_v = __is_base_of(_Base, _Derived); 
#line 1175
template< class _Ty> 
#line 1176
struct decay { 
#line 1177
using _Ty1 = remove_reference_t< _Ty> ; 
#line 1178
using _Ty2 = typename _Select< is_function_v< _Ty1> > ::template _Apply< add_pointer< _Ty1> , remove_cv< _Ty1> > ; 
#line 1179
using type = typename _Select< is_array_v< _Ty1> > ::template _Apply< add_pointer< remove_extent_t< _Ty1> > , _Ty2> ::type; 
#line 1180
}; 
#line 1182
template< class _Ty> using decay_t = typename decay< _Ty> ::type; 
#line 1185
template< class _Ty1, class _Ty2> using _Conditional_type = decltype(false ? std::declval< _Ty1> () : std::declval< _Ty2> ()); 
#line 1202 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\type_traits"
template< class _Ty1, class _Ty2, class  = void> 
#line 1203
struct _Decayed_cond_oper { }; 
#line 1206 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\type_traits"
template< class _Ty1, class _Ty2> 
#line 1207
struct _Decayed_cond_oper< _Ty1, _Ty2, void_t< _Conditional_type< _Ty1, _Ty2> > >  { 
#line 1208
using type = decay_t< _Conditional_type< _Ty1, _Ty2> > ; 
#line 1209
}; 
#line 1211
template< class ..._Ty> struct common_type; 
#line 1214
template< class ..._Ty> using common_type_t = typename common_type< _Ty...> ::type; 
#line 1218
template<> struct common_type< >  { }; 
#line 1220
template< class _Ty1> 
#line 1221
struct common_type< _Ty1>  : public std::common_type< _Ty1, _Ty1>  { }; 
#line 1223
template< class _Ty1, class _Ty2, class _Decayed1 = decay_t< _Ty1> , class _Decayed2 = decay_t< _Ty2> > 
#line 1224
struct _Common_type2 : public common_type< _Decayed1, _Decayed2>  { }; 
#line 1226
template< class _Ty1, class _Ty2> 
#line 1227
struct _Common_type2< _Ty1, _Ty2, _Ty1, _Ty2>  : public _Decayed_cond_oper< _Ty1, _Ty2>  { }; 
#line 1229
template< class _Ty1, class _Ty2> 
#line 1230
struct common_type< _Ty1, _Ty2>  : public _Common_type2< _Ty1, _Ty2>  { }; 
#line 1232
template< class _Void, class _Ty1, class _Ty2, class ..._Rest> 
#line 1233
struct _Common_type3 { }; 
#line 1235
template< class _Ty1, class _Ty2, class ..._Rest> 
#line 1236
struct _Common_type3< void_t< common_type_t< _Ty1, _Ty2> > , _Ty1, _Ty2, _Rest...>  : public common_type< common_type_t< _Ty1, _Ty2> , _Rest...>  { 
#line 1237
}; 
#line 1239
template< class _Ty1, class _Ty2, class ..._Rest> 
#line 1240
struct common_type< _Ty1, _Ty2, _Rest...>  : public _Common_type3< void, _Ty1, _Ty2, _Rest...>  { }; 
#line 1242
template< class _Ty> _Ty _Returns_exactly() noexcept; 
#line 1415 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\type_traits"
template< class _Type, template< class ...>  class _Template> constexpr bool 
#line 1416
_Is_specialization_v = false; 
#line 1417
template< template< class ...>  class _Template, class ..._Types> constexpr bool 
#line 1418
_Is_specialization_v< _Template< _Types...> , _Template>  = true; 
#line 1420
template< class _Type, template< class ...>  class _Template> 
#line 1421
struct _Is_specialization : public bool_constant< _Is_specialization_v< _Type, _Template> >  { }; 
#line 1423
template< class _Ty> 
#line 1424
[[nodiscard]] constexpr _Ty &&forward(remove_reference_t< _Ty>  &
#line 1425
_Arg) noexcept { 
#line 1426
return static_cast< _Ty &&>(_Arg); 
#line 1427
} 
#line 1429
template< class _Ty> 
#line 1430
[[nodiscard]] constexpr _Ty &&forward(remove_reference_t< _Ty>  &&_Arg) noexcept { 
#line 1431
static_assert((!is_lvalue_reference_v< _Ty> ), "bad forward call");
#line 1432
return static_cast< _Ty &&>(_Arg); 
#line 1433
} 
#line 1435
template< class _Ty> 
#line 1436
[[nodiscard]] constexpr remove_reference_t< _Ty>  &&move(_Ty &&_Arg) noexcept { 
#line 1437
return static_cast< remove_reference_t< _Ty>  &&>(_Arg); 
#line 1438
} 
#line 1440
template < class _Ty >
[ [ nodiscard ] ] constexpr conditional_t < ! is_nothrow_move_constructible_v < _Ty > && is_copy_constructible_v < _Ty >, const _Ty &,
    _Ty && >
    move_if_noexcept ( _Ty & _Arg ) noexcept {
    return :: std :: move ( _Arg );
}
#line 1447
template < class _Ty >
class reference_wrapper;
#line 1454
enum class _Invoker_strategy { 
#line 1455
_Functor, 
#line 1456
_Pmf_object, 
#line 1457
_Pmf_refwrap, 
#line 1458
_Pmf_pointer, 
#line 1459
_Pmd_object, 
#line 1460
_Pmd_refwrap, 
#line 1461
_Pmd_pointer
#line 1462
}; 
#line 1464
struct _Invoker_functor { 
#line 1465
static constexpr _Invoker_strategy _Strategy = _Invoker_strategy::_Functor; 
#line 1467
template < class _Callable, class ... _Types >
    static constexpr auto _Call ( _Callable && _Obj, _Types && ... _Args ) noexcept (
        noexcept ( static_cast < _Callable && > ( _Obj ) ( static_cast < _Types && > ( _Args ) ... ) ) )
        -> decltype ( static_cast < _Callable && > ( _Obj ) ( static_cast < _Types && > ( _Args ) ... ) ) {
        return static_cast < _Callable && > ( _Obj ) ( static_cast < _Types && > ( _Args ) ... );
    }
#line 1473
}; 
#line 1475
struct _Invoker_pmf_object { 
#line 1476
static constexpr _Invoker_strategy _Strategy = _Invoker_strategy::_Pmf_object; 
#line 1478
template < class _Decayed, class _Ty1, class ... _Types2 >
    static constexpr auto _Call ( _Decayed _Pmf, _Ty1 && _Arg1, _Types2 && ... _Args2 ) noexcept (
        noexcept ( ( static_cast < _Ty1 && > ( _Arg1 ) .* _Pmf ) ( static_cast < _Types2 && > ( _Args2 ) ... ) ) )
        -> decltype ( ( static_cast < _Ty1 && > ( _Arg1 ) .* _Pmf ) ( static_cast < _Types2 && > ( _Args2 ) ... ) ) {
        return ( static_cast < _Ty1 && > ( _Arg1 ) .* _Pmf ) ( static_cast < _Types2 && > ( _Args2 ) ... );
    }
#line 1484
}; 
#line 1486
struct _Invoker_pmf_refwrap { 
#line 1487
static constexpr _Invoker_strategy _Strategy = _Invoker_strategy::_Pmf_refwrap; 
#line 1489
template < class _Decayed, class _Refwrap, class ... _Types2 >
    static constexpr auto _Call ( _Decayed _Pmf, _Refwrap _Rw, _Types2 && ... _Args2 ) noexcept (
        noexcept ( ( _Rw . get ( ) .* _Pmf ) ( static_cast < _Types2 && > ( _Args2 ) ... ) ) )
        -> decltype ( ( _Rw . get ( ) .* _Pmf ) ( static_cast < _Types2 && > ( _Args2 ) ... ) ) {
        return ( _Rw . get ( ) .* _Pmf ) ( static_cast < _Types2 && > ( _Args2 ) ... );
    }
#line 1495
}; 
#line 1497
struct _Invoker_pmf_pointer { 
#line 1498
static constexpr _Invoker_strategy _Strategy = _Invoker_strategy::_Pmf_pointer; 
#line 1500
template < class _Decayed, class _Ty1, class ... _Types2 >
    static constexpr auto _Call ( _Decayed _Pmf, _Ty1 && _Arg1, _Types2 && ... _Args2 ) noexcept (
        noexcept ( ( ( * static_cast < _Ty1 && > ( _Arg1 ) ) .* _Pmf ) ( static_cast < _Types2 && > ( _Args2 ) ... ) ) )
        -> decltype ( ( ( * static_cast < _Ty1 && > ( _Arg1 ) ) .* _Pmf ) ( static_cast < _Types2 && > ( _Args2 ) ... ) ) {
        return ( ( * static_cast < _Ty1 && > ( _Arg1 ) ) .* _Pmf ) ( static_cast < _Types2 && > ( _Args2 ) ... );
    }
#line 1506
}; 
#line 1508
struct _Invoker_pmd_object { 
#line 1509
static constexpr _Invoker_strategy _Strategy = _Invoker_strategy::_Pmd_object; 
#line 1511
template < class _Decayed, class _Ty1 >
    static constexpr auto _Call ( _Decayed _Pmd, _Ty1 && _Arg1 ) noexcept -> decltype ( static_cast < _Ty1 && > ( _Arg1 ) .* _Pmd ) {
        return static_cast < _Ty1 && > ( _Arg1 ) .* _Pmd;
    }
#line 1515
}; 
#line 1517
struct _Invoker_pmd_refwrap { 
#line 1518
static constexpr _Invoker_strategy _Strategy = _Invoker_strategy::_Pmd_refwrap; 
#line 1520
template < class _Decayed, class _Refwrap >
    static constexpr auto _Call ( _Decayed _Pmd, _Refwrap _Rw ) noexcept -> decltype ( _Rw . get ( ) .* _Pmd ) {
        return _Rw . get ( ) .* _Pmd;
    }
#line 1524
}; 
#line 1526
struct _Invoker_pmd_pointer { 
#line 1527
static constexpr _Invoker_strategy _Strategy = _Invoker_strategy::_Pmd_pointer; 
#line 1529
template < class _Decayed, class _Ty1 >
    static constexpr auto _Call ( _Decayed _Pmd, _Ty1 && _Arg1 ) noexcept ( noexcept ( ( * static_cast < _Ty1 && > ( _Arg1 ) ) .* _Pmd ) )
        -> decltype ( ( * static_cast < _Ty1 && > ( _Arg1 ) ) .* _Pmd ) {
        return ( * static_cast < _Ty1 && > ( _Arg1 ) ) .* _Pmd;
    }
#line 1534
}; 
#line 1536
template< class _Callable, class _Ty1, class _Removed_cvref = _Remove_cvref_t< _Callable> , bool 
#line 1537
_Is_pmf = is_member_function_pointer_v< _Removed_cvref> , bool 
#line 1538
_Is_pmd = is_member_object_pointer_v< _Removed_cvref> > struct _Invoker1; 
#line 1541
template< class _Callable, class _Ty1, class _Removed_cvref> 
#line 1542
struct _Invoker1< _Callable, _Ty1, _Removed_cvref, true, false>  : public conditional_t< is_base_of_v< typename _Is_memfunptr< _Removed_cvref> ::_Class_type, remove_reference_t< _Ty1> > , _Invoker_pmf_object, conditional_t< _Is_specialization_v< _Remove_cvref_t< _Ty1> , reference_wrapper> , _Invoker_pmf_refwrap, _Invoker_pmf_pointer> >  { 
#line 1546
}; 
#line 1548
template< class _Callable, class _Ty1, class _Removed_cvref> 
#line 1549
struct _Invoker1< _Callable, _Ty1, _Removed_cvref, false, true>  : public conditional_t< is_base_of_v< typename _Is_member_object_pointer< _Removed_cvref> ::_Class_type, remove_reference_t< _Ty1> > , _Invoker_pmd_object, conditional_t< _Is_specialization_v< _Remove_cvref_t< _Ty1> , reference_wrapper> , _Invoker_pmd_refwrap, _Invoker_pmd_pointer> >  { 
#line 1554
}; 
#line 1556
template< class _Callable, class _Ty1, class _Removed_cvref> 
#line 1557
struct _Invoker1< _Callable, _Ty1, _Removed_cvref, false, false>  : public _Invoker_functor { }; 
#line 1559
template < class _Callable >
inline auto invoke ( _Callable && _Obj ) noexcept ( noexcept ( static_cast < _Callable && > ( _Obj ) ( ) ) )
    -> decltype ( static_cast < _Callable && > ( _Obj ) ( ) ) {
    return static_cast < _Callable && > ( _Obj ) ( );
}
#line 1565
template < class _Callable, class _Ty1, class ... _Types2 >
inline auto invoke ( _Callable && _Obj, _Ty1 && _Arg1, _Types2 && ... _Args2 ) noexcept (
    noexcept ( _Invoker1 < _Callable, _Ty1 > :: _Call (
        static_cast < _Callable && > ( _Obj ), static_cast < _Ty1 && > ( _Arg1 ), static_cast < _Types2 && > ( _Args2 ) ... ) ) )
    -> decltype ( _Invoker1 < _Callable, _Ty1 > :: _Call (
        static_cast < _Callable && > ( _Obj ), static_cast < _Ty1 && > ( _Arg1 ), static_cast < _Types2 && > ( _Args2 ) ... ) ) {
    if constexpr ( _Invoker1 < _Callable, _Ty1 > :: _Strategy == _Invoker_strategy :: _Functor ) {
        return static_cast < _Callable && > ( _Obj ) ( static_cast < _Ty1 && > ( _Arg1 ), static_cast < _Types2 && > ( _Args2 ) ... );
    } else if constexpr ( _Invoker1 < _Callable, _Ty1 > :: _Strategy == _Invoker_strategy :: _Pmf_object ) {
        return ( static_cast < _Ty1 && > ( _Arg1 ) .* _Obj ) ( static_cast < _Types2 && > ( _Args2 ) ... );
    } else if constexpr ( _Invoker1 < _Callable, _Ty1 > :: _Strategy == _Invoker_strategy :: _Pmf_refwrap ) {
        return ( _Arg1 . get ( ) .* _Obj ) ( static_cast < _Types2 && > ( _Args2 ) ... );
    } else if constexpr ( _Invoker1 < _Callable, _Ty1 > :: _Strategy == _Invoker_strategy :: _Pmf_pointer ) {
        return ( ( * static_cast < _Ty1 && > ( _Arg1 ) ) .* _Obj ) ( static_cast < _Types2 && > ( _Args2 ) ... );
    } else if constexpr ( _Invoker1 < _Callable, _Ty1 > :: _Strategy == _Invoker_strategy :: _Pmd_object ) {
        return static_cast < _Ty1 && > ( _Arg1 ) .* _Obj;
    } else if constexpr ( _Invoker1 < _Callable, _Ty1 > :: _Strategy == _Invoker_strategy :: _Pmd_refwrap ) {
        return _Arg1 . get ( ) .* _Obj;
    } else {
        static_assert ( _Invoker1 < _Callable, _Ty1 > :: _Strategy == _Invoker_strategy :: _Pmd_pointer, "bug in invoke" );
        return ( * static_cast < _Ty1 && > ( _Arg1 ) ) .* _Obj;
    }
}
#line 1589
#pragma warning(push)
#pragma warning(disable : 4242)
#pragma warning(disable : 4244)
#pragma warning(disable : 4365)
#line 1594
template< class _From, class _To, bool  = is_convertible_v< _From, _To> , bool  = is_void_v< _To> > constexpr bool 
#line 1595
_Is_nothrow_convertible_v = noexcept(_Fake_copy_init< _To> (std::declval< _From> ())); 
#line 1597
#pragma warning(pop)
#line 1599
template< class _From, class _To, bool _IsVoid> constexpr bool 
#line 1600
_Is_nothrow_convertible_v< _From, _To, false, _IsVoid>  = false; 
#line 1602
template< class _From, class _To> constexpr bool 
#line 1603
_Is_nothrow_convertible_v< _From, _To, true, true>  = true; 
#line 1605
template< class _From, class _To> 
#line 1606
struct _Is_nothrow_convertible : public bool_constant< _Is_nothrow_convertible_v< _From, _To, is_convertible_v< _From, _To> , is_void_v< _To> > >  { 
#line 1608
}; 
#line 1618 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\type_traits"
template< class _From, class _To, class  = void> 
#line 1619
struct _Invoke_convertible : public false_type { }; 
#line 1621
template< class _From, class _To> 
#line 1622
struct _Invoke_convertible< _From, _To, void_t< decltype(_Fake_copy_init< _To> (_Returns_exactly< _From> ()))> >  : public true_type { 
#line 1623
}; 
#line 1625
template< class _From, class _To> 
#line 1626
struct _Invoke_nothrow_convertible : public bool_constant< noexcept(_Fake_copy_init< _To> (_Returns_exactly< _From> ()))>  { }; 
#line 1628
template< class _Result, bool _Nothrow> 
#line 1629
struct _Invoke_traits_common { 
#line 1630
using type = _Result; 
#line 1631
using _Is_invocable = true_type; 
#line 1632
using _Is_nothrow_invocable = bool_constant< _Nothrow> ; 
#line 1633
template< class _Rx> using _Is_invocable_r = bool_constant< disjunction_v< is_void< _Rx> , _Invoke_convertible< type, _Rx> > > ; 
#line 1635
template< class _Rx> using _Is_nothrow_invocable_r = bool_constant< conjunction_v< _Is_nothrow_invocable, disjunction< is_void< _Rx> , conjunction< _Invoke_convertible< type, _Rx> , _Invoke_nothrow_convertible< type, _Rx> > > > > ; 
#line 1639
}; 
#line 1641
template< class _Void, class _Callable> 
#line 1642
struct _Invoke_traits_zero { 
#line 1644
using _Is_invocable = false_type; 
#line 1645
using _Is_nothrow_invocable = false_type; 
#line 1646
template< class _Rx> using _Is_invocable_r = false_type; 
#line 1648
template< class _Rx> using _Is_nothrow_invocable_r = false_type; 
#line 1650
}; 
#line 1652
template< class _Callable> using _Decltype_invoke_zero = decltype(std::declval< _Callable> ()()); 
#line 1655
template< class _Callable> 
#line 1656
struct _Invoke_traits_zero< void_t< _Decltype_invoke_zero< _Callable> > , _Callable>  : public _Invoke_traits_common< _Decltype_invoke_zero< _Callable> , noexcept(std::declval< _Callable> ()())>  { 
#line 1657
}; 
#line 1659
template< class _Void, class ..._Types> 
#line 1660
struct _Invoke_traits_nonzero { 
#line 1662
using _Is_invocable = false_type; 
#line 1663
using _Is_nothrow_invocable = false_type; 
#line 1664
template< class _Rx> using _Is_invocable_r = false_type; 
#line 1666
template< class _Rx> using _Is_nothrow_invocable_r = false_type; 
#line 1668
}; 
#line 1670
template< class _Callable, class _Ty1, class ..._Types2> using _Decltype_invoke_nonzero = decltype(_Invoker1< _Callable, _Ty1> ::_Call(std::declval< _Callable> (), std::declval< _Ty1> (), std::declval< _Types2> ()...)); 
#line 1674
template< class _Callable, class _Ty1, class ..._Types2> 
#line 1675
struct _Invoke_traits_nonzero< void_t< _Decltype_invoke_nonzero< _Callable, _Ty1, _Types2...> > , _Callable, _Ty1, _Types2...>  : public _Invoke_traits_common< _Decltype_invoke_nonzero< _Callable, _Ty1, _Types2...> , noexcept(_Invoker1< _Callable, _Ty1> ::_Call(std::declval< _Callable> (), std::declval< _Ty1> (), std::declval< _Types2> ()...))>  { 
#line 1678
}; 
#line 1680
template< class _Callable, class ..._Args> using _Select_invoke_traits = conditional_t< sizeof...(_Args) == (0), _Invoke_traits_zero< void, _Callable> , _Invoke_traits_nonzero< void, _Callable, _Args...> > ; 
#line 1685
template< class _Fty> 
#line 1686
struct result_of { 
#line 1687
static_assert((_Always_false< _Fty> ), "result_of<CallableType> is invalid; use result_of<CallableType(zero or more argument types)> instead.");
#line 1689
}; 
#line 1697
template< class _Callable, class ..._Args> struct result_of< _Callable __cdecl (_Args ...)>  : public _Select_invoke_traits< _Callable, _Args...>  { }; template< class _Callable, class ..._Args> struct result_of< _Callable __vectorcall (_Args ...)>  : public _Select_invoke_traits< _Callable, _Args...>  { }; 
#line 1700
__pragma( warning(push)) __pragma( warning(disable : 4996)) 
#line 1701
template< class _Ty> using result_of_t = typename result_of< _Ty> ::type; 
#line 1703
__pragma( warning(pop)) 
#line 1706 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\type_traits"
template< class _Callable, class ..._Args> using _Invoke_result_t = typename _Select_invoke_traits< _Callable, _Args...> ::type; 
#line 1709
template< class _Rx, class _Callable, class ..._Args> using _Is_invocable_r_ = typename conditional< sizeof...(_Args) == (0), _Invoke_traits_zero< void, _Callable> , _Invoke_traits_nonzero< void, _Callable, _Args...> > ::type::template _Is_invocable_r< _Rx> ; 
#line 1712
template< class _Rx, class _Callable, class ..._Args> 
#line 1713
struct _Is_invocable_r : public _Is_invocable_r_< _Rx, _Callable, _Args...>  { 
#line 1715
}; 
#line 1788 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\type_traits"
template< class _Ty> 
#line 1789
struct _Function_args { }; 
#line 1797
template< class _Ret, class ..._Types> struct _Function_args< _Ret __cdecl (_Types ...)>  : public _Arg_types< _Types...>  { using result_type = _Ret; }; template< class _Ret, class ..._Types> struct _Function_args< _Ret __vectorcall (_Types ...)>  : public _Arg_types< _Types...>  { using result_type = _Ret; }; template< class _Ret, class ..._Types> struct _Function_args< _Ret __cdecl (_Types ...) const>  : public _Arg_types< _Types...>  { using result_type = _Ret; }; template< class _Ret, class ..._Types> struct _Function_args< _Ret __vectorcall (_Types ...) const>  : public _Arg_types< _Types...>  { using result_type = _Ret; }; template< class _Ret, class ..._Types> struct _Function_args< _Ret __cdecl (_Types ...) volatile>  : public _Arg_types< _Types...>  { using result_type = _Ret; }; template< class _Ret, class ..._Types> struct _Function_args< _Ret __vectorcall (_Types ...) volatile>  : public _Arg_types< _Types...>  { using result_type = _Ret; }; template< class _Ret, class ..._Types> struct _Function_args< _Ret __cdecl (_Types ...) const volatile>  : public _Arg_types< _Types...>  { using result_type = _Ret; }; template< class _Ret, class ..._Types> struct _Function_args< _Ret __vectorcall (_Types ...) const volatile>  : public _Arg_types< _Types...>  { using result_type = _Ret; }; template< class _Ret, class ..._Types> struct _Function_args< _Ret __cdecl (_Types ...) &>  : public _Arg_types< _Types...>  { using result_type = _Ret; }; template< class _Ret, class ..._Types> struct _Function_args< _Ret __vectorcall (_Types ...) &>  : public _Arg_types< _Types...>  { using result_type = _Ret; }; template< class _Ret, class ..._Types> struct _Function_args< _Ret __cdecl (_Types ...) const &>  : public _Arg_types< _Types...>  { using result_type = _Ret; }; template< class _Ret, class ..._Types> struct _Function_args< _Ret __vectorcall (_Types ...) const &>  : public _Arg_types< _Types...>  { using result_type = _Ret; }; template< class _Ret, class ..._Types> struct _Function_args< _Ret __cdecl (_Types ...) volatile &>  : public _Arg_types< _Types...>  { using result_type = _Ret; }; template< class _Ret, class ..._Types> struct _Function_args< _Ret __vectorcall (_Types ...) volatile &>  : public _Arg_types< _Types...>  { using result_type = _Ret; }; template< class _Ret, class ..._Types> struct _Function_args< _Ret __cdecl (_Types ...) const volatile &>  : public _Arg_types< _Types...>  { using result_type = _Ret; }; template< class _Ret, class ..._Types> struct _Function_args< _Ret __vectorcall (_Types ...) const volatile &>  : public _Arg_types< _Types...>  { using result_type = _Ret; }; template< class _Ret, class ..._Types> struct _Function_args< _Ret __cdecl (_Types ...) &&>  : public _Arg_types< _Types...>  { using result_type = _Ret; }; template< class _Ret, class ..._Types> struct _Function_args< _Ret __vectorcall (_Types ...) &&>  : public _Arg_types< _Types...>  { using result_type = _Ret; }; template< class _Ret, class ..._Types> struct _Function_args< _Ret __cdecl (_Types ...) const &&>  : public _Arg_types< _Types...>  { using result_type = _Ret; }; template< class _Ret, class ..._Types> struct _Function_args< _Ret __vectorcall (_Types ...) const &&>  : public _Arg_types< _Types...>  { using result_type = _Ret; }; template< class _Ret, class ..._Types> struct _Function_args< _Ret __cdecl (_Types ...) volatile &&>  : public _Arg_types< _Types...>  { using result_type = _Ret; }; template< class _Ret, class ..._Types> struct _Function_args< _Ret __vectorcall (_Types ...) volatile &&>  : public _Arg_types< _Types...>  { using result_type = _Ret; }; template< class _Ret, class ..._Types> struct _Function_args< _Ret __cdecl (_Types ...) const volatile &&>  : public _Arg_types< _Types...>  { using result_type = _Ret; }; template< class _Ret, class ..._Types> struct _Function_args< _Ret __vectorcall (_Types ...) const volatile &&>  : public _Arg_types< _Types...>  { using result_type = _Ret; }; 
#line 1806
template< class _Ret, class ..._Types> struct _Function_args< _Ret (_Types ..., ...)>  { using result_type = _Ret; }; template< class _Ret, class ..._Types> struct _Function_args< _Ret (_Types ..., ...) const>  { using result_type = _Ret; }; template< class _Ret, class ..._Types> struct _Function_args< _Ret (_Types ..., ...) volatile>  { using result_type = _Ret; }; template< class _Ret, class ..._Types> struct _Function_args< _Ret (_Types ..., ...) const volatile>  { using result_type = _Ret; }; template< class _Ret, class ..._Types> struct _Function_args< _Ret (_Types ..., ...) &>  { using result_type = _Ret; }; template< class _Ret, class ..._Types> struct _Function_args< _Ret (_Types ..., ...) const &>  { using result_type = _Ret; }; template< class _Ret, class ..._Types> struct _Function_args< _Ret (_Types ..., ...) volatile &>  { using result_type = _Ret; }; template< class _Ret, class ..._Types> struct _Function_args< _Ret (_Types ..., ...) const volatile &>  { using result_type = _Ret; }; template< class _Ret, class ..._Types> struct _Function_args< _Ret (_Types ..., ...) &&>  { using result_type = _Ret; }; template< class _Ret, class ..._Types> struct _Function_args< _Ret (_Types ..., ...) const &&>  { using result_type = _Ret; }; template< class _Ret, class ..._Types> struct _Function_args< _Ret (_Types ..., ...) volatile &&>  { using result_type = _Ret; }; template< class _Ret, class ..._Types> struct _Function_args< _Ret (_Types ..., ...) const volatile &&>  { using result_type = _Ret; }; 
#line 1809
template< class _Ty, class  = void> 
#line 1810
struct _Weak_result_type { }; 
#line 1812
__pragma( warning(push)) __pragma( warning(disable : 4996)) 
#line 1813
template< class _Ty> 
#line 1814
struct _Weak_result_type< _Ty, void_t< typename _Ty::result_type> >  { 
#line 1815
using result_type = typename _Ty::result_type; 
#line 1816
}; 
#line 1817
__pragma( warning(pop)) 
#line 1819
template< class _Ty, class  = void> 
#line 1820
struct _Weak_argument_type : public _Weak_result_type< _Ty>  { }; 
#line 1822
__pragma( warning(push)) __pragma( warning(disable : 4996)) 
#line 1823
template< class _Ty> 
#line 1824
struct _Weak_argument_type< _Ty, void_t< typename _Ty::argument_type> >  : public _Weak_result_type< _Ty>  { 
#line 1826
using argument_type = typename _Ty::argument_type; 
#line 1827
}; 
#line 1828
__pragma( warning(pop)) 
#line 1830
template< class _Ty, class  = void> 
#line 1831
struct _Weak_binary_args : public _Weak_argument_type< _Ty>  { }; 
#line 1833
__pragma( warning(push)) __pragma( warning(disable : 4996)) 
#line 1834
template< class _Ty> 
#line 1835
struct _Weak_binary_args< _Ty, void_t< typename _Ty::first_argument_type, typename _Ty::second_argument_type> >  : public _Weak_argument_type< _Ty>  { 
#line 1838
using first_argument_type = typename _Ty::first_argument_type; 
#line 1839
using second_argument_type = typename _Ty::second_argument_type; 
#line 1840
}; 
#line 1841
__pragma( warning(pop)) 
#line 1843
template< class _Ty> using _Weak_types = conditional_t< is_function_v< remove_pointer_t< _Ty> > , _Function_args< remove_pointer_t< _Ty> > , conditional_t< is_member_function_pointer_v< _Ty> , _Is_memfunptr< remove_cv_t< _Ty> > , _Weak_binary_args< _Ty> > > ; 
#line 1847
template< class _Ty> void _Refwrap_ctor_fun(_Identity_t< _Ty &> ) noexcept; 
#line 1849
template < class _Ty >
void _Refwrap_ctor_fun ( _Identity_t < _Ty && > ) = delete;
#line 1852
template< class _Ty, class _Uty, class  = void> 
#line 1853
struct _Refwrap_has_ctor_from : public false_type { }; 
#line 1855
template< class _Ty, class _Uty> 
#line 1856
struct _Refwrap_has_ctor_from< _Ty, _Uty, void_t< decltype(_Refwrap_ctor_fun< _Ty> (std::declval< _Uty> ()))> >  : public true_type { }; 
#line 1858
template < class _Ty >
class reference_wrapper

    : public _Weak_types < _Ty >

{
public :
    static_assert ( is_object_v < _Ty > || is_function_v < _Ty >,
        "reference_wrapper<T> requires T to be an object type or a function type." );

    using type = _Ty;

    template < class _Uty, enable_if_t < conjunction_v < negation < is_same < _Remove_cvref_t < _Uty >, reference_wrapper >>,
                                          _Refwrap_has_ctor_from < _Ty, _Uty >>,
                              int > = 0 >
    inline reference_wrapper ( _Uty && _Val ) noexcept ( noexcept ( _Refwrap_ctor_fun < _Ty > ( :: std :: declval < _Uty > ( ) ) ) ) {
        _Ty & _Ref = static_cast < _Uty && > ( _Val );
        _Ptr = :: std :: addressof ( _Ref );
    }

    inline operator _Ty & ( ) const noexcept {
        return * _Ptr;
    }

    [ [ nodiscard ] ] inline _Ty & get ( ) const noexcept {
        return * _Ptr;
    }

private :
    _Ty * _Ptr { };

public :
    template < class ... _Types >
    inline auto operator ( ) ( _Types && ... _Args ) const
        noexcept ( noexcept ( :: std :: invoke ( * _Ptr, static_cast < _Types && > ( _Args ) ... ) ) )
        -> decltype ( :: std :: invoke ( * _Ptr, static_cast < _Types && > ( _Args ) ... ) ) {
        return :: std :: invoke ( * _Ptr, static_cast < _Types && > ( _Args ) ... );
    }
};
#line 1903 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\type_traits"
template < class _Ty >
[ [ nodiscard ] ] inline reference_wrapper < _Ty > ref ( _Ty & _Val ) noexcept {
    return reference_wrapper < _Ty > ( _Val );
}
#line 1908
template < class _Ty >
void ref ( const _Ty && ) = delete;
#line 1911
template < class _Ty >
[ [ nodiscard ] ] inline reference_wrapper < _Ty > ref ( reference_wrapper < _Ty > _Val ) noexcept {
    return _Val;
}
#line 1916
template < class _Ty >
[ [ nodiscard ] ] inline reference_wrapper < const _Ty > cref ( const _Ty & _Val ) noexcept {
    return reference_wrapper < const _Ty > ( _Val );
}
#line 1921
template < class _Ty >
void cref ( const _Ty && ) = delete;
#line 1924
template < class _Ty >
[ [ nodiscard ] ] inline reference_wrapper < const _Ty > cref ( reference_wrapper < _Ty > _Val ) noexcept {
    return _Val;
}
#line 1949 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\type_traits"
template< class _Ty> struct _Is_swappable; 
#line 1952
template< class _Ty> struct _Is_nothrow_swappable; 
#line 1958 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\type_traits"
template < class _Ty, int _Enabled = 0 >

inline void swap ( _Ty &, _Ty & ) noexcept ( is_nothrow_move_constructible_v < _Ty > && is_nothrow_move_assignable_v < _Ty > );
#line 1962 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\type_traits"
template < class _Ty, size_t _Size, enable_if_t < _Is_swappable < _Ty > :: value, int > = 0 >
inline void swap ( _Ty ( & ) [ _Size ], _Ty ( & ) [ _Size ] ) noexcept ( _Is_nothrow_swappable < _Ty > :: value );
#line 1965
template< class _Ty1, class _Ty2, class  = void> 
#line 1966
struct _Swappable_with_helper : public false_type { }; 
#line 1968
template< class _Ty1, class _Ty2> 
#line 1969
struct _Swappable_with_helper< _Ty1, _Ty2, void_t< decltype(swap(std::declval< _Ty1> (), std::declval< _Ty2> ()))> >  : public true_type { 
#line 1970
}; 
#line 1972
template< class _Ty1, class _Ty2> 
#line 1973
struct _Is_swappable_with : public bool_constant< conjunction_v< _Swappable_with_helper< _Ty1, _Ty2> , _Swappable_with_helper< _Ty2, _Ty1> > >  { 
#line 1976
}; 
#line 1978
template< class _Ty> 
#line 1979
struct _Is_swappable : public _Is_swappable_with< add_lvalue_reference_t< _Ty> , add_lvalue_reference_t< _Ty> > ::type { 
#line 1981
}; 
#line 1983
template< class _Ty1, class _Ty2> 
#line 1984
struct _Swap_cannot_throw : public bool_constant< noexcept(swap(std::declval< _Ty1> (), std::declval< _Ty2> ())) && noexcept(swap(std::declval< _Ty2> (), std::declval< _Ty1> ()))>  { 
#line 1988
}; 
#line 1990
template< class _Ty1, class _Ty2> 
#line 1991
struct _Is_nothrow_swappable_with : public bool_constant< conjunction_v< _Is_swappable_with< _Ty1, _Ty2> , _Swap_cannot_throw< _Ty1, _Ty2> > >  { 
#line 1995
}; 
#line 1997
template< class _Ty> 
#line 1998
struct _Is_nothrow_swappable : public _Is_nothrow_swappable_with< add_lvalue_reference_t< _Ty> , add_lvalue_reference_t< _Ty> > ::type { 
#line 2001
}; 
#line 2038 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\type_traits"
namespace _Has_ADL_swap_detail { 
#line 2039
void swap(); 
#line 2041
template< class , class  = void> 
#line 2042
struct _Has_ADL_swap : public false_type { }; 
#line 2043
template< class _Ty> 
#line 2044
struct _Has_ADL_swap< _Ty, void_t< decltype(swap(std::declval< _Ty &> (), std::declval< _Ty &> ()))> >  : public true_type { }; 
#line 2045
}
#line 2046
using _Has_ADL_swap_detail::_Has_ADL_swap;
#line 2048
template< class _Ty> constexpr bool 
#line 2049
_Is_trivially_swappable_v = conjunction_v< is_trivially_destructible< _Ty> , is_trivially_move_constructible< _Ty> , is_trivially_move_assignable< _Ty> , negation< _Has_ADL_swap_detail::_Has_ADL_swap< _Ty> > > ; 
#line 2057
template< class _Ty> 
#line 2058
struct _Is_trivially_swappable : public bool_constant< _Is_trivially_swappable_v< _Ty> >  { 
#line 2060
}; 
#line 2095
template < class _Bitmask >
[ [ nodiscard ] ] constexpr bool _Bitmask_includes_any ( _Bitmask _Left, _Bitmask _Elements ) noexcept {
    return ( _Left & _Elements ) != _Bitmask { };
}
#line 2100
template < class _Bitmask >
[ [ nodiscard ] ] constexpr bool _Bitmask_includes_all ( _Bitmask _Left, _Bitmask _Elements ) noexcept {
    return ( _Left & _Elements ) == _Elements;
}
#line 2108
constexpr size_t _FNV_offset_basis = 14695981039346656037Ui64; 
#line 2109
constexpr size_t _FNV_prime = 1099511628211Ui64; 
#line 2115 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\type_traits"
[[nodiscard]] inline size_t _Fnv1a_append_bytes(size_t _Val, const unsigned char *const _First, const size_t 
#line 2116
_Count) noexcept { 
#line 2117
for (size_t _Idx = (0); _Idx < _Count; ++_Idx) { 
#line 2118
_Val ^= (static_cast< size_t>(_First[_Idx])); 
#line 2119
_Val *= _FNV_prime; 
#line 2120
}  
#line 2122
return _Val; 
#line 2123
} 
#line 2125
template < class _Ty >
[ [ nodiscard ] ] size_t _Fnv1a_append_range ( const size_t _Val, const _Ty * const _First,
    const _Ty * const _Last ) noexcept {
    static_assert ( is_trivial_v < _Ty >, "Only trivial types can be directly hashed." );
    const auto _Firstb = reinterpret_cast < const unsigned char * > ( _First );
    const auto _Lastb = reinterpret_cast < const unsigned char * > ( _Last );
    return _Fnv1a_append_bytes ( _Val, _Firstb, static_cast < size_t > ( _Lastb - _Firstb ) );
}
#line 2134
template < class _Kty >
[ [ nodiscard ] ] size_t _Fnv1a_append_value (
    const size_t _Val, const _Kty & _Keyval ) noexcept {
    static_assert ( is_trivial_v < _Kty >, "Only trivial types can be directly hashed." );
    return _Fnv1a_append_bytes ( _Val, & reinterpret_cast < const unsigned char & > ( _Keyval ), sizeof ( _Kty ) );
}
#line 2141
template < class _Kty >
[ [ nodiscard ] ] size_t _Hash_representation ( const _Kty & _Keyval ) noexcept {
    return _Fnv1a_append_value ( _FNV_offset_basis, _Keyval );
}
#line 2146
template < class _Kty >
[ [ nodiscard ] ] size_t _Hash_array_representation (
    const _Kty * const _First, const size_t _Count ) noexcept {
    static_assert ( is_trivial_v < _Kty >, "Only trivial types can be directly hashed." );
    return _Fnv1a_append_bytes (
        _FNV_offset_basis, reinterpret_cast < const unsigned char * > ( _First ), _Count * sizeof ( _Kty ) );
}
#line 2154
template < class _Kty >
struct hash;
#line 2157
template < class _Kty, bool _Enabled >
struct _Conditionally_enabled_hash {
    using argument_type = _Kty;
    using result_type = size_t;

    [ [ nodiscard ] ] size_t operator ( ) ( const _Kty & _Keyval ) const
        noexcept ( noexcept ( hash < _Kty > :: _Do_hash ( _Keyval ) ) ) {
        return hash < _Kty > :: _Do_hash ( _Keyval );
    }
};
#line 2168
template< class _Kty> 
#line 2169
struct _Conditionally_enabled_hash< _Kty, false>  { 
#line 2170
_Conditionally_enabled_hash() = delete;
#line 2171
_Conditionally_enabled_hash(const _Conditionally_enabled_hash &) = delete;
#line 2172
_Conditionally_enabled_hash(_Conditionally_enabled_hash &&) = delete;
#line 2173
_Conditionally_enabled_hash &operator=(const _Conditionally_enabled_hash &) = delete;
#line 2174
_Conditionally_enabled_hash &operator=(_Conditionally_enabled_hash &&) = delete;
#line 2175
}; 
#line 2177
template < class _Kty >
struct hash
    : _Conditionally_enabled_hash < _Kty,
          ! is_const_v < _Kty > && ! is_volatile_v < _Kty > && ( is_enum_v < _Kty > || is_integral_v < _Kty > || is_pointer_v < _Kty > ) > {

    static size_t _Do_hash ( const _Kty & _Keyval ) noexcept {
        return _Hash_representation ( _Keyval );
    }
};
#line 2188
#pragma pack(8)
template<> 
#line 2188
struct hash< float>  { 
#line 2189
using argument_type = float; 
#line 2190
using result_type = size_t; 
#line 2191
[[nodiscard]] size_t operator()(const float _Keyval) const noexcept { 
#line 2192
return _Hash_representation((_Keyval == (0.0F)) ? (0.0F) : _Keyval); 
#line 2193
} 
#line 2194
}; 
#pragma pack()
#line 2197
#pragma pack(8)
template<> 
#line 2197
struct hash< double>  { 
#line 2198
using argument_type = double; 
#line 2199
using result_type = size_t; 
#line 2200
[[nodiscard]] size_t operator()(const double _Keyval) const noexcept { 
#line 2201
return _Hash_representation((_Keyval == (0.0)) ? (0.0) : _Keyval); 
#line 2202
} 
#line 2203
}; 
#pragma pack()
#line 2206
#pragma pack(8)
template<> 
#line 2206
struct hash< long double>  { 
#line 2207
using argument_type = long double; 
#line 2208
using result_type = size_t; 
#line 2209
[[nodiscard]] size_t operator()(const long double _Keyval) const noexcept { 
#line 2210
return _Hash_representation((_Keyval == (0.0L)) ? (0.0L) : _Keyval); 
#line 2211
} 
#line 2212
}; 
#pragma pack()
#line 2215
#pragma pack(8)
template<> 
#line 2215
struct hash< std::nullptr_t>  { 
#line 2216
using argument_type = nullptr_t; 
#line 2217
using result_type = size_t; 
#line 2218
[[nodiscard]] size_t operator()(nullptr_t) const noexcept { 
#line 2219
void *_Null{((void *)0i64)}; 
#line 2220
return _Hash_representation(_Null); 
#line 2221
} 
#line 2222
}; 
#pragma pack()
template< class _Kty, class  = void> 
#pragma pack(8)
#line 2225
struct _Is_nothrow_hashable : public false_type { }; 
#pragma pack()
template< class _Kty> 
#pragma pack(8)
#line 2228
struct _Is_nothrow_hashable< _Kty, void_t< decltype(hash< _Kty> {}(std::declval< const _Kty &> ()))> >  : public bool_constant< noexcept(hash< _Kty> {}(std::declval< const _Kty &> ()))>  { 
#line 2229
}; 
#pragma pack()
#line 2233
template< class _FloatingType> struct _Floating_type_traits; 
#line 2237
#pragma pack(8)
template<> 
#line 2237
struct _Floating_type_traits< float>  { 
#line 2238
static constexpr int32_t _Mantissa_bits = 24; 
#line 2239
static constexpr int32_t _Exponent_bits = 8; 
#line 2240
static constexpr int32_t _Maximum_binary_exponent = 127; 
#line 2241
static constexpr int32_t _Minimum_binary_exponent = (-126); 
#line 2242
static constexpr int32_t _Exponent_bias = 127; 
#line 2243
static constexpr int32_t _Sign_shift = 31; 
#line 2244
static constexpr int32_t _Exponent_shift = 23; 
#line 2246
using _Uint_type = uint32_t; 
#line 2248
static constexpr uint32_t _Exponent_mask = 255U; 
#line 2249
static constexpr uint32_t _Normal_mantissa_mask = 16777215U; 
#line 2250
static constexpr uint32_t _Denormal_mantissa_mask = 8388607U; 
#line 2251
static constexpr uint32_t _Special_nan_mantissa_mask = 4194304U; 
#line 2252
static constexpr uint32_t _Shifted_sign_mask = 2147483648U; 
#line 2253
static constexpr uint32_t _Shifted_exponent_mask = 2139095040U; 
#line 2254
}; 
#pragma pack()
#line 2257
#pragma pack(8)
template<> 
#line 2257
struct _Floating_type_traits< double>  { 
#line 2258
static constexpr int32_t _Mantissa_bits = 53; 
#line 2259
static constexpr int32_t _Exponent_bits = 11; 
#line 2260
static constexpr int32_t _Maximum_binary_exponent = 1023; 
#line 2261
static constexpr int32_t _Minimum_binary_exponent = (-1022); 
#line 2262
static constexpr int32_t _Exponent_bias = 1023; 
#line 2263
static constexpr int32_t _Sign_shift = 63; 
#line 2264
static constexpr int32_t _Exponent_shift = 52; 
#line 2266
using _Uint_type = uint64_t; 
#line 2268
static constexpr uint64_t _Exponent_mask = (2047U); 
#line 2269
static constexpr uint64_t _Normal_mantissa_mask = 9007199254740991Ui64; 
#line 2270
static constexpr uint64_t _Denormal_mantissa_mask = 4503599627370495Ui64; 
#line 2271
static constexpr uint64_t _Special_nan_mantissa_mask = 2251799813685248Ui64; 
#line 2272
static constexpr uint64_t _Shifted_sign_mask = 9223372036854775808Ui64; 
#line 2273
static constexpr uint64_t _Shifted_exponent_mask = 9218868437227405312Ui64; 
#line 2274
}; 
#pragma pack()
#line 2277
#pragma pack(8)
template<> 
#line 2277
struct _Floating_type_traits< long double>  : public std::_Floating_type_traits< double>  { }; 
#pragma pack()
#line 2282
__pragma( warning(push)) __pragma( warning(disable : 4996)) 
#line 2283
namespace [[deprecated("warning STL4002: The non-Standard std::tr1 namespace and TR1-only machinery are deprecated and will be REMOVED. You can define _" "SILENCE_TR1_NAMESPACE_DEPRECATION_WARNING to suppress this warning.")]] tr1 { 
#line 2284
using std::add_const;
#line 2285
using std::add_cv;
#line 2286
using std::add_pointer;
#line 2287
using std::add_volatile;
#line 2288
using std::aligned_storage;
#line 2289
using std::alignment_of;
#line 2290
using std::conditional;
#line 2291
using std::decay;
#line 2292
using std::enable_if;
#line 2293
using std::extent;
#line 2294
using std::false_type;
#line 2295
using std::has_virtual_destructor;
#line 2296
using std::integral_constant;
#line 2297
using std::is_abstract;
#line 2298
using std::is_arithmetic;
#line 2299
using std::is_array;
#line 2300
using std::is_base_of;
#line 2301
using std::is_class;
#line 2302
using std::is_compound;
#line 2303
using std::is_const;
#line 2304
using std::is_convertible;
#line 2305
using std::is_empty;
#line 2306
using std::is_enum;
#line 2307
using std::is_floating_point;
#line 2308
using std::is_function;
#line 2309
using std::is_fundamental;
#line 2310
using std::is_integral;
#line 2311
using std::is_member_function_pointer;
#line 2312
using std::is_member_object_pointer;
#line 2313
using std::is_member_pointer;
#line 2314
using std::is_object;
#line 2315
using std::is_pod;
#line 2316
using std::is_pointer;
#line 2317
using std::is_polymorphic;
#line 2318
using std::is_reference;
#line 2319
using std::is_same;
#line 2320
using std::is_scalar;
#line 2321
using std::is_signed;
#line 2322
using std::is_union;
#line 2323
using std::is_unsigned;
#line 2324
using std::is_void;
#line 2325
using std::is_volatile;
#line 2326
using std::make_signed;
#line 2327
using std::make_unsigned;
#line 2328
using std::rank;
#line 2329
using std::remove_all_extents;
#line 2330
using std::remove_const;
#line 2331
using std::remove_cv;
#line 2332
using std::remove_extent;
#line 2333
using std::remove_pointer;
#line 2334
using std::remove_reference;
#line 2335
using std::remove_volatile;
#line 2336
using std::true_type;
#line 2337
using std::cref;
#line 2338
using std::ref;
#line 2339
using std::reference_wrapper;
#line 2341
using std::result_of;
#line 2343 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\type_traits"
using std::hash;
#line 2344
}
#line 2345
__pragma( warning(pop)) 
#line 2348 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\type_traits"
}
#line 2352
#pragma warning(pop)
#pragma pack ( pop )
#line 22 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\utility"
#pragma pack ( push, 8 )
#pragma warning(push, 3)
#pragma warning(disable : 4180 4412 4455 4494 4514 4574 4582 4583 4587 4588 4619 4623 4625 4626 4643 4648 4702 4793 4820 4988 5026 5027 5045 6294 4984 5053 )
#line 29
namespace std { 
#line 30
template < class _Ty, class _Pr >
[ [ nodiscard ] ] constexpr const _Ty & ( max ) ( const _Ty & _Left, const _Ty & _Right, _Pr _Pred ) noexcept (
    noexcept ( _Pred ( _Left, _Right ) ) ) {

    return _Pred ( _Left, _Right ) ? _Right : _Left;
}
#line 37
#pragma warning(push)
#pragma warning(disable : 28285)
template < class _Ty >
[ [ nodiscard ] ] constexpr const _Ty &
    ( max ) ( const _Ty & _Left, const _Ty & _Right ) noexcept ( noexcept ( _Left < _Right ) ) {

    return _Left < _Right ? _Right : _Left;
}
#pragma warning(pop)
#line 47
template< class _Ty, class _Pr> 
#line 48
[[nodiscard]] constexpr _Ty 
#line 47
max(initializer_list< _Ty> , _Pr); 
#line 50
template< class _Ty> 
#line 51
[[nodiscard]] constexpr _Ty 
#line 50
max(initializer_list< _Ty> ); 
#line 53
template < class _Ty, class _Pr >
[ [ nodiscard ] ] constexpr const _Ty & ( min ) ( const _Ty & _Left, const _Ty & _Right, _Pr _Pred ) noexcept (
    noexcept ( _Pred ( _Right, _Left ) ) ) {

    return _Pred ( _Right, _Left ) ? _Right : _Left;
}
#line 60
#pragma warning(push)
#pragma warning(disable : 28285)
template < class _Ty >
[ [ nodiscard ] ] constexpr const _Ty &
    ( min ) ( const _Ty & _Left, const _Ty & _Right ) noexcept ( noexcept ( _Right < _Left ) ) {

    return _Right < _Left ? _Right : _Left;
}
#pragma warning(pop)
#line 70
template< class _Ty, class _Pr> 
#line 71
[[nodiscard]] constexpr _Ty 
#line 70
min(initializer_list< _Ty> , _Pr); 
#line 73
template< class _Ty> 
#line 74
[[nodiscard]] constexpr _Ty 
#line 73
min(initializer_list< _Ty> ); 
#line 76
template < class _FwdIt1, class _FwdIt2 >
inline void iter_swap ( _FwdIt1 _Left, _FwdIt2 _Right ) {
    swap ( * _Left, * _Right );
}
#line 81
template < class _Ty, size_t _Size, enable_if_t < _Is_swappable < _Ty > :: value, int > _Enabled >
inline void swap ( _Ty ( & _Left ) [ _Size ], _Ty ( & _Right ) [ _Size ] ) noexcept ( _Is_nothrow_swappable < _Ty > :: value ) {
    if ( & _Left != & _Right ) {
        _Ty * _First1 = _Left;
        _Ty * _Last1 = _First1 + _Size;
        _Ty * _First2 = _Right;
        for (; _First1 != _Last1; ++ _First1, ++ _First2 ) {
            :: std :: iter_swap ( _First1, _First2 );
        }
    }
}
#line 96 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\utility"
template < class _Ty, int _Enabled >

inline void swap ( _Ty & _Left, _Ty & _Right ) noexcept (
    is_nothrow_move_constructible_v < _Ty > && is_nothrow_move_assignable_v < _Ty > ) {
    _Ty _Tmp = :: std :: move ( _Left );
    _Left = :: std :: move ( _Right );
    _Right = :: std :: move ( _Tmp );
}
#line 105 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\utility"
template < class _Ty >
inline void _Swap_adl ( _Ty & _Left, _Ty & _Right ) noexcept ( _Is_nothrow_swappable < _Ty > :: value ) {
    swap ( _Left, _Right );
}
#line 110
struct piecewise_construct_t { 
#line 111
explicit piecewise_construct_t() = default;
#line 112
}; 
#line 114
constexpr piecewise_construct_t piecewise_construct{}; 
#line 116
template< class _Ty, class _Alloc, class  = void> 
#line 117
struct _Has_allocator_type : public false_type { }; 
#line 119
template< class _Ty, class _Alloc> 
#line 120
struct _Has_allocator_type< _Ty, _Alloc, void_t< typename _Ty::allocator_type> >  : public is_convertible< _Alloc, typename _Ty::allocator_type> ::type { 
#line 121
}; 
#line 123
struct allocator_arg_t { 
#line 124
explicit allocator_arg_t() = default;
#line 125
}; 
#line 127
constexpr allocator_arg_t allocator_arg{}; 
#line 129
template< class _Ty, class _Alloc> 
#line 130
struct uses_allocator : public _Has_allocator_type< _Ty, _Alloc> ::type { 
#line 132
}; 
#line 134
template< class _Ty, class _Alloc> constexpr bool 
#line 135
uses_allocator_v = (uses_allocator< _Ty, _Alloc> ::value); 
#line 137
template< class ...> class tuple; 
#line 140
template< size_t _Index, class ..._Types> 
#line 141
[[nodiscard]] constexpr auto &&
#line 140
_Tuple_get(tuple< _Types...>  && _Tuple) noexcept; 
#line 143
template < class _Ty1, class _Ty2 >
struct pair {
    using first_type = _Ty1;
    using second_type = _Ty2;

    template < class _Uty1 = _Ty1, class _Uty2 = _Ty2,
        enable_if_t < conjunction_v < is_default_constructible < _Uty1 >, is_default_constructible < _Uty2 >>, int > = 0 >
    constexpr explicit (
        ! conjunction_v < _Is_implicitly_default_constructible < _Uty1 >, _Is_implicitly_default_constructible < _Uty2 >> )
        pair ( ) noexcept (
            is_nothrow_default_constructible_v < _Uty1 > && is_nothrow_default_constructible_v < _Uty2 > )
        : first ( ), second ( ) { }

    template < class _Uty1 = _Ty1, class _Uty2 = _Ty2,
        enable_if_t < conjunction_v < is_copy_constructible < _Uty1 >, is_copy_constructible < _Uty2 >>, int > = 0 >
    constexpr explicit ( ! conjunction_v < is_convertible < const _Uty1 &, _Uty1 >, is_convertible < const _Uty2 &, _Uty2 >> )
        pair ( const _Ty1 & _Val1, const _Ty2 & _Val2 ) noexcept (
            is_nothrow_copy_constructible_v < _Uty1 > && is_nothrow_copy_constructible_v < _Uty2 > )
        : first ( _Val1 ), second ( _Val2 ) { }




    template < class _Other1, class _Other2,

        enable_if_t < conjunction_v < is_constructible < _Ty1, _Other1 >, is_constructible < _Ty2, _Other2 >>, int > = 0 >
    constexpr explicit ( ! conjunction_v < is_convertible < _Other1, _Ty1 >, is_convertible < _Other2, _Ty2 >> )
        pair ( _Other1 && _Val1, _Other2 && _Val2 ) noexcept (
            is_nothrow_constructible_v < _Ty1, _Other1 > && is_nothrow_constructible_v < _Ty2, _Other2 > )
        : first ( :: std :: forward < _Other1 > ( _Val1 ) ), second ( :: std :: forward < _Other2 > ( _Val2 ) ) {
    }

    pair ( const pair & ) = default;
    pair ( pair && ) = default;










    template < class _Other1, class _Other2,
        enable_if_t < conjunction_v < is_constructible < _Ty1, const _Other1 & >, is_constructible < _Ty2, const _Other2 & >>,
            int > = 0 >
    constexpr explicit ( ! conjunction_v < is_convertible < const _Other1 &, _Ty1 >, is_convertible < const _Other2 &, _Ty2 >> )
        pair ( const pair < _Other1, _Other2 > & _Right ) noexcept ( is_nothrow_constructible_v < _Ty1, const _Other1 & > &&
                is_nothrow_constructible_v < _Ty2, const _Other2 & > )
        : first ( _Right . first ), second ( _Right . second ) { }

    template < class _Other1, class _Other2,
        enable_if_t < conjunction_v < is_constructible < _Ty1, _Other1 >, is_constructible < _Ty2, _Other2 >>, int > = 0 >
    constexpr explicit ( ! conjunction_v < is_convertible < _Other1, _Ty1 >, is_convertible < _Other2, _Ty2 >> )
        pair ( pair < _Other1, _Other2 > && _Right ) noexcept (
            is_nothrow_constructible_v < _Ty1, _Other1 > && is_nothrow_constructible_v < _Ty2, _Other2 > )
        : first ( :: std :: forward < _Other1 > ( _Right . first ) ), second ( :: std :: forward < _Other2 > ( _Right . second ) ) { }











    template < class _Tuple1, class _Tuple2, size_t ... _Indexes1, size_t ... _Indexes2 >
    constexpr pair ( _Tuple1 & _Val1, _Tuple2 & _Val2, index_sequence < _Indexes1 ... >, index_sequence < _Indexes2 ... > )
        : first ( _Tuple_get < _Indexes1 > ( :: std :: move ( _Val1 ) ) ... ), second ( _Tuple_get < _Indexes2 > ( :: std :: move ( _Val2 ) ) ... ) { }

    template < class ... _Types1, class ... _Types2 >
    inline pair ( piecewise_construct_t, tuple < _Types1 ... > _Val1, tuple < _Types2 ... > _Val2 )
        : pair ( _Val1, _Val2, index_sequence_for < _Types1 ... > { }, index_sequence_for < _Types2 ... > { } ) { }

    pair & operator = ( const volatile pair & ) = delete;

    template < class _Myself = pair,
        enable_if_t < conjunction_v < _Is_copy_assignable_no_precondition_check < typename _Myself :: first_type >,
                        _Is_copy_assignable_no_precondition_check < typename _Myself :: second_type >>,
            int > = 0 >
    inline pair & operator = ( _Identity_t < const _Myself & > _Right ) noexcept (
        conjunction_v < is_nothrow_copy_assignable < _Ty1 >, is_nothrow_copy_assignable < _Ty2 >> ) {
        first = _Right . first;
        second = _Right . second;
        return * this;
    }















    template < class _Myself = pair,
        enable_if_t < conjunction_v < _Is_move_assignable_no_precondition_check < typename _Myself :: first_type >,
                        _Is_move_assignable_no_precondition_check < typename _Myself :: second_type >>,
            int > = 0 >
    inline pair & operator = ( _Identity_t < _Myself && > _Right ) noexcept (
        conjunction_v < is_nothrow_move_assignable < _Ty1 >, is_nothrow_move_assignable < _Ty2 >> ) {
        first = :: std :: forward < _Ty1 > ( _Right . first );
        second = :: std :: forward < _Ty2 > ( _Right . second );
        return * this;
    }















    template < class _Other1, class _Other2,
        enable_if_t < conjunction_v < negation < is_same < pair, pair < _Other1, _Other2 >> >, is_assignable < _Ty1 &, const _Other1 & >,
                        is_assignable < _Ty2 &, const _Other2 & >>,
            int > = 0 >
    inline pair & operator = ( const pair < _Other1, _Other2 > & _Right ) noexcept (
        is_nothrow_assignable_v < _Ty1 &, const _Other1 & > &&
            is_nothrow_assignable_v < _Ty2 &, const _Other2 & > ) {
        first = _Right . first;
        second = _Right . second;
        return * this;
    }















    template < class _Other1, class _Other2,
        enable_if_t < conjunction_v < negation < is_same < pair, pair < _Other1, _Other2 >> >, is_assignable < _Ty1 &, _Other1 >,
                        is_assignable < _Ty2 &, _Other2 >>,
            int > = 0 >
    inline pair & operator = ( pair < _Other1, _Other2 > && _Right ) noexcept (
        is_nothrow_assignable_v < _Ty1 &, _Other1 > && is_nothrow_assignable_v < _Ty2 &, _Other2 > ) {
        first = :: std :: forward < _Other1 > ( _Right . first );
        second = :: std :: forward < _Other2 > ( _Right . second );
        return * this;
    }















    inline void swap ( pair & _Right ) noexcept (
        _Is_nothrow_swappable < _Ty1 > :: value && _Is_nothrow_swappable < _Ty2 > :: value ) {
        if ( this != :: std :: addressof ( _Right ) ) {
            _Swap_adl ( first, _Right . first );
            _Swap_adl ( second, _Right . second );
        }
    }












    _Ty1 first;
    _Ty2 second;
};
#line 351 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\utility"
template < class _Ty1, class _Ty2, enable_if_t < _Is_swappable < _Ty1 > :: value && _Is_swappable < _Ty2 > :: value, int > = 0 >
inline void swap ( pair < _Ty1, _Ty2 > & _Left, pair < _Ty1, _Ty2 > & _Right ) noexcept ( noexcept ( _Left . swap ( _Right ) ) ) {
    _Left . swap ( _Right );
}
#line 364 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\utility"
template < class _Ty1, class _Ty2 >
[ [ nodiscard ] ] constexpr bool operator == ( const pair < _Ty1, _Ty2 > & _Left, const pair < _Ty1, _Ty2 > & _Right ) {
    return _Left . first == _Right . first && _Left . second == _Right . second;
}
#line 380
template < class _Ty1, class _Ty2 >
[ [ nodiscard ] ] constexpr bool operator != ( const pair < _Ty1, _Ty2 > & _Left, const pair < _Ty1, _Ty2 > & _Right ) {
    return ! ( _Left == _Right );
}
#line 386 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\utility"
template < class _Ty1, class _Ty2 >
[ [ nodiscard ] ] constexpr bool operator < ( const pair < _Ty1, _Ty2 > & _Left, const pair < _Ty1, _Ty2 > & _Right ) {
    return _Left . first < _Right . first || ( ! ( _Right . first < _Left . first ) && _Left . second < _Right . second );
}
#line 391
template < class _Ty1, class _Ty2 >
[ [ nodiscard ] ] constexpr bool operator > ( const pair < _Ty1, _Ty2 > & _Left, const pair < _Ty1, _Ty2 > & _Right ) {
    return _Right < _Left;
}
#line 396
template < class _Ty1, class _Ty2 >
[ [ nodiscard ] ] constexpr bool operator <= ( const pair < _Ty1, _Ty2 > & _Left, const pair < _Ty1, _Ty2 > & _Right ) {
    return ! ( _Right < _Left );
}
#line 401
template < class _Ty1, class _Ty2 >
[ [ nodiscard ] ] constexpr bool operator >= ( const pair < _Ty1, _Ty2 > & _Left, const pair < _Ty1, _Ty2 > & _Right ) {
    return ! ( _Left < _Right );
}
#line 426 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\utility"
template< class _Ty> 
#line 427
struct _Unrefwrap_helper { 
#line 428
using type = _Ty; 
#line 429
}; 
#line 431
template< class _Ty> 
#line 432
struct _Unrefwrap_helper< reference_wrapper< _Ty> >  { 
#line 433
using type = _Ty &; 
#line 434
}; 
#line 437
template< class _Ty> using _Unrefwrap_t = typename _Unrefwrap_helper< decay_t< _Ty> > ::type; 
#line 440
template < class _Ty1, class _Ty2 >
[ [ nodiscard ] ] constexpr pair < _Unrefwrap_t < _Ty1 >, _Unrefwrap_t < _Ty2 > > make_pair ( _Ty1 && _Val1, _Ty2 && _Val2 ) noexcept (
    is_nothrow_constructible_v < _Unrefwrap_t < _Ty1 >, _Ty1 > &&
        is_nothrow_constructible_v < _Unrefwrap_t < _Ty2 >, _Ty2 > ) {

    using _Mypair = pair < _Unrefwrap_t < _Ty1 >, _Unrefwrap_t < _Ty2 >>;
    return _Mypair ( :: std :: forward < _Ty1 > ( _Val1 ), :: std :: forward < _Ty2 > ( _Val2 ) );
}
#line 449
namespace rel_ops { 
#line 450
template < class _Ty >
     [ [ nodiscard ] ] bool operator != ( const _Ty & _Left, const _Ty & _Right ) {
        return ! ( _Left == _Right );
    }
#line 455
template < class _Ty >
     [ [ nodiscard ] ] bool operator > ( const _Ty & _Left, const _Ty & _Right ) {
        return _Right < _Left;
    }
#line 460
template < class _Ty >
     [ [ nodiscard ] ] bool operator <= ( const _Ty & _Left, const _Ty & _Right ) {
        return ! ( _Right < _Left );
    }
#line 465
template < class _Ty >
     [ [ nodiscard ] ] bool operator >= ( const _Ty & _Left, const _Ty & _Right ) {
        return ! ( _Left < _Right );
    }
#line 469
}
#line 471
template< class _Tuple> struct tuple_size; 
#line 474
template< class _Tuple, class  = void> 
#line 475
struct _Tuple_size_sfinae { }; 
#line 477
template< class _Tuple> 
#line 478
struct _Tuple_size_sfinae< _Tuple, void_t< decltype(tuple_size< _Tuple> ::value)> >  : public integral_constant< unsigned __int64, tuple_size< _Tuple> ::value>  { 
#line 479
}; 
#line 481
template< class _Tuple> 
#line 482
struct tuple_size< const _Tuple>  : public _Tuple_size_sfinae< _Tuple>  { }; 
#line 484
template< class _Tuple> 
#line 485
struct tuple_size< volatile _Tuple>  : public _Tuple_size_sfinae< _Tuple>  { }; 
#line 487
template< class _Tuple> 
#line 488
struct tuple_size< const volatile _Tuple>  : public _Tuple_size_sfinae< _Tuple>  { }; 
#line 490
template< class _Ty> constexpr size_t 
#line 491
tuple_size_v = (tuple_size< _Ty> ::value); 
#line 493
template< size_t _Index, class _Tuple> struct tuple_element; 
#line 496
template< size_t _Index, class _Tuple> 
#line 497
struct tuple_element< _Index, const _Tuple>  : public std::tuple_element< _Index, _Tuple>  { 
#line 498
using _Mybase = std::tuple_element< _Index, _Tuple> ; 
#line 499
using type = std::add_const_t< typename std::tuple_element< _Index, _Tuple> ::type> ; 
#line 500
}; 
#line 502
template< size_t _Index, class _Tuple> 
#line 503
struct tuple_element< _Index, volatile _Tuple>  : public std::tuple_element< _Index, _Tuple>  { 
#line 505
using _Mybase = std::tuple_element< _Index, _Tuple> ; 
#line 506
using type = std::add_volatile_t< typename std::tuple_element< _Index, _Tuple> ::type> ; 
#line 507
}; 
#line 509
template< size_t _Index, class _Tuple> 
#line 510
struct tuple_element< _Index, const volatile _Tuple>  : public std::tuple_element< _Index, _Tuple>  { 
#line 512
using _Mybase = std::tuple_element< _Index, _Tuple> ; 
#line 513
using type = std::add_cv_t< typename std::tuple_element< _Index, _Tuple> ::type> ; 
#line 514
}; 
#line 516
template< size_t _Index, class _Tuple> using tuple_element_t = typename tuple_element< _Index, _Tuple> ::type; 
#line 519
template< class _Ty, size_t _Size> class array; 
#line 522
template< class _Ty, size_t _Size> 
#line 523
struct tuple_size< array< _Ty, _Size> >  : public integral_constant< unsigned __int64, _Size>  { }; 
#line 525
template< size_t _Idx, class _Ty, size_t _Size> 
#line 526
struct tuple_element< _Idx, array< _Ty, _Size> >  { 
#line 527
static_assert((_Idx < _Size), "array index out of bounds");
#line 529
using type = _Ty; 
#line 530
}; 
#line 532
template< class ..._Types> 
#line 533
struct tuple_size< tuple< _Types...> >  : public integral_constant< unsigned __int64, sizeof...(_Types)>  { }; 
#line 535
template< size_t _Index> 
#line 536
struct tuple_element< _Index, tuple< > >  { 
#line 537
static_assert((_Always_false< integral_constant< size_t, _Index> > ), "tuple index out of bounds");
#line 538
}; 
#line 540
template< class _This, class ..._Rest> 
#line 541
struct tuple_element< 0, tuple< _This, _Rest...> >  { 
#line 542
using type = _This; 
#line 544
using _Ttype = tuple< _This, _Rest...> ; 
#line 545
}; 
#line 547
template< size_t _Index, class _This, class ..._Rest> 
#line 548
struct tuple_element< _Index, tuple< _This, _Rest...> >  : public std::tuple_element< _Index - (1), tuple< _Rest...> >  { 
#line 549
}; 
#line 551
template< class _Ty1, class _Ty2> 
#line 552
struct tuple_size< pair< _Ty1, _Ty2> >  : public integral_constant< unsigned __int64, 2Ui64>  { }; 
#line 554
template< size_t _Idx, class _Ty1, class _Ty2> 
#line 555
struct tuple_element< _Idx, pair< _Ty1, _Ty2> >  { 
#line 556
static_assert((_Idx < (2)), "pair index out of bounds");
#line 558
using type = conditional_t< _Idx == (0), _Ty1, _Ty2> ; 
#line 559
}; 
#line 561
template < size_t _Idx, class _Ty1, class _Ty2 >
[ [ nodiscard ] ] constexpr tuple_element_t < _Idx, pair < _Ty1, _Ty2 > > & get ( pair < _Ty1, _Ty2 > & _Pr ) noexcept {

    if constexpr ( _Idx == 0 ) {
        return _Pr . first;
    } else {
        return _Pr . second;
    }
}
#line 571
template < class _Ty1, class _Ty2 >
[ [ nodiscard ] ] constexpr _Ty1 & get ( pair < _Ty1, _Ty2 > & _Pr ) noexcept {

    return _Pr . first;
}
#line 577
template < class _Ty2, class _Ty1 >
[ [ nodiscard ] ] constexpr _Ty2 & get ( pair < _Ty1, _Ty2 > & _Pr ) noexcept {

    return _Pr . second;
}
#line 583
template < size_t _Idx, class _Ty1, class _Ty2 >
[ [ nodiscard ] ] constexpr const tuple_element_t < _Idx, pair < _Ty1, _Ty2 > > & get ( const pair < _Ty1, _Ty2 > & _Pr ) noexcept {

    if constexpr ( _Idx == 0 ) {
        return _Pr . first;
    } else {
        return _Pr . second;
    }
}
#line 593
template < class _Ty1, class _Ty2 >
[ [ nodiscard ] ] constexpr const _Ty1 & get ( const pair < _Ty1, _Ty2 > & _Pr ) noexcept {

    return _Pr . first;
}
#line 599
template < class _Ty2, class _Ty1 >
[ [ nodiscard ] ] constexpr const _Ty2 & get ( const pair < _Ty1, _Ty2 > & _Pr ) noexcept {

    return _Pr . second;
}
#line 605
template < size_t _Idx, class _Ty1, class _Ty2 >
[ [ nodiscard ] ] constexpr tuple_element_t < _Idx, pair < _Ty1, _Ty2 > > && get ( pair < _Ty1, _Ty2 > && _Pr ) noexcept {

    if constexpr ( _Idx == 0 ) {
        return :: std :: forward < _Ty1 > ( _Pr . first );
    } else {
        return :: std :: forward < _Ty2 > ( _Pr . second );
    }
}
#line 615
template < class _Ty1, class _Ty2 >
[ [ nodiscard ] ] constexpr _Ty1 && get ( pair < _Ty1, _Ty2 > && _Pr ) noexcept {

    return :: std :: forward < _Ty1 > ( _Pr . first );
}
#line 621
template < class _Ty2, class _Ty1 >
[ [ nodiscard ] ] constexpr _Ty2 && get ( pair < _Ty1, _Ty2 > && _Pr ) noexcept {

    return :: std :: forward < _Ty2 > ( _Pr . second );
}
#line 627
template < size_t _Idx, class _Ty1, class _Ty2 >
[ [ nodiscard ] ] constexpr const tuple_element_t < _Idx, pair < _Ty1, _Ty2 > > && get ( const pair < _Ty1, _Ty2 > && _Pr ) noexcept {

    if constexpr ( _Idx == 0 ) {
        return :: std :: forward < const _Ty1 > ( _Pr . first );
    } else {
        return :: std :: forward < const _Ty2 > ( _Pr . second );
    }
}
#line 637
template < class _Ty1, class _Ty2 >
[ [ nodiscard ] ] constexpr const _Ty1 && get ( const pair < _Ty1, _Ty2 > && _Pr ) noexcept {

    return :: std :: forward < const _Ty1 > ( _Pr . first );
}
#line 643
template < class _Ty2, class _Ty1 >
[ [ nodiscard ] ] constexpr const _Ty2 && get ( const pair < _Ty1, _Ty2 > && _Pr ) noexcept {

    return :: std :: forward < const _Ty2 > ( _Pr . second );
}
#line 649
template < class _Ty, class _Other = _Ty >
inline _Ty exchange ( _Ty & _Val, _Other && _New_val ) noexcept (
    conjunction_v < is_nothrow_move_constructible < _Ty >, is_nothrow_assignable < _Ty &, _Other >> ) {

    _Ty _Old_val = static_cast < _Ty && > ( _Val );
    _Val = static_cast < _Other && > ( _New_val );
    return _Old_val;
}
#line 658
template < class _Ty >
[ [ nodiscard ] ] constexpr add_const_t < _Ty > & as_const ( _Ty & _Val ) noexcept {
    return _Val;
}
#line 663
template < class _Ty >
void as_const ( const _Ty && ) = delete;
#line 846 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\utility"
namespace [[deprecated("warning STL4002: The non-Standard std::tr1 namespace and TR1-only machinery are deprecated and will be REMOVED. You can define _" "SILENCE_TR1_NAMESPACE_DEPRECATION_WARNING to suppress this warning.")]] tr1 { 
#line 847
using std::get;
#line 848
using std::tuple_element;
#line 849
using std::tuple_size;
#line 850
}
#line 853 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.34.31933\\include\\utility"
}
#line 857
#pragma warning(pop)
#pragma pack ( pop )
#line 206 "C:/Program Files/NVIDIA GPU Computing Toolkit/CUDA/v12.3/bin/../include\\cuda_runtime.h"
template< class T> static __inline ::cudaError_t 
#line 207
cudaLaunchKernel(const T *
#line 208
func, ::dim3 
#line 209
gridDim, ::dim3 
#line 210
blockDim, void **
#line 211
args, ::size_t 
#line 212
sharedMem = 0, ::cudaStream_t 
#line 213
stream = 0) 
#line 215
{ 
#line 216
return ::cudaLaunchKernel((const void *)func, gridDim, blockDim, args, sharedMem, stream); 
#line 217
} 
#line 277
template< class ...ExpTypes, class ...ActTypes> static __inline ::cudaError_t 
#line 278
cudaLaunchKernelEx(const ::cudaLaunchConfig_t *
#line 279
config, void (*
#line 280
kernel)(ExpTypes ...), ActTypes &&...
#line 281
args) 
#line 283
{ 
#line 284
return [&](ExpTypes ...coercedArgs) { 
#line 285
void *pArgs[] = {(&coercedArgs)...}; 
#line 286
return ::cudaLaunchKernelExC(config, (const void *)(kernel), pArgs); 
#line 287
} (std::forward< ActTypes> (args)...); 
#line 288
} 
#line 340 "C:/Program Files/NVIDIA GPU Computing Toolkit/CUDA/v12.3/bin/../include\\cuda_runtime.h"
template< class T> static __inline ::cudaError_t 
#line 341
cudaLaunchCooperativeKernel(const T *
#line 342
func, ::dim3 
#line 343
gridDim, ::dim3 
#line 344
blockDim, void **
#line 345
args, ::size_t 
#line 346
sharedMem = 0, ::cudaStream_t 
#line 347
stream = 0) 
#line 349
{ 
#line 350
return ::cudaLaunchCooperativeKernel((const void *)func, gridDim, blockDim, args, sharedMem, stream); 
#line 351
} 
#line 384
static __inline cudaError_t cudaEventCreate(cudaEvent_t *
#line 385
event, unsigned 
#line 386
flags) 
#line 388
{ 
#line 389
return ::cudaEventCreateWithFlags(event, flags); 
#line 390
} 
#line 428
static __inline cudaError_t cudaGraphInstantiate(cudaGraphExec_t *
#line 429
pGraphExec, cudaGraph_t 
#line 430
graph, cudaGraphNode_t *
#line 431
pErrorNode, char *
#line 432
pLogBuffer, size_t 
#line 433
bufferSize) 
#line 435
{ 
#line 436
(void)pErrorNode; 
#line 437
(void)pLogBuffer; 
#line 438
(void)bufferSize; 
#line 439
return ::cudaGraphInstantiate(pGraphExec, graph, 0); 
#line 440
} 
#line 499
static __inline cudaError_t cudaMallocHost(void **
#line 500
ptr, size_t 
#line 501
size, unsigned 
#line 502
flags) 
#line 504
{ 
#line 505
return ::cudaHostAlloc(ptr, size, flags); 
#line 506
} 
#line 508
template< class T> static __inline ::cudaError_t 
#line 509
cudaHostAlloc(T **
#line 510
ptr, ::size_t 
#line 511
size, unsigned 
#line 512
flags) 
#line 514
{ 
#line 515
return ::cudaHostAlloc((void **)((void *)ptr), size, flags); 
#line 516
} 
#line 518
template< class T> static __inline ::cudaError_t 
#line 519
cudaHostGetDevicePointer(T **
#line 520
pDevice, void *
#line 521
pHost, unsigned 
#line 522
flags) 
#line 524
{ 
#line 525
return ::cudaHostGetDevicePointer((void **)((void *)pDevice), pHost, flags); 
#line 526
} 
#line 628
template< class T> static __inline ::cudaError_t 
#line 629
cudaMallocManaged(T **
#line 630
devPtr, ::size_t 
#line 631
size, unsigned 
#line 632
flags = 1) 
#line 634
{ 
#line 635
return ::cudaMallocManaged((void **)((void *)devPtr), size, flags); 
#line 636
} 
#line 646
template< class T> ::cudaError_t 
#line 647
cudaMemAdvise(T *
#line 648
devPtr, ::size_t 
#line 649
count, ::cudaMemoryAdvise 
#line 650
advice, ::cudaMemLocation 
#line 651
location) 
#line 653
{ 
#line 654
return ::cudaMemAdvise_v2((const void *)devPtr, count, advice, location); 
#line 655
} 
#line 657
template< class T> static __inline ::cudaError_t 
#line 658
cudaMemPrefetchAsync(T *
#line 659
devPtr, ::size_t 
#line 660
count, ::cudaMemLocation 
#line 661
location, unsigned 
#line 662
flags, ::cudaStream_t 
#line 663
stream = 0) 
#line 665
{ 
#line 666
return ::cudaMemPrefetchAsync_v2((const void *)devPtr, count, location, flags, stream); 
#line 667
} 
#line 749
template< class T> static __inline ::cudaError_t 
#line 750
cudaStreamAttachMemAsync(::cudaStream_t 
#line 751
stream, T *
#line 752
devPtr, ::size_t 
#line 753
length = 0, unsigned 
#line 754
flags = 4) 
#line 756
{ 
#line 757
return ::cudaStreamAttachMemAsync(stream, (void *)devPtr, length, flags); 
#line 758
} 
#line 760
template< class T> __inline ::cudaError_t 
#line 761
cudaMalloc(T **
#line 762
devPtr, ::size_t 
#line 763
size) 
#line 765
{ 
#line 766
return ::cudaMalloc((void **)((void *)devPtr), size); 
#line 767
} 
#line 769
template< class T> static __inline ::cudaError_t 
#line 770
cudaMallocHost(T **
#line 771
ptr, ::size_t 
#line 772
size, unsigned 
#line 773
flags = 0) 
#line 775
{ 
#line 776
return cudaMallocHost((void **)((void *)ptr), size, flags); 
#line 777
} 
#line 779
template< class T> static __inline ::cudaError_t 
#line 780
cudaMallocPitch(T **
#line 781
devPtr, ::size_t *
#line 782
pitch, ::size_t 
#line 783
width, ::size_t 
#line 784
height) 
#line 786
{ 
#line 787
return ::cudaMallocPitch((void **)((void *)devPtr), pitch, width, height); 
#line 788
} 
#line 799
static __inline cudaError_t cudaMallocAsync(void **
#line 800
ptr, size_t 
#line 801
size, cudaMemPool_t 
#line 802
memPool, cudaStream_t 
#line 803
stream) 
#line 805
{ 
#line 806
return ::cudaMallocFromPoolAsync(ptr, size, memPool, stream); 
#line 807
} 
#line 809
template< class T> static __inline ::cudaError_t 
#line 810
cudaMallocAsync(T **
#line 811
ptr, ::size_t 
#line 812
size, ::cudaMemPool_t 
#line 813
memPool, ::cudaStream_t 
#line 814
stream) 
#line 816
{ 
#line 817
return ::cudaMallocFromPoolAsync((void **)((void *)ptr), size, memPool, stream); 
#line 818
} 
#line 820
template< class T> static __inline ::cudaError_t 
#line 821
cudaMallocAsync(T **
#line 822
ptr, ::size_t 
#line 823
size, ::cudaStream_t 
#line 824
stream) 
#line 826
{ 
#line 827
return ::cudaMallocAsync((void **)((void *)ptr), size, stream); 
#line 828
} 
#line 830
template< class T> static __inline ::cudaError_t 
#line 831
cudaMallocFromPoolAsync(T **
#line 832
ptr, ::size_t 
#line 833
size, ::cudaMemPool_t 
#line 834
memPool, ::cudaStream_t 
#line 835
stream) 
#line 837
{ 
#line 838
return ::cudaMallocFromPoolAsync((void **)((void *)ptr), size, memPool, stream); 
#line 839
} 
#line 878
template< class T> static __inline ::cudaError_t 
#line 879
cudaMemcpyToSymbol(const T &
#line 880
symbol, const void *
#line 881
src, ::size_t 
#line 882
count, ::size_t 
#line 883
offset = 0, ::cudaMemcpyKind 
#line 884
kind = cudaMemcpyHostToDevice) 
#line 886
{ 
#line 887
return ::cudaMemcpyToSymbol((const void *)(&symbol), src, count, offset, kind); 
#line 888
} 
#line 932
template< class T> static __inline ::cudaError_t 
#line 933
cudaMemcpyToSymbolAsync(const T &
#line 934
symbol, const void *
#line 935
src, ::size_t 
#line 936
count, ::size_t 
#line 937
offset = 0, ::cudaMemcpyKind 
#line 938
kind = cudaMemcpyHostToDevice, ::cudaStream_t 
#line 939
stream = 0) 
#line 941
{ 
#line 942
return ::cudaMemcpyToSymbolAsync((const void *)(&symbol), src, count, offset, kind, stream); 
#line 943
} 
#line 980
template< class T> static __inline ::cudaError_t 
#line 981
cudaMemcpyFromSymbol(void *
#line 982
dst, const T &
#line 983
symbol, ::size_t 
#line 984
count, ::size_t 
#line 985
offset = 0, ::cudaMemcpyKind 
#line 986
kind = cudaMemcpyDeviceToHost) 
#line 988
{ 
#line 989
return ::cudaMemcpyFromSymbol(dst, (const void *)(&symbol), count, offset, kind); 
#line 990
} 
#line 1034
template< class T> static __inline ::cudaError_t 
#line 1035
cudaMemcpyFromSymbolAsync(void *
#line 1036
dst, const T &
#line 1037
symbol, ::size_t 
#line 1038
count, ::size_t 
#line 1039
offset = 0, ::cudaMemcpyKind 
#line 1040
kind = cudaMemcpyDeviceToHost, ::cudaStream_t 
#line 1041
stream = 0) 
#line 1043
{ 
#line 1044
return ::cudaMemcpyFromSymbolAsync(dst, (const void *)(&symbol), count, offset, kind, stream); 
#line 1045
} 
#line 1103
template< class T> static __inline ::cudaError_t 
#line 1104
cudaGraphAddMemcpyNodeToSymbol(::cudaGraphNode_t *
#line 1105
pGraphNode, ::cudaGraph_t 
#line 1106
graph, const ::cudaGraphNode_t *
#line 1107
pDependencies, ::size_t 
#line 1108
numDependencies, const T &
#line 1109
symbol, const void *
#line 1110
src, ::size_t 
#line 1111
count, ::size_t 
#line 1112
offset, ::cudaMemcpyKind 
#line 1113
kind) 
#line 1114
{ 
#line 1115
return ::cudaGraphAddMemcpyNodeToSymbol(pGraphNode, graph, pDependencies, numDependencies, (const void *)(&symbol), src, count, offset, kind); 
#line 1116
} 
#line 1174
template< class T> static __inline ::cudaError_t 
#line 1175
cudaGraphAddMemcpyNodeFromSymbol(::cudaGraphNode_t *
#line 1176
pGraphNode, ::cudaGraph_t 
#line 1177
graph, const ::cudaGraphNode_t *
#line 1178
pDependencies, ::size_t 
#line 1179
numDependencies, void *
#line 1180
dst, const T &
#line 1181
symbol, ::size_t 
#line 1182
count, ::size_t 
#line 1183
offset, ::cudaMemcpyKind 
#line 1184
kind) 
#line 1185
{ 
#line 1186
return ::cudaGraphAddMemcpyNodeFromSymbol(pGraphNode, graph, pDependencies, numDependencies, dst, (const void *)(&symbol), count, offset, kind); 
#line 1187
} 
#line 1225
template< class T> static __inline ::cudaError_t 
#line 1226
cudaGraphMemcpyNodeSetParamsToSymbol(::cudaGraphNode_t 
#line 1227
node, const T &
#line 1228
symbol, const void *
#line 1229
src, ::size_t 
#line 1230
count, ::size_t 
#line 1231
offset, ::cudaMemcpyKind 
#line 1232
kind) 
#line 1233
{ 
#line 1234
return ::cudaGraphMemcpyNodeSetParamsToSymbol(node, (const void *)(&symbol), src, count, offset, kind); 
#line 1235
} 
#line 1273
template< class T> static __inline ::cudaError_t 
#line 1274
cudaGraphMemcpyNodeSetParamsFromSymbol(::cudaGraphNode_t 
#line 1275
node, void *
#line 1276
dst, const T &
#line 1277
symbol, ::size_t 
#line 1278
count, ::size_t 
#line 1279
offset, ::cudaMemcpyKind 
#line 1280
kind) 
#line 1281
{ 
#line 1282
return ::cudaGraphMemcpyNodeSetParamsFromSymbol(node, dst, (const void *)(&symbol), count, offset, kind); 
#line 1283
} 
#line 1331
template< class T> static __inline ::cudaError_t 
#line 1332
cudaGraphExecMemcpyNodeSetParamsToSymbol(::cudaGraphExec_t 
#line 1333
hGraphExec, ::cudaGraphNode_t 
#line 1334
node, const T &
#line 1335
symbol, const void *
#line 1336
src, ::size_t 
#line 1337
count, ::size_t 
#line 1338
offset, ::cudaMemcpyKind 
#line 1339
kind) 
#line 1340
{ 
#line 1341
return ::cudaGraphExecMemcpyNodeSetParamsToSymbol(hGraphExec, node, (const void *)(&symbol), src, count, offset, kind); 
#line 1342
} 
#line 1390
template< class T> static __inline ::cudaError_t 
#line 1391
cudaGraphExecMemcpyNodeSetParamsFromSymbol(::cudaGraphExec_t 
#line 1392
hGraphExec, ::cudaGraphNode_t 
#line 1393
node, void *
#line 1394
dst, const T &
#line 1395
symbol, ::size_t 
#line 1396
count, ::size_t 
#line 1397
offset, ::cudaMemcpyKind 
#line 1398
kind) 
#line 1399
{ 
#line 1400
return ::cudaGraphExecMemcpyNodeSetParamsFromSymbol(hGraphExec, node, dst, (const void *)(&symbol), count, offset, kind); 
#line 1401
} 
#line 1404
static __inline cudaError_t __stdcall cudaGraphExecUpdate(cudaGraphExec_t hGraphExec, cudaGraph_t hGraph, cudaGraphNode_t *hErrorNode_out, cudaGraphExecUpdateResult *updateResult_out) 
#line 1405
{ 
#line 1406
cudaGraphExecUpdateResultInfo resultInfo; 
#line 1407
cudaError_t status = cudaGraphExecUpdate(hGraphExec, hGraph, &resultInfo); 
#line 1408
if (hErrorNode_out) { 
#line 1409
(*hErrorNode_out) = (resultInfo.errorNode); 
#line 1410
}  
#line 1411
if (updateResult_out) { 
#line 1412
(*updateResult_out) = (resultInfo.result); 
#line 1413
}  
#line 1414
return status; 
#line 1415
} 
#line 1443
template< class T> static __inline ::cudaError_t 
#line 1444
cudaUserObjectCreate(::cudaUserObject_t *
#line 1445
object_out, T *
#line 1446
objectToWrap, unsigned 
#line 1447
initialRefcount, unsigned 
#line 1448
flags) 
#line 1449
{ 
#line 1450
return ::cudaUserObjectCreate(object_out, objectToWrap, [](void *
#line 1453
vpObj) { delete (reinterpret_cast< T *>(vpObj)); } , initialRefcount, flags); 
#line 1456
} 
#line 1458
template< class T> static __inline ::cudaError_t 
#line 1459
cudaUserObjectCreate(::cudaUserObject_t *
#line 1460
object_out, T *
#line 1461
objectToWrap, unsigned 
#line 1462
initialRefcount, ::cudaUserObjectFlags 
#line 1463
flags) 
#line 1464
{ 
#line 1465
return cudaUserObjectCreate(object_out, objectToWrap, initialRefcount, (unsigned)flags); 
#line 1466
} 
#line 1493 "C:/Program Files/NVIDIA GPU Computing Toolkit/CUDA/v12.3/bin/../include\\cuda_runtime.h"
template< class T> static __inline ::cudaError_t 
#line 1494
cudaGetSymbolAddress(void **
#line 1495
devPtr, const T &
#line 1496
symbol) 
#line 1498
{ 
#line 1499
return ::cudaGetSymbolAddress(devPtr, (const void *)(&symbol)); 
#line 1500
} 
#line 1525
template< class T> static __inline ::cudaError_t 
#line 1526
cudaGetSymbolSize(::size_t *
#line 1527
size, const T &
#line 1528
symbol) 
#line 1530
{ 
#line 1531
return ::cudaGetSymbolSize(size, (const void *)(&symbol)); 
#line 1532
} 
#line 1577
template< class T> static __inline ::cudaError_t 
#line 1578
cudaFuncSetCacheConfig(T *
#line 1579
func, ::cudaFuncCache 
#line 1580
cacheConfig) 
#line 1582
{ 
#line 1583
return ::cudaFuncSetCacheConfig((const void *)func, cacheConfig); 
#line 1584
} 
#line 1586
template< class T> static __inline ::cudaError_t 
#line 1587
cudaFuncSetSharedMemConfig(T *
#line 1588
func, ::cudaSharedMemConfig 
#line 1589
config) 
#line 1591
{ 
#line 1592
return ::cudaFuncSetSharedMemConfig((const void *)func, config); 
#line 1593
} 
#line 1625 "C:/Program Files/NVIDIA GPU Computing Toolkit/CUDA/v12.3/bin/../include\\cuda_runtime.h"
template< class T> __inline ::cudaError_t 
#line 1626
cudaOccupancyMaxActiveBlocksPerMultiprocessor(int *
#line 1627
numBlocks, T 
#line 1628
func, int 
#line 1629
blockSize, ::size_t 
#line 1630
dynamicSMemSize) 
#line 1631
{ 
#line 1632
return ::cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(numBlocks, (const void *)func, blockSize, dynamicSMemSize, 0); 
#line 1633
} 
#line 1677
template< class T> __inline ::cudaError_t 
#line 1678
cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int *
#line 1679
numBlocks, T 
#line 1680
func, int 
#line 1681
blockSize, ::size_t 
#line 1682
dynamicSMemSize, unsigned 
#line 1683
flags) 
#line 1684
{ 
#line 1685
return ::cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(numBlocks, (const void *)func, blockSize, dynamicSMemSize, flags); 
#line 1686
} 
#line 1691
class __cudaOccupancyB2DHelper { 
#line 1692
size_t n; 
#line 1694
public: __cudaOccupancyB2DHelper(size_t n_) : n(n_) { } 
#line 1695
size_t operator()(int) 
#line 1696
{ 
#line 1697
return n; 
#line 1698
} 
#line 1699
}; 
#line 1747
template< class UnaryFunction, class T> static __inline ::cudaError_t 
#line 1748
cudaOccupancyMaxPotentialBlockSizeVariableSMemWithFlags(int *
#line 1749
minGridSize, int *
#line 1750
blockSize, T 
#line 1751
func, UnaryFunction 
#line 1752
blockSizeToDynamicSMemSize, int 
#line 1753
blockSizeLimit = 0, unsigned 
#line 1754
flags = 0) 
#line 1755
{ 
#line 1756
::cudaError_t status; 
#line 1759
int device; 
#line 1760
::cudaFuncAttributes attr; 
#line 1763
int maxThreadsPerMultiProcessor; 
#line 1764
int warpSize; 
#line 1765
int devMaxThreadsPerBlock; 
#line 1766
int multiProcessorCount; 
#line 1767
int funcMaxThreadsPerBlock; 
#line 1768
int occupancyLimit; 
#line 1769
int granularity; 
#line 1772
int maxBlockSize = 0; 
#line 1773
int numBlocks = 0; 
#line 1774
int maxOccupancy = 0; 
#line 1777
int blockSizeToTryAligned; 
#line 1778
int blockSizeToTry; 
#line 1779
int blockSizeLimitAligned; 
#line 1780
int occupancyInBlocks; 
#line 1781
int occupancyInThreads; 
#line 1782
::size_t dynamicSMemSize; 
#line 1788
if (((!minGridSize) || (!blockSize)) || (!func)) { 
#line 1789
return cudaErrorInvalidValue; 
#line 1790
}  
#line 1796
status = ::cudaGetDevice(&device); 
#line 1797
if (status != (cudaSuccess)) { 
#line 1798
return status; 
#line 1799
}  
#line 1801
status = cudaDeviceGetAttribute(&maxThreadsPerMultiProcessor, cudaDevAttrMaxThreadsPerMultiProcessor, device); 
#line 1805
if (status != (cudaSuccess)) { 
#line 1806
return status; 
#line 1807
}  
#line 1809
status = cudaDeviceGetAttribute(&warpSize, cudaDevAttrWarpSize, device); 
#line 1813
if (status != (cudaSuccess)) { 
#line 1814
return status; 
#line 1815
}  
#line 1817
status = cudaDeviceGetAttribute(&devMaxThreadsPerBlock, cudaDevAttrMaxThreadsPerBlock, device); 
#line 1821
if (status != (cudaSuccess)) { 
#line 1822
return status; 
#line 1823
}  
#line 1825
status = cudaDeviceGetAttribute(&multiProcessorCount, cudaDevAttrMultiProcessorCount, device); 
#line 1829
if (status != (cudaSuccess)) { 
#line 1830
return status; 
#line 1831
}  
#line 1833
status = cudaFuncGetAttributes(&attr, func); 
#line 1834
if (status != (cudaSuccess)) { 
#line 1835
return status; 
#line 1836
}  
#line 1838
funcMaxThreadsPerBlock = (attr.maxThreadsPerBlock); 
#line 1844
occupancyLimit = maxThreadsPerMultiProcessor; 
#line 1845
granularity = warpSize; 
#line 1847
if (blockSizeLimit == 0) { 
#line 1848
blockSizeLimit = devMaxThreadsPerBlock; 
#line 1849
}  
#line 1851
if (devMaxThreadsPerBlock < blockSizeLimit) { 
#line 1852
blockSizeLimit = devMaxThreadsPerBlock; 
#line 1853
}  
#line 1855
if (funcMaxThreadsPerBlock < blockSizeLimit) { 
#line 1856
blockSizeLimit = funcMaxThreadsPerBlock; 
#line 1857
}  
#line 1859
blockSizeLimitAligned = (((blockSizeLimit + (granularity - 1)) / granularity) * granularity); 
#line 1861
for (blockSizeToTryAligned = blockSizeLimitAligned; blockSizeToTryAligned > 0; blockSizeToTryAligned -= granularity) { 
#line 1865
if (blockSizeLimit < blockSizeToTryAligned) { 
#line 1866
blockSizeToTry = blockSizeLimit; 
#line 1867
} else { 
#line 1868
blockSizeToTry = blockSizeToTryAligned; 
#line 1869
}  
#line 1871
dynamicSMemSize = blockSizeToDynamicSMemSize(blockSizeToTry); 
#line 1873
status = cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(&occupancyInBlocks, func, blockSizeToTry, dynamicSMemSize, flags); 
#line 1880
if (status != (cudaSuccess)) { 
#line 1881
return status; 
#line 1882
}  
#line 1884
occupancyInThreads = (blockSizeToTry * occupancyInBlocks); 
#line 1886
if (occupancyInThreads > maxOccupancy) { 
#line 1887
maxBlockSize = blockSizeToTry; 
#line 1888
numBlocks = occupancyInBlocks; 
#line 1889
maxOccupancy = occupancyInThreads; 
#line 1890
}  
#line 1894
if (occupancyLimit == maxOccupancy) { 
#line 1895
break; 
#line 1896
}  
#line 1897
}  
#line 1905
(*minGridSize) = (numBlocks * multiProcessorCount); 
#line 1906
(*blockSize) = maxBlockSize; 
#line 1908
return status; 
#line 1909
} 
#line 1943
template< class UnaryFunction, class T> static __inline ::cudaError_t 
#line 1944
cudaOccupancyMaxPotentialBlockSizeVariableSMem(int *
#line 1945
minGridSize, int *
#line 1946
blockSize, T 
#line 1947
func, UnaryFunction 
#line 1948
blockSizeToDynamicSMemSize, int 
#line 1949
blockSizeLimit = 0) 
#line 1950
{ 
#line 1951
return cudaOccupancyMaxPotentialBlockSizeVariableSMemWithFlags(minGridSize, blockSize, func, blockSizeToDynamicSMemSize, blockSizeLimit, 0); 
#line 1952
} 
#line 1989
template< class T> static __inline ::cudaError_t 
#line 1990
cudaOccupancyMaxPotentialBlockSize(int *
#line 1991
minGridSize, int *
#line 1992
blockSize, T 
#line 1993
func, ::size_t 
#line 1994
dynamicSMemSize = 0, int 
#line 1995
blockSizeLimit = 0) 
#line 1996
{ 
#line 1997
return cudaOccupancyMaxPotentialBlockSizeVariableSMemWithFlags(minGridSize, blockSize, func, ((::__cudaOccupancyB2DHelper)(dynamicSMemSize)), blockSizeLimit, 0); 
#line 1998
} 
#line 2027
template< class T> static __inline ::cudaError_t 
#line 2028
cudaOccupancyAvailableDynamicSMemPerBlock(::size_t *
#line 2029
dynamicSmemSize, T 
#line 2030
func, int 
#line 2031
numBlocks, int 
#line 2032
blockSize) 
#line 2033
{ 
#line 2034
return ::cudaOccupancyAvailableDynamicSMemPerBlock(dynamicSmemSize, (const void *)func, numBlocks, blockSize); 
#line 2035
} 
#line 2086
template< class T> static __inline ::cudaError_t 
#line 2087
cudaOccupancyMaxPotentialBlockSizeWithFlags(int *
#line 2088
minGridSize, int *
#line 2089
blockSize, T 
#line 2090
func, ::size_t 
#line 2091
dynamicSMemSize = 0, int 
#line 2092
blockSizeLimit = 0, unsigned 
#line 2093
flags = 0) 
#line 2094
{ 
#line 2095
return cudaOccupancyMaxPotentialBlockSizeVariableSMemWithFlags(minGridSize, blockSize, func, ((::__cudaOccupancyB2DHelper)(dynamicSMemSize)), blockSizeLimit, flags); 
#line 2096
} 
#line 2130
template< class T> static __inline ::cudaError_t 
#line 2131
cudaOccupancyMaxPotentialClusterSize(int *
#line 2132
clusterSize, T *
#line 2133
func, const ::cudaLaunchConfig_t *
#line 2134
config) 
#line 2135
{ 
#line 2136
return ::cudaOccupancyMaxPotentialClusterSize(clusterSize, (const void *)func, config); 
#line 2137
} 
#line 2173
template< class T> static __inline ::cudaError_t 
#line 2174
cudaOccupancyMaxActiveClusters(int *
#line 2175
numClusters, T *
#line 2176
func, const ::cudaLaunchConfig_t *
#line 2177
config) 
#line 2178
{ 
#line 2179
return ::cudaOccupancyMaxActiveClusters(numClusters, (const void *)func, config); 
#line 2180
} 
#line 2213
template< class T> __inline ::cudaError_t 
#line 2214
cudaFuncGetAttributes(::cudaFuncAttributes *
#line 2215
attr, T *
#line 2216
entry) 
#line 2218
{ 
#line 2219
return ::cudaFuncGetAttributes(attr, (const void *)entry); 
#line 2220
} 
#line 2275
template< class T> static __inline ::cudaError_t 
#line 2276
cudaFuncSetAttribute(T *
#line 2277
entry, ::cudaFuncAttribute 
#line 2278
attr, int 
#line 2279
value) 
#line 2281
{ 
#line 2282
return ::cudaFuncSetAttribute((const void *)entry, attr, value); 
#line 2283
} 
#line 2307
template< class T> static __inline ::cudaError_t __stdcall 
#line 2308
cudaFuncGetName(const char **
#line 2309
name, const T *
#line 2310
func) 
#line 2312
{ 
#line 2313
return ::cudaFuncGetName(name, (const void *)func); 
#line 2314
} 
#line 2330
template< class T> static __inline ::cudaError_t 
#line 2331
cudaGetKernel(::cudaKernel_t *
#line 2332
kernelPtr, const T *
#line 2333
entryFuncAddr) 
#line 2335
{ 
#line 2336
return ::cudaGetKernel(kernelPtr, (const void *)entryFuncAddr); 
#line 2337
} 
#line 2351 "C:/Program Files/NVIDIA GPU Computing Toolkit/CUDA/v12.3/bin/../include\\cuda_runtime.h"
#pragma warning(pop)
#line 64 "CMakeCUDACompilerId.cu"
const char *info_compiler = ("INFO:compiler[NVIDIA]"); 
#line 66
const char *info_simulate = ("INFO:simulate[MSVC]"); 
#line 345 "CMakeCUDACompilerId.cu"
const char info_version[] = {'I', 'N', 'F', 'O', ':', 'c', 'o', 'm', 'p', 'i', 'l', 'e', 'r', '_', 'v', 'e', 'r', 's', 'i', 'o', 'n', '[', (('0') + ((12 / 10000000) % 10)), (('0') + ((12 / 1000000) % 10)), (('0') + ((12 / 100000) % 10)), (('0') + ((12 / 10000) % 10)), (('0') + ((12 / 1000) % 10)), (('0') + ((12 / 100) % 10)), (('0') + ((12 / 10) % 10)), (('0') + (12 % 10)), '.', (('0') + ((3 / 10000000) % 10)), (('0') + ((3 / 1000000) % 10)), (('0') + ((3 / 100000) % 10)), (('0') + ((3 / 10000) % 10)), (('0') + ((3 / 1000) % 10)), (('0') + ((3 / 100) % 10)), (('0') + ((3 / 10) % 10)), (('0') + (3 % 10)), '.', (('0') + ((107 / 10000000) % 10)), (('0') + ((107 / 1000000) % 10)), (('0') + ((107 / 100000) % 10)), (('0') + ((107 / 10000) % 10)), (('0') + ((107 / 1000) % 10)), (('0') + ((107 / 100) % 10)), (('0') + ((107 / 10) % 10)), (('0') + (107 % 10)), ']', '\000'}; 
#line 374 "CMakeCUDACompilerId.cu"
const char info_simulate_version[] = {'I', 'N', 'F', 'O', ':', 's', 'i', 'm', 'u', 'l', 'a', 't', 'e', '_', 'v', 'e', 'r', 's', 'i', 'o', 'n', '[', (('0') + (((1934 / 100) / 10000000) % 10)), (('0') + (((1934 / 100) / 1000000) % 10)), (('0') + (((1934 / 100) / 100000) % 10)), (('0') + (((1934 / 100) / 10000) % 10)), (('0') + (((1934 / 100) / 1000) % 10)), (('0') + (((1934 / 100) / 100) % 10)), (('0') + (((1934 / 100) / 10) % 10)), (('0') + ((1934 / 100) % 10)), '.', (('0') + (((1934 % 100) / 10000000) % 10)), (('0') + (((1934 % 100) / 1000000) % 10)), (('0') + (((1934 % 100) / 100000) % 10)), (('0') + (((1934 % 100) / 10000) % 10)), (('0') + (((1934 % 100) / 1000) % 10)), (('0') + (((1934 % 100) / 100) % 10)), (('0') + (((1934 % 100) / 10) % 10)), (('0') + ((1934 % 100) % 10)), ']', '\000'}; 
#line 394 "CMakeCUDACompilerId.cu"
const char *info_platform = ("INFO:platform[Windows]"); 
#line 395
const char *info_arch = ("INFO:arch[x64]"); 
#line 399
const char *info_language_standard_default = ("INFO:standard_default[03]"); 
#line 415 "CMakeCUDACompilerId.cu"
const char *info_language_extensions_default = ("INFO:extensions_default[OFF]"); 
#line 426 "CMakeCUDACompilerId.cu"
int main(int argc, char *argv[]) 
#line 427
{ 
#line 428
int require = 0; 
#line 429
require += (info_compiler[argc]); 
#line 430
require += (info_platform[argc]); 
#line 432
require += (info_version[argc]); 
#line 435 "CMakeCUDACompilerId.cu"
require += (info_simulate[argc]); 
#line 438 "CMakeCUDACompilerId.cu"
require += (info_simulate_version[argc]); 
#line 440 "CMakeCUDACompilerId.cu"
require += (info_language_standard_default[argc]); 
#line 441
require += (info_language_extensions_default[argc]); 
#line 442
(void)argv; 
#line 443
return require; 
#line 444
} 
#line 1 "CMakeCUDACompilerId.cudafe1.stub.c"
#define _NV_ANON_NAMESPACE _GLOBAL__N__f1703299_22_CMakeCUDACompilerId_cu_bd57c623
#ifdef _NV_ANON_NAMESPACE
#endif
#pragma pack()
#line 1 "CMakeCUDACompilerId.cudafe1.stub.c"
#include "CMakeCUDACompilerId.cudafe1.stub.c"
#line 1 "CMakeCUDACompilerId.cudafe1.stub.c"
#undef _NV_ANON_NAMESPACE
