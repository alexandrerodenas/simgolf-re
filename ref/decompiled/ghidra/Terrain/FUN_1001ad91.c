/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1001ad91 @ 0x1001AD91 */


void FUN_1001ad91(void)

{
  uint uVar1;
  int *piVar2;
  LPVOID pvVar3;
  int iVar4;
  void *this;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x28) == 0) {
    if (*(int *)(unaff_EBP + 0xc) == 0) {
      *(undefined4 *)(unaff_EBP + 0xc) = 1;
    }
    *(uint *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 0xfU & 0xfffffff0;
    pvVar3 = HeapReAlloc(DAT_101122c0,0,*(LPVOID *)(unaff_EBP + 8),*(SIZE_T *)(unaff_EBP + 0xc));
    *(LPVOID *)(unaff_EBP + -0x24) = pvVar3;
  }
  do {
    if ((*(int *)(unaff_EBP + -0x24) != 0) || (DAT_1011079c == 0)) {
      FUN_1001b040();
      return;
    }
    iVar4 = __callnewh(*(size_t *)(unaff_EBP + 0xc));
    if (iVar4 == 0) {
      FUN_1001b040();
      return;
    }
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  } while (0xffffffe0 < *(uint *)(unaff_EBP + 0xc));
  FUN_10019e10(this,9);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar1 = FUN_1001b480(*(int *)(unaff_EBP + 8));
  *(uint *)(unaff_EBP + -0x28) = uVar1;
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    if (*(uint *)(unaff_EBP + 0xc) <= DAT_10112300) {
      iVar4 = FUN_1001c360(*(uint **)(unaff_EBP + -0x28),*(int *)(unaff_EBP + 8),
                           *(int *)(unaff_EBP + 0xc));
      if (iVar4 == 0) {
        piVar2 = FUN_1001bb20(*(int *)(unaff_EBP + 0xc));
        *(int **)(unaff_EBP + -0x24) = piVar2;
        if (*(int *)(unaff_EBP + -0x24) != 0) {
          *(int *)(unaff_EBP + -0x20) = *(int *)(*(int *)(unaff_EBP + 8) + -4) + -1;
          if (*(uint *)(unaff_EBP + -0x20) < *(uint *)(unaff_EBP + 0xc)) {
            *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + -0x20);
          }
          else {
            *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + 0xc);
          }
          FUN_1001f510(*(undefined4 **)(unaff_EBP + -0x24),*(undefined4 **)(unaff_EBP + 8),
                       *(uint *)(unaff_EBP + -0x3c));
          FUN_1001b540(*(uint **)(unaff_EBP + -0x28),*(int *)(unaff_EBP + 8));
        }
      }
      else {
        *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + 8);
      }
    }
    if (*(int *)(unaff_EBP + -0x24) == 0) {
      if (*(int *)(unaff_EBP + 0xc) == 0) {
        *(undefined4 *)(unaff_EBP + 0xc) = 1;
      }
      *(uint *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 0xfU & 0xfffffff0;
      pvVar3 = HeapAlloc(DAT_101122c0,0,*(SIZE_T *)(unaff_EBP + 0xc));
      *(LPVOID *)(unaff_EBP + -0x24) = pvVar3;
      if (*(int *)(unaff_EBP + -0x24) != 0) {
        *(int *)(unaff_EBP + -0x20) = *(int *)(*(int *)(unaff_EBP + 8) + -4) + -1;
        if (*(uint *)(unaff_EBP + -0x20) < *(uint *)(unaff_EBP + 0xc)) {
          *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + -0x20);
        }
        else {
          *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + 0xc);
        }
        FUN_1001f510(*(undefined4 **)(unaff_EBP + -0x24),*(undefined4 **)(unaff_EBP + 8),
                     *(uint *)(unaff_EBP + -0x40));
        FUN_1001b540(*(uint **)(unaff_EBP + -0x28),*(int *)(unaff_EBP + 8));
      }
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_1001ad86();
  FUN_1001ad91();
  return;
}

