/* Ghidra decompiled: golf.exe */
/* Function: FUN_004ae600 @ 0x004AE600 */


void FUN_004ae600(int *param_1,int param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  if (param_1[4] != 100) {
    *(undefined4 *)(*param_1 + 0x14) = 0x12;
    *(int *)(*param_1 + 0x18) = param_1[4];
    (**(code **)*param_1)(param_1);
  }
  if (param_1[param_2 + 0x10] == 0) {
    iVar1 = FUN_004afab0(param_1);
    param_1[param_2 + 0x10] = iVar1;
  }
  iVar1 = 0;
  do {
    iVar2 = (param_4 * *param_3 + 0x32) / 100;
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    else if (0x7fff < iVar2) {
      iVar2 = 0x7fff;
    }
    if ((param_5 != 0) && (0xff < iVar2)) {
      iVar2 = 0xff;
    }
    iVar1 = iVar1 + 2;
    param_3 = param_3 + 1;
    *(short *)(param_1[param_2 + 0x10] + -2 + iVar1) = (short)iVar2;
  } while (iVar1 < 0x80);
  *(undefined4 *)(param_1[param_2 + 0x10] + 0x80) = 0;
  return;
}

