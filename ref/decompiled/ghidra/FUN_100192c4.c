/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_100192c4 @ 0x100192C4 */
/* Body size: 9 addresses */


uint __thiscall FUN_100192c4(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint extraout_EAX;
  undefined1 in_ZF;
  ushort in_FPUControlWord;
  undefined4 unaff_retaddr;
  
  __fload_withFB(this,(int)&param_1);
  if ((bool)in_ZF) {
    if (((param_2 & 0xfffff) != 0) || (param_1 != 0)) {
      uVar2 = FUN_10021dcc();
      goto LAB_1001934b;
    }
    uVar2 = 0;
    uVar1 = param_2 & 0x80000000;
joined_r0x1001933c:
    if (uVar1 == 0) {
LAB_100192ee:
      if (DAT_10110780 != 0) {
        return uVar2;
      }
      uVar2 = __math_exit(&DAT_10063ed0,5,unaff_retaddr,param_1,param_2);
      return uVar2;
    }
  }
  else {
    uVar2 = param_2;
    if (in_FPUControlWord != 0x27f) {
      uVar2 = FUN_10021db5();
    }
    if ((uVar2 & 0x80000000) == 0) goto LAB_100192ee;
    if (((uVar2 & 0x7ff00000) == 0) && (uVar1 = param_1, (uVar2 & 0xfffff) == 0))
    goto joined_r0x1001933c;
  }
  uVar2 = 1;
LAB_1001934b:
  if (DAT_10110780 != 0) {
    return uVar2;
  }
  __startOneArgErrorHandling(&DAT_10063ed0,5,in_FPUControlWord,unaff_retaddr,param_1,param_2);
  return extraout_EAX;
}

