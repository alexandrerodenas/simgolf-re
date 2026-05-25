/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000f1c0 @ 0x1000F1C0 */


void __thiscall FUN_1000f1c0(void *this,uint param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  if (0x7f < param_1) {
    param_1 = 0x7f;
  }
  uVar5 = 0;
  lVar4 = __ftol();
  uVar2 = (uint)lVar4;
  if (uVar2 == 0) {
    uVar3 = 0xffffd8f0;
  }
  else {
    uVar5 = 0;
    lVar4 = __ftol();
    uVar3 = (undefined4)lVar4;
    param_1 = uVar2;
  }
  piVar1 = *(int **)((int)this + 0x60);
  *(undefined4 *)((int)this + 0xc4) = uVar3;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x3c))(piVar1,uVar3,param_1,uVar5);
  }
  return;
}

