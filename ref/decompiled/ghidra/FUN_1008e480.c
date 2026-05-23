/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1008e480 @ 0x1008E480 */
/* Body size: 79 addresses */


uint __cdecl FUN_1008e480(uint param_1,uint param_2)

{
  undefined4 in_EAX;
  uint uVar1;
  undefined2 in_FPUControlWord;
  
  uVar1 = FUN_1008e550(CONCAT22((short)((uint)in_EAX >> 0x10),in_FPUControlWord));
  uVar1 = param_1 & param_2 | uVar1 & ~param_2;
  FUN_1008e6d0(uVar1);
  return uVar1;
}

