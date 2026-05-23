/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047c360 @ 0x0047C360 */
/* Body size: 206 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0047c360(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_10 [16];
  
  uVar2 = param_3;
  uVar1 = param_2;
  if ((param_1[0x27] & 0x200000U) != 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x28) & 8) != 0) {
    return;
  }
  if (param_4 != 0) {
    (**(code **)(*param_1 + 0xb0))(param_2,param_3);
    if ((int *)param_1[0x18] == (int *)0x0) {
      return;
    }
    (**(code **)(*(int *)param_1[0x18] + 0x1c))();
    return;
  }
  _DAT_0083ab2c = param_1;
  if ((code *)param_1[0x94] != (code *)0x0) {
    (*(code *)param_1[0x94])(param_2,param_3);
  }
  iVar3 = FUN_00492b10(uVar1,uVar2,&param_2,&param_3,local_10);
  if ((iVar3 < 0) || (iVar3 = (**(code **)(*param_1 + 0x38))(param_2,param_3,local_10), iVar3 == 0))
  {
    (**(code **)(*param_1 + 0x80))(uVar1,uVar2);
  }
  if ((int *)param_1[0xb] == (int *)0x0) {
    return;
  }
  (**(code **)(*(int *)param_1[0xb] + 0x1c))();
  return;
}

