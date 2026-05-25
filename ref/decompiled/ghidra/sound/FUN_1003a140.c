/* Ghidra decompiled: sound.dll */
/* Function: FUN_1003a140 @ 0x1003A140 */


void __thiscall FUN_1003a140(void *this,int param_1,int param_2,uint param_3)

{
  if ((param_1 != 0) && (param_1 != -1)) {
    if (param_1 < 0x80) {
      if (param_1 < 0) {
        param_1 = 0;
      }
    }
    else {
      param_1 = 0x7f;
    }
    param_1 = (param_1 + 1) * 0x200;
  }
  if ((param_2 != 0) && (param_2 != -1)) {
    if (param_2 < 0x80) {
      if (param_2 < 0) {
        param_2 = 0;
      }
    }
    else {
      param_2 = 0x7f;
    }
    param_2 = (param_2 + 1) * 0x200;
  }
  thunk_FUN_10034c80((void *)((int)this + 0x70),param_1,param_2,param_3);
  return;
}

