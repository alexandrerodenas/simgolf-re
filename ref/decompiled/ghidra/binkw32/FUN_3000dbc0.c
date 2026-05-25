/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000dbc0 @ 0x3000DBC0 */


void __cdecl
FUN_3000dbc0(uint param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6,
            uint param_7,uint param_8,uint param_9,uint param_10,uint param_11,uint param_12,
            int param_13,int *param_14)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  
  uVar5 = param_8;
  uVar1 = param_4;
  uVar4 = param_12 & 0x70000000;
  uVar7 = param_10;
  if (uVar4 == 0x60000000) {
    param_9 = param_9 >> 1;
    param_7 = param_7 >> 1;
    param_11 = param_11 >> 1;
    param_4 = param_4 * 2;
    uVar7 = param_10 * 2;
  }
  iVar6 = *param_14;
  if (iVar6 == 2) {
    if (((byte)param_1 & 3) == 2) {
      param_2 = param_2 + 1;
      param_1 = param_1 & 0xfffffffc;
    }
  }
  else if (iVar6 == 3) {
    if ((param_1 + 1 & 3) == 0) {
      param_2 = param_2 + 1;
      param_1 = param_1 - 3;
    }
    else if ((param_1 - 2 & 3) == 0) {
      param_2 = param_2 + 2;
      param_1 = param_1 - 6;
    }
    else if ((param_1 - 1 & 3) == 0) {
      param_2 = param_2 + 3;
      param_1 = param_1 - 9;
    }
  }
  DAT_30045890 = uVar1 * param_3 + param_1 + iVar6 * param_2;
  if ((uVar4 == 0x20000000) || (uVar4 == 0x50000000)) {
    param_4 = param_4 * 2;
  }
  FUN_3000e000(param_12,(int *)&param_4,param_8,param_9,param_14,(int *)&param_10);
  DAT_30045894 = DAT_30045890 + param_4;
  DAT_300458a8 = param_7 * uVar7 + param_6 + param_13;
  DAT_30045898 = param_7 * uVar7 + param_5 + param_6;
  DAT_300458ac = DAT_300458a8 + uVar7;
  DAT_3004589c = DAT_30045898 + uVar7;
  uVar1 = uVar7 >> 1;
  iVar6 = uVar7 - uVar5;
  iVar8 = uVar1 - (uVar5 >> 1);
  if (((uVar5 & 1) != 0) && ((param_6 & 1) != 0)) {
    iVar8 = iVar8 + -1;
  }
  if ((param_12 & 0x10000) == 0) {
    DAT_300458a4 = uVar7 * param_11 + param_5;
    iVar3 = (param_11 >> 1) * uVar1 + DAT_300458a4;
  }
  else {
    iVar3 = uVar7 * param_11 + param_5;
    DAT_300458a4 = (param_11 >> 1) * uVar1 + iVar3;
  }
  iVar2 = (param_6 >> 1) + (param_7 >> 1) * uVar1;
  DAT_300458a0 = iVar3 + iVar2;
  DAT_300458a4 = DAT_300458a4 + iVar2;
  iVar3 = (param_7 - 1) + param_9;
  param_11 = param_7;
  if (((param_7 & 1) != 0) && ((int)param_7 <= iVar3)) {
    (*DAT_3004b534)(param_6,uVar5);
    DAT_30045898 = DAT_30045898 + iVar6;
    DAT_3004589c = DAT_30045898 + uVar7;
    DAT_300458a8 = DAT_300458a8 + iVar6;
    DAT_300458ac = DAT_300458a8 + uVar7;
    DAT_300458a0 = DAT_300458a0 + iVar8;
    DAT_300458a4 = DAT_300458a4 + iVar8;
    DAT_30045890 = DAT_30045890 + param_10;
    DAT_30045894 = DAT_30045890 + param_4;
    param_11 = param_7 + 1;
  }
  param_1 = -(param_2 & 3) & 3;
  if (uVar5 < param_1) {
    param_1 = uVar5;
  }
  uVar1 = param_6 & 1;
  if (uVar5 < (param_6 & 1)) {
    uVar1 = uVar5;
  }
  uVar4 = *DAT_30044064;
  if ((uVar4 & 1) == 0) {
    if (uVar4 != 0) goto LAB_3000de7b;
  }
  else if (uVar4 < 0x2001) {
    *DAT_30044064 = uVar4 + param_9 * 4;
    goto LAB_3000de7b;
  }
  *DAT_30044064 = 0x80;
LAB_3000de7b:
  if ((int)param_11 < iVar3) {
    param_14 = (int *)((iVar3 - param_11) + 1 >> 1);
    param_11 = param_11 + (int)param_14 * 2;
    uVar4 = param_11;
    do {
      param_7 = param_6;
      uVar9 = FUN_3000ed00(param_1,uVar4,param_1,uVar1);
      param_9 = (uint)uVar9;
      if (param_9 != 0) {
        param_7 = (*DAT_3004d578)(param_9,param_6);
        uVar5 = param_8 - param_9;
      }
      param_9 = (~DAT_300488fc & uVar5) >> 2;
      param_5 = uVar5 + param_9 * -4;
      if (param_9 != 0) {
        if ((param_7 & 1) == 0) {
          (*DAT_300488f8)(param_9);
        }
        else {
          (*DAT_30049114)();
        }
      }
      if (param_5 != 0) {
        (*DAT_3004d578)(param_5,param_7 + param_9 * 4);
      }
      FUN_3000ed50();
      DAT_30045898 = DAT_3004589c + iVar6;
      DAT_3004589c = DAT_30045898 + uVar7;
      DAT_300458a8 = DAT_300458ac + iVar6;
      DAT_300458ac = DAT_300458a8 + uVar7;
      DAT_300458a4 = DAT_300458a4 + iVar8;
      DAT_300458a0 = DAT_300458a0 + iVar8;
      DAT_30045890 = param_10 + DAT_30045894;
      DAT_30045894 = DAT_30045890 + param_4;
      param_14 = (int *)((int)param_14 + -1);
      uVar4 = param_4;
      uVar5 = param_8;
    } while (param_14 != (int *)0x0);
    param_14 = (int *)0x0;
  }
  if ((int)param_11 <= iVar3) {
    (*DAT_3004b534)(param_6,uVar5);
  }
  if ((DAT_30041c30 != 0) && ((param_12 & 0x40000) == 0)) {
    FUN_3000dff0();
    return;
  }
  return;
}

