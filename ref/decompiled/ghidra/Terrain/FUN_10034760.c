/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10034760 @ 0x10034760 */


int __fastcall FUN_10034760(int param_1)

{
  undefined4 local_c;
  
  if (*(uint *)(param_1 + 0x1c) < *(uint *)(param_1 + 0x18)) {
    local_c = 0;
  }
  else {
    local_c = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  }
  return local_c;
}

