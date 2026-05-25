/* Ghidra decompiled: golf.exe */
/* Function: FUN_00473cb0 @ 0x00473CB0 */


int __thiscall FUN_00473cb0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_ESI;
  int unaff_EDI;
  int iVar3;
  int iVar4;
  int local_c;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  if (param_2 == 0) {
    return 0x10;
  }
  if ((*(int *)(param_1 + 4) == 0) || (*(int *)(param_2 + 4) == 0)) {
    iVar1 = 7;
  }
  else {
    if (*(int *)(param_1 + 8) == 0) {
      (**(code **)(*DAT_0083ad50 + 0xa0))(local_4,local_8,&local_c);
      iVar1 = param_2;
      iVar3 = param_3;
      iVar4 = param_4;
      (**(code **)(*DAT_0083ad50 + 0x9c))(param_2,param_3,param_4);
      if (param_2 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(param_2 + 4);
      }
      (**(code **)(**(int **)(param_1 + 4) + 0x44))
                (*(undefined4 *)(unaff_EDI + 4),
                 (*(int *)(param_1 + 0x20) * param_2) / param_4 + unaff_ESI,
                 (*(int *)(param_1 + 0x24) * param_3) / param_4 + local_c,uVar2);
      (**(code **)(*DAT_0083ad50 + 0x9c))(iVar4,iVar3,iVar1);
      return 0;
    }
    iVar1 = FUN_00475840(*(int *)(param_1 + 8),0,10,0xec,0);
    if (iVar1 == 0) {
      iVar1 = FUN_00475b60(param_2,param_3,param_4);
      FUN_00474cb0();
      return iVar1;
    }
  }
  return iVar1;
}

