/* Ghidra decompiled: golf.exe */
/* Function: FUN_0042f120 @ 0x0042F120 */
/* Body size: 147 addresses */


void FUN_0042f120(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_1 * 0x32 + param_2;
  if ((((&DAT_0053caf0)[iVar4] & 0x40) == 0) &&
     (cVar1 = *(char *)((int)&DAT_005722e8 + param_2 + param_1 * 0x32),
     (&DAT_0053caf0)[iVar4] = (&DAT_0053caf0)[iVar4] | 0x40,
     '\0' < (char)(&DAT_00578372)[cVar1 * 0x30])) {
    iVar4 = 0;
    do {
      iVar2 = *(int *)((int)&DAT_004c2878 + iVar4) + param_1;
      iVar3 = *(int *)((int)&DAT_004c2898 + iVar4) + param_2;
      if ((((&DAT_0053caf0)[iVar3 + iVar2 * 0x32] & 0x420) != 0) &&
         (((&DAT_0053caf0)[iVar3 + iVar2 * 0x32] & 0x40) == 0)) {
        FUN_0042f120(iVar2,iVar3);
      }
      iVar4 = iVar4 + 8;
    } while (iVar4 < 0x20);
  }
  return;
}

