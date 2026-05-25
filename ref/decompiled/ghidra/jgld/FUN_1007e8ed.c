/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1007e8ed @ 0x1007E8ED */


uint __cdecl FUN_1007e8ed(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint extraout_EAX;
  bool in_ZF;
  ushort in_FPUControlWord;
  undefined4 unaff_retaddr;
  
  if (in_ZF) {
    if (((param_2 & 0xfffff) != 0) || (param_1 != 0)) {
      uVar2 = FUN_10083f2c();
      goto LAB_1007e96b;
    }
    uVar2 = 0;
    uVar1 = param_2 & 0x80000000;
joined_r0x1007e95c:
    if (uVar1 == 0) {
LAB_1007e90e:
      if (DAT_10128748 != 0) {
        return uVar2;
      }
      uVar2 = __math_exit(&DAT_10123310,5,unaff_retaddr,param_1,param_2);
      return uVar2;
    }
  }
  else {
    uVar2 = param_2;
    if (in_FPUControlWord != 0x27f) {
      uVar2 = FUN_10083f15();
    }
    if ((uVar2 & 0x80000000) == 0) goto LAB_1007e90e;
    if (((uVar2 & 0x7ff00000) == 0) && (uVar1 = param_1, (uVar2 & 0xfffff) == 0))
    goto joined_r0x1007e95c;
  }
  uVar2 = 1;
LAB_1007e96b:
  if (DAT_10128748 != 0) {
    return uVar2;
  }
  __startOneArgErrorHandling(&DAT_10123310,5,in_FPUControlWord,unaff_retaddr,param_1,param_2);
  return extraout_EAX;
}

