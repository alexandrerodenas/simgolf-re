/* Ghidra decompiled: golf.exe */
/* Function: FUN_00480220 @ 0x00480220 */
/* Body size: 305 addresses */


void __thiscall FUN_00480220(undefined4 param_1,char *param_2,int *param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *_Str;
  int iVar6;
  
  if ((param_2 != (char *)0x0) && (param_3 != (int *)0x0)) {
    FUN_00480360();
    iVar5 = 0;
    iVar6 = 0;
    _Str = param_2;
    DAT_0083aac0 = param_1;
    while( true ) {
      pcVar1 = _strchr(_Str,0x5e);
      if (pcVar1 != (char *)0x0) {
        *pcVar1 = '\0';
      }
      iVar2 = FUN_004838f0(&DAT_004c3f70);
      iVar3 = FUN_004838f0(_Str);
      iVar3 = iVar3 + iVar2 * 2;
      if (iVar5 < iVar3) {
        iVar5 = iVar3;
      }
      _Str = pcVar1 + 1;
      if (pcVar1 == (char *)0x0) break;
      *pcVar1 = '^';
      iVar6 = iVar6 + 1;
    }
    if (*(int *)(DAT_0083aac8 + 8) < 0) {
      iVar3 = *(int *)(DAT_0083aac8 + 0xc);
    }
    else {
      iVar3 = *(int *)(DAT_0083aac8 + 0x10) + *(int *)(DAT_0083aac8 + 8);
    }
    iVar3 = iVar3 * (iVar6 + 1);
    iVar6 = param_3[1] - iVar3;
    if (iVar6 < 0) {
      iVar6 = param_3[3];
    }
    iVar2 = ((param_3[2] - iVar5) + *param_3) / 2;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else {
      if (DAT_0083ad50 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (**(code **)(*DAT_0083ad50 + 0xa8))();
      }
      if (iVar4 < iVar2 + iVar5) {
        if (DAT_0083ad50 == (int *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = (**(code **)(*DAT_0083ad50 + 0xa8))();
        }
        iVar2 = iVar2 - iVar5;
      }
    }
    DAT_0083a2d0 = iVar2 + iVar5;
    DAT_0083a2d4 = iVar6 + iVar3;
    DAT_0083aac4 = param_2;
    DAT_0083a2c8 = iVar2;
    DAT_0083a2cc = iVar6;
    FUN_0047cdb0(&DAT_0083a2c8);
  }
  return;
}

