/* Ghidra decompiled: sound.dll */
/* Function: FUN_100432ed @ 0x100432ED */


uint __cdecl FUN_100432ed(int param_1,uint param_2)

{
  uint in_EAX;
  uint uVar1;
  uint extraout_EAX;
  bool in_ZF;
  ushort in_FPUControlWord;
  undefined4 unaff_retaddr;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) == 0) && (param_1 == 0)) {
      uVar1 = 0;
      goto joined_r0x1004334a;
    }
    uVar1 = FUN_1004820c();
LAB_1004337d:
    if (DAT_100b5524 == 0) {
      __startOneArgErrorHandling(&DAT_10064f00,0x1a,in_FPUControlWord,unaff_retaddr,param_1,param_2)
      ;
      return extraout_EAX;
    }
  }
  else {
    uVar1 = param_2;
    in_EAX = param_2;
    if ((param_2 & 0x7ff00000) == 0) {
      if (((param_2 & 0xfffff) == 0) && (param_1 == 0)) {
        uVar1 = 2;
        goto LAB_1004337d;
      }
    }
    else {
joined_r0x1004334a:
      if ((in_EAX & 0x80000000) != 0) {
        uVar1 = 1;
        goto LAB_1004337d;
      }
    }
    if (DAT_100b5524 == 0) {
      uVar1 = __math_exit(&DAT_10064f00,0x1a,unaff_retaddr,param_1,param_2);
      return uVar1;
    }
  }
  return uVar1;
}

