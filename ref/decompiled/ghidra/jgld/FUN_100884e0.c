/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100884e0 @ 0x100884E0 */


bool __cdecl FUN_100884e0(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 + 0xfU & 0xfffffff0;
  if (uVar1 < 0x781) {
    DAT_10125784 = uVar1;
  }
  return uVar1 < 0x781;
}

