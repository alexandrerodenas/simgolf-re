/* Ghidra decompiled: sound.dll */
/* Function: FUN_10031e50 @ 0x10031E50 */
/* Body size: 366 addresses */


undefined4 * __thiscall FUN_10031e50(void *this,uint *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10059237;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10042902((int)this + 0x238,0x110,0x10,thunk_FUN_10037c40);
  *(undefined4 *)((int)this + 0x1338) = 0;
  *(undefined4 *)((int)this + 0x133c) = 0;
  *(undefined4 *)((int)this + 0x1340) = 0;
  *(undefined4 *)((int)this + 0x1344) = 0;
  *(undefined4 *)((int)this + 0x1348) = 0;
  *(undefined4 *)((int)this + 0x134c) = 0;
  *(undefined4 *)((int)this + 0x1350) = 0;
  *(undefined4 *)((int)this + 0x1354) = 0;
  *(undefined4 *)this = 0;
  puVar2 = (undefined4 *)((int)this + 0xc);
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  local_4 = 2;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x164) = 0;
  *(undefined4 *)((int)this + 0x168) = 0;
  *(undefined4 *)((int)this + 0x16c) = 0;
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x17c) = 0;
  *(undefined4 *)((int)this + 0x1d8) = 0x10000;
  *(undefined4 *)((int)this + 0x208) = 0x10000;
  *(undefined4 *)((int)this + 0x1e8) = 0x10000;
  *(undefined4 *)((int)this + 0x21c) = 0x10000;
  *(undefined4 *)((int)this + 0x1f8) = 0x10000;
  *(undefined4 *)((int)this + 0x218) = 0x10000;
  *(undefined4 *)((int)this + 0x1c0) = 1000;
  thunk_FUN_10035460(this,1000);
  *(undefined4 *)((int)this + 0x224) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x228) = 0;
  *(undefined4 *)((int)this + 0x22c) = 0;
  *(undefined4 *)((int)this + 0x230) = 0;
  *(undefined4 *)((int)this + 0x1360) = 0;
  *(undefined4 *)((int)this + 0x1368) = 0;
  *(undefined4 *)((int)this + 0x136c) = 0;
  *(undefined4 *)((int)this + 0x1370) = 0;
  *(undefined4 *)((int)this + 0x1398) = 0;
  *(undefined4 *)((int)this + 0x1390) = 0;
  *(undefined4 *)((int)this + 0x1394) = 0;
  *(undefined4 *)((int)this + 0x13a0) = 0;
  *(undefined4 *)((int)this + 0x13a4) = 0;
  *(undefined4 *)((int)this + 0x139c) = 0;
  thunk_FUN_100326a0(this,param_1);
  ExceptionList = local_c;
  return this;
}

