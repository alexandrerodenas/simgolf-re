/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002f82c @ 0x3002F82C */


uint __thiscall FUN_3002f82c(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  undefined2 in_FPUControlWord;
  undefined4 local_8;
  
  local_8 = CONCAT22((short)((uint)this >> 0x10),in_FPUControlWord);
  uVar1 = FUN_3002f877(local_8);
  uVar1 = uVar1 & ~param_2 | param_1 & param_2;
  FUN_3002f909(uVar1);
  return uVar1;
}

