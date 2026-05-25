/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004b0cc @ 0x1004B0CC */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1004b0cc(double param_1)

{
  double dVar1;
  uint uVar2;
  float10 fVar3;
  undefined4 uVar4;
  
  uVar2 = FUN_1004df37(SUB84(param_1,0),(uint)((ulonglong)param_1 >> 0x20));
  if ((uVar2 & 0x90) == 0) {
    fVar3 = __frnd(param_1);
    if ((double)fVar3 == param_1) {
      dVar1 = param_1 / _DAT_1005f390;
      fVar3 = __frnd(dVar1);
      if (fVar3 == (float10)dVar1) {
        uVar4 = 2;
      }
      else {
        uVar4 = 1;
      }
      return uVar4;
    }
  }
  return 0;
}

