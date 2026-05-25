/* Ghidra decompiled: sound.dll */
/* Function: FUN_10035340 @ 0x10035340 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10035340(void *this,int param_1)

{
  int iVar1;
  undefined4 local_4;
  
  if (param_1 < -0x40) {
    param_1 = -0x40;
  }
  else if (0x3f < param_1) {
    param_1 = 0x3f;
  }
  local_4 = *(int *)((int)this + 0x1d8);
  *(int *)((int)this + 0x224) = param_1;
  if (param_1 == 0) {
    *(int *)((int)this + 0x1f8) = local_4;
    *(int *)((int)this + 0x1e8) = local_4;
    *(undefined4 *)((int)this + 0x200) = *(undefined4 *)((int)this + 0x1e0);
    *(undefined4 *)((int)this + 0x1f0) = *(undefined4 *)((int)this + 0x1e0);
    *(undefined4 *)((int)this + 0x204) = *(undefined4 *)((int)this + 0x1e4);
    *(undefined4 *)((int)this + 500) = *(undefined4 *)((int)this + 0x1e4);
    return;
  }
  iVar1 = (local_4 * param_1) / (int)((param_1 < 0) + 0x3f);
  param_1 = iVar1 + local_4;
  local_4 = local_4 - iVar1;
  if (0x10000 < param_1) {
    param_1 = 0x10000;
  }
  if (0x10000 < local_4) {
    local_4 = 0x10000;
  }
  *(int *)((int)this + 0x1e8) = local_4;
  *(int *)((int)this + 0x1f8) = param_1;
  *(double *)((int)this + 0x200) = (double)param_1 * _DAT_1005c5e8;
  *(double *)((int)this + 0x1f0) = (double)local_4 * _DAT_1005c5e8;
  return;
}

