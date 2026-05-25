/* Ghidra decompiled: sound.dll */
/* Function: FUN_10029420 @ 0x10029420 */


undefined4 __thiscall FUN_10029420(void *this,undefined4 param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  
  piVar1 = (int *)0x0;
  piVar4 = DAT_100b5070;
  if (*(int *)((int)this + 0x14) == 0) {
    return 2;
  }
  while (piVar4 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar4 + 0x70))();
    if (((uVar2 & 1) == 0) || (uVar2 = (**(code **)(*piVar4 + 0x70))(), (uVar2 & 4) != 0)) {
      piVar4 = (int *)(**(code **)(*piVar4 + 100))();
    }
    else {
      piVar3 = (int *)(**(code **)(*piVar4 + 100))();
      (**(code **)(*piVar4 + 0x14))();
      if (piVar1 == (int *)0x0) {
        piVar4[0x12] = 0;
        piVar4[0x13] = 0;
        piVar1 = piVar4;
        piVar4 = piVar3;
      }
      else {
        piVar1[0x13] = (int)piVar4;
        piVar4[0x12] = (int)piVar1;
        piVar1 = piVar4;
        piVar4 = piVar3;
      }
    }
  }
  (**(code **)(**(int **)((int)this + 0x14) + 0x1c))(param_1);
  while (piVar1 != (int *)0x0) {
    piVar4 = (int *)(**(code **)(*piVar1 + 0x68))();
    piVar1[0x13] = 0;
    piVar1[0x12] = 0;
    (**(code **)(*piVar1 + 0x10))(piVar1[0x14]);
    piVar1 = piVar4;
  }
  return 0;
}

