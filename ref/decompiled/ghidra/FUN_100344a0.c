/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_100344a0 @ 0x100344A0 */
/* Body size: 54 addresses */


int __fastcall FUN_100344a0(int param_1)

{
  undefined4 local_c;
  
  if (*(uint *)(param_1 + 0x10) < *(uint *)(param_1 + 0x14)) {
    local_c = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
  }
  else {
    local_c = 0;
  }
  return local_c;
}

