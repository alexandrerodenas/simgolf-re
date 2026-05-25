/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000ed00 @ 0x3000ED00 */


undefined8 __fastcall FUN_3000ed00(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *DAT_30044064;
  if ((DAT_30048900 == 0) && (param_3 != param_4)) {
    if (DAT_3004f1d0 == 1) {
      if ((uVar1 & 1) == 0) {
        *DAT_30044064 = uVar1 | 4;
        uVar2 = rdtsc();
        param_2 = (undefined4)((ulonglong)uVar2 >> 0x20);
        DAT_30049104 = (undefined4)uVar2;
      }
      goto LAB_3000ed3f;
    }
  }
  else {
LAB_3000ed3f:
    if ((uVar1 & 2) != 0) goto LAB_3000ed48;
  }
  param_4 = param_3;
LAB_3000ed48:
  return CONCAT44(param_2,param_4);
}

