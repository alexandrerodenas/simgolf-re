/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001bee0 @ 0x1001BEE0 */


void * __thiscall
FUN_1001bee0(void *this,undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
            undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
            undefined1 param_9,undefined1 param_10,undefined1 param_11,undefined1 param_12,
            undefined4 param_13)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10058a93;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1001d130((undefined4 *)((int)this + 0xc));
  *(undefined4 *)((int)this + 4) = 0x18;
  *(undefined4 *)((int)this + 8) = 0x44444444;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0xc;
  *(undefined4 *)((int)this + 0x20) = 0x44444444;
  *(undefined ***)((int)this + 0x2c) = &PTR_LAB_1005b19c;
  *(undefined4 *)((int)this + 0x40) = 0xffffffff;
  *(undefined4 *)((int)this + 0x4c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x50) = 0xffffffff;
  *(undefined4 *)((int)this + 0x30) = 0x6c727463;
  *(undefined2 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x38) = 0x18;
  *(undefined4 *)((int)this + 0x3c) = 0x44444444;
  *(undefined1 *)((int)this + 0x5c) = param_1;
  *(undefined1 *)((int)this + 0x5d) = param_2;
  *(undefined1 *)((int)this + 0x5e) = param_3;
  *(undefined1 *)((int)this + 0x5f) = param_4;
  *(undefined1 *)((int)this + 0x60) = param_5;
  *(undefined1 *)((int)this + 0x61) = param_6;
  *(undefined1 *)((int)this + 0x62) = param_7;
  *(undefined1 *)((int)this + 99) = param_8;
  *(undefined1 *)((int)this + 100) = param_9;
  *(undefined1 *)((int)this + 0x65) = param_10;
  local_4 = 1;
  *(undefined ***)this = &PTR_LAB_1005b5c0;
  *(undefined ***)((int)this + 0x2c) = &PTR_LAB_1005b59c;
  *(undefined1 *)((int)this + 0x66) = param_11;
  *(undefined1 *)((int)this + 0x67) = param_12;
  thunk_FUN_1001c1e0(this,0);
  *(undefined4 *)((int)this + 0x48) = 3;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0x34) = 0xe4;
  *(undefined4 *)((int)this + 0xdc) = param_13;
  *(undefined4 *)((int)this + 0x58) = 0x44444444;
  *(undefined4 *)((int)this + 0x54) = 0x8c;
  ExceptionList = local_c;
  return this;
}

