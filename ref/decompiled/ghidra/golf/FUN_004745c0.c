/* Ghidra decompiled: golf.exe */
/* Function: FUN_004745c0 @ 0x004745C0 */
/* Body size: 133 addresses */


undefined4 __fastcall FUN_004745c0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  
  FUN_00473ae0();
  if (param_1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = param_1 + 4;
  }
  piVar1 = (int *)(**(code **)(*DAT_0083ad50 + 0x80))(iVar3,1);
  *(int **)(param_1 + 4) = piVar1;
  (**(code **)(*piVar1 + 0x18))(0xff);
  iVar3 = **(int **)(param_1 + 4);
  puVar2 = (undefined4 *)FUN_00492450(1,DAT_0083acb4);
  iVar3 = (**(code **)(iVar3 + 4))(0,unaff_ESI,unaff_EBX,*puVar2);
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x10) = unaff_ESI;
    *(undefined4 *)(param_1 + 0x14) = unaff_EBX;
    *(undefined4 *)(param_1 + 0x18) = unaff_ESI;
    *(undefined4 *)(param_1 + 0x1c) = unaff_EBX;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return 0;
}

