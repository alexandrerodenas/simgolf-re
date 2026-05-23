/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1000af70 @ 0x1000AF70 */
/* Body size: 84 addresses */


void __thiscall FUN_1000af70(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_4c [16];
  undefined1 local_c [4];
  void *local_8;
  
  puVar1 = local_4c;
  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0xcccccccc;
    puVar1 = puVar1 + 1;
  }
  local_8 = this;
  puVar1 = (undefined4 *)thunk_FUN_1000b600(*(undefined4 *)((int)this + 4));
  puVar1 = (undefined4 *)thunk_FUN_1000b750(local_c,*puVar1);
  *param_1 = *puVar1;
  local_8 = (void *)0x1000afbe;
  __chkesp();
  return;
}

