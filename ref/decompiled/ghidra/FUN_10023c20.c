/* Ghidra decompiled: sound.dll */
/* Function: FUN_10023c20 @ 0x10023C20 */
/* Body size: 52 addresses */


void __thiscall FUN_10023c20(void *this,uint param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = thunk_FUN_1001d780((void *)((int)this + 0x60),(int *)&param_1,param_1);
  if (iVar1 == 0) {
    *(byte *)(param_1 + 0x38) = (param_2 & 1) << 4 | *(byte *)(param_1 + 0x38) & 0xef;
  }
  return;
}

