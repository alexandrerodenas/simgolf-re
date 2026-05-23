/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10046abc @ 0x10046ABC */
/* Body size: 47 addresses */


void __cdecl FUN_10046abc(LPVOID param_1)

{
  uint *puVar1;
  
  if (param_1 != (LPVOID)0x0) {
    puVar1 = (uint *)FUN_100482f7((int)param_1);
    if (puVar1 != (uint *)0x0) {
      FUN_10048322(puVar1,(uint)param_1);
      return;
    }
    HeapFree(DAT_100593dc,0,param_1);
  }
  return;
}

