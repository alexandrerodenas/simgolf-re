/* Ghidra decompiled: sound.dll */
/* Function: FUN_10034c80 @ 0x10034C80 */
/* Body size: 227 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10034c80(void *this,int param_1,int param_2,uint param_3)

{
  ulonglong uVar1;
  double dVar2;
  double dVar3;
  
  if (param_2 == -1) {
    param_2 = *(int *)((int)this + 0x1d8);
  }
  if (param_1 == -1) {
    param_1 = *(int *)((int)this + 0x1d8);
  }
  dVar2 = (double)param_1 * _DAT_1005c5e8;
  *(double *)((int)this + 0x1d0) = dVar2;
  dVar3 = _DAT_1005b498;
  if (param_2 != 0) {
    dVar3 = (double)param_2 * _DAT_1005c5e8;
  }
  *(double *)((int)this + 0x1e0) = dVar3;
  if (DAT_100b49ec == (uint *)0x0) {
    return;
  }
  if (param_3 <= *DAT_100b49ec) {
    *(int *)((int)this + 0x1c4) = param_2 - param_1;
    *(uint *)((int)this + 0x5c) = *(uint *)((int)this + 0x5c) | 0x10;
    *(double *)((int)this + 0x1c8) = (double)(param_2 - param_1);
    return;
  }
  uVar1 = (ulonglong)param_3 / (ulonglong)*DAT_100b49ec;
  *(double *)((int)this + 0x1c8) = (dVar3 - dVar2) / (double)uVar1;
  *(int *)((int)this + 0x1c4) = (int)((uint)(param_2 - param_1) / uVar1);
  *(uint *)((int)this + 0x5c) = *(uint *)((int)this + 0x5c) | 0x10;
  return;
}

