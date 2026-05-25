/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100787d0 @ 0x100787D0 */


void __cdecl FUN_100787d0(int param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_48 [16];
  uint local_8;
  
  puVar3 = local_48;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_8 = 1;
  if ((*(byte *)(param_1 + 0x11c) & 0x20) == 0) {
    if ((*(uint *)(param_1 + 0x6c) & 0x800) != 0) {
      local_8 = 0;
    }
  }
  else {
    local_8 = (uint)((*(uint *)(param_1 + 0x6c) & 0x300) != 0x300);
  }
  if (local_8 != 0) {
    uVar1 = FUN_1009ca70(*(uint *)(param_1 + 0x110),param_2,param_3);
    *(uint *)(param_1 + 0x110) = uVar1;
  }
  local_8 = 0x10078869;
  __chkesp();
  return;
}

