/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1000ae60 @ 0x1000AE60 */
/* Body size: 89 addresses */


void __thiscall FUN_1000ae60(void *this,undefined1 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_48 [16];
  void *local_8;
  
  puVar3 = local_48;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)this = *param_1;
  local_8 = this;
  uVar1 = thunk_FUN_1000b500(0,0);
  *(undefined4 *)((int)local_8 + 4) = uVar1;
  *(undefined4 *)((int)local_8 + 8) = 0;
  local_8 = (void *)0x1000aeb3;
  __chkesp();
  return;
}

