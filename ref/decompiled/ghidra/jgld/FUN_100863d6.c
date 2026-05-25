/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100863d6 @ 0x100863D6 */


void FUN_100863d6(void)

{
  int *piVar1;
  LPVOID pvVar2;
  int iVar3;
  int unaff_EBP;
  
  do {
    if ((*(int *)(unaff_EBP + -0x24) != 0) || (DAT_10128828 == 0)) {
      FUN_10086470();
      return;
    }
    iVar3 = __callnewh(*(size_t *)(unaff_EBP + 0xc));
    if (iVar3 == 0) {
      FUN_10086470();
      return;
    }
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  } while (0xffffffe0 < *(uint *)(unaff_EBP + 0xc));
  FUN_100833f0(9);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  iVar3 = FUN_100888d0(*(undefined **)(unaff_EBP + 8),(undefined4 *)(unaff_EBP + -0x38),
                       (uint *)(unaff_EBP + -0x2c));
  *(int *)(unaff_EBP + -0x30) = iVar3;
  if (*(int *)(unaff_EBP + -0x30) == 0) {
    pvVar2 = HeapReAlloc(DAT_10129fa0,0,*(LPVOID *)(unaff_EBP + 8),*(SIZE_T *)(unaff_EBP + 0xc));
    *(LPVOID *)(unaff_EBP + -0x24) = pvVar2;
  }
  else {
    if (*(uint *)(unaff_EBP + 0xc) < DAT_10125784) {
      iVar3 = FUN_10089040(*(int *)(unaff_EBP + -0x38),*(uint **)(unaff_EBP + -0x2c),
                           *(byte **)(unaff_EBP + -0x30),*(uint *)(unaff_EBP + 0xc) >> 4);
      if (iVar3 == 0) {
        piVar1 = FUN_100889d0(*(uint *)(unaff_EBP + 0xc) >> 4);
        *(int **)(unaff_EBP + -0x24) = piVar1;
        if (*(int *)(unaff_EBP + -0x24) != 0) {
          *(uint *)(unaff_EBP + -0x34) = (uint)**(byte **)(unaff_EBP + -0x30) << 4;
          if (*(uint *)(unaff_EBP + -0x34) < *(uint *)(unaff_EBP + 0xc)) {
            *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(unaff_EBP + -0x34);
          }
          else {
            *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(unaff_EBP + 0xc);
          }
          FUN_1007f3a0(*(undefined4 **)(unaff_EBP + -0x24),*(undefined4 **)(unaff_EBP + 8),
                       *(uint *)(unaff_EBP + -0x44));
          FUN_10088960(*(int *)(unaff_EBP + -0x38),*(int *)(unaff_EBP + -0x2c),
                       *(byte **)(unaff_EBP + -0x30));
        }
      }
      else {
        *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + 8);
      }
    }
    if (*(int *)(unaff_EBP + -0x24) == 0) {
      pvVar2 = HeapAlloc(DAT_10129fa0,0,*(SIZE_T *)(unaff_EBP + 0xc));
      *(LPVOID *)(unaff_EBP + -0x24) = pvVar2;
      if (*(int *)(unaff_EBP + -0x24) != 0) {
        *(uint *)(unaff_EBP + -0x34) = (uint)**(byte **)(unaff_EBP + -0x30) << 4;
        if (*(uint *)(unaff_EBP + -0x34) < *(uint *)(unaff_EBP + 0xc)) {
          *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(unaff_EBP + -0x34);
        }
        else {
          *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(unaff_EBP + 0xc);
        }
        FUN_1007f3a0(*(undefined4 **)(unaff_EBP + -0x24),*(undefined4 **)(unaff_EBP + 8),
                     *(uint *)(unaff_EBP + -0x48));
        FUN_10088960(*(int *)(unaff_EBP + -0x38),*(int *)(unaff_EBP + -0x2c),
                     *(byte **)(unaff_EBP + -0x30));
      }
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_100863cb();
  FUN_100863d6();
  return;
}

