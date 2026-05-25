/* Ghidra decompiled: golf.exe */
/* Function: FUN_00432200 @ 0x00432200 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00432200(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,uint param_10,uint param_11)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint local_10;
  int local_c;
  int local_8;
  
  local_10 = 0xffffffff;
  if (param_2 == 0x1a3) {
    param_3 = param_3 * 3;
  }
  iVar6 = 0;
  iVar2 = (param_1 - ((int)(param_3 * 0x2f + (param_3 * 0x2f >> 0x1f & 3U)) >> 2)) + 0x220;
  iVar3 = iVar2;
  if (0 < param_3 / 2) {
    do {
      FUN_00473f60(&DAT_00542e50 + (uint)(iVar6 != 0) * 0x2c,PTR_DAT_004c1570,iVar3,0x1dd,0);
      iVar3 = iVar3 + (-(uint)(iVar6 != 0) & 0xffffffeb) + 0x44;
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_3 / 2);
  }
  FUN_00473f60(&DAT_00542e50 + (uint)((byte)param_3 & 1 | 2) * 0x2c,PTR_DAT_004c1570,iVar3,0x1dd,0);
  if (param_9 == -1) {
    param_9 = ((-3 < param_6) - 1 & 0xffffff9c) + 0xf0;
  }
  uVar7 = 0;
  if (0 < param_3) {
    local_c = 0;
    local_8 = 0;
    do {
      if ((param_10 == 0) || ((param_10 & 1 << ((byte)uVar7 & 0x1f)) != 0)) {
        iVar1 = local_8 + param_2;
        iVar3 = local_c / 2 + 0x2c + iVar2;
        uVar4 = -(uint)((uVar7 & 1) != 0) & 0x1b;
        iVar5 = uVar4 + 500;
        iVar6 = FUN_00467170(param_7 - iVar3,(param_8 - iVar5) * 2);
        if (iVar6 < 0x14) {
          local_10 = uVar7;
        }
        FUN_00473cb0(PTR_DAT_004c1570,iVar3 + -0x16,uVar4 + 0x1e0,1,1,1,0);
        if ((param_3 == 1) && (iVar1 != 0x168)) {
          iVar6 = iVar1 + 3;
          if ((iVar1 == 0x1ec) || (iVar1 == 0x1ca)) {
            iVar6 = iVar1 + 1;
          }
          _DAT_005aa6c4 = FUN_0043d6f0(iVar6,(&DAT_0053f3e8)[iVar6] + -1,0);
          FUN_004628d0(iVar3,iVar5,0,param_9,param_9,_DAT_005aa6c4,param_6,uVar7 + param_5);
        }
        _DAT_005aa6c4 = FUN_0043d6f0(iVar1,(&DAT_0053f3e8)[iVar1] + -1,0);
        if ((param_11 & 1 << ((byte)uVar7 & 0x1f)) == 0) {
          uVar4 = uVar7 + param_5;
        }
        else {
          uVar4 = uVar7 + param_5 | 0x400;
        }
        FUN_004628d0(iVar3,iVar5,0,param_9,param_9,_DAT_005aa6c4,param_6,uVar4);
        if (param_2 == 0x1a9) {
          if (uVar7 + 1 == (param_3 * 2) / 3) {
            iVar3 = (int)((ulonglong)((longlong)param_3 * 0x55555555) >> 0x20) - param_3;
            param_2 = 0x1af;
            param_5 = param_5 + ((iVar3 >> 1) - (iVar3 >> 0x1f));
          }
        }
        else if (param_2 == 0x1a3) {
          if (uVar7 + 1 == param_3 / 3) {
            param_2 = 0x1a9;
            param_5 = param_5 - param_3 / 3;
          }
        }
        else if (param_2 == 0x226) {
          param_5 = param_5 + -1;
        }
      }
      uVar7 = uVar7 + 1;
      local_8 = local_8 + param_4;
      local_c = local_c + 0x2f;
    } while ((int)uVar7 < param_3);
  }
  if (DAT_0083ad50 != (int *)0x0) {
    (**(code **)(*DAT_0083ad50 + 0x9c))(1,1,1);
  }
  return local_10;
}

