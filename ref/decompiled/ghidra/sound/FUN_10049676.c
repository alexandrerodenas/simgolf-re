/* Ghidra decompiled: sound.dll */
/* Function: FUN_10049676 @ 0x10049676 */


uint __thiscall FUN_10049676(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  undefined2 in_FPUControlWord;
  undefined4 local_8;
  
  local_8 = CONCAT22((short)((uint)this >> 0x10),in_FPUControlWord);
  uVar1 = FUN_100496ec(local_8);
  uVar1 = uVar1 & ~param_2 | param_1 & param_2;
  FUN_1004977e(uVar1);
  return uVar1;
}

