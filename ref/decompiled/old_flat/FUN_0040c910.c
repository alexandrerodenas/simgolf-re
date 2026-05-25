/* Ghidra decompiled: golf.exe */
/* Function: FUN_0040c910 @ 0x0040C910 */


void FUN_0040c910(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  int local_8;
  undefined4 local_4;
  
  iVar5 = 0;
  do {
    if ((*(int *)((int)&DAT_00542f00 + iVar5) != 0) && ((DAT_0059e7b8 & 0x1000000) == 0)) {
      *(int *)((int)&DAT_00542f00 + iVar5) = *(int *)((int)&DAT_00542f00 + iVar5) + -1;
      iVar2 = FUN_0042fb90(*(undefined4 *)((int)&DAT_00542fd8 + iVar5),
                           *(undefined4 *)((int)&DAT_00542ff8 + iVar5),&local_4,&local_8,0);
      if (iVar2 != 0) {
        iVar2 = *(int *)((int)&DAT_00542dd8 + iVar5);
        pcVar6 = &DAT_004c5340;
        if (iVar2 < 1) {
          pcVar6 = &DAT_004e9a84;
        }
        uVar3 = 0xffffffff;
        do {
          pcVar7 = pcVar6;
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          pcVar7 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar7;
        } while (cVar1 != '\0');
        uVar3 = ~uVar3;
        pcVar6 = pcVar7 + -uVar3;
        pcVar7 = (char *)&DAT_0051a068;
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pcVar7 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar7 = pcVar7 + 1;
        }
        FUN_0042dc00(iVar2 * 100);
        FUN_004762d0(&DAT_0051b360,0,0,0);
        FUN_00404bc0(&DAT_0051a068,local_4,local_8 + -4,
                     ((*(int *)((int)&DAT_00542dd8 + iVar5) < 1) - 1 & 0xffffa6e0) + 0x80007d08);
      }
    }
    iVar5 = iVar5 + 4;
    if (0x1f < iVar5) {
      return;
    }
  } while( true );
}

