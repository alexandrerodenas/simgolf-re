/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a911e @ 0x004A911E */
/* Body size: 291 addresses */


int FUN_004a911e(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int local_8;
  int local_4;
  
  iVar4 = -1;
  FUN_004a79b2(0x12);
  local_8 = 0;
  local_4 = 0;
  piVar3 = &DAT_00842040;
  while (puVar2 = (undefined4 *)*piVar3, puVar1 = puVar2, puVar2 != (undefined4 *)0x0) {
    for (; puVar2 < puVar1 + 0x120; puVar2 = puVar2 + 9) {
      if ((*(byte *)(puVar2 + 1) & 1) == 0) {
        if (puVar2[2] == 0) {
          FUN_004a79b2(0x11);
          if (puVar2[2] == 0) {
            InitializeCriticalSection((LPCRITICAL_SECTION)(puVar2 + 3));
            puVar2[2] = puVar2[2] + 1;
          }
          FUN_004a7a13(0x11);
        }
        EnterCriticalSection((LPCRITICAL_SECTION)(puVar2 + 3));
        if ((*(byte *)(puVar2 + 1) & 1) == 0) {
          *puVar2 = 0xffffffff;
          iVar4 = ((int)puVar2 - *piVar3) / 0x24 + local_4;
          if (iVar4 != -1) goto LAB_004a9230;
          break;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(puVar2 + 3));
      }
      puVar1 = (undefined4 *)*piVar3;
    }
    local_4 = local_4 + 0x20;
    piVar3 = piVar3 + 1;
    local_8 = local_8 + 1;
    if (0x84213f < (int)piVar3) goto LAB_004a9230;
  }
  puVar2 = _malloc(0x480);
  if (puVar2 != (undefined4 *)0x0) {
    DAT_00842140 = DAT_00842140 + 0x20;
    (&DAT_00842040)[local_8] = puVar2;
    puVar1 = puVar2;
    for (; puVar2 < puVar1 + 0x120; puVar2 = puVar2 + 9) {
      *(undefined1 *)(puVar2 + 1) = 0;
      *puVar2 = 0xffffffff;
      puVar2[2] = 0;
      *(undefined1 *)((int)puVar2 + 5) = 10;
      puVar1 = (undefined4 *)(&DAT_00842040)[local_8];
    }
    iVar4 = local_8 << 5;
    FUN_004a937e(iVar4);
  }
LAB_004a9230:
  FUN_004a7a13(0x12);
  return iVar4;
}

