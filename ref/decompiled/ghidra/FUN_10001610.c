/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10001610 @ 0x10001610 */
/* Body size: 286 addresses */


undefined4 * __thiscall FUN_10001610(void *this,undefined4 param_1)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100523f8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_10001310(this);
  *(undefined4 *)((int)this + 0x28) = 0;
  local_4 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined1 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x4ac) = 0;
  *(undefined4 *)((int)this + 0x4b0) = 0;
  *(undefined4 *)((int)this + 0x4b4) = 0;
  *(undefined4 *)((int)this + 0x4b8) = 0;
  *(undefined4 *)((int)this + 0x4bc) = 0;
  *(undefined4 *)((int)this + 0x4c0) = 0;
  *(undefined4 *)((int)this + 0x4c4) = 0;
  *(undefined4 *)((int)this + 0x4c8) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined ***)this = &PTR_FUN_10053214;
  *(undefined4 *)((int)this + 0x80) = param_1;
  *(undefined4 *)((int)this + 0x84) = 0x28;
  *(undefined2 *)((int)this + 0x90) = 1;
  *(undefined2 *)((int)this + 0x92) = 8;
  *(undefined4 *)((int)this + 0xa4) = 0x100;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc));
  iVar1 = (**(code **)(*DAT_10057b08 + 0xb4))();
  *(uint *)((int)this + 0x4d0) = (-(uint)(iVar1 != 1) & 0xffff8400) + 0x8000f81f;
  ExceptionList = pvStack_c;
  return this;
}

