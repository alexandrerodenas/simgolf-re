/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1001afa6 @ 0x1001AFA6 */
/* Body size: 48 addresses */


void FUN_1001afa6(void)

{
  int *piVar1;
  LPVOID pvVar2;
  int iVar3;
  void *this;
  int unaff_EBP;
  
  do {
    if ((*(int *)(unaff_EBP + -0x24) != 0) || (DAT_1011079c == 0)) {
      FUN_1001b040();
      return;
    }
    iVar3 = __callnewh(*(size_t *)(unaff_EBP + 0xc));
    if (iVar3 == 0) {
      FUN_1001b040();
      return;
    }
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  } while (0xffffffe0 < *(uint *)(unaff_EBP + 0xc));
  FUN_10019e10(this,9);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  iVar3 = FUN_1001d4a0(*(undefined **)(unaff_EBP + 8),(undefined4 *)(unaff_EBP + -0x38),
                       (uint *)(unaff_EBP + -0x2c));
  *(int *)(unaff_EBP + -0x30) = iVar3;
  if (*(int *)(unaff_EBP + -0x30) == 0) {
    pvVar2 = HeapReAlloc(DAT_101122c0,0,*(LPVOID *)(unaff_EBP + 8),*(SIZE_T *)(unaff_EBP + 0xc));
    *(LPVOID *)(unaff_EBP + -0x24) = pvVar2;
  }
  else {
    if (*(uint *)(unaff_EBP + 0xc) < DAT_10066054) {
      iVar3 = FUN_1001dc10(*(int *)(unaff_EBP + -0x38),*(uint **)(unaff_EBP + -0x2c),
                           *(byte **)(unaff_EBP + -0x30),*(uint *)(unaff_EBP + 0xc) >> 4);
      if (iVar3 == 0) {
        piVar1 = FUN_1001d5a0(*(uint *)(unaff_EBP + 0xc) >> 4);
        *(int **)(unaff_EBP + -0x24) = piVar1;
        if (*(int *)(unaff_EBP + -0x24) != 0) {
          *(uint *)(unaff_EBP + -0x34) = (uint)**(byte **)(unaff_EBP + -0x30) << 4;
          if (*(uint *)(unaff_EBP + -0x34) < *(uint *)(unaff_EBP + 0xc)) {
            *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(unaff_EBP + -0x34);
          }
          else {
            *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(unaff_EBP + 0xc);
          }
          FUN_1001f510(*(undefined4 **)(unaff_EBP + -0x24),*(undefined4 **)(unaff_EBP + 8),
                       *(uint *)(unaff_EBP + -0x44));
          FUN_1001d530(*(int *)(unaff_EBP + -0x38),*(int *)(unaff_EBP + -0x2c),
                       *(byte **)(unaff_EBP + -0x30));
        }
      }
      else {
        *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + 8);
      }
    }
    if (*(int *)(unaff_EBP + -0x24) == 0) {
      pvVar2 = HeapAlloc(DAT_101122c0,0,*(SIZE_T *)(unaff_EBP + 0xc));
      *(LPVOID *)(unaff_EBP + -0x24) = pvVar2;
      if (*(int *)(unaff_EBP + -0x24) != 0) {
        *(uint *)(unaff_EBP + -0x34) = (uint)**(byte **)(unaff_EBP + -0x30) << 4;
        if (*(uint *)(unaff_EBP + -0x34) < *(uint *)(unaff_EBP + 0xc)) {
          *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(unaff_EBP + -0x34);
        }
        else {
          *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(unaff_EBP + 0xc);
        }
        FUN_1001f510(*(undefined4 **)(unaff_EBP + -0x24),*(undefined4 **)(unaff_EBP + 8),
                     *(uint *)(unaff_EBP + -0x48));
        FUN_1001d530(*(int *)(unaff_EBP + -0x38),*(int *)(unaff_EBP + -0x2c),
                     *(byte **)(unaff_EBP + -0x30));
      }
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_1001af9b();
  FUN_1001afa6();
  return;
}

