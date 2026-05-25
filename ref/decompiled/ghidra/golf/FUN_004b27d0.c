/* Ghidra decompiled: golf.exe */
/* Function: FUN_004b27d0 @ 0x004B27D0 */


void FUN_004b27d0(int param_1,byte *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int local_4;
  
  iVar1 = param_1;
  if ((*(int *)(param_1 + 0xc) == 0) && (param_3 != 0)) {
    local_4 = param_3;
    do {
      if (*(int *)(iVar1 + 0xc) == 0) {
        uVar4 = *(int *)(iVar1 + 0x1c) + 1;
        uVar3 = (*param_2 & 1) << (0x18U - (char)uVar4 & 0x1f) | *(uint *)(iVar1 + 0x18);
        if (7 < (int)uVar4) {
          param_3 = uVar4 >> 3;
          uVar4 = uVar4 + param_3 * -8;
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
            param_3 = param_3 - 1;
          } while (param_3 != 0);
        }
        *(uint *)(iVar1 + 0x18) = uVar3;
        *(uint *)(iVar1 + 0x1c) = uVar4;
      }
      param_2 = param_2 + 1;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  return;
}

