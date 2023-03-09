/**
  ******************************************************************************
  * @file    sine_model_data_params.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Wed Mar  8 22:44:28 2023
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */

#include "sine_model_data_params.h"


/**  Activations Section  ****************************************************/
ai_handle g_sine_model_activations_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(NULL),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};




/**  Weights Section  ********************************************************/
AI_ALIGNED(32)
const ai_u64 s_sine_model_weights_array_u64[161] = {
  0x3eef18e43eec87a6U, 0x3ea48966bec4edeeU, 0x3fa869733f05c904U, 0x3f94042dbefb54cbU,
  0x3e19cc1f3fb490e5U, 0xbe00d11f3ee84f32U, 0xbf876d37bf0a719aU, 0xbe5f73bebdb57130U,
  0x3e6f3876be845cccU, 0xbdea52503e90b1b8U, 0xbef2c0a73ea6771bU, 0xbdd399703f48cba7U,
  0x3eec929b3e4afb26U, 0x3ee3253bbd077590U, 0xbf173834bf16dc34U, 0x3e362251be341172U,
  0xbeda79b23f119db8U, 0x3eaceeebU, 0x3f1f777aU, 0xbc0a89a3U,
  0xbe9fd849bf0a7a0dU, 0xbf5ff2c400000000U, 0x0U, 0x3f07d14f00000000U,
  0x3ec3217bbe66d481U, 0x3eb855bdbe1daa98U, 0x3d7c68e03eabbb27U, 0x3d28c620be42835aU,
  0xbec3993e3e082942U, 0xbd8ae351bebfa688U, 0x3ecd37cb3ded9cecU, 0xbe439099bec5b8feU,
  0x3d469268becc6af3U, 0xbe4b84a83e03e56eU, 0xbea64927bdb4ca46U, 0xbe71b4ddbe232a50U,
  0xbeac66cbbe911f07U, 0x3e465291be6da0dfU, 0xbe82ddf63e9b1e33U, 0x3e7d99f83eac49ffU,
  0x3e019d02be24e4d4U, 0xbe312858beab282aU, 0xbeb8dae4beacd3c6U, 0xbd96bfd43d4ed120U,
  0xbe6484e2beb4198aU, 0xbebb0900bdaa2ac0U, 0x3e4920f23ec9979bU, 0xbe2ee5b4bdbb2294U,
  0x3a9ad4003e215d9aU, 0xbe870ac23edd2687U, 0xbed82013bed7e18fU, 0x3c12fe80bde4ce00U,
  0xbe1147143eada739U, 0x3d9820143e41961eU, 0xbeb529263de505dcU, 0xbeac2c64be4a7c92U,
  0x3e21c263be7cb8acU, 0xbe24fd8c3e8d3b92U, 0xbdbd0c343dd6cb5dU, 0xbec5bd5dbe05bd2dU,
  0xbe33155c3ec0a4ecU, 0xbd9897603ec85db9U, 0x3e9279a5be280d8cU, 0xbea3c9dbbe9de688U,
  0xbf8fdad63eb153b8U, 0x3df9dd143ee46898U, 0xbcf98c803e5e2db1U, 0x3dee57d43dcbfeebU,
  0xbf18e1c9bfb5b72dU, 0xbf172ec23e990435U, 0xbde72cfc3dff134cU, 0x3e890598beb22149U,
  0x3e8a0a313dc69ee4U, 0x3e40aa72be0b4636U, 0x3e20ebeabed51eaaU, 0x3ec2aff73d978f24U,
  0xbe130524be86fe4cU, 0xbd4a53203d4b1e38U, 0x3eb99a9fbdb8ad4cU, 0x3e89ae27bdd229c4U,
  0xbe20a00abd36fe20U, 0x3ea658673e4d626cU, 0x3e07fa06be405b0fU, 0xbe229d003c318e62U,
  0xbeb23bdf3ddcc385U, 0x3f0e8e083e5b6fcaU, 0xbd8021d83edd376bU, 0x3e3f94313c629660U,
  0x3e8201b53d582e7fU, 0xbe8b6b84be3832afU, 0x3e94b27bbeb2e023U, 0xbd0578b83e57ee23U,
  0xbd81299c3e231025U, 0x3e9eed813df9332cU, 0x3c6430e0bd0174f0U, 0xbf069c793e63dbbeU,
  0x3dcd499c3ed6be4aU, 0xbd9abf24be90e81cU, 0x3edba9a73e6a4be5U, 0x3e84905fbedd2068U,
  0xbea42f74be9c788eU, 0xbdc336443eda95d7U, 0x3ed75b993d76d820U, 0xbe31c3193cd415c0U,
  0xbe5d90023cdc946dU, 0x3c32d6003ed7d22aU, 0xbd343fb0be753ab4U, 0xbe1daf56bda26672U,
  0xbe626b4bbec745dcU, 0xbe0977c9bd22a2f0U, 0x3ea9554b3b8d68c0U, 0xbe02ff1ebda24288U,
  0x3cd503913e3643a2U, 0x3e8ac71b3e3a0701U, 0xbd0214f03e84af07U, 0xbdbf6d683dc2bc4bU,
  0x3dfb8923bf30e832U, 0x3d9162703e029c9eU, 0xbe997afabe559561U, 0xbb2b92183ed6c449U,
  0x3e1fe01fbe7fcb91U, 0xbeda08183edaaa8bU, 0x3e45a642be4491d5U, 0x3eb072a33e0db9a1U,
  0xbeed3b663dd8a81dU, 0xbe737b193cb38cf0U, 0xbda1edc4be0dfb2aU, 0x3e6b6e54beba5967U,
  0xbdae2c533ebb31e7U, 0x3b2ef1803e73bf8cU, 0xbe3ab5903ed8a29aU, 0xbd4f59d8bf5e25f7U,
  0x3e4459babe4d2989U, 0xbf2ab91dbdca51d8U, 0x3e230872bb0c7900U, 0xbd4aaf0e3d31e2e0U,
  0x3e003e66becb7fc4U, 0xbed8b218be45b735U, 0xbdb55e38bd95f2a0U, 0xbe9e78223cf83170U,
  0xbecdc52cbed53856U, 0x3e9eaf23bd560808U, 0x3d31e940bb025d00U, 0xbd3770e0bd944a8cU,
  0xbed57fe2bd87c678U, 0x3e69a95a3ebd3fbcU, 0x3ea502333d73519dU, 0xbdb760ccbd6b10deU,
  0x3e99ef3b3dcf6b88U, 0x3e78d9b73ea013d3U, 0xbe8ad3b83ec95885U, 0xbee4413f3eb8e9a7U,
  0xbdad40dabd24f1dcU, 0xbdf9ea02U, 0xbe874af000000000U, 0x3f0565adU,
  0xbf161c24beb3ea72U, 0xbc8a630cbd27aee8U, 0x3d78505c3ec1512dU, 0x3ec3a02fU,
  0xbcf991b1U,
};


ai_handle g_sine_model_weights_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(s_sine_model_weights_array_u64),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};

