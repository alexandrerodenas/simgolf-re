/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001f6f0 @ 0x1001F6F0 */
/* Body size: 358 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_1001f6f0(void *this,undefined4 param_1)

{
  ulonglong uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10058c47;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1002d450(this);
  local_4 = 0;
  thunk_FUN_1001d380((undefined4 *)((int)this + 0x60));
  *(undefined4 *)((int)this + 0x218) = 0;
  *(undefined4 *)((int)this + 0x21c) = 0;
  *(undefined4 *)((int)this + 0x220) = 0;
  *(undefined4 *)((int)this + 0x224) = 0;
  *(undefined4 *)((int)this + 0x228) = 0;
  *(undefined4 *)((int)this + 0x22c) = 0;
  *(undefined4 *)((int)this + 0x230) = 0;
  *(undefined4 *)((int)this + 0x234) = 0;
  local_4._0_1_ = 3;
  FUN_10042902((int)this + 0x250,0x4c,0x10,&LAB_10002667);
  *(undefined ***)this = &PTR_LAB_1005b6a8;
  *(undefined4 *)((int)this + 0x214) = 0;
  *(undefined4 *)((int)this + 0x210) = param_1;
  local_4 = CONCAT31(local_4._1_3_,4);
  *(undefined4 *)((int)this + 0x1d0) = param_1;
  thunk_FUN_1002ad10(this,2);
  *(undefined4 *)((int)this + 0x728) = 0;
  *(undefined4 *)((int)this + 0x710) = 4;
  *(undefined4 *)((int)this + 0x714) = 4;
  *(undefined4 *)((int)this + 0x72c) = 0;
  *(undefined4 *)((int)this + 0x718) = 0x78;
  *(double *)((int)this + 0x728) =
       (double)(_DAT_1005b69c /
               ((float)*(uint *)((int)this + 0x1bc) * _DAT_1005b6a4 * _DAT_1005b6a0));
  uVar1 = __ftol();
  *(undefined4 *)((int)this + 0x73c) = 0;
  *(undefined4 *)((int)this + 0x740) = 0;
  *(undefined4 *)((int)this + 0x730) = 0x7f;
  *(double *)((int)this + 0x720) = (double)(uVar1 & 0xffffffff);
  ExceptionList = local_c;
  return this;
}

