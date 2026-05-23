/* Ghidra decompiled: sound.dll */
/* Function: FUN_10034fe0 @ 0x10034FE0 */
/* Body size: 105 addresses */


uint __thiscall FUN_10034fe0(void *this,undefined4 *param_1,uint param_2)

{
  uint uVar1;
  _MMIOINFO local_48;
  
  mmioGetInfo(*(HMMIO *)this,&local_48,0);
  uVar1 = (int)local_48.pchEndRead - (int)local_48.pchNext;
  if (uVar1 == 0) {
    return 0;
  }
  if (uVar1 < param_2) {
    param_2 = uVar1;
  }
  FUN_10042cf0(param_1,(undefined4 *)local_48.pchNext,param_2);
  local_48.pchNext = local_48.pchNext + param_2;
  mmioSetInfo(*(HMMIO *)this,&local_48,0);
  return param_2;
}

