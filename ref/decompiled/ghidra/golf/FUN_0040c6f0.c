/* Ghidra decompiled: golf.exe */
/* Function: FUN_0040c6f0 @ 0x0040C6F0 */
/* Body size: 46 addresses */


undefined4 FUN_0040c6f0(ushort param_1,ushort param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = DAT_00834170 + (DAT_00834170 >> 0x1f & 0x3ffU);
  lVar1 = CONCAT44(iVar2 >> 0x1f,iVar2 >> 10);
  *(ushort *)((int)&DAT_00568600 + (int)(lVar1 % 500) * 2) = param_2 | param_1;
  return (int)(lVar1 / 500);
}

