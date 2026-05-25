/* Ghidra decompiled: golf.exe */
/* Function: FUN_004722c0 @ 0x004722C0 */


void FUN_004722c0(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  
  iVar5 = (int)(&DAT_005794b8)[param_1 * 0x40] >> 10;
  iVar7 = (int)(&DAT_005794bc)[param_1 * 0x40] >> 10;
  while( true ) {
    iVar3 = iVar7 + iVar5 * 0x32;
    cVar1 = *(char *)((int)&DAT_005722e8 + iVar3);
    if ((((&DAT_00578376)[cVar1 * 0x30] == '\x04') && (cVar1 != '\x16')) &&
       (((&DAT_0053caf0)[iVar3] & 800) == 0)) break;
    uVar2 = FUN_0045c1e0(3);
    iVar5 = iVar5 + -1 + (uVar2 & 0xffff);
    uVar2 = FUN_0045c1e0(3);
    iVar7 = iVar7 + -1 + (uVar2 & 0xffff);
    iVar3 = FUN_0040bf60(iVar5,iVar7);
    if (iVar3 != 0) {
      return;
    }
  }
  switch(*(undefined1 *)((int)&DAT_0053a454 + param_2 * 0x32)) {
  case 0x41:
    iVar5 = 0x16a;
    break;
  default:
    uVar2 = FUN_0045c1e0(10);
    iVar5 = (uVar2 & 0xffff) + 0x168;
    break;
  case 0x43:
    iVar5 = 0x168;
    break;
  case 0x46:
  case 0x52:
    iVar5 = 0x170;
    break;
  case 0x47:
    iVar5 = 0x16f;
    break;
  case 0x48:
    iVar5 = 0x16d;
    break;
  case 0x4c:
    iVar5 = 0x16c;
    break;
  case 0x4d:
    iVar5 = 0x16b;
    break;
  case 0x50:
    iVar5 = 0x169;
    break;
  case 0x53:
    iVar5 = 0x173;
    break;
  case 0x58:
    iVar5 = 0x171;
  }
  uVar2 = 1 << ((byte)(iVar5 + -0x168) & 0x1f);
  DAT_00822c70 = DAT_00822c70 | uVar2;
  DAT_00543cfc = DAT_00543cfc | uVar2;
  uVar2 = 0xffffffff;
  pcVar6 = &DAT_004e409c;
  do {
    pcVar9 = pcVar6;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar9 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar9;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  iVar7 = -1;
  pcVar6 = (char *)&DAT_0051a068;
  do {
    pcVar8 = pcVar6;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  pcVar6 = pcVar9 + -uVar2;
  pcVar9 = pcVar8 + -1;
  for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar9 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar9 = pcVar9 + 1;
  }
  FUN_004074a0(iVar5 + -0x168,1);
  uVar2 = 0xffffffff;
  pcVar6 = s_is_now_available_in_your_landmar_004e4070;
  do {
    pcVar9 = pcVar6;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar9 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar9;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  iVar5 = -1;
  pcVar6 = (char *)&DAT_0051a068;
  do {
    pcVar8 = pcVar6;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  pcVar6 = pcVar9 + -uVar2;
  pcVar9 = pcVar8 + -1;
  for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar9 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar9 = pcVar9 + 1;
  }
  FUN_0040cb00(0x80000210,0,0xffffffff);
  return;
}

