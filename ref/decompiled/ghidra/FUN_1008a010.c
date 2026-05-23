/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1008a010 @ 0x1008A010 */
/* Body size: 146 addresses */


undefined4 FUN_1008a010(int param_1)

{
  undefined4 uVar1;
  code *local_10;
  undefined4 *local_c;
  undefined4 local_8;
  
  FUN_100833f0(1);
  if (param_1 == 0) {
    local_c = &DAT_10128834;
    local_10 = DAT_10128834;
    local_8 = 2;
  }
  else {
    local_c = &DAT_10128838;
    local_10 = DAT_10128838;
    local_8 = 0x15;
  }
  if (local_10 == (code *)0x0) {
    FUN_10083490(1);
    uVar1 = 0;
  }
  else {
    if (local_10 == (code *)0x1) {
      FUN_10083490(1);
    }
    else {
      *local_c = 0;
      FUN_10083490(1);
      (*local_10)(local_8);
    }
    uVar1 = 1;
  }
  return uVar1;
}

