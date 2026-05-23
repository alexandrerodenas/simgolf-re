/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002c0d0 @ 0x1002C0D0 */
/* Body size: 74 addresses */


uint __fastcall FUN_1002c0d0(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
    uVar2 = (**(code **)(**(int **)(param_1 + 0x40) + 0x70))();
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar2 = uVar2 | 2;
  }
  uVar1 = *(uint *)(param_1 + 0x58);
  if ((uVar1 & 1) != 0) {
    uVar2 = uVar2 | 1;
  }
  if ((uVar1 & 8) != 0) {
    uVar2 = uVar2 | 0x40;
  }
  if ((uVar1 & 2) != 0) {
    uVar2 = uVar2 | 4;
  }
  if ((uVar1 & 4) != 0) {
    uVar2 = uVar2 | 0x10;
  }
  if ((uVar1 & 0x10) != 0) {
    uVar2 = uVar2 | 0x80;
  }
  if ((uVar1 & 0x20) != 0) {
    uVar2 = uVar2 | 0x100;
  }
  return uVar2;
}

