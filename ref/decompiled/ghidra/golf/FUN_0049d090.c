/* Ghidra decompiled: golf.exe */
/* Function: FUN_0049d090 @ 0x0049D090 */


undefined4 __thiscall FUN_0049d090(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_0049d0e0();
  }
  iVar1 = FUN_00474820(param_2);
  if (iVar1 != 0) {
    return 1;
  }
  FUN_0049d100(s__Nil__004e49f4);
  *(undefined4 *)(param_1 + 0x18) = 1;
  return 0;
}

