/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1003de30 @ 0x1003DE30 */


void __cdecl FUN_1003de30(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  void *this;
  int *piVar4;
  int *piVar5;
  void *extraout_ECX;
  void *extraout_ECX_00;
  
  piVar4 = param_1;
  piVar5 = (int *)FUN_1003e390((int)param_1);
  iVar1 = param_1[0x33];
  param_1[0x34] = iVar1;
  iVar2 = iVar1;
  puVar3 = param_2;
  this = extraout_ECX;
  param_1 = piVar5;
  if (0 < (int)piVar5) {
    do {
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        FUN_1003d9d0(this,piVar4,(byte *)*puVar3,(byte *)0x0);
        puVar3 = puVar3 + 1;
        this = extraout_ECX_00;
      }
      param_1 = (int *)((int)param_1 + -1);
      iVar2 = iVar1;
      puVar3 = param_2;
    } while (param_1 != (int *)0x0);
  }
  return;
}

