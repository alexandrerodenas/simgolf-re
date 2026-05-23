/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10042f50 @ 0x10042F50 */
/* Body size: 39 addresses */


int __cdecl FUN_10042f50(byte *param_1)

{
  return (((uint)*param_1 * 0x100 + (uint)param_1[1]) * 0x100 + (uint)param_1[2]) * 0x100 +
         (uint)param_1[3];
}

