/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a70b5 @ 0x004A70B5 */
/* Body size: 100 addresses */


void FUN_004a70b5(int param_1)

{
  uint uVar1;
  undefined *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  FUN_004a9874(param_1);
  FUN_004a99a0(param_1);
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffffcf;
  if (uVar1 == 0xffffffff) {
    puVar2 = &DAT_004e4d60;
  }
  else {
    puVar2 = (undefined *)((&DAT_00842040)[(int)uVar1 >> 5] + (uVar1 & 0x1f) * 0x24);
  }
  puVar2[4] = puVar2[4] & 0xfd;
  if ((*(uint *)(param_1 + 0xc) & 0x80) != 0) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffc;
  }
  FUN_004a95bb(uVar1,0,0);
  FUN_004a98c6(param_1);
  return;
}

