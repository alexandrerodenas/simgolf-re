/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004320d @ 0x1004320D */
/* Body size: 157 addresses */


uint __cdecl FUN_1004320d(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint extraout_EAX;
  bool in_ZF;
  ushort in_FPUControlWord;
  undefined4 unaff_retaddr;
  
  if (in_ZF) {
    if (((param_2 & 0xfffff) != 0) || (param_1 != 0)) {
      uVar2 = FUN_1004820c();
      goto LAB_1004328b;
    }
    uVar2 = 0;
    uVar1 = param_2 & 0x80000000;
joined_r0x1004327c:
    if (uVar1 == 0) {
LAB_1004322e:
      if (DAT_100b5524 != 0) {
        return uVar2;
      }
      uVar2 = __math_exit(&DAT_10064ef0,5,unaff_retaddr,param_1,param_2);
      return uVar2;
    }
  }
  else {
    uVar2 = param_2;
    if (in_FPUControlWord != 0x27f) {
      uVar2 = FUN_100481f5();
    }
    if ((uVar2 & 0x80000000) == 0) goto LAB_1004322e;
    if (((uVar2 & 0x7ff00000) == 0) && (uVar1 = param_1, (uVar2 & 0xfffff) == 0))
    goto joined_r0x1004327c;
  }
  uVar2 = 1;
LAB_1004328b:
  if (DAT_100b5524 != 0) {
    return uVar2;
  }
  __startOneArgErrorHandling(&DAT_10064ef0,5,in_FPUControlWord,unaff_retaddr,param_1,param_2);
  return extraout_EAX;
}

