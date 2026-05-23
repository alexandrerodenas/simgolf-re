/* Ghidra decompiled: sound.dll */
/* Function: FUN_10048ea5 @ 0x10048EA5 */
/* Body size: 136 addresses */


float10 __cdecl FUN_10048ea5(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  
  iVar1 = FUN_10048f55(param_2);
  if (iVar1 != 0) {
    FUN_1004917e();
    iVar1 = FUN_1004becb();
    if (iVar1 == 0) {
      FUN_10048f2d(param_1);
    }
    return (float10)(double)CONCAT44(in_stack_00000020,in_stack_0000001c);
  }
  FUN_1004917e();
  FUN_10048f2d(param_1);
  return (float10)(double)CONCAT44(in_stack_00000020,in_stack_0000001c);
}

