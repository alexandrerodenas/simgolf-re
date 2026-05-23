/* Ghidra decompiled: sound.dll */
/* Function: FUN_1003a210 @ 0x1003A210 */
/* Body size: 262 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_1003a210(void *this,int param_1)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  double local_10;
  
  if ((param_1 < -0x4b0) || (0x4b0 < param_1)) {
    param_1 = param_1 % 0x4b0;
  }
  thunk_FUN_1002bff0(this,param_1);
  iVar2 = param_1 / 100;
  iVar5 = param_1 % 100;
  if (iVar5 < 0) {
    iVar5 = -iVar5;
  }
  iVar6 = iVar2 + 0xc;
  local_10 = 0.0;
  iVar3 = (**(code **)(*(int *)this + 0xcc))();
  if (iVar3 == 0) {
    iVar3 = *(int *)(&DAT_1005c608 + iVar6 * 4);
    local_10 = *(double *)(&DAT_1005c6d0 + iVar6 * 8);
  }
  else {
    iVar3 = *(int *)(&DAT_1005c66c + iVar6 * 4);
  }
  iVar4 = iVar2 + 0xb;
  if (-1 < param_1) {
    iVar4 = iVar2 + 0xd;
  }
  dVar1 = (*(double *)(&DAT_1005c6d0 + iVar4 * 8) - *(double *)(&DAT_1005c6d0 + iVar6 * 8)) *
          (double)iVar5 * _DAT_1005c910;
  lVar7 = __ftol();
  thunk_FUN_10035750((void *)((int)this + 0x70),iVar3 - (int)lVar7);
  *(double *)((int)this + 0x13f8) = dVar1 + local_10;
  return 0;
}

