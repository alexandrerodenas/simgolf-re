/* Ghidra decompiled: sound.dll */
/* Function: FUN_10051ab7 @ 0x10051AB7 */
/* Body size: 391 addresses */


undefined4 __cdecl FUN_10051ab7(uint *param_1,int param_2)

{
  byte *pbVar1;
  uint *puVar2;
  int iVar3;
  byte *pbVar4;
  size_t sVar5;
  uint *lpName;
  undefined1 *puVar6;
  byte *pbVar7;
  bool bVar8;
  
  if (param_1 == (uint *)0x0) {
    return 0xffffffff;
  }
  puVar2 = FUN_10051cfd(param_1,0x3d);
  if (puVar2 == (uint *)0x0) {
    return 0xffffffff;
  }
  if (param_1 == puVar2) {
    return 0xffffffff;
  }
  bVar8 = *(char *)((int)puVar2 + 1) == '\0';
  if (DAT_100b5564 == DAT_100b5568) {
    DAT_100b5564 = (byte *)FUN_10051c96((int *)DAT_100b5564);
  }
  if (DAT_100b5564 == (byte *)0x0) {
    if ((param_2 == 0) || (DAT_100b556c == (undefined4 *)0x0)) {
      if (bVar8) {
        return 0;
      }
      DAT_100b5564 = _malloc(4);
      if (DAT_100b5564 == (byte *)0x0) {
        return 0xffffffff;
      }
      pbVar4 = DAT_100b5564 + 1;
      pbVar7 = DAT_100b5564 + 2;
      pbVar1 = DAT_100b5564 + 3;
      DAT_100b5564[0] = 0;
      *pbVar4 = 0;
      *pbVar7 = 0;
      *pbVar1 = 0;
      if (DAT_100b556c == (undefined4 *)0x0) {
        DAT_100b556c = _malloc(4);
        if (DAT_100b556c == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_100b556c = 0;
      }
    }
    else {
      iVar3 = FUN_100517a1();
      if (iVar3 != 0) {
        return 0xffffffff;
      }
    }
  }
  pbVar4 = DAT_100b5564;
  iVar3 = FUN_10051c3e((uchar *)param_1,(int)puVar2 - (int)param_1);
  if ((iVar3 < 0) || (*(int *)pbVar4 == 0)) {
    if (bVar8) {
      return 0;
    }
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    pbVar4 = FUN_10045252(pbVar4,(uint *)(iVar3 * 4 + 8));
    if (pbVar4 == (byte *)0x0) {
      return 0xffffffff;
    }
    *(uint **)(pbVar4 + iVar3 * 4) = param_1;
    pbVar7 = pbVar4 + iVar3 * 4 + 4;
    pbVar7[0] = 0;
    pbVar7[1] = 0;
    pbVar7[2] = 0;
    pbVar7[3] = 0;
  }
  else {
    if (!bVar8) {
      *(uint **)(pbVar4 + iVar3 * 4) = param_1;
      goto LAB_10051beb;
    }
    pbVar7 = pbVar4 + iVar3 * 4;
    FUN_10042c07(*(undefined **)(pbVar4 + iVar3 * 4));
    for (; *(int *)pbVar7 != 0; pbVar7 = pbVar7 + 4) {
      iVar3 = iVar3 + 1;
      *(int *)pbVar7 = *(int *)(pbVar7 + 4);
    }
    pbVar4 = FUN_10045252(pbVar4,(uint *)(iVar3 << 2));
    if (pbVar4 == (byte *)0x0) goto LAB_10051beb;
  }
  DAT_100b5564 = pbVar4;
LAB_10051beb:
  if (param_2 != 0) {
    sVar5 = _strlen((char *)param_1);
    lpName = _malloc(sVar5 + 2);
    if (lpName != (uint *)0x0) {
      FUN_1004a010(lpName,param_1);
      puVar6 = (undefined1 *)(((int)lpName - (int)param_1) + (int)puVar2);
      *puVar6 = 0;
      SetEnvironmentVariableA((LPCSTR)lpName,(LPCSTR)(~-(uint)bVar8 & (uint)(puVar6 + 1)));
      FUN_10042c07((undefined *)lpName);
    }
  }
  return 0;
}

