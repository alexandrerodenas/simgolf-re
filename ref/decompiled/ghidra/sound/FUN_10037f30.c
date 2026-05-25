/* Ghidra decompiled: sound.dll */
/* Function: FUN_10037f30 @ 0x10037F30 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10037f30(void *this,int param_1)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_10;
  
  if (param_1 < -0x40) {
    param_1 = -0x40;
  }
  else if (0x3f < param_1) {
    param_1 = 0x3f;
  }
  iVar4 = *(int *)((int)this + 0x50);
  *(int *)((int)this + 0x48) = param_1;
  if (param_1 != 0) {
    iVar2 = (param_1 < 0) + 0x3f;
    dVar1 = ((double)param_1 * *(double *)((int)this + 0x58)) / (double)iVar2;
    iVar2 = (iVar4 * param_1) / iVar2;
    local_10 = dVar1 + *(double *)((int)this + 0x58);
    dVar1 = *(double *)((int)this + 0x58) - dVar1;
    iVar3 = iVar2 + iVar4;
    iVar4 = iVar4 - iVar2;
    if (0x10000 < iVar3) {
      iVar3 = 0x10000;
    }
    if (_DAT_1005c5f8 < local_10) {
      local_10 = 1.0;
    }
    if (0x10000 < iVar4) {
      iVar4 = 0x10000;
    }
    if (_DAT_1005c5f8 < dVar1) {
      dVar1 = _DAT_1005c5f8;
    }
    *(int *)((int)this + 0x68) = iVar3;
    *(int *)((int)this + 0x78) = iVar4;
    *(double *)((int)this + 0x80) = dVar1;
    *(undefined4 *)((int)this + 0x70) = (undefined4)local_10;
    *(undefined4 *)((int)this + 0x74) = local_10._4_4_;
    return;
  }
  *(undefined4 *)((int)this + 0x70) = *(undefined4 *)((int)this + 0x58);
  *(undefined4 *)((int)this + 0x80) = *(undefined4 *)((int)this + 0x58);
  *(int *)((int)this + 0x68) = iVar4;
  *(int *)((int)this + 0x78) = iVar4;
  *(undefined4 *)((int)this + 0x74) = *(undefined4 *)((int)this + 0x5c);
  *(undefined4 *)((int)this + 0x84) = *(undefined4 *)((int)this + 0x5c);
  return;
}

