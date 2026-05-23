/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10081e90 @ 0x10081E90 */
/* Body size: 87 addresses */


undefined4 __cdecl FUN_10081e90(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (2 < param_1)) {
    uVar1 = 0xffffffff;
  }
  else if (param_2 == 0xffffffff) {
    uVar1 = *(undefined4 *)(&DAT_10123378 + param_1 * 4);
  }
  else if ((param_2 & 0xfffffff8) == 0) {
    uVar1 = *(undefined4 *)(&DAT_10123378 + param_1 * 4);
    *(uint *)(&DAT_10123378 + param_1 * 4) = param_2;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

