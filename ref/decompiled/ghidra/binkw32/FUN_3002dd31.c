/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002dd31 @ 0x3002DD31 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl FUN_3002dd31(uint param_1,double *param_2,uint param_3)

{
  double dVar1;
  bool bVar2;
  uint uVar3;
  bool bVar4;
  float10 fVar5;
  undefined8 local_10;
  int local_8;
  
  uVar3 = param_1 & 0x1f;
  bVar2 = true;
  if (((param_1 & 8) != 0) && ((param_3 & 1) != 0)) {
    FUN_3002e104();
    uVar3 = param_1 & 0x17;
    goto LAB_3002df26;
  }
  if (((param_1 & 4) != 0) && ((param_3 & 4) != 0)) {
    FUN_3002e104();
    uVar3 = param_1 & 0x1b;
    goto LAB_3002df26;
  }
  if (((param_1 & 1) == 0) || ((param_3 & 8) == 0)) {
    if (((param_1 & 2) != 0) && ((param_3 & 0x10) != 0)) {
      bVar4 = (param_1 & 0x10) != 0;
      dVar1 = *param_2;
      if (dVar1 != _DAT_30033fc8) {
        fVar5 = FUN_3002e003(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20),&local_8);
        local_8 = local_8 + -0x600;
        if (local_8 < -0x432) {
          local_10 = 0.0;
          bVar4 = bVar2;
        }
        else {
          local_10 = (double)(ulonglong)
                             (SUB87((double)fVar5,0) & 0xfffffffffffff | 0x10000000000000);
          if (local_8 < -0x3fd) {
            local_8 = -0x3fd - local_8;
            do {
              if ((((ulonglong)local_10 & 1) != 0) && (!bVar4)) {
                bVar4 = bVar2;
              }
              uVar3 = (uint)local_10 >> 1;
              if (((ulonglong)local_10 & 0x100000000) != 0) {
                local_10._3_1_ = (byte)((ulonglong)local_10 >> 0x18) >> 1;
                local_10._0_3_ = (undefined3)uVar3;
                local_10._0_4_ = CONCAT13(local_10._3_1_,(undefined3)local_10) | 0x80000000;
                uVar3 = (uint)local_10;
              }
              local_10._0_4_ = uVar3;
              local_10 = (double)CONCAT44(local_10._4_4_ >> 1,(uint)local_10);
              local_8 = local_8 + -1;
            } while (local_8 != 0);
          }
          if ((double)fVar5 < _DAT_30033fc8) {
            local_10 = -local_10;
          }
        }
        *param_2 = local_10;
        bVar2 = bVar4;
      }
      if (bVar2) {
        FUN_3002e104();
      }
      uVar3 = param_1 & 0x1d;
    }
    goto LAB_3002df26;
  }
  FUN_3002e104();
  uVar3 = param_3 & 0xc00;
  dVar1 = _DAT_30040a90;
  if (uVar3 == 0) {
    if (*param_2 <= _DAT_30033fc8) {
      dVar1 = -_DAT_30040a90;
    }
LAB_3002de46:
    *param_2 = dVar1;
  }
  else {
    if (uVar3 == 0x400) {
      dVar1 = _DAT_30040aa0;
      if (*param_2 <= _DAT_30033fc8) {
        dVar1 = -_DAT_30040a90;
      }
      goto LAB_3002de46;
    }
    if (uVar3 == 0x800) {
      if (*param_2 <= _DAT_30033fc8) {
        dVar1 = -_DAT_30040aa0;
      }
      goto LAB_3002de46;
    }
    if (uVar3 == 0xc00) {
      dVar1 = _DAT_30040aa0;
      if (*param_2 <= _DAT_30033fc8) {
        dVar1 = -_DAT_30040aa0;
      }
      goto LAB_3002de46;
    }
  }
  uVar3 = param_1 & 0x1e;
LAB_3002df26:
  if (((param_1 & 0x10) != 0) && ((param_3 & 0x20) != 0)) {
    FUN_3002e104();
    uVar3 = uVar3 & 0xffffffef;
  }
  return uVar3 == 0;
}

