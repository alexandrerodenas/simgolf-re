/* Ghidra decompiled: golf.exe */
/* Function: FUN_0042f7a0 @ 0x0042F7A0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042f7a0(void)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  _DAT_004c2e04 = 0xffffffff;
  iVar5 = 0;
  puVar8 = (undefined4 *)&DAT_00543018;
  for (iVar4 = 0x271; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  puVar8 = &DAT_0051b770;
  for (iVar4 = 5000; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  puVar7 = (undefined1 *)((int)&DAT_0051b770 + 3);
  iVar4 = 0;
  do {
    iVar6 = 0;
    do {
      uVar2 = FUN_0040bfe0(iVar5,iVar6,1,0);
      puVar7[-2] = uVar2;
      uVar2 = FUN_0040bfe0(iVar5,iVar6,3,0);
      *puVar7 = uVar2;
      uVar2 = FUN_0040bfe0(iVar5,iVar6,5,0);
      puVar7[2] = uVar2;
      uVar2 = FUN_0040bfe0(iVar5,iVar6,7,0);
      puVar7[4] = uVar2;
      if (((&DAT_0057837c)[*(char *)((int)&DAT_005722e8 + iVar6 + iVar4) * 0x30] & 6) != 0) {
        FUN_0042f4b0(iVar5,iVar6,local_4,local_8);
        uVar1 = *(uint *)(&DAT_0057837c + *(char *)((int)&DAT_005722e8 + iVar6 + iVar4) * 0x30);
        if ((uVar1 & 2) != 0) {
          (&DAT_00543018)[iVar6 + iVar4] = local_8[0];
        }
        if ((uVar1 & 4) != 0) {
          (&DAT_00543018)[iVar6 + iVar4] = local_4[0];
        }
      }
      iVar6 = iVar6 + 1;
      puVar7 = puVar7 + 8;
    } while (iVar6 < 0x32);
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 0x32;
  } while ((int)puVar7 < 0x520593);
  do {
    iVar4 = 0;
    iVar5 = 0;
    puVar8 = &DAT_005722e8;
    do {
      iVar6 = 0;
      do {
        if ((*(uint *)(&DAT_0057837c + *(char *)((int)puVar8 + iVar6) * 0x30) & 1) != 0) {
          if ((*(uint *)(&DAT_0057837c + *(char *)((int)puVar8 + iVar6) * 0x30) & 2) != 0) {
            iVar3 = FUN_0042f630(iVar5,iVar6);
            iVar4 = iVar4 + iVar3;
          }
          iVar3 = *(char *)((int)puVar8 + iVar6) * 0x30;
          if (((&DAT_0057837c)[iVar3] & 4) != 0) {
            iVar3 = FUN_0042f6e0(iVar5,iVar6,(&DAT_00578377)[iVar3] == '\x10');
            iVar4 = iVar4 + iVar3;
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0x32);
      puVar8 = (undefined4 *)((int)puVar8 + 0x32);
      iVar5 = iVar5 + 1;
    } while ((int)puVar8 < 0x572cac);
  } while (iVar4 != 0);
  iVar4 = 0;
  do {
    iVar5 = 0;
    do {
      FUN_0042f530(iVar4,iVar5);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x32);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x32);
  DAT_005619a0 = DAT_005619a0 & 0xfd | 8;
  DAT_0059e7b8 = DAT_0059e7b8 & 0xfffbffff;
  return;
}

