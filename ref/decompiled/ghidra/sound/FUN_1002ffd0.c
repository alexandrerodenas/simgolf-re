/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002ffd0 @ 0x1002FFD0 */


void __fastcall FUN_1002ffd0(int param_1)

{
  DWORD DVar1;
  
  DVar1 = timeGetTime();
  *(DWORD *)(param_1 + 0x104) = DVar1;
  return;
}

