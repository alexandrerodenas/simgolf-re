/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000b8c0 @ 0x3000B8C0 */


char * FUN_3000b8c0(char *param_1,undefined4 param_2,char *param_3,char *param_4,char *param_5)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char *local_8;
  
  pcVar2 = param_1;
  bVar1 = false;
  local_8 = (char *)0x0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    return (char *)0x0;
  }
  uVar8 = _RADTimerRead_0();
  pcVar3 = param_3;
  if ((param_3 != (char *)0xffffffff) && (*(char **)(pcVar2 + 0x54) != param_3)) {
    param_3 = pcVar2 + 0x60;
    bVar1 = true;
    LOCK();
    *param_3 = *param_3 + '\x01';
    UNLOCK();
    iVar4 = *(int *)(pcVar2 + 100);
    while (iVar4 != 0) {
      Sleep(0);
      _BinkService_4(*(int **)(pcVar2 + 0x18));
      iVar4 = *(int *)(pcVar2 + 100);
    }
    if ((*(char **)(pcVar2 + 0x54) < pcVar3) && (pcVar3 <= *(char **)(pcVar2 + 0x50))) {
      param_1 = pcVar3 + -*(int *)(pcVar2 + 0x54);
      *(char **)(pcVar2 + 0x54) = pcVar3;
      *(char **)(pcVar2 + 0x5c) = param_1 + *(int *)(pcVar2 + 0x5c);
      *(int *)(pcVar2 + 0x48) = *(int *)(pcVar2 + 0x48) - (int)param_1;
      *(char **)(pcVar2 + 0x58) = param_1 + *(int *)(pcVar2 + 0x58);
      if (*(uint *)(pcVar2 + 0x6c) < *(uint *)(pcVar2 + 0x58)) {
        *(int *)(pcVar2 + 0x58) = *(int *)(pcVar2 + 0x58) - *(int *)(pcVar2 + 0x3c);
      }
    }
    else {
      SetFilePointer(*(HANDLE *)(pcVar2 + 0x4c),(LONG)(pcVar3 + *(int *)(pcVar2 + 0x78)),(PLONG)0x0,
                     0);
      *(char **)(pcVar2 + 0x50) = pcVar3;
      *(char **)(pcVar2 + 0x54) = pcVar3;
      *(undefined4 *)(pcVar2 + 0x5c) = *(undefined4 *)(pcVar2 + 0x3c);
      pcVar2[0x48] = '\0';
      pcVar2[0x49] = '\0';
      pcVar2[0x4a] = '\0';
      pcVar2[0x4b] = '\0';
      *(undefined4 *)(pcVar2 + 0x58) = *(undefined4 *)(pcVar2 + 0x68);
      *(undefined4 *)(pcVar2 + 0x70) = *(undefined4 *)(pcVar2 + 0x68);
    }
  }
  do {
    if (*(int *)(pcVar2 + 0x48) != 0) {
      pcVar3 = *(char **)(pcVar2 + 0x48);
      if (param_5 < *(char **)(pcVar2 + 0x48)) {
        pcVar3 = param_5;
      }
      param_5 = param_5 + -(int)pcVar3;
      local_8 = local_8 + (int)pcVar3;
      *(char **)(pcVar2 + 0x54) = pcVar3 + *(int *)(pcVar2 + 0x54);
      param_3 = (char *)(*(int *)(pcVar2 + 0x6c) - *(int *)(pcVar2 + 0x58));
      if (param_3 <= pcVar3) {
        pcVar6 = *(char **)(pcVar2 + 0x58);
        pcVar7 = param_4;
        for (uVar5 = (uint)param_3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar5 = (uint)param_3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar7 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar7 = pcVar7 + 1;
        }
        param_4 = param_4 + (int)param_3;
        *(undefined4 *)(pcVar2 + 0x58) = *(undefined4 *)(pcVar2 + 0x68);
        pcVar3 = pcVar3 + -(int)param_3;
        *(int *)(pcVar2 + 0x48) = *(int *)(pcVar2 + 0x48) - (int)param_3;
        *(char **)(pcVar2 + 0x5c) = param_3 + *(int *)(pcVar2 + 0x5c);
        if (pcVar3 == (char *)0x0) goto LAB_3000ba51;
      }
      pcVar6 = *(char **)(pcVar2 + 0x58);
      pcVar7 = param_4;
      for (uVar5 = (uint)pcVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar5 = (uint)pcVar3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar7 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      }
      param_4 = param_4 + (int)pcVar3;
      *(char **)(pcVar2 + 0x58) = pcVar3 + *(int *)(pcVar2 + 0x58);
      *(int *)(pcVar2 + 0x48) = *(int *)(pcVar2 + 0x48) - (int)pcVar3;
      *(char **)(pcVar2 + 0x5c) = pcVar3 + *(int *)(pcVar2 + 0x5c);
    }
LAB_3000ba51:
    if (param_5 == (char *)0x0) {
      uVar9 = _RADTimerRead_0();
      iVar4 = ((int)uVar9 - (int)uVar8) + *(int *)(pcVar2 + 0x30);
      goto LAB_3000bb23;
    }
    if (bVar1) {
      uVar9 = _RADTimerRead_0();
      pcVar3 = param_5;
      ReadFile(*(HANDLE *)(pcVar2 + 0x4c),param_4,(DWORD)param_5,(LPDWORD)&param_1,(LPOVERLAPPED)0x0
              );
      if (param_1 < pcVar3) {
        pcVar2[0x1c] = '\x01';
        pcVar2[0x1d] = '\0';
        pcVar2[0x1e] = '\0';
        pcVar2[0x1f] = '\0';
      }
      *(char **)(pcVar2 + 0x50) = param_1 + *(int *)(pcVar2 + 0x50);
      *(char **)(pcVar2 + 0x54) = param_1 + *(int *)(pcVar2 + 0x54);
      *(char **)(pcVar2 + 0x24) = param_1 + *(int *)(pcVar2 + 0x24);
      local_8 = local_8 + (int)param_1;
      if (*(int *)(pcVar2 + 0x80) != 0) {
        FUN_3000bb70((int)pcVar2,(uint)param_1,(int)uVar9);
      }
      uVar10 = _RADTimerRead_0();
      *(int *)(pcVar2 + 0x2c) = ((int)uVar10 - (int)uVar9) + *(int *)(pcVar2 + 0x2c);
      iVar4 = ((int)uVar10 - (int)uVar8) + *(int *)(pcVar2 + 0x30);
LAB_3000bb23:
      *(int *)(pcVar2 + 0x30) = iVar4;
      uVar5 = *(int *)(pcVar2 + 0x7c) - *(int *)(pcVar2 + 0x54);
      if (*(uint *)(pcVar2 + 0x3c) <= uVar5) {
        uVar5 = *(uint *)(pcVar2 + 0x3c);
      }
      *(uint *)(pcVar2 + 0x44) = uVar5;
      if (*(uint *)(pcVar2 + 0x44) < *(int *)(pcVar2 + 0x48) + 0x1000U) {
        *(undefined4 *)(pcVar2 + 0x44) = *(undefined4 *)(pcVar2 + 0x48);
      }
      if (bVar1) {
        LOCK();
        pcVar2[0x60] = pcVar2[0x60] + -1;
        UNLOCK();
      }
      return local_8;
    }
    param_3 = pcVar2 + 0x60;
    bVar1 = true;
    LOCK();
    *param_3 = *param_3 + '\x01';
    UNLOCK();
    iVar4 = *(int *)(pcVar2 + 100);
    while (iVar4 != 0) {
      Sleep(0);
      _BinkService_4(*(int **)(pcVar2 + 0x18));
      iVar4 = *(int *)(pcVar2 + 100);
    }
  } while( true );
}

