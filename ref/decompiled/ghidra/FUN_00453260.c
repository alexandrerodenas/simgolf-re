/* Ghidra decompiled: golf.exe */
/* Function: FUN_00453260 @ 0x00453260 */
/* Body size: 58 addresses */


int FUN_00453260(int param_1)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = (int)(short)(&DAT_0057956e)[param_1 * 0x80] % 10;
  uVar1 = *(ushort *)(&DAT_00579570 + param_1 * 0x100);
  if ((uVar1 & 1) != 0) {
    iVar2 = iVar2 + 0x14;
  }
  if ((uVar1 & 2) != 0) {
    iVar2 = iVar2 + 0x1e;
  }
  if ((uVar1 & 4) != 0) {
    iVar2 = iVar2 + 0x2d;
  }
  return iVar2;
}

