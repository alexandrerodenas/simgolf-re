/* Ghidra decompiled: golf.exe */
/* Function: FUN_004832e0 @ 0x004832E0 */
/* Body size: 49 addresses */


undefined4 __thiscall FUN_004832e0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_004833f0(param_2);
  if (*(int *)(iVar1 * 0x10 + param_1 + 8) != param_2) {
    return 0xb;
  }
  FUN_00486dc0();
  return 0;
}

