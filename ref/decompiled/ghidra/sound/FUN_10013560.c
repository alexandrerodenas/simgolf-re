/* Ghidra decompiled: sound.dll */
/* Function: FUN_10013560 @ 0x10013560 */


void __thiscall FUN_10013560(void *this,uint param_1)

{
  void *this_00;
  
  this_00 = DAT_100b4a34;
  *(uint *)((int)this + 0x188) = param_1;
  for (; this_00 != (void *)0x0; this_00 = *(void **)((int)this_00 + 0xc0)) {
    thunk_FUN_1000f1c0(this_00,param_1);
  }
  return;
}

