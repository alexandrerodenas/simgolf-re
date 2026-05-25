/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10036340 @ 0x10036340 */


undefined4 __fastcall FUN_10036340(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_100344e0(param_1);
  if ((uVar1 < *(uint *)(param_1 + 0x2c)) || (*(uint *)(param_1 + 0x18) < *(uint *)(param_1 + 0x1c))
     ) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

