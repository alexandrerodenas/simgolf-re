/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10048208 @ 0x10048208 */


undefined4 __cdecl FUN_10048208(int param_1)

{
  int iVar1;
  
  DAT_100593dc = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_100593dc != (HANDLE)0x0) {
    iVar1 = FUN_100482b9();
    if (iVar1 != 0) {
      return 1;
    }
    HeapDestroy(DAT_100593dc);
  }
  return 0;
}

