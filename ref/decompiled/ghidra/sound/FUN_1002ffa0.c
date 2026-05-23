/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002ffa0 @ 0x1002FFA0 */
/* Body size: 17 addresses */


void __fastcall FUN_1002ffa0(int param_1)

{
  DWORD DVar1;
  
  DVar1 = timeGetTime();
  *(DWORD *)(param_1 + 0x100) = DVar1;
  return;
}

