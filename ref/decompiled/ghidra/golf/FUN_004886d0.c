/* Ghidra decompiled: golf.exe */
/* Function: FUN_004886d0 @ 0x004886D0 */
/* Body size: 238 addresses */


void __fastcall FUN_004886d0(int param_1)

{
  FUN_00480610();
  *(undefined4 *)(param_1 + 0x5ec) = DAT_004e4480;
  *(undefined4 *)(param_1 + 0x5f0) = DAT_004e4484;
  *(undefined4 *)(param_1 + 0x574) = 0;
  *(undefined4 *)(param_1 + 0x5e4) = 0;
  *(undefined4 *)(param_1 + 0x614) = 0;
  *(undefined4 *)(param_1 + 0x5e8) = 0;
  *(undefined4 *)(param_1 + 0x5ac) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5b0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x624) = 0;
  *(undefined4 *)(param_1 + 0x628) = 0;
  *(undefined4 *)(param_1 + 0x62c) = 0;
  *(undefined4 *)(param_1 + 0x60c) = DAT_0083b604;
  *(undefined4 *)(param_1 + 0x5fc) = DAT_004e443c;
  *(undefined4 *)(param_1 + 0x600) = DAT_004e4440;
  *(undefined4 *)(param_1 + 0x604) = DAT_004e4444;
  *(undefined4 *)(param_1 + 0x608) = DAT_004e4448;
  *(undefined4 *)(param_1 + 0x610) = DAT_0083b608;
  *(undefined4 *)(param_1 + 0x61c) = 0;
  *(undefined4 *)(param_1 + 0x618) = DAT_004e444c;
  if (*(int *)(param_1 + 0x5f4) != 0) {
    FUN_004a5007(*(int *)(param_1 + 0x5f4));
    *(undefined4 *)(param_1 + 0x5f4) = 0;
  }
  if (*(int *)(param_1 + 0x5f8) != 0) {
    FUN_004a5007(*(int *)(param_1 + 0x5f8));
    *(undefined4 *)(param_1 + 0x5f8) = 0;
  }
  *(undefined4 *)(param_1 + 0x620) = 0;
  return;
}

