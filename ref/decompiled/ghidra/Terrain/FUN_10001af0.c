/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10001af0 @ 0x10001AF0 */


void FUN_10001af0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  int local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (DAT_10070a0c != param_1) {
    DAT_10070a0c = param_1;
    thunk_FUN_10003980();
    thunk_FUN_100380a0(local_8);
    thunk_FUN_100076e0(local_8);
  }
  local_8 = 0x10001b45;
  __chkesp();
  return;
}

