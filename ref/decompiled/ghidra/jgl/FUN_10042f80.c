/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10042f80 @ 0x10042F80 */
/* Body size: 19 addresses */


int __cdecl FUN_10042f80(byte *param_1)

{
  undefined4 in_EAX;
  
  return CONCAT22((short)((uint)in_EAX >> 0x10),(ushort)*param_1) * 0x100 +
         CONCAT22((short)((uint)param_1 >> 0x10),(ushort)param_1[1]);
}

