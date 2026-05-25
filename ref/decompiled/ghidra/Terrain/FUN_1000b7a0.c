/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1000b7a0 @ 0x1000B7A0 */


void __fastcall FUN_1000b7a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_48 [16];
  undefined4 *local_8;
  
  puVar1 = local_48;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0xcccccccc;
    puVar1 = puVar1 + 1;
  }
  local_8 = param_1;
  puVar1 = (undefined4 *)thunk_FUN_1000b600(*param_1);
  *local_8 = *puVar1;
  local_8 = (undefined4 *)0x1000b7e2;
  __chkesp();
  return;
}

