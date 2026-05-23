/* Ghidra decompiled: sound.dll */
/* Function: FUN_10024630 @ 0x10024630 */
/* Body size: 72 addresses */


int __thiscall FUN_10024630(void *this,uint param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_1001d780((void *)((int)this + 0x60),(int *)&param_1,param_1);
  if (iVar1 == 0) {
    iVar1 = 0x254;
    *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) | 1;
    do {
      if (*(int **)(iVar1 + param_1) != (int *)0x0) {
        (**(code **)(**(int **)(iVar1 + param_1) + 0x34))(0,0x7f,0x19);
      }
      iVar1 = iVar1 + -4;
    } while (0x57 < iVar1);
    iVar1 = 0;
  }
  return iVar1;
}

