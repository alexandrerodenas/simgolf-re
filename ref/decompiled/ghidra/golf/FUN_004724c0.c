/* Ghidra decompiled: golf.exe */
/* Function: FUN_004724c0 @ 0x004724C0 */


int FUN_004724c0(void)

{
  byte bVar1;
  char cVar2;
  char *pcVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *_Str;
  byte *pbVar10;
  char *pcVar11;
  bool bVar12;
  int local_4;
  
  local_4 = 0;
  FUN_0043d2a0(s_Themes_____004e40a0,&DAT_004e9a84,&DAT_004e9a84);
  _Str = &DAT_0080b194;
  pbVar8 = &DAT_0056e928;
  do {
    pcVar3 = _strstr((char *)_Str,&DAT_004c4944);
    pbVar9 = pbVar8;
    if (pcVar3 == (char *)0x0) {
      iVar5 = -1;
      pbVar4 = _Str;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
      } while (bVar1 != 0);
      if (iVar5 != -2) {
        pcVar3 = s_Championship_004c3c5c;
        pbVar4 = _Str;
        do {
          bVar1 = *pbVar4;
          bVar12 = bVar1 < (byte)*pcVar3;
          if (bVar1 != *pcVar3) {
LAB_00472537:
            iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
            goto LAB_0047253c;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar12 = bVar1 < (byte)pcVar3[1];
          if (bVar1 != pcVar3[1]) goto LAB_00472537;
          pbVar4 = pbVar4 + 2;
          pcVar3 = pcVar3 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_0047253c:
        if (iVar5 != 0) {
          uVar6 = 0xffffffff;
          local_4 = local_4 + 1;
          pbVar9 = pbVar8 + 0x32;
          pbVar4 = _Str;
          do {
            pbVar10 = pbVar4;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pbVar10 = pbVar4 + 1;
            bVar1 = *pbVar4;
            pbVar4 = pbVar10;
          } while (bVar1 != 0);
          uVar6 = ~uVar6;
          pbVar4 = pbVar10 + -uVar6;
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)pbVar8 = *(undefined4 *)pbVar4;
            pbVar4 = pbVar4 + 4;
            pbVar8 = pbVar8 + 4;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pbVar8 = *pbVar4;
            pbVar4 = pbVar4 + 1;
            pbVar8 = pbVar8 + 1;
          }
        }
      }
    }
    _Str = _Str + 100;
    pbVar8 = pbVar9;
  } while ((int)_Str < 0x80d840);
  uVar6 = 0xffffffff;
  pcVar3 = s_Standard_004c6c10;
  do {
    pcVar11 = pcVar3;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar11 = pcVar3 + 1;
    cVar2 = *pcVar3;
    pcVar3 = pcVar11;
  } while (cVar2 != '\0');
  uVar6 = ~uVar6;
  pcVar3 = pcVar11 + -uVar6;
  pcVar11 = &DAT_00567328;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar11 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar11 = pcVar11 + 1;
  }
  return local_4;
}

