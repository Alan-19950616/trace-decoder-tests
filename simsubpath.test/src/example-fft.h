#ifndef CFFT_IO_H
#define CFFT_IO_H
#include <stddef.h>
#include <stdint.h>
#include <complex.h>

uint32_t _Alignas(4096) twi_00064[] = {
  0x3f800000, 0x80000000,
  0x3f800000, 0x80000000,
  0x3f800000, 0x80000000,
  0x3f800000, 0x80000000,
  0x3f800000, 0x80000000,
  0x3f800000, 0x80000000,
  0x3f800000, 0x80000000,
  0x3f800000, 0x80000000,
  0x3f7b14be, 0xbe47c5c2,
  0x3f6c835e, 0xbec3ef15,
  0x3f54db31, 0xbf0e39da,
  0x3f3504f3, 0xbf3504f3,
  0x3f0e39da, 0xbf54db31,
  0x3ec3ef15, 0xbf6c835e,
  0x3e47c5c2, 0xbf7b14be,
  0x3f800000, 0x80000000,
  0x3f6c835e, 0xbec3ef15,
  0x3f3504f3, 0xbf3504f3,
  0x3ec3ef15, 0xbf6c835e,
  0x248d3132, 0xbf800000,
  0xbec3ef15, 0xbf6c835e,
  0xbf3504f3, 0xbf3504f3,
  0xbf6c835e, 0xbec3ef15,
  0x3f800000, 0x80000000,
  0x3f54db31, 0xbf0e39da,
  0x3ec3ef15, 0xbf6c835e,
  0xbe47c5c2, 0xbf7b14be,
  0xbf3504f3, 0xbf3504f3,
  0xbf7b14be, 0xbe47c5c2,
  0xbf6c835e, 0x3ec3ef15,
  0xbf0e39da, 0x3f54db31,
  0x3f800000, 0x80000000,
  0x3f7ec46d, 0xbdc8bd36,
  0x3f7b14be, 0xbe47c5c2,
  0x3f74fa0b, 0xbe94a031,
  0x3f6c835e, 0xbec3ef15,
  0x3f61c598, 0xbef15aea,
  0x3f54db31, 0xbf0e39da,
  0x3f45e403, 0xbf226799,
  0x3f3504f3, 0xbf3504f3,
  0x3f226799, 0xbf45e403,
  0x3f0e39da, 0xbf54db31,
  0x3ef15aea, 0xbf61c598,
  0x3ec3ef15, 0xbf6c835e,
  0x3e94a031, 0xbf74fa0b,
  0x3e47c5c2, 0xbf7b14be,
  0x3dc8bd36, 0xbf7ec46d,
  0x248d3132, 0xbf800000,
  0xbdc8bd36, 0xbf7ec46d,
  0xbe47c5c2, 0xbf7b14be,
  0xbe94a031, 0xbf74fa0b,
  0xbec3ef15, 0xbf6c835e,
  0xbef15aea, 0xbf61c598,
  0xbf0e39da, 0xbf54db31,
  0xbf226799, 0xbf45e403,
  0xbf3504f3, 0xbf3504f3,
  0xbf45e403, 0xbf226799,
  0xbf54db31, 0xbf0e39da,
  0xbf61c598, 0xbef15aea,
  0xbf6c835e, 0xbec3ef15,
  0xbf74fa0b, 0xbe94a031,
  0xbf7b14be, 0xbe47c5c2,
  0xbf7ec46d, 0xbdc8bd36,
};
uint32_t _Alignas(4096) test_input_00064[] = {
  0x3da6a7bb, 0x3f041427,
  0x3f28afb1, 0xbf357b57,
  0xbf4bf7b3, 0x3f7d2564,
  0x3ee609ba, 0xbf232993,
  0xbf611008, 0x3f24495d,
  0x3e9424ae, 0xbef52648,
  0xbcc552f1, 0x3e1f6492,
  0x3e5500fb, 0x3d90d237,
  0x3f67c7e5, 0x3ecacb40,
  0x3f3c9fb7, 0x3f53ea37,
  0xbe1d83b4, 0x3f41dc05,
  0x3d5ce663, 0xbd55e8a3,
  0x3eaa4a3c, 0x3e89809c,
  0xbc75db0b, 0xbf78efee,
  0xbeca776e, 0x3f69beb8,
  0xbf557442, 0xbe88dc44,
  0x3f0b1e68, 0xbe48412b,
  0x3e01bf02, 0xbf4b96b3,
  0x3eef0c28, 0x3f6b7f23,
  0xbe04ae4a, 0x3c2c8c8a,
  0x3f423cba, 0x3f3c33c4,
  0xbe707f4f, 0x3c85d321,
  0xbf7af59d, 0x3ed78992,
  0x3e6b9c2d, 0x3f3ab6f1,
  0x3e9de0ec, 0x3d9f1861,
  0xbf5f9846, 0xbf5c7871,
  0x3d5fb15e, 0x3ef7cc75,
  0xbebb873e, 0xbf21949f,
  0x3f639e2c, 0x3e950239,
  0xbe93a1fb, 0x3eb5511d,
  0xbf095e09, 0x3f773080,
  0xbeea4d40, 0xbf7db488,
  0x3f03d0f2, 0x3f145b44,
  0xbde0f32b, 0xbf5b30be,
  0xbf0f74c8, 0xbcc8cfb0,
  0xbf507997, 0x3f0018e7,
  0xbeef4d9f, 0x3db9b13b,
  0x3e074809, 0xbeb254b8,
  0x3d80fe7d, 0x3e681066,
  0xbf61a924, 0x3d017780,
  0x3e7311ec, 0x3f738759,
  0xbf37ac88, 0xbd204115,
  0xbd77446b, 0x3f66735a,
  0xbeacbcd6, 0x3dc2b795,
  0x3f45a982, 0x3ece6c9f,
  0xbee4f182, 0xbd52f592,
  0x3f265d80, 0x3f410709,
  0xbe8edaaf, 0x3edb5eac,
  0x3f4f36b5, 0xbf464479,
  0x3f2e6dcd, 0x3da37a22,
  0xbeaa4e0d, 0x3e3ea341,
  0x3f727406, 0xbea179b0,
  0xbefb7326, 0xbe8a10de,
  0x3e8156ac, 0xbce54fa8,
  0x3db591dc, 0xbde418ad,
  0x3e43287e, 0x3e82cda6,
  0xbe8526b7, 0xbe89dbdf,
  0x3ed7ebb8, 0xbe721a4b,
  0x3ec8181b, 0xbf3e429d,
  0xbf5bf924, 0x3f161fcd,
  0xbec80743, 0xbf3199cb,
  0x3ec1db39, 0x3d861435,
  0x3ed3c402, 0x3eab61c3,
  0xbf2003d4, 0xbe801399,
};
uint32_t _Alignas(4096) test_output_00064[] = {
  0x40a6a7bb, 0x42041427,
  0xc22003d4, 0xc1801399,
  0x41d3c402, 0x41ab61c3,
  0x41c1db39, 0x40861435,
  0xc1c80743, 0xc23199cb,
  0xc25bf924, 0x42161fcd,
  0x41c8181b, 0xc23e429d,
  0x41d7ebb8, 0xc1721a4b,
  0xc18526b7, 0xc189dbdf,
  0x4143287e, 0x4182cda6,
  0x40b591dc, 0xc0e418ad,
  0x418156ac, 0xbfe54fa8,
  0xc1fb7326, 0xc18a10de,
  0x42727406, 0xc1a179b0,
  0xc1aa4e0d, 0x413ea341,
  0x422e6dcd, 0x40a37a22,
  0x424f36b5, 0xc2464479,
  0xc18edaaf, 0x41db5eac,
  0x42265d80, 0x42410709,
  0xc1e4f182, 0xc052f592,
  0x4245a982, 0x41ce6c9f,
  0xc1acbcd6, 0x40c2b795,
  0xc077446b, 0x4266735a,
  0xc237ac88, 0xc0204115,
  0x417311ec, 0x42738759,
  0xc261a924, 0x40017780,
  0x4080fe7d, 0x41681066,
  0x41074809, 0xc1b254b8,
  0xc1ef4d9f, 0x40b9b13b,
  0xc2507997, 0x420018e7,
  0xc20f74c8, 0xbfc8cfb0,
  0xc0e0f32b, 0xc25b30be,
  0x4203d0f2, 0x42145b44,
  0xc1ea4d40, 0xc27db488,
  0xc2095e09, 0x42773080,
  0xc193a1fb, 0x41b5511d,
  0x42639e2c, 0x41950239,
  0xc1bb873e, 0xc221949f,
  0x405fb15e, 0x41f7cc75,
  0xc25f9846, 0xc25c7871,
  0x419de0ec, 0x409f1861,
  0x416b9c2d, 0x423ab6f1,
  0xc27af59d, 0x41d78992,
  0xc1707f4f, 0x3f85d321,
  0x42423cba, 0x423c33c4,
  0xc104ae4a, 0x3f2c8c8a,
  0x41ef0c28, 0x426b7f23,
  0x4101bf02, 0xc24b96b3,
  0x420b1e68, 0xc148412b,
  0xc2557442, 0xc188dc44,
  0xc1ca776e, 0x4269beb8,
  0xbf75db0b, 0xc278efee,
  0x41aa4a3c, 0x4189809c,
  0x405ce663, 0xc055e8a3,
  0xc11d83b4, 0x4241dc05,
  0x423c9fb7, 0x4253ea37,
  0x4267c7e5, 0x41cacb40,
  0x415500fb, 0x4090d237,
  0xbfc552f1, 0x411f6492,
  0x419424ae, 0xc1f52648,
  0xc2611008, 0x4224495d,
  0x41e609ba, 0xc2232993,
  0xc24bf7b3, 0x427d2564,
  0x4228afb1, 0xc2357b57,
};
double bound = 0x1.635f6f0f2eebfp-13;

void cfft_64(float complex *buf0, float complex *buf1, float complex *pTwi);

#endif // CFFT_IO_H