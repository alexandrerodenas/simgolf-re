/* Ghidra decompiled: golf.exe */
/* Function: FUN_00492920 @ 0x00492920 */
/* Body size: 135 addresses */


void __thiscall FUN_00492920(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = *unaff_FS_OFFSET;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b82cb;
  *unaff_FS_OFFSET = &local_c;
  FUN_00492830();
  piVar1 = operator_new(param_2 * 0x20 + 4);
  local_4 = 0;
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = piVar1 + 1;
    *piVar1 = param_2;
    FUN_004a55d2(piVar2,0x20,param_2,&LAB_00492650,&LAB_00492d70);
  }
  *(int **)(param_1 + 0x50) = piVar2;
  if (piVar2 != (int *)0x0) {
    *(int *)(param_1 + 0x54) = param_2;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}

