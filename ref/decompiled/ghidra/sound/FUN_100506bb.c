/* Ghidra decompiled: sound.dll */
/* Function: FUN_100506bb @ 0x100506BB */


undefined4 __cdecl FUN_100506bb(int param_1,LCID param_2,LCTYPE param_3,char *param_4)

{
  byte bVar1;
  bool bVar2;
  size_t sVar3;
  DWORD DVar4;
  CHAR *_Source;
  char *_Dest;
  int iVar5;
  uint uVar6;
  void *extraout_ECX;
  undefined *puVar7;
  void *this;
  byte *pbVar8;
  CHAR local_84 [128];
  
  if (param_1 != 1) {
    if (param_1 != 0) {
      return 0xffffffff;
    }
    pbVar8 = &DAT_100b57c4;
    iVar5 = FUN_10051459(param_2,param_3,(LPWSTR)&DAT_100b57c4,4,0);
    if (iVar5 != 0) {
      *param_4 = '\0';
      this = extraout_ECX;
      while( true ) {
        bVar1 = *pbVar8;
        if (DAT_10067730 < 2) {
          uVar6 = (byte)PTR_DAT_1006773c[(uint)bVar1 * 2] & 4;
          puVar7 = PTR_DAT_1006773c;
        }
        else {
          puVar7 = (undefined *)0x0;
          uVar6 = FUN_1004983c(this,(uint)bVar1,4);
        }
        if (uVar6 == 0) break;
        this = (void *)CONCAT31((int3)((uint)puVar7 >> 8),10);
        pbVar8 = pbVar8 + 2;
        *param_4 = *param_4 * '\n' + bVar1 + -0x30;
        if (0x100b57cb < (int)pbVar8) {
          return 0;
        }
      }
      return 0;
    }
    return 0xffffffff;
  }
  _Source = local_84;
  bVar2 = false;
  sVar3 = FUN_1005156c(param_2,param_3,local_84,0x80,0);
  if (sVar3 == 0) {
    DVar4 = GetLastError();
    if (DVar4 != 0x7a) {
      return 0xffffffff;
    }
    sVar3 = FUN_1005156c(param_2,param_3,(LPSTR)0x0,0,0);
    if (sVar3 == 0) {
      return 0xffffffff;
    }
    _Source = _malloc(sVar3);
    if (_Source == (LPSTR)0x0) {
      return 0xffffffff;
    }
    bVar2 = true;
    sVar3 = FUN_1005156c(param_2,param_3,_Source,sVar3,0);
    if (sVar3 == 0) goto LAB_10050759;
  }
  _Dest = _malloc(sVar3);
  *(char **)param_4 = _Dest;
  if (_Dest != (char *)0x0) {
    _strncpy(_Dest,_Source,sVar3);
    if (bVar2) {
      FUN_10042c07(_Source);
    }
    return 0;
  }
  if (!bVar2) {
    return 0xffffffff;
  }
LAB_10050759:
  FUN_10042c07(_Source);
  return 0xffffffff;
}

