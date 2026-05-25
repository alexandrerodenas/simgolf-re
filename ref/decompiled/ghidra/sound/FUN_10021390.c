/* Ghidra decompiled: sound.dll */
/* Function: FUN_10021390 @ 0x10021390 */


undefined4 __thiscall FUN_10021390(void *this,uint param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_1001d780((void *)((int)this + 0x60),(int *)&param_1,param_1);
  if (iVar1 == 0) {
    return *(undefined4 *)(param_1 + 0x54);
  }
  return 0;
}

