/* Ghidra decompiled: golf.exe */
/* Function: FUN_004012d0 @ 0x004012D0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004012d0(short *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  
  iVar2 = param_3 * 0x400;
  iVar7 = param_2 * 0x400;
  local_1c = 0;
  local_18 = 5;
  local_14 = 0x400;
  uVar8 = (uint)param_1;
  do {
    uVar10 = 0;
    uVar9 = 5;
    iVar12 = 0x400;
    do {
      iVar3 = FUN_0042fb90(((int)(local_14 + (local_14 >> 0x1f & 3U)) >> 2) + iVar7,
                           ((int)(iVar12 + (iVar12 >> 0x1f & 3U)) >> 2) + iVar2,&param_2,&param_3,0)
      ;
      if (iVar3 != 0) {
        FUN_00473e60(PTR_DAT_004c1570,param_2 + DAT_004c2844 * -4,param_3 - (DAT_004c2844 * 5) / 2,0
                    );
        switch(DAT_005685f4) {
        case 0:
          uVar8 = local_1c;
          local_20 = uVar10;
          break;
        case 2:
          local_20 = local_18;
          uVar8 = uVar10;
          break;
        case 4:
          uVar8 = local_18;
          local_20 = uVar9;
          break;
        case 6:
          local_20 = local_1c;
          uVar8 = uVar9;
        }
        if ((uVar8 == 0) && ((local_20 & 1) == 0)) {
          FUN_00462a30(param_2,param_3,param_3 + 0xb,0x10,8,&DAT_0053baf8,4,0xffffffff);
        }
        if ((local_20 == 0) && ((uVar8 & 1) == 0)) {
          FUN_00462a30(param_2,param_3,param_3 + -0x15,0x10,0x1d,&DAT_0053bb24,4,0xffffffff);
        }
        if ((uVar8 == 5) && ((local_20 & 1) != 0)) {
          FUN_00462a30(param_2,param_3,param_3 + -0x15,0x10,0x1d,&DAT_0053baf8,4,0xffffffff);
        }
        if ((local_20 == 5) && ((uVar8 & 1) != 0)) {
          FUN_00462a30(param_2,param_3,param_3 + 0xb,0x10,8,&DAT_0053bb24,4,0xffffffff);
        }
      }
      uVar10 = uVar10 + 1;
      iVar12 = iVar12 + 0x800;
      uVar9 = uVar9 - 1;
    } while (iVar12 < 0x2400);
    local_1c = local_1c + 1;
    local_14 = local_14 + 0x800;
    local_18 = local_18 - 1;
  } while (local_14 < 0x2400);
  iVar3 = 0;
  iVar12 = (int)param_1 * 0x74;
  param_1 = (short *)(&DAT_004e6d20 + iVar12);
  do {
    if (*param_1 != -1) {
      iVar11 = (int)*param_1;
      iVar4 = ((int)(char)(&DAT_004c11e6)[iVar11 * 0x27] + (char)(&DAT_004e6d40)[iVar12 + iVar3] * 2
              ) * 0x400;
      iVar5 = ((int)(char)(&DAT_004c11e6)[iVar11 * 0x27] + (char)(&DAT_004e6d50)[iVar12 + iVar3] * 2
              ) * 0x400;
      iVar4 = FUN_0042fb90(((int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2) + iVar7,
                           ((int)(iVar5 + (iVar5 >> 0x1f & 3U)) >> 2) + iVar2,&param_2,&param_3,0);
      if (iVar4 != 0) {
        if (iVar11 < 10) {
          if (iVar11 < 3) {
            _DAT_004e9a80 = FUN_0043d6f0(iVar11 + 0x13c,0,DAT_005685f4 / 2 & 3);
            FUN_004628d0(param_2,param_3,param_3,0x8c,0x8c,_DAT_004e9a80,4,iVar11 + 0x41);
          }
          _DAT_004e9a80 = FUN_0043d6f0(iVar11 + 0x136,0,DAT_005685f4 / 2 & 3);
          FUN_00462a30(param_2,param_3,param_3,0x8c,0x8c,_DAT_004e9a80,4,iVar11 + 0x41);
        }
        else {
          if ((&DAT_004e6d60)[iVar12 + iVar3] == -1) {
            uVar6 = FUN_0043d6f0(iVar11 + 0x136,0,DAT_005685f4 / 2 + iVar3 & 3);
            _DAT_004e9a80 = uVar6;
          }
          else {
            uVar6 = FUN_0043d6f0(iVar11 + 0x13c,(int)(char)(&DAT_004e6d60)[iVar12 + iVar3],
                                 DAT_005685f4 / 2 + iVar3 & 3);
            cVar1 = (&DAT_004e6d60)[iVar12 + iVar3];
            iVar4 = *(int *)(&DAT_0053f8d8 + iVar11 * 4);
            (&DAT_004e6d60)[iVar12 + iVar3] = cVar1 + '\x01';
            _DAT_004e9a80 = uVar6;
            if (iVar4 + -1 <= (int)(char)(cVar1 + '\x01')) {
              (&DAT_004e6d60)[iVar12 + iVar3] = 0xff;
            }
          }
          FUN_00462a30(param_2,param_3,param_3,0x1e,0x28,uVar6,4,iVar11 + 0x41);
        }
      }
    }
    iVar3 = iVar3 + 1;
    param_1 = param_1 + 1;
  } while (iVar3 < 0x10);
  return;
}

