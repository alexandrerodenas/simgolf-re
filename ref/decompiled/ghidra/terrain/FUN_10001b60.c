/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10001b60 @ 0x10001B60 */
/* Body size: 116 addresses */


void __cdecl FUN_10001b60(undefined1 *param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_50 [17];
  int local_c;
  undefined1 *local_8;
  
  puVar3 = local_50;
  for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_8 = param_1;
  for (local_c = *(int *)(param_2 + 4) * *(int *)(param_2 + 8); 0 < local_c; local_c = local_c + -1)
  {
    uVar1 = *local_8;
    *local_8 = local_8[2];
    local_8[2] = uVar1;
    local_8 = local_8 + 3;
  }
  return;
}

