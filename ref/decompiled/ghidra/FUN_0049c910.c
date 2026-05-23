/* Ghidra decompiled: golf.exe */
/* Function: FUN_0049c910 @ 0x0049C910 */
/* Body size: 47 addresses */


void __fastcall FUN_0049c910(int param_1)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0xb8) & 0x8000) == 0) {
    return;
  }
  if ((*(uint *)(param_1 + 0xb8) & 0x10) == 0) {
    iVar1 = FUN_0049ccc0();
    if (iVar1 != 0) {
      return;
    }
    iVar1 = FUN_0049cae0();
    if (iVar1 != 0) {
      return;
    }
  }
  FUN_0049cb20();
  return;
}

