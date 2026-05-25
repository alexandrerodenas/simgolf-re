/* Ghidra decompiled: golf.exe */
/* Function: FUN_00492690 @ 0x00492690 */


void __fastcall FUN_00492690(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b826b;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  iVar3 = *(int *)(param_1 + 0x54) + 10;
  *(int *)(param_1 + 0x54) = iVar3;
  piVar1 = operator_new(iVar3 * 0x20 + 4);
  local_4 = 0;
  if (piVar1 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = piVar1 + 1;
    *piVar1 = iVar3;
    FUN_004a55d2(piVar4,0x20,iVar3,&LAB_00492650,&LAB_00492d70);
  }
  iVar3 = 0;
  local_4 = 0xffffffff;
  if (0 < *(int *)(param_1 + 0x58)) {
    piVar1 = piVar4 + 5;
    do {
      iVar2 = *(int *)(param_1 + 0x50) + (-0x14 - (int)piVar4);
      iVar3 = iVar3 + 1;
      piVar1[-4] = *(int *)((int)piVar1 + iVar2 + 4);
      piVar1[-3] = *(int *)((int)piVar1 + iVar2 + 8);
      piVar1[-2] = *(int *)((int)piVar1 + iVar2 + 0xc);
      piVar1[-1] = *(int *)((int)piVar1 + iVar2 + 0x10);
      *piVar1 = *(int *)((int)piVar1 + iVar2 + 0x14);
      piVar1[1] = *(int *)((int)piVar1 + iVar2 + 0x18);
      piVar1[2] = *(int *)((int)piVar1 + iVar2 + 0x1c);
      piVar1 = piVar1 + 8;
    } while (iVar3 < *(int *)(param_1 + 0x58));
  }
  DAT_0083d348 = 1;
  if (*(undefined4 **)(param_1 + 0x50) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x50))(3);
  }
  DAT_0083d348 = 0;
  *(int **)(param_1 + 0x50) = piVar4;
  *unaff_FS_OFFSET = local_c;
  return;
}

