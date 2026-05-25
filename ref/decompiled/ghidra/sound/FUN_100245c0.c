/* Ghidra decompiled: sound.dll */
/* Function: FUN_100245c0 @ 0x100245C0 */


int __thiscall FUN_100245c0(void *this,uint param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_1001d780((void *)((int)this + 0x60),(int *)&param_1,param_1);
  if (iVar1 == 0) {
    iVar1 = 0x254;
    *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) & 0xfe;
    do {
      if (*(int **)(iVar1 + param_1) != (int *)0x0) {
        (**(code **)(**(int **)(iVar1 + param_1) + 0x34))(0x7f,0xffffffff,0x19);
      }
      iVar1 = iVar1 + -4;
    } while (0x57 < iVar1);
    iVar1 = 0;
  }
  return iVar1;
}

