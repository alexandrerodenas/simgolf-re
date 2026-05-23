/* Ghidra decompiled: golf.exe */
/* Function: FUN_00405970 @ 0x00405970 */
/* Body size: 134 addresses */


int FUN_00405970(int param_1,int param_2,undefined1 param_3)

{
  undefined1 uVar1;
  char *pcVar2;
  int iVar3;
  
  iVar3 = 0;
  pcVar2 = &DAT_00572cc2;
  do {
    if (*pcVar2 == -1) {
      (&DAT_00572cb0)[iVar3 * 5] = param_1 * 0x400 + 0x200;
      (&DAT_00572cb4)[iVar3 * 5] = param_2 * 0x400 + 0x200;
      uVar1 = FUN_0045c1e0(4);
      (&DAT_00572cc1)[iVar3 * 0x14] = uVar1;
      (&DAT_00572cbe)[iVar3 * 10] = 0x10c;
      (&DAT_00572cb8)[iVar3 * 5] = 0xffffffec;
      (&DAT_00572cc2)[iVar3 * 0x14] = param_3;
      (&DAT_00572cbc)[iVar3 * 10] = 0xffff;
      return iVar3;
    }
    pcVar2 = pcVar2 + 0x14;
    iVar3 = iVar3 + 1;
  } while ((int)pcVar2 < 0x5736c2);
  return -1;
}

