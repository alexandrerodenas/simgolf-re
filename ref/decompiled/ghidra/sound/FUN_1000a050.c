/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000a050 @ 0x1000A050 */
/* Body size: 78 addresses */


void __fastcall FUN_1000a050(void *param_1)

{
  int iVar1;
  void *this;
  
  thunk_FUN_1000a670(param_1);
  iVar1 = *(int *)((int)param_1 + 0x40);
  *(int *)((int)param_1 + 0x48) = iVar1;
  if ((iVar1 != 0) && (this = *(void **)(iVar1 + 8), this != (void *)0x0)) {
    while( true ) {
      if ((*(byte *)((int)this + 0xac) & 0x20) != 0) {
        thunk_FUN_1001f8c0(this,*(uint *)((int)param_1 + 0x34));
      }
      if (*(int *)((int)param_1 + 0x48) == 0) break;
      iVar1 = *(int *)(*(int *)((int)param_1 + 0x48) + 4);
      *(int *)((int)param_1 + 0x48) = iVar1;
      if ((iVar1 == 0) || (this = *(void **)(iVar1 + 8), this == (void *)0x0)) break;
    }
  }
  *(undefined4 *)((int)param_1 + 0x34) = 0;
  return;
}

