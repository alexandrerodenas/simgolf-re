/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10042a30 @ 0x10042A30 */


void __cdecl FUN_10042a30(int param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  
  if ((*(byte *)(param_1 + 0x11c) & 0x20) == 0) {
    if ((*(uint *)(param_1 + 0x6c) & 0x800) != 0) {
      return;
    }
  }
  else if ((*(uint *)(param_1 + 0x6c) & 0x300) == 0x300) {
    return;
  }
  uVar1 = FUN_1004fe90(*(uint *)(param_1 + 0x110),param_2,param_3);
  *(uint *)(param_1 + 0x110) = uVar1;
  return;
}

