/* Ghidra decompiled: sound.dll */
/* Function: FUN_1003a0d0 @ 0x1003A0D0 */


void __thiscall FUN_1003a0d0(void *this,uint param_1)

{
  int iVar1;
  
  if ((int)param_1 < 0x80) {
    if ((int)param_1 < 0) {
      param_1 = 0;
    }
  }
  else {
    param_1 = 0x7f;
  }
  thunk_FUN_1002c370(this,param_1);
  iVar1 = (**(code **)(*(int *)this + 0xcc))();
  if (iVar1 != 0) {
    thunk_FUN_10035150((void *)((int)this + 0x70),param_1);
  }
  if (param_1 != 0) {
    param_1 = param_1 + 1;
  }
  thunk_FUN_100351c0((void *)((int)this + 0x70),param_1 << 9);
  return;
}

