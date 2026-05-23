/* Ghidra decompiled: sound.dll */
/* Function: FUN_10039790 @ 0x10039790 */
/* Body size: 164 addresses */


undefined4 * __thiscall FUN_10039790(void *this,undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10059323;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1002b4e0(this);
  local_4 = 0;
  thunk_FUN_10031be0((undefined4 *)((int)this + 0x70));
  *(undefined ***)this = &PTR_LAB_1005c7e8;
  *(undefined4 *)((int)this + 0x1424) = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined4 *)((int)this + 0x1428) = 0;
  *(undefined4 *)((int)this + 0x1420) = param_1;
  *(undefined4 *)((int)this + 0x1438) = 1;
  *(undefined4 *)((int)this + 0x1430) = 0;
  *(undefined4 *)((int)this + 0x1434) = 0;
  *(undefined4 *)((int)this + 0x1ec) = param_1;
  *(undefined4 *)((int)this + 0x1440) = 0;
  *(undefined4 *)((int)this + 0x1444) = 0;
  *(undefined4 *)((int)this + 0x1448) = 0;
  thunk_FUN_1002ad10(this,1);
  ExceptionList = local_c;
  return this;
}

