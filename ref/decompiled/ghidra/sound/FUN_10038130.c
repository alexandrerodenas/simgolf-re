/* Ghidra decompiled: sound.dll */
/* Function: FUN_10038130 @ 0x10038130 */


void __thiscall FUN_10038130(void *this,uint param_1)

{
  uint uVar1;
  float10 extraout_ST0;
  float10 fVar2;
  longlong lVar3;
  
  if (DAT_100b4a20 != (int *)0x0) {
    uVar1 = (**(code **)(*DAT_100b4a20 + 0x40))();
    if ((float10)param_1 <= (float10)uVar1) {
      fVar2 = (float10)*(double *)((int)this + 0x58);
      *(int *)((int)this + 0xec) = -*(int *)((int)this + 0x50);
    }
    else {
      lVar3 = __ftol();
      fVar2 = (float10)*(double *)((int)this + 0x58) / extraout_ST0;
      *(int *)((int)this + 0xec) = -(int)lVar3;
    }
    *(double *)((int)this + 0xf0) = (double)-fVar2;
    *(double *)((int)this + 0xf8) = (double)-fVar2;
    *(undefined4 *)((int)this + 0x60) = *(undefined4 *)((int)this + 0x58);
    *(undefined4 *)((int)this + 100) = *(undefined4 *)((int)this + 0x5c);
  }
  return;
}

