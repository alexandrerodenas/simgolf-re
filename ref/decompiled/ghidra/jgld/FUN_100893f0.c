/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100893f0 @ 0x100893F0 */


void __cdecl FUN_100893f0(undefined4 *param_1)

{
  int iVar1;
  HMODULE pHVar2;
  
  *param_1 = 0;
  pHVar2 = GetModuleHandleA((LPCSTR)0x0);
  if (((short)pHVar2->unused == 0x5a4d) && (pHVar2[0xf].unused != 0)) {
    iVar1 = pHVar2[0xf].unused;
    *(undefined1 *)param_1 = *(undefined1 *)((int)&pHVar2[6].unused + iVar1 + 2);
    *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)&pHVar2[6].unused + iVar1 + 3);
  }
  return;
}

