/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10026c90 @ 0x10026C90 */
/* Body size: 79 addresses */


uint __cdecl FUN_10026c90(uint param_1,uint param_2)

{
  undefined4 in_EAX;
  uint uVar1;
  undefined2 in_FPUControlWord;
  
  uVar1 = FUN_10026d60(CONCAT22((short)((uint)in_EAX >> 0x10),in_FPUControlWord));
  uVar1 = param_1 & param_2 | uVar1 & ~param_2;
  FUN_10026ee0(uVar1);
  return uVar1;
}

