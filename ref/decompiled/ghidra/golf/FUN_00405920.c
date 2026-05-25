/* Ghidra decompiled: golf.exe */
/* Function: FUN_00405920 @ 0x00405920 */


int FUN_00405920(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = FUN_0045c1e0(0x65);
  uVar4 = uVar1 - 0x32;
  iVar2 = FUN_00467150(uVar4);
  iVar3 = (uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f);
  if (iVar3 < 0x14) {
    iVar3 = iVar3 / 2;
  }
  else if (iVar3 < 0x28) {
    iVar3 = iVar3 + -10;
  }
  else {
    iVar3 = iVar3 * 2 + -0x32;
  }
  if (iVar2 != 1) {
    iVar3 = -iVar3;
  }
  return iVar3;
}

