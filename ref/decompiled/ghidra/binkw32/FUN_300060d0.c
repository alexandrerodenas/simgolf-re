/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300060d0 @ 0x300060D0 */


void __cdecl FUN_300060d0(int param_1,int param_2)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x21c) != 0) {
    uVar1 = param_2 - *(int *)(param_1 + 0x21c);
    *(undefined4 *)(param_1 + 0x21c) = 0;
    if (*(uint *)(param_1 + 0x220) < uVar1) {
      *(uint *)(param_1 + 0x228) = *(uint *)(param_1 + 0x220);
      *(uint *)(param_1 + 0x220) = uVar1;
      *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_1 + 0x224);
      *(undefined4 *)(param_1 + 0x224) = *(undefined4 *)(param_1 + 0xc);
      return;
    }
    if (*(uint *)(param_1 + 0x228) < uVar1) {
      *(uint *)(param_1 + 0x228) = uVar1;
      *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_1 + 0xc);
    }
  }
  return;
}

