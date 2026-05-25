/* Ghidra decompiled: sound.dll */
/* Function: FUN_100241f0 @ 0x100241F0 */


int __thiscall FUN_100241f0(void *this,int param_1,uint param_2)

{
  int iVar1;
  
  if ((param_1 == 0) && (-1 < (int)param_2)) {
    iVar1 = thunk_FUN_1001d780((void *)((int)this + 0x60),&param_1,param_2);
    if (iVar1 == 0) {
      return param_1;
    }
  }
  return 0;
}

