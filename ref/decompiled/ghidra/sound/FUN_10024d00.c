/* Ghidra decompiled: sound.dll */
/* Function: FUN_10024d00 @ 0x10024D00 */


undefined4 __thiscall FUN_10024d00(void *this,uint param_1,uint param_2)

{
  if ((param_1 < 0x10) && (param_2 < 0x80)) {
    *(uint *)((int)this + param_1 * 0x4c + 0x25c) = param_2;
    return 0;
  }
  return 10;
}

