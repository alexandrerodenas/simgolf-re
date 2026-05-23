/* Ghidra decompiled: sound.dll */
/* Function: FUN_100432e4 @ 0x100432E4 */
/* Body size: 9 addresses */


uint __thiscall FUN_100432e4(void *this,int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint extraout_EAX;
  undefined1 in_ZF;
  ushort in_FPUControlWord;
  undefined4 unaff_retaddr;
  
  uVar1 = __fload_withFB(this,(int)&param_1);
  if ((bool)in_ZF) {
    if (((uVar1 & 0xfffff) == 0) && (param_1 == 0)) {
      uVar2 = 0;
      goto joined_r0x1004334a;
    }
    uVar2 = FUN_1004820c();
LAB_1004337d:
    if (DAT_100b5524 == 0) {
      __startOneArgErrorHandling(&DAT_10064f00,0x1a,in_FPUControlWord,unaff_retaddr,param_1,param_2)
      ;
      return extraout_EAX;
    }
  }
  else {
    uVar2 = param_2;
    uVar1 = param_2;
    if ((param_2 & 0x7ff00000) == 0) {
      if (((param_2 & 0xfffff) == 0) && (param_1 == 0)) {
        uVar2 = 2;
        goto LAB_1004337d;
      }
    }
    else {
joined_r0x1004334a:
      if ((uVar1 & 0x80000000) != 0) {
        uVar2 = 1;
        goto LAB_1004337d;
      }
    }
    if (DAT_100b5524 == 0) {
      uVar1 = __math_exit(&DAT_10064f00,0x1a,unaff_retaddr,param_1,param_2);
      return uVar1;
    }
  }
  return uVar2;
}

