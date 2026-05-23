/* Ghidra decompiled: golf.exe */
/* Function: FUN_004ac169 @ 0x004AC169 */
/* Body size: 89 addresses */


undefined4 FUN_004ac169(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  bool bVar2;
  
  InterlockedIncrement((LONG *)&DAT_0084100c);
  bVar2 = DAT_00841008 != 0;
  if (bVar2) {
    InterlockedDecrement((LONG *)&DAT_0084100c);
    FUN_004a79b2(0x13);
  }
  uVar1 = FUN_004ac1c2(param_1,param_2);
  if (bVar2) {
    FUN_004a7a13(0x13);
  }
  else {
    InterlockedDecrement((LONG *)&DAT_0084100c);
  }
  return uVar1;
}

