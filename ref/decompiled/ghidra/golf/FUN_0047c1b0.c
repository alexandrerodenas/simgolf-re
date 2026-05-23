/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047c1b0 @ 0x0047C1B0 */
/* Body size: 219 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0047c1b0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_10 [16];
  
  iVar2 = param_4;
  uVar1 = param_3;
  if ((param_1[0x27] & 0x200000U) != 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x28) & 8) != 0) {
    return;
  }
  if ((param_4 == 0) && (_DAT_0083ab2c = param_1, (code *)param_1[0x92] != (code *)0x0)) {
    (*(code *)param_1[0x92])(param_2,param_3);
  }
  if (DAT_0083ab04 != (code *)0x0) {
    (*DAT_0083ab04)(param_2,uVar1);
  }
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0xa8))(param_2,uVar1);
    if ((int *)param_1[0x16] == (int *)0x0) {
      return;
    }
    (**(code **)(*(int *)param_1[0x16] + 0x1c))();
    return;
  }
  iVar2 = FUN_00492b10(param_2,uVar1,&param_3,&param_4,auStack_10);
  if ((iVar2 < 0) ||
     (iVar2 = (**(code **)(*param_1 + 0x40))(param_3,param_4,auStack_10), iVar2 == 0)) {
    (**(code **)(*param_1 + 0x78))(param_2,uVar1);
  }
  if ((int *)param_1[9] == (int *)0x0) {
    return;
  }
  (**(code **)(*(int *)param_1[9] + 0x1c))();
  return;
}

