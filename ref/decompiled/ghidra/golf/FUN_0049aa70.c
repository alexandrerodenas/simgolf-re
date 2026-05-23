/* Ghidra decompiled: golf.exe */
/* Function: FUN_0049aa70 @ 0x0049AA70 */
/* Body size: 199 addresses */


void __fastcall FUN_0049aa70(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if ((*(uint *)(param_1 + 0xe8) & 0x40000000) == 0) {
    piVar1 = (int *)(param_1 + 100);
    uVar3 = (**(code **)(*(int *)(param_1 + 100) + 0x94))();
    if (100 < uVar3) {
      *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x40000000;
      (**(code **)(*piVar1 + 0x20))();
      return;
    }
    iVar4 = (**(code **)(*piVar1 + 0x88))();
    if (iVar4 != 0) {
      iVar2 = *(int *)(iVar4 + 0x18);
      if (*(int *)(param_1 + 0x60) != 0) {
        FUN_00497fc0(iVar2,*(int *)(iVar4 + 0x20) - iVar2,*(undefined4 *)(param_1 + 0xe4),0x100,0);
        (**(code **)(*piVar1 + 0x8c))(iVar4);
        return;
      }
      FUN_00499140(iVar2,*(int *)(iVar4 + 0x20) - iVar2,*(undefined4 *)(param_1 + 0xe4),0x100,0);
      (**(code **)(*piVar1 + 0x8c))(iVar4);
    }
  }
  else {
    uVar3 = (**(code **)(*(int *)(param_1 + 100) + 0x94))();
    if (uVar3 < 0x32) {
      *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) & 0xbfffffff;
      return;
    }
  }
  return;
}

