/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047abc0 @ 0x0047ABC0 */
/* Body size: 27 addresses */


uint FUN_0047abc0(void)

{
  SHORT SVar1;
  uint uVar2;
  
  SVar1 = GetAsyncKeyState(1);
  uVar2 = GetSystemMetrics(0x17);
  return uVar2 ^ (int)SVar1 >> 0xf;
}

