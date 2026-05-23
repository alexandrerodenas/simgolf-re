/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047f700 @ 0x0047F700 */
/* Body size: 478 addresses */


int FUN_0047f700(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  DAT_00839ab8 = *param_1;
  DAT_00839abc = *param_2;
  iVar4 = DAT_0083ab44;
  iVar1 = DAT_0083ab34;
  iVar3 = DAT_0083ab30;
  while( true ) {
    while (DAT_0083ab40 == 0) {
      if (iVar4 == 0) {
        if (iVar3 == 0) {
          if (iVar1 == 0) goto LAB_0047f7ff;
          if ((*(byte *)(iVar1 + 0xa0) & 1) != 0) {
            FUN_0047b2d0(param_1,param_2);
            DAT_0083ab18 = 1;
            iVar4 = DAT_0083ab34;
            goto LAB_0047f7f7;
          }
          iVar1 = 0;
          DAT_0083ab34 = 0;
        }
        else {
          if ((*(byte *)(iVar3 + 0xa0) & 1) != 0) {
            FUN_0047b200(param_1,param_2);
            DAT_0083ab18 = 0;
            iVar4 = DAT_0083ab30;
            goto LAB_0047f7f7;
          }
          iVar3 = 0;
          DAT_0083ab30 = 0;
        }
      }
      else {
        if ((*(byte *)(iVar4 + 0xa0) & 1) != 0) {
          FUN_0047b2d0(param_1,param_2);
          DAT_0083ab18 = 1;
          iVar4 = DAT_0083ab44;
          goto LAB_0047f7f7;
        }
        iVar4 = 0;
        DAT_0083ab44 = 0;
      }
    }
    if ((*(byte *)(DAT_0083ab40 + 0xa0) & 1) != 0) break;
    DAT_0083ab40 = 0;
  }
  FUN_0047b200(param_1,param_2);
  DAT_0083ab18 = 0;
  iVar4 = DAT_0083ab40;
LAB_0047f7f7:
  if (iVar4 != 0) {
    return iVar4;
  }
LAB_0047f7ff:
  if (DAT_0083ab54 == 0) {
    iVar4 = 0;
    if (DAT_0083ab94 < 1) {
      return 0;
    }
    puVar2 = &DAT_0083a2d8;
    do {
      iVar1 = FUN_0047f340(*puVar2,param_1,param_2);
      if (iVar1 != 0) goto LAB_0047f8c9;
      iVar4 = iVar4 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar4 < DAT_0083ab94);
  }
  else {
    FUN_0047b2d0(param_1,param_2);
    iVar1 = FUN_0047f340(DAT_0083ab54,param_1,param_2);
    if (iVar1 != 0) goto LAB_0047f8c9;
    if (DAT_0083ab50 != 0) {
      *param_1 = DAT_00839ab8;
      *param_2 = DAT_00839abc;
      FUN_0047b2d0(param_1,param_2);
      iVar1 = FUN_0047f340(DAT_0083ab50,param_1,param_2);
    }
    if (iVar1 != 0) goto LAB_0047f8c9;
    *param_1 = DAT_00839ab8;
    *param_2 = DAT_00839abc;
    FUN_0047b200(param_1,param_2);
    DAT_0083ab18 = 0;
    iVar1 = DAT_0083ab54;
  }
  if (iVar1 == 0) {
    return 0;
  }
LAB_0047f8c9:
  if (DAT_0083ab18 == 0) {
    iVar1 = *(int *)(iVar1 + 0xb0);
  }
  return iVar1;
}

