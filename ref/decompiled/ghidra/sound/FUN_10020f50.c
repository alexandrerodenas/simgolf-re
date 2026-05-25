/* Ghidra decompiled: sound.dll */
/* Function: FUN_10020f50 @ 0x10020F50 */


void __thiscall FUN_10020f50(void *this,uint param_1)

{
  if (0x7f < (int)param_1) {
    thunk_FUN_1002b260(this,0x7f);
    *(undefined4 *)((int)this + 0x730) = 0x7f;
    return;
  }
  if ((int)param_1 < 0) {
    param_1 = 0;
  }
  thunk_FUN_1002b260(this,param_1);
  *(uint *)((int)this + 0x730) = param_1;
  return;
}

