/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1000b3d0 @ 0x1000B3D0 */
/* Body size: 70 addresses */


void __thiscall FUN_1000b3d0(void *this,int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  void *local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = this;
  thunk_FUN_1000b380(this,param_1);
  local_8 = (void *)0x1000b410;
  __chkesp();
  return;
}

