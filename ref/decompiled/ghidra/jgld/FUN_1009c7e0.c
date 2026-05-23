/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1009c7e0 @ 0x1009C7E0 */
/* Body size: 223 addresses */


void __cdecl FUN_1009c7e0(int param_1,byte *param_2,uint param_3)

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
  local_8 = param_3;
  if ((((param_1 != 0) && (*(int *)(param_1 + 0x1c) != 0)) && (**(int **)(param_1 + 0x1c) == 6)) &&
     (uVar1 = FUN_1009e370(1,param_2,param_3), uVar1 == *(uint *)(param_1 + 0x30))) {
    *(undefined4 *)(param_1 + 0x30) = 1;
    if ((uint)(1 << ((byte)*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x10) & 0x1f)) <= local_8) {
      local_8 = (1 << ((byte)*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x10) & 0x1f)) - 1;
      param_2 = param_2 + (param_3 - local_8);
    }
    FUN_1009e310(*(int *)(*(int *)(param_1 + 0x1c) + 0x14),(undefined4 *)param_2,local_8);
    **(undefined4 **)(param_1 + 0x1c) = 7;
  }
  local_8 = 0x1009c8bb;
  __chkesp();
  return;
}

