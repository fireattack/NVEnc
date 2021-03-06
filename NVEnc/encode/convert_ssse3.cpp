﻿//  -----------------------------------------------------------------------------------------
//    拡張 x264/x265 出力(GUI) Ex  v1.xx/2.xx/3.xx by rigaya
//  -----------------------------------------------------------------------------------------
//   ソースコードについて
//   ・無保証です。
//   ・本ソースコードを使用したことによるいかなる損害・トラブルについてrigayaは責任を負いません。
//   以上に了解して頂ける場合、本ソースコードの使用、複製、改変、再頒布を行って頂いて構いません。
//  -----------------------------------------------------------------------------------------

#define USE_SSE2  1
#define USE_SSSE3 1
#define USE_SSE41 0

#include "convert_simd.h"

void convert_yuy2_to_nv12_i_ssse3_mod16(void *frame, CONVERT_CF_DATA *pixel_data, const int width, const int height, const int thread_id, const int thread_n) {
    return convert_yuy2_to_nv12_i_simd<TRUE>(frame, pixel_data, width, height, thread_id, thread_n);
}
void convert_yuy2_to_nv12_i_ssse3(void *frame, CONVERT_CF_DATA *pixel_data, const int width, const int height, const int thread_id, const int thread_n) {
    return convert_yuy2_to_nv12_i_simd<FALSE>(frame, pixel_data, width, height, thread_id, thread_n);
}
void convert_yuy2_to_yv12_i_ssse3_mod32(void *frame, CONVERT_CF_DATA *pixel_data, const int width, const int height, const int thread_id, const int thread_n) {
    return convert_yuy2_to_yv12_i_simd<TRUE>(frame, pixel_data, width, height, thread_id, thread_n);
}
void convert_yuy2_to_yv12_i_ssse3(void *frame, CONVERT_CF_DATA *pixel_data, const int width, const int height, const int thread_id, const int thread_n) {
    return convert_yuy2_to_yv12_i_simd<FALSE>(frame, pixel_data, width, height, thread_id, thread_n);
}

void convert_yc48_to_nv12_16bit_ssse3_mod8(void *frame, CONVERT_CF_DATA *pixel_data, const int width, const int height, const int thread_id, const int thread_n) {
    return convert_yc48_to_nv12_16bit_simd<TRUE>(frame, pixel_data, width, height, thread_id, thread_n);
}
void convert_yc48_to_nv12_16bit_ssse3(void *frame, CONVERT_CF_DATA *pixel_data, const int width, const int height, const int thread_id, const int thread_n) {
    return convert_yc48_to_nv12_16bit_simd<FALSE>(frame, pixel_data, width, height, thread_id, thread_n);
}
void convert_yc48_to_nv12_i_16bit_ssse3_mod8(void *frame, CONVERT_CF_DATA *pixel_data, const int width, const int height, const int thread_id, const int thread_n) {
    return convert_yc48_to_nv12_i_16bit_simd<TRUE>(frame, pixel_data, width, height, thread_id, thread_n);
}
void convert_yc48_to_nv12_i_16bit_ssse3(void *frame, CONVERT_CF_DATA *pixel_data, const int width, const int height, const int thread_id, const int thread_n) {
    return convert_yc48_to_nv12_i_16bit_simd<FALSE>(frame, pixel_data, width, height, thread_id, thread_n);
}
void convert_yc48_to_yv12_16bit_ssse3_mod8(void *frame, CONVERT_CF_DATA *pixel_data, const int width, const int height, const int thread_id, const int thread_n) {
    return convert_yc48_to_yv12_16bit_simd<TRUE>(frame, pixel_data, width, height, thread_id, thread_n);
}
void convert_yc48_to_yv12_16bit_ssse3(void *frame, CONVERT_CF_DATA *pixel_data, const int width, const int height, const int thread_id, const int thread_n) {
    return convert_yc48_to_yv12_16bit_simd<FALSE>(frame, pixel_data, width, height, thread_id, thread_n);
}
void convert_yc48_to_yv12_i_16bit_ssse3_mod8(void *frame, CONVERT_CF_DATA *pixel_data, const int width, const int height, const int thread_id, const int thread_n) {
    return convert_yc48_to_yv12_i_16bit_simd<TRUE>(frame, pixel_data, width, height, thread_id, thread_n);
}
void convert_yc48_to_yv12_i_16bit_ssse3(void *frame, CONVERT_CF_DATA *pixel_data, const int width, const int height, const int thread_id, const int thread_n) {
    return convert_yc48_to_yv12_i_16bit_simd<FALSE>(frame, pixel_data, width, height, thread_id, thread_n);
}
void convert_yc48_to_nv16_16bit_ssse3_mod8(void *frame, CONVERT_CF_DATA *pixel_data, const int width, const int height, const int thread_id, const int thread_n) {
    return convert_yc48_to_nv16_16bit_simd<TRUE>(frame, pixel_data, width, height, thread_id, thread_n);
}
void convert_yc48_to_nv16_16bit_ssse3(void *frame, CONVERT_CF_DATA *pixel_data, const int width, const int height, const int thread_id, const int thread_n) {
    return convert_yc48_to_nv16_16bit_simd<FALSE>(frame, pixel_data, width, height, thread_id, thread_n);
}

void sort_to_rgb_ssse3(void *frame, CONVERT_CF_DATA *pixel_data, const int width, const int height, const int thread_id, const int thread_n) {
    sort_to_rgb_simd(frame, pixel_data, width, height, thread_id, thread_n);
}
