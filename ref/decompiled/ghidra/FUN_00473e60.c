/* Ghidra decompiled: golf.exe */
/* Function: FUN_00473e60 @ 0x00473E60 */
/* Body size: 248 addresses */


int __thiscall FUN_00473e60(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBX;
  int unaff_ESI;
  int unaff_EDI;
  int unaff_retaddr;
  undefined1 local_c [4];
  undefined1 local_8 [4];
  int local_4;
  
  if (*(int *)(param_1 + 8) == 0) {
    if (param_2 == 0) {
      return 0x10;
    }
    if ((*(int *)(param_1 + 4) != 0) && (*(int *)(param_2 + 4) != 0)) {
      (**(code **)(*DAT_0083ad50 + 0xa0))(local_c,&local_4,local_8);
      if (param_2 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(param_2 + 4);
      }
      iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x44))
                        (*(undefined4 *)(param_2 + 4),
                         (*(int *)(param_1 + 0x20) * unaff_EDI) / unaff_ESI + local_4,
                         (*(int *)(param_1 + 0x24) * unaff_EBX) / unaff_ESI + unaff_retaddr,uVar2);
      return iVar1;
    }
    iVar1 = 7;
  }
  else {
    iVar1 = FUN_00475840(*(int *)(param_1 + 8),0,10,0xec,0);
    if (iVar1 == 0) {
      iVar1 = FUN_00475b60(param_2,param_3,param_4);
      FUN_00474cb0();
      return iVar1;
    }
  }
  return iVar1;
}

