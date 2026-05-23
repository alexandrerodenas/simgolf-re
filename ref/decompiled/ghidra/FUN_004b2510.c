/* Ghidra decompiled: golf.exe */
/* Function: FUN_004b2510 @ 0x004B2510 */
/* Body size: 190 addresses */


void FUN_004b2510(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint local_4;
  
  iVar1 = param_1;
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return;
  }
  uVar4 = *(int *)(param_1 + 0x1c) + 7;
  uVar3 = 0x7f << (0x18U - (char)uVar4 & 0x1f) | *(uint *)(param_1 + 0x18);
  if (7 < (int)uVar4) {
    local_4 = uVar4 >> 3;
    uVar4 = uVar4 + local_4 * -8;
    do {
      param_1._2_1_ = (char)(uVar3 >> 0x10);
      **(char **)(iVar1 + 0x10) = param_1._2_1_;
      iVar2 = *(int *)(iVar1 + 0x14) + -1;
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      *(int *)(iVar1 + 0x14) = iVar2;
      if (iVar2 == 0) {
        FUN_004b2420(iVar1);
      }
      if (param_1._2_1_ == -1) {
        **(undefined1 **)(iVar1 + 0x10) = 0;
        iVar2 = *(int *)(iVar1 + 0x14) + -1;
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
        *(int *)(iVar1 + 0x14) = iVar2;
        if (iVar2 == 0) {
          FUN_004b2420(iVar1);
        }
      }
      uVar3 = uVar3 << 8;
      local_4 = local_4 - 1;
    } while (local_4 != 0);
  }
  *(uint *)(iVar1 + 0x1c) = uVar4;
  *(uint *)(iVar1 + 0x18) = uVar3;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  return;
}

