/* Ghidra decompiled: golf.exe */
/* Function: FUN_0042f1c0 @ 0x0042F1C0 */
/* Body size: 248 addresses */


void FUN_0042f1c0(int param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = 0;
  cVar3 = *(char *)((int)&DAT_0056988c + param_1 * 0x32 + param_2);
  pcVar1 = (char *)((int)&DAT_0056988c + param_1 * 0x32 + param_2);
  do {
    iVar6 = *(int *)((int)&DAT_004c2898 + iVar4) + param_2;
    iVar5 = *(int *)((int)&DAT_004c2878 + iVar4) + param_1;
    iVar2 = FUN_0040bf60(iVar5,iVar6);
    if (iVar2 == 0) {
      iVar6 = iVar6 + iVar5 * 0x32;
      if ((&DAT_00578376)[*(char *)((int)&DAT_005722e8 + iVar6) * 0x30] != '\x11') {
        cVar3 = '\0';
      }
      if ((*(char *)((int)&DAT_0056988c + iVar6) == '\0') && (cVar3 != '\0')) {
        cVar3 = '\x01';
      }
    }
    iVar4 = iVar4 + 4;
  } while (iVar4 < 0x20);
  if (cVar3 != *pcVar1) {
    *pcVar1 = cVar3;
    iVar4 = 0;
    do {
      iVar5 = *(int *)((int)&DAT_004c2898 + iVar4) + param_2;
      iVar2 = *(int *)((int)&DAT_004c2878 + iVar4) + param_1;
      iVar6 = FUN_0040bf60(iVar2,iVar5);
      if ((iVar6 == 0) &&
         ((&DAT_00578376)[*(char *)((int)&DAT_005722e8 + iVar2 * 0x32 + iVar5) * 0x30] == '\x11')) {
        FUN_0042f1c0(iVar2,iVar5);
      }
      iVar4 = iVar4 + 4;
    } while (iVar4 < 0x20);
  }
  return;
}

