/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001b0d0 @ 0x1001B0D0 */


undefined4 __thiscall FUN_1001b0d0(void *this,undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = 0x80;
  do {
    this = (void *)((int)this + 4);
    if (*(undefined4 **)this == param_1) {
      *(int *)this = 0;
    }
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = param_1[0x510];
  piVar2 = param_1 + 0x510;
  for (iVar3 = 0; (iVar1 != 0 && (iVar3 < 3)); iVar3 = iVar3 + 1) {
    if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar2)(1);
    }
    *piVar2 = 0;
    iVar1 = piVar2[1];
    piVar2 = piVar2 + 1;
  }
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(1);
  }
  return 0;
}

