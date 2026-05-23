/* Ghidra decompiled: golf.exe */
/* Function: FUN_00484a40 @ 0x00484A40 */
/* Body size: 181 addresses */


void __thiscall FUN_00484a40(int *param_1,undefined4 param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  
  uVar2 = param_3 & 4;
  if ((uVar2 == 0) || ((param_3 & 0x80) == 0)) {
    FUN_00484b80(param_2);
    puVar1 = (uint *)(param_1 + 0x16);
    *puVar1 = 0;
    if (uVar2 != 0) {
      *puVar1 = *puVar1 | 2;
      if (param_1[0x10] == 0) {
        FUN_00484c20(param_2);
      }
      if ((int *)param_1[0x10] != (int *)0x0) {
        (**(code **)(*(int *)param_1[0x10] + 0x6c))(param_3);
      }
    }
    if ((param_3 & 1) != 0) {
      *puVar1 = *puVar1 | 1;
    }
    if (((param_3 & 0x10) != 0) && (uVar2 == 0)) {
      *puVar1 = *puVar1 | 4;
    }
    if ((param_3 & 2) != 0) {
      (**(code **)(*param_1 + 0x48))(1);
    }
    if ((param_3 & 0x40) != 0) {
      *puVar1 = *puVar1 | 8;
    }
    if ((param_3 & 0x80) != 0) {
      *puVar1 = *puVar1 | 0x10;
    }
    if ((param_3 & 0x100) != 0) {
      *puVar1 = *puVar1 | 0x20;
    }
    if ((param_3 & 0x400) != 0) {
      *puVar1 = *puVar1 | 0x40;
    }
  }
  return;
}

