/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_100226e0 @ 0x100226E0 */


undefined4 __thiscall FUN_100226e0(void *this,int param_1)

{
  undefined4 uVar1;
  code *local_10;
  undefined4 *local_c;
  undefined4 local_8;
  
  FUN_10019e10(this,1);
  if (param_1 == 0) {
    local_c = &DAT_1011085c;
    local_10 = DAT_1011085c;
    local_8 = 2;
  }
  else {
    local_c = &DAT_10110860;
    local_10 = DAT_10110860;
    local_8 = 0x15;
  }
  if (local_10 == (code *)0x0) {
    FUN_10019eb0(1);
    uVar1 = 0;
  }
  else {
    if (local_10 == (code *)0x1) {
      FUN_10019eb0(1);
    }
    else {
      *local_c = 0;
      FUN_10019eb0(1);
      (*local_10)(local_8);
    }
    uVar1 = 1;
  }
  return uVar1;
}

