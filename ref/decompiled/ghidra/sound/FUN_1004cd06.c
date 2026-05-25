/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004cd06 @ 0x1004CD06 */


void __cdecl FUN_1004cd06(uint *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if (0 < param_2) {
    piVar2 = &param_2;
    iVar3 = param_2;
    do {
      piVar1 = piVar2 + 1;
      piVar2 = piVar2 + 1;
      FUN_1004a020(param_1,(uint *)*piVar1);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

