/* Ghidra decompiled: sound.dll */
/* Function: FUN_10010860 @ 0x10010860 */


undefined4 __fastcall FUN_10010860(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int local_8;
  uint *local_4;
  
  local_8 = 0;
  local_4 = (uint *)0x0;
  iVar1 = (**(code **)(**(int **)(param_1 + 0x60) + 0x10))(*(int **)(param_1 + 0x60),&local_4);
  if (iVar1 != 0) {
    return 6;
  }
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    uVar2 = *(uint *)(param_1 + 0x30);
  }
  else {
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfe;
    uVar2 = (int)&local_8 + *(int *)(param_1 + 0x40);
    *(int **)(param_1 + 0x28) = &local_8;
    *(int **)(param_1 + 0x24) = &local_8;
    if (*(uint *)(param_1 + 0x78) <= uVar2) {
      uVar2 = uVar2 - *(uint *)(param_1 + 0x78);
    }
  }
  uVar3 = local_8 + uVar2;
  if (*(uint *)(param_1 + 0x78) <= uVar3) {
    uVar3 = uVar3 - *(uint *)(param_1 + 0x78);
  }
  *(int **)(param_1 + 0x24) = &local_8;
  *(uint *)(param_1 + 0x30) = uVar3;
  *local_4 = uVar2;
  return 0;
}

