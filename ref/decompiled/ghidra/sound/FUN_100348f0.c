/* Ghidra decompiled: sound.dll */
/* Function: FUN_100348f0 @ 0x100348F0 */


undefined4 __thiscall FUN_100348f0(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  float10 extraout_ST0;
  float10 fVar4;
  longlong lVar5;
  
  if ((*(byte *)((int)this + 0x58) & 1) == 0) {
    return 0xb;
  }
  if (0x10 < param_1) {
    return 10;
  }
  iVar2 = param_1 * 0x110;
  *(byte *)((int)this + iVar2 + 0x2d4) = *(byte *)(iVar2 + 0x2d4 + (int)this) & 0xf1;
  *(undefined4 *)((int)this + iVar2 + 0x2c0) = 0;
  *(undefined4 *)((int)this + iVar2 + 0x328) = *(undefined4 *)((int)this + iVar2 + 0x330);
  *(undefined4 *)((int)this + iVar2 + 0x254) = *(undefined4 *)((int)this + iVar2 + 0x250);
  *(undefined4 *)((int)this + iVar2 + 0x2c4) = 0;
  *(undefined4 *)((int)this + iVar2 + 0x2f8) = 0;
  *(undefined4 *)((int)this + iVar2 + 0x32c) = *(undefined4 *)((int)this + iVar2 + 0x334);
  *(undefined8 *)((int)this + iVar2 + 0x340) = *(undefined8 *)((int)this + 5000);
  *(undefined4 *)((int)this + iVar2 + 0x2fc) = *(undefined4 *)((int)this + 0x22c);
  *(undefined4 *)((int)this + iVar2 + 0x2f8) = 0;
  *(int *)((int)this + iVar2 + 0x300) = (int)this + 0x230;
  *(byte *)((int)this + iVar2 + 0x2d4) = *(byte *)((int)this + iVar2 + 0x2d4) & 0xfb;
  uVar1 = *(uint *)((int)this + 0x1c0);
  if (DAT_100b4a20 != (int *)0x0) {
    uVar3 = (**(code **)(*DAT_100b4a20 + 0x40))();
    if ((float10)uVar1 <= (float10)uVar3) {
      fVar4 = (float10)*(double *)((int)this + iVar2 + 0x290);
      *(undefined4 *)((int)this + iVar2 + 0x324) = *(undefined4 *)((int)this + iVar2 + 0x288);
    }
    else {
      lVar5 = __ftol();
      fVar4 = (float10)*(double *)((int)this + iVar2 + 0x290) / extraout_ST0;
      *(int *)((int)this + iVar2 + 0x324) = (int)lVar5;
    }
    *(double *)((int)this + iVar2 + 0x328) = (double)fVar4;
    *(double *)((int)this + iVar2 + 0x330) = (double)fVar4;
  }
  *(uint *)((int)this + 0x58) =
       (1 << ((byte)param_1 & 0x1f) & 0xffffU) << 0xc | *(uint *)((int)this + 0x58) & 0xffffffef;
  *(byte *)((int)this + iVar2 + 0x2cc) = *(byte *)((int)this + iVar2 + 0x2cc) | 1;
  return 0;
}

