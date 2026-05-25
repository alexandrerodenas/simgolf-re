/* Ghidra decompiled: sound.dll */
/* Function: FUN_10028560 @ 0x10028560 */


uint __thiscall FUN_10028560(void *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)this * 0x19660d + 0x3c6ef35f;
  *(uint *)this = uVar1;
  return (uVar1 >> 0x10) * (param_1 & 0xffff) >> 0x10;
}

