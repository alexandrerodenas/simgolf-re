/* Ghidra decompiled: sound.dll */
/* Function: FUN_10035150 @ 0x10035150 */
/* Body size: 69 addresses */


void __thiscall FUN_10035150(void *this,uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (((*(uint *)((int)this + 0x58) & 0x10000000) != 0) &&
     (*(void **)((int)this + 0x54) != (void *)0x0)) {
    thunk_FUN_1000f1c0(*(void **)((int)this + 0x54),param_1);
    puVar1 = (undefined4 *)((int)this + 0x318);
    iVar2 = 0x10;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        thunk_FUN_1000f1c0((void *)*puVar1,param_1);
      }
      puVar1 = puVar1 + 0x44;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

