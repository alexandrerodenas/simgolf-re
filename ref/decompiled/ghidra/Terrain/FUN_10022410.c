/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10022410 @ 0x10022410 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10022410(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  uVar1 = FUN_10029850(param_1,param_2);
  if ((uVar1 & 0x90) == 0) {
    fVar3 = FUN_100292c0((double)CONCAT44(param_2,param_1));
    if ((double)fVar3 == (double)CONCAT44(param_2,param_1)) {
      fVar3 = FUN_100292c0((double)CONCAT44(param_2,param_1) / _DAT_10060428);
      if ((float10)(double)CONCAT44(param_2,param_1) / (float10)_DAT_10060428 == fVar3) {
        uVar2 = 2;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

