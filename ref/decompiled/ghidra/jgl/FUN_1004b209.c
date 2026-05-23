/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1004b209 @ 0x1004B209 */
/* Body size: 53 addresses */


uint __thiscall FUN_1004b209(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  undefined2 in_FPUControlWord;
  undefined4 local_8;
  
  local_8 = CONCAT22((short)((uint)this >> 0x10),in_FPUControlWord);
  uVar1 = FUN_1004b254(local_8);
  uVar1 = uVar1 & ~param_2 | param_1 & param_2;
  FUN_1004b2e6(uVar1);
  return uVar1;
}

