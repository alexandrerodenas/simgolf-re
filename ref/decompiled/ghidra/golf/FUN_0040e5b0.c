/* Ghidra decompiled: golf.exe */
/* Function: FUN_0040e5b0 @ 0x0040E5B0 */


char FUN_0040e5b0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1 >> 0x1f;
  iVar2 = param_1 / 200 + iVar1;
  iVar3 = iVar2 - iVar1;
  if (iVar2 == iVar1) {
    return '\0';
  }
  if (iVar3 < 3) {
    return '\x01';
  }
  if (iVar3 < 6) {
    return '\x02';
  }
  return (9 < iVar3) + '\x03';
}

