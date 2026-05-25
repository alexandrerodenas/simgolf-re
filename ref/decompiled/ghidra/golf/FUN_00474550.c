/* Ghidra decompiled: golf.exe */
/* Function: FUN_00474550 @ 0x00474550 */


void __fastcall FUN_00474550(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  
  FUN_00473ae0();
  if (param_1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = param_1 + 4;
  }
  piVar1 = (int *)(**(code **)(*DAT_0083ad50 + 0x80))(iVar2,1);
  *(int **)(param_1 + 4) = piVar1;
  (**(code **)(*piVar1 + 0x18))(0xff);
  iVar2 = (**(code **)(**(int **)(param_1 + 4) + 4))(0,unaff_ESI,unaff_EBX,8,1,DAT_0083acb4);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = unaff_ESI;
    *(undefined4 *)(param_1 + 0x14) = unaff_EBX;
    *(undefined4 *)(param_1 + 0x18) = unaff_ESI;
    *(undefined4 *)(param_1 + 0x1c) = unaff_EBX;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}

