/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001b1f0 @ 0x1001B1F0 */
/* Body size: 426 addresses */


void __thiscall FUN_1001b1f0(void *this,uint *param_1)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  char *pcVar6;
  byte *_Str;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  uint *puVar10;
  char *pcVar11;
  byte *pbVar12;
  byte *pbVar13;
  bool bVar14;
  int local_20c;
  int *local_208;
  undefined4 local_204;
  char local_200 [256];
  byte abStack_100 [256];
  
  uVar7 = 0xffffffff;
  puVar5 = param_1;
  do {
    puVar10 = puVar5;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    puVar10 = (uint *)((int)puVar5 + 1);
    uVar8 = *puVar5;
    puVar5 = puVar10;
  } while ((char)uVar8 != '\0');
  uVar7 = ~uVar7;
  local_208 = (int *)0x0;
  pcVar6 = (char *)((int)puVar10 - uVar7);
  pcVar11 = local_200;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar11 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar11 = pcVar11 + 1;
  }
  uVar7 = 0xffffffff;
  pcVar6 = local_200;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  if (*(char *)((int)&local_204 + uVar7 + 2) != '\\') {
    *(undefined1 *)((int)&local_204 + uVar7 + 3) = 0x5c;
    local_200[uVar7] = '\0';
  }
  local_20c = 0x80;
  do {
    local_204 = (int *)((int)this + 4);
    piVar3 = (int *)*local_204;
    if ((((piVar3 != (int *)0x0) && (piVar3 != local_208)) &&
        (iVar4 = (**(code **)(*piVar3 + 0x60))(), iVar4 == 0)) &&
       ((puVar5 = FUN_10042690(param_1,&DAT_10063e00), puVar5 == (uint *)0x0 &&
        (_Str = (byte *)(piVar3 + 0x35), local_208 = piVar3, _Str != (byte *)0x0)))) {
      uVar7 = 0xffffffff;
      pcVar6 = local_200;
      do {
        pcVar11 = pcVar6;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar11 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar11;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      pbVar9 = (byte *)(pcVar11 + -uVar7);
      pbVar13 = abStack_100;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pbVar13 = *(undefined4 *)pbVar9;
        pbVar9 = pbVar9 + 4;
        pbVar13 = pbVar13 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pbVar13 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        pbVar13 = pbVar13 + 1;
      }
      pcVar6 = _strrchr((char *)_Str,0x5c);
      pbVar9 = _Str;
      if (pcVar6 != (char *)0x0) {
        pbVar9 = (byte *)(pcVar6 + 1);
      }
      uVar7 = 0xffffffff;
      do {
        pbVar13 = pbVar9;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pbVar13 = pbVar9 + 1;
        bVar2 = *pbVar9;
        pbVar9 = pbVar13;
      } while (bVar2 != 0);
      uVar7 = ~uVar7;
      iVar4 = -1;
      pbVar9 = abStack_100;
      do {
        pbVar12 = pbVar9;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pbVar12 = pbVar9 + 1;
        bVar2 = *pbVar9;
        pbVar9 = pbVar12;
      } while (bVar2 != 0);
      pbVar9 = pbVar13 + -uVar7;
      pbVar13 = pbVar12 + -1;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pbVar13 = *(undefined4 *)pbVar9;
        pbVar9 = pbVar9 + 4;
        pbVar13 = pbVar13 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pbVar13 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        pbVar13 = pbVar13 + 1;
      }
      iVar4 = (**(code **)(*piVar3 + 0x60))();
      if (iVar4 != 0) {
        pbVar9 = abStack_100;
        do {
          bVar2 = *_Str;
          bVar14 = bVar2 < *pbVar9;
          if (bVar2 != *pbVar9) {
LAB_1001b352:
            iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
            goto LAB_1001b357;
          }
          if (bVar2 == 0) break;
          bVar2 = _Str[1];
          bVar14 = bVar2 < pbVar9[1];
          if (bVar2 != pbVar9[1]) goto LAB_1001b352;
          _Str = _Str + 2;
          pbVar9 = pbVar9 + 2;
        } while (bVar2 != 0);
        iVar4 = 0;
LAB_1001b357:
        if (iVar4 == 0) goto LAB_1001b373;
        (**(code **)(*piVar3 + 0x14))();
      }
      (**(code **)(*piVar3 + 0x10))(abStack_100);
    }
LAB_1001b373:
    local_20c = local_20c + -1;
    this = local_204;
    if (local_20c == 0) {
      return;
    }
  } while( true );
}

