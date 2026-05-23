/* Ghidra decompiled: golf.exe */
/* Function: FUN_004b25d0 @ 0x004B25D0 */
/* Body size: 498 addresses */


void FUN_004b25d0(int param_1)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint local_4;
  
  iVar4 = param_1;
  iVar5 = *(int *)(param_1 + 0x38);
  if (iVar5 != 0) {
    iVar8 = 0;
    while (iVar5 = iVar5 >> 1, iVar5 != 0) {
      iVar8 = iVar8 + 1;
    }
    if (*(int *)(param_1 + 0xc) == 0) {
      iVar5 = *(int *)(param_1 + 0x4c + *(int *)(param_1 + 0x34) * 4);
      iVar3 = *(int *)(param_1 + 0x1c);
      bVar2 = *(byte *)(iVar5 + 0x400 + iVar8 * 0x10);
      uVar7 = *(uint *)(iVar5 + iVar8 * 0x40);
      if ((char)bVar2 == 0) {
        *(undefined4 *)(**(int **)(param_1 + 0x20) + 0x14) = 0x27;
        (**(code **)**(undefined4 **)(param_1 + 0x20))(*(undefined4 **)(param_1 + 0x20));
      }
      if (*(int *)(param_1 + 0xc) == 0) {
        uVar9 = iVar3 + (char)bVar2;
        uVar7 = ((1 << (bVar2 & 0x1f)) - 1U & uVar7) << (0x18U - (char)uVar9 & 0x1f) |
                *(uint *)(param_1 + 0x18);
        if (7 < (int)uVar9) {
          uVar6 = uVar9 >> 3;
          uVar9 = uVar9 + uVar6 * -8;
          do {
            param_1._2_1_ = (char)(uVar7 >> 0x10);
            **(char **)(iVar4 + 0x10) = param_1._2_1_;
            iVar5 = *(int *)(iVar4 + 0x14) + -1;
            *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
            *(int *)(iVar4 + 0x14) = iVar5;
            if (iVar5 == 0) {
              FUN_004b2420(iVar4);
            }
            if (param_1._2_1_ == -1) {
              **(undefined1 **)(iVar4 + 0x10) = 0;
              iVar5 = *(int *)(iVar4 + 0x14) + -1;
              *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
              *(int *)(iVar4 + 0x14) = iVar5;
              if (iVar5 == 0) {
                FUN_004b2420(iVar4);
              }
            }
            uVar7 = uVar7 << 8;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        *(uint *)(iVar4 + 0x18) = uVar7;
        *(uint *)(iVar4 + 0x1c) = uVar9;
      }
    }
    else {
      piVar1 = (int *)(*(int *)(param_1 + 0x5c + *(int *)(param_1 + 0x34) * 4) + iVar8 * 0x40);
      *piVar1 = *piVar1 + 1;
    }
    if (iVar8 != 0) {
      if (*(int *)(iVar4 + 0xc) == 0) {
        uVar7 = *(int *)(iVar4 + 0x1c) + iVar8;
        uVar9 = ((1 << ((byte)iVar8 & 0x1f)) - 1U & *(uint *)(iVar4 + 0x38)) <<
                (0x18U - (char)uVar7 & 0x1f) | *(uint *)(iVar4 + 0x18);
        if (7 < (int)uVar7) {
          local_4 = uVar7 >> 3;
          uVar7 = uVar7 + local_4 * -8;
          do {
            param_1._2_1_ = (char)(uVar9 >> 0x10);
            **(char **)(iVar4 + 0x10) = param_1._2_1_;
            iVar5 = *(int *)(iVar4 + 0x14) + -1;
            *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
            *(int *)(iVar4 + 0x14) = iVar5;
            if (iVar5 == 0) {
              FUN_004b2420(iVar4);
            }
            if (param_1._2_1_ == -1) {
              **(undefined1 **)(iVar4 + 0x10) = 0;
              iVar5 = *(int *)(iVar4 + 0x14) + -1;
              *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
              *(int *)(iVar4 + 0x14) = iVar5;
              if (iVar5 == 0) {
                FUN_004b2420(iVar4);
              }
            }
            uVar9 = uVar9 << 8;
            local_4 = local_4 - 1;
          } while (local_4 != 0);
        }
        *(uint *)(iVar4 + 0x18) = uVar9;
        *(uint *)(iVar4 + 0x1c) = uVar7;
      }
    }
    *(undefined4 *)(iVar4 + 0x38) = 0;
    FUN_004b27d0(iVar4,*(undefined4 *)(iVar4 + 0x40),*(undefined4 *)(iVar4 + 0x3c));
    *(undefined4 *)(iVar4 + 0x3c) = 0;
  }
  return;
}

