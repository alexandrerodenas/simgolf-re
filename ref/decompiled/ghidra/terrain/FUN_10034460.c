/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10034460 @ 0x10034460 */
/* Body size: 60 addresses */


int __fastcall FUN_10034460(int param_1)

{
  uint uVar1;
  undefined4 local_c;
  
  uVar1 = FUN_100344e0(param_1);
  if (uVar1 < *(uint *)(param_1 + 0x2c)) {
    local_c = FUN_100344e0(param_1);
    local_c = *(int *)(param_1 + 0x2c) - local_c;
  }
  else {
    local_c = 0;
  }
  return local_c;
}

