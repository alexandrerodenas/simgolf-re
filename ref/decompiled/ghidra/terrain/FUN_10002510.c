/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10002510 @ 0x10002510 */
/* Body size: 45 addresses */


uint __fastcall FUN_10002510(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return *(uint *)(param_1 + 8) & 6;
}

