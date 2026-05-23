/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1003e840 @ 0x1003E840 */
/* Body size: 56 addresses */


undefined4 __cdecl FUN_1003e840(int param_1,int param_2,undefined4 *param_3,uint *param_4)

{
  if ((((param_1 != 0) && (param_2 != 0)) && ((*(byte *)(param_2 + 8) & 8) != 0)) &&
     (param_3 != (undefined4 *)0x0)) {
    *param_3 = *(undefined4 *)(param_2 + 0x10);
    *param_4 = (uint)*(ushort *)(param_2 + 0x14);
    return 8;
  }
  return 0;
}

