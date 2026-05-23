/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004c7d1 @ 0x1004C7D1 */
/* Body size: 582 addresses */


uint * __cdecl FUN_1004c7d1(int param_1,uint *param_2)

{
  uint *puVar1;
  byte *pbVar2;
  size_t sVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  undefined **ppuVar7;
  undefined4 *puVar8;
  uint local_8c [33];
  size_t local_8;
  
  iVar6 = 0;
  if ((param_1 < 0) || (5 < param_1)) {
    return (uint *)0x0;
  }
  FUN_10047710(0x13);
  DAT_100b58cc = DAT_100b58cc + 1;
  while (DAT_100b58dc != 0) {
    Sleep(1);
  }
  if (param_1 == 0) {
    local_8 = 1;
    param_1 = 0;
    if (param_2 == (uint *)0x0) {
LAB_1004c9f7:
      puVar1 = FUN_1004cb32();
    }
    else {
      if ((((char)*param_2 == 'L') && (*(char *)((int)param_2 + 1) == 'C')) &&
         (*(char *)((int)param_2 + 2) == '_')) {
        pbVar2 = FUN_1004ed50((byte *)param_2,&DAT_1005f3f0);
        puVar1 = param_2;
        while (((pbVar2 != (byte *)0x0 && (local_8 = (int)pbVar2 - (int)puVar1, local_8 != 0)) &&
               (*pbVar2 != 0x3b))) {
          param_2 = (uint *)0x1;
          ppuVar7 = &PTR_s_LC_COLLATE_10067cfc;
          do {
            iVar6 = _strncmp(*ppuVar7,(char *)puVar1,local_8);
            if ((iVar6 == 0) && (sVar3 = _strlen(*ppuVar7), local_8 == sVar3)) break;
            param_2 = (uint *)((int)param_2 + 1);
            ppuVar7 = ppuVar7 + 3;
          } while ((int)ppuVar7 < 0x10067d2d);
          pbVar2 = pbVar2 + 1;
          sVar3 = FUN_1004ed10(pbVar2,&DAT_1005f3ec);
          if ((sVar3 == 0) && (*pbVar2 != 0x3b)) break;
          if ((int)param_2 < 6) {
            _strncpy((char *)local_8c,(char *)pbVar2,sVar3);
            *(undefined1 *)((int)local_8c + sVar3) = 0;
            iVar6 = FUN_1004ca17((int)param_2,local_8c);
            if (iVar6 != 0) {
              param_1 = param_1 + 1;
            }
          }
          if ((pbVar2[sVar3] == 0) || (puVar1 = (uint *)(pbVar2 + sVar3 + 1), (byte)*puVar1 == 0))
          goto LAB_1004c961;
          pbVar2 = FUN_1004ed50((byte *)puVar1,&DAT_1005f3f0);
        }
        FUN_10047771(0x13);
        puVar1 = (uint *)0x0;
        goto LAB_1004ca06;
      }
      puVar4 = FUN_1004cbeb(param_2,local_8c,(undefined4 *)0x0,(undefined4 *)0x0);
      puVar1 = (uint *)0x0;
      if (puVar4 != (uint *)0x0) {
        puVar8 = &DAT_10067cf4;
        do {
          if ((undefined **)puVar8 != &DAT_10067cf4) {
            iVar5 = _strcmp((char *)local_8c,(char *)*puVar8);
            if ((iVar5 == 0) || (iVar5 = FUN_1004ca17(iVar6,local_8c), iVar5 != 0)) {
              param_1 = param_1 + 1;
            }
            else {
              local_8 = 0;
            }
          }
          puVar8 = puVar8 + 3;
          iVar6 = iVar6 + 1;
        } while ((int)puVar8 < 0x10067d31);
        if (local_8 == 0) {
LAB_1004c961:
          if (param_1 != 0) goto LAB_1004c9f7;
          puVar1 = (uint *)0x0;
        }
        else {
          puVar1 = FUN_1004cb32();
          FUN_10042c07(DAT_10067cf4);
          DAT_10067cf4 = (undefined *)0x0;
        }
      }
    }
  }
  else if (param_2 == (uint *)0x0) {
    puVar1 = (uint *)(&DAT_10067cf4)[param_1 * 3];
  }
  else {
    puVar1 = (uint *)FUN_1004ca17(param_1,param_2);
  }
  FUN_10047771(0x13);
LAB_1004ca06:
  DAT_100b58cc = DAT_100b58cc + -1;
  return puVar1;
}

