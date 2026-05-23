/* Ghidra decompiled: golf.exe */
/* Function: FUN_004741b0 @ 0x004741B0 */
/* Body size: 169 addresses */


undefined4 __thiscall FUN_004741b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_ESI;
  int unaff_EDI;
  int unaff_retaddr;
  int local_8;
  int local_4;
  
  iVar1 = param_2;
  if (param_2 == 0) {
    return 0x10;
  }
  if ((*(int *)(param_1 + 4) != 0) && (*(int *)(param_2 + 4) != 0)) {
    (**(code **)(*DAT_0083ad50 + 0xa0))(&param_2,&local_4,&local_8);
    if (param_3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_3 + 4);
    }
    uVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x78))
                      (*(undefined4 *)(iVar1 + 4),
                       (*(int *)(param_1 + 0x20) * local_8) / unaff_EDI + local_4,
                       (*(int *)(param_1 + 0x24) * unaff_ESI) / unaff_EDI + unaff_retaddr,param_2,
                       uVar2);
    return uVar2;
  }
  return 7;
}

