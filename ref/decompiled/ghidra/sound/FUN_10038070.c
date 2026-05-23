/* Ghidra decompiled: sound.dll */
/* Function: FUN_10038070 @ 0x10038070 */
/* Body size: 141 addresses */


void __thiscall FUN_10038070(void *this,uint param_1)

{
  uint uVar1;
  float10 extraout_ST0;
  float10 fVar2;
  longlong lVar3;
  
  if (DAT_100b4a20 != (int *)0x0) {
    uVar1 = (**(code **)(*DAT_100b4a20 + 0x40))();
    if ((float10)uVar1 < (float10)param_1) {
      lVar3 = __ftol();
      fVar2 = (float10)*(double *)((int)this + 0x58) / extraout_ST0;
      *(int *)((int)this + 0xec) = (int)lVar3;
      *(double *)((int)this + 0xf0) = (double)fVar2;
      *(double *)((int)this + 0xf8) = (double)fVar2;
      return;
    }
    *(undefined4 *)((int)this + 0xec) = *(undefined4 *)((int)this + 0x50);
    *(undefined8 *)((int)this + 0xf0) = *(undefined8 *)((int)this + 0x58);
    *(undefined8 *)((int)this + 0xf8) = *(undefined8 *)((int)this + 0x58);
  }
  return;
}

