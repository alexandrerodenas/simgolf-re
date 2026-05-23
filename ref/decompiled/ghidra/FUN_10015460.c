/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10015460 @ 0x10015460 */
/* Body size: 50 addresses */


bool __fastcall FUN_10015460(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return *(int *)(param_1 + 0x24) == 0x14;
}

