/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002c68a @ 0x3002C68A */


undefined4 __cdecl FUN_3002c68a(undefined4 param_1)

{
  DAT_3004f748 = HeapAlloc(DAT_3004f750,0,0x140);
  if (DAT_3004f748 == (LPVOID)0x0) {
    return 0;
  }
  DAT_3004f740 = 0;
  DAT_3004f744 = 0;
  DAT_3004f73c = DAT_3004f748;
  DAT_3004f74c = param_1;
  DAT_3004f734 = 0x10;
  return 1;
}

