/* Ghidra decompiled: golf.exe */
/* Function: FUN_004ab5c1 @ 0x004AB5C1 */


uint FUN_004ab5c1(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_004ab60c();
  uVar1 = uVar1 & ~param_2 | param_1 & param_2;
  FUN_004ab69e(uVar1);
  return uVar1;
}

