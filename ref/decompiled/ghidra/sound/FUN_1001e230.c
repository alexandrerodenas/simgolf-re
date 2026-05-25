/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001e230 @ 0x1001E230 */


void __fastcall FUN_1001e230(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(uint *)(param_1 + 0x4c) =
       ((iVar1 << 0x1e) >> 0x1f & 1U) << 1 | *(uint *)(param_1 + 0x4c) & 0xfffffffd;
  *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_1 + 0x17c);
  iVar1 = *(int *)(param_1 + 0x180);
  if (iVar1 < -0x40) {
    *(undefined4 *)(param_1 + 0x180) = 0xffffffc0;
    return;
  }
  if (0x3f < iVar1) {
    iVar1 = 0x3f;
  }
  *(int *)(param_1 + 0x180) = iVar1;
  return;
}

