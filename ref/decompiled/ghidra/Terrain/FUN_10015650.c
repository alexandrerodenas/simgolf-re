/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10015650 @ 0x10015650 */


void __thiscall FUN_10015650(void *this,int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_48 [16];
  void *local_8;
  
  puVar4 = local_48;
  for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  if (param_1 != 0) {
    local_8 = this;
    if (*(int *)((int)this + 0x24) == 0x11) {
      if ((((*(int *)((int)this + 0x28) != 0) ||
           (iVar3 = thunk_FUN_10001f60(param_1), *(int *)((int)local_8 + 0x24) == iVar3)) &&
          (cVar1 = thunk_FUN_10015340(param_1), *(int *)((int)local_8 + 0x28) != (int)cVar1)) &&
         ((*(int *)((int)local_8 + 0x28) != 0 && (*(int *)((int)local_8 + 0x28) == 1)))) {
        thunk_FUN_10015340(param_1);
      }
    }
    else {
      iVar3 = *(int *)((int)this + 0x24);
      iVar2 = thunk_FUN_10001f60(param_1);
      if (*(int *)(DAT_10106b48 + iVar3 * 4) == *(int *)(DAT_10106b48 + iVar2 * 4)) {
        thunk_FUN_10001f60(param_1);
      }
    }
  }
  local_8 = (void *)0x1001573c;
  __chkesp();
  return;
}

