/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047b670 @ 0x0047B670 */
/* Body size: 420 addresses */


void __thiscall FUN_0047b670(int *param_1,byte param_2)

{
  undefined4 uStack_10;
  undefined4 uStack_c;
  int iStack_8;
  int iStack_4;
  
  if (((param_1[0x28] & 1U) == 0) && ((param_1[0x28] & 4U) != 0)) {
    param_1[0x88] = param_1[0x88] | 2;
    if ((*(byte *)(param_1 + 0x27) & 2) == 0) {
      DAT_0083ab40 = 0;
      DAT_0083ab44 = 0;
    }
    param_1[0x28] = param_1[0x28] | 1;
    if ((param_2 & 4) == 0) {
      FUN_0047e120();
    }
    FUN_0047e450();
    if ((param_2 & 2) == 0) {
      FUN_0047bc60(param_1[0x6d] - param_1[0x6b],param_1[0x6e] - param_1[0x6c]);
    }
    if ((param_2 & 1) == 0) {
      (**(code **)(*param_1 + 0x58))();
    }
    if ((int *)param_1[0x57] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x57] + 0x120))();
    }
    if (((param_1[0x50] != 0) && (param_1[0x4e] != 0)) &&
       (*(int **)(param_1[0x4f] + 4) != (int *)0x0)) {
      (**(code **)(**(int **)(param_1[0x4f] + 4) + 0xf0))(1);
    }
    if ((*(byte *)(param_1 + 0x28) & 2) == 0) {
      iStack_8 = param_1[0x6d] - param_1[0x6b];
      iStack_4 = param_1[0x6e] - param_1[0x6c];
      uStack_10 = 0;
      uStack_c = 0;
      FUN_0047b0d0(&uStack_10);
    }
    else {
      iStack_8 = param_1[0x71] - param_1[0x6f];
      iStack_4 = param_1[0x72] - param_1[0x70];
      uStack_10 = 0;
      uStack_c = 0;
      FUN_0047b120(&uStack_10);
    }
    if (DAT_0083ad50 != (int *)0x0) {
      (**(code **)(*DAT_0083ad50 + 0x30))(&uStack_10);
    }
    if ((int *)param_1[3] != (int *)0x0) {
      (**(code **)(*(int *)param_1[3] + 0x1c))();
    }
    if (DAT_0083aa98 == param_1) {
      FUN_00479a80(&DAT_0083aa78);
    }
  }
  return;
}

