/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a9c19 @ 0x004A9C19 */


undefined4 * FUN_004a9c19(void)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)0x0;
  FUN_004a79b2(2);
  iVar3 = 0;
  if (0 < DAT_00842020) {
    do {
      iVar1 = *(int *)(DAT_00841010 + iVar3 * 4);
      if (iVar1 == 0) {
        iVar3 = iVar3 * 4;
        pvVar2 = _malloc(0x38);
        *(void **)(iVar3 + DAT_00841010) = pvVar2;
        if (*(int *)(iVar3 + DAT_00841010) != 0) {
          InitializeCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar3 + DAT_00841010) + 0x20));
          EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar3 + DAT_00841010) + 0x20));
          puVar4 = *(undefined4 **)(iVar3 + DAT_00841010);
LAB_004a9cbd:
          if (puVar4 != (undefined4 *)0x0) {
            puVar4[4] = 0xffffffff;
            puVar4[1] = 0;
            puVar4[3] = 0;
            puVar4[2] = 0;
            *puVar4 = 0;
            puVar4[7] = 0;
          }
        }
        break;
      }
      if ((*(byte *)(iVar1 + 0xc) & 0x83) == 0) {
        FUN_004a98a3(iVar3,iVar1);
        iVar1 = *(int *)(DAT_00841010 + iVar3 * 4);
        if ((*(byte *)(iVar1 + 0xc) & 0x83) == 0) {
          puVar4 = *(undefined4 **)(DAT_00841010 + iVar3 * 4);
          goto LAB_004a9cbd;
        }
        FUN_004a98f5(iVar3,iVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_00842020);
  }
  FUN_004a7a13(2);
  return puVar4;
}

