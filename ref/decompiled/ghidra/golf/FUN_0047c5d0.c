/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047c5d0 @ 0x0047C5D0 */
/* Body size: 231 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_0047c5d0(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (((param_1[0x27] & 0x200000U) != 0) || ((*(byte *)(param_1 + 0x28) & 8) != 0)) {
    return 0;
  }
  if (param_3 != 0xd) {
    if (param_3 == 0x1b) {
      (**(code **)(*param_1 + 0xd4))(0xfffffffe);
      goto LAB_0047c627;
    }
    if (param_3 != 0x1000d) goto LAB_0047c627;
  }
  (**(code **)(*param_1 + 0xd4))(0xffffffff);
LAB_0047c627:
  if (param_1[0x50] != 0) {
    if (param_1[0x4e] == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = *(int **)(param_1[0x4f] + 4);
    }
    if (param_3 == 9) {
      (**(code **)(*piVar3 + 0x128))();
    }
    else {
      iVar1 = FUN_0047c5d0(param_2,param_3);
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  iVar1 = 0;
  _DAT_0083ab2c = param_1;
  if ((code *)param_1[0x97] != (code *)0x0) {
    iVar1 = (*(code *)param_1[0x97])(param_2,param_3);
  }
  iVar2 = (**(code **)(*param_1 + 0x8c))(param_2,param_3);
  if ((int *)param_1[0xe] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xe] + 0x1c))();
  }
  return iVar1 + iVar2;
}

