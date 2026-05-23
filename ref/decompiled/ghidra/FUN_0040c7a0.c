/* Ghidra decompiled: golf.exe */
/* Function: FUN_0040c7a0 @ 0x0040C7A0 */
/* Body size: 185 addresses */


void FUN_0040c7a0(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  int local_8;
  undefined4 local_4;
  
  pcVar6 = &DAT_0056c570;
  iVar5 = 0;
  do {
    if (*(int *)((int)&DAT_0056a924 + iVar5) != 0) {
      *(int *)((int)&DAT_0056a924 + iVar5) = *(int *)((int)&DAT_0056a924 + iVar5) + -1;
      iVar2 = FUN_0042fb90(*(undefined4 *)((int)&DAT_0056c770 + iVar5),
                           *(undefined4 *)((int)&DAT_0056c794 + iVar5),&local_4,&local_8,0);
      if (iVar2 != 0) {
        uVar3 = 0xffffffff;
        pcVar7 = pcVar6;
        do {
          pcVar8 = pcVar7;
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          pcVar8 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar8;
        } while (cVar1 != '\0');
        uVar3 = ~uVar3;
        pcVar7 = pcVar8 + -uVar3;
        pcVar8 = (char *)&DAT_0051a068;
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar8 = pcVar8 + 4;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pcVar8 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar8 = pcVar8 + 1;
        }
        FUN_004762d0(&DAT_0051b360,0,0,0);
        FUN_00404bc0(&DAT_0051a068,local_4,local_8 + -4,*(undefined4 *)((int)&DAT_0056a794 + iVar5))
        ;
      }
    }
    pcVar6 = pcVar6 + 0x40;
    iVar5 = iVar5 + 4;
    if (0x56c76f < (int)pcVar6) {
      return;
    }
  } while( true );
}

