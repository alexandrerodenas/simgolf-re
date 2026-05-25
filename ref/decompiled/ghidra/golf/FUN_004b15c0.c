/* Ghidra decompiled: golf.exe */
/* Function: FUN_004b15c0 @ 0x004B15C0 */


undefined4 FUN_004b15c0(int *param_1,short *param_2,int param_3,int param_4,undefined4 *param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint local_8;
  int *piStack_4;
  
  local_8 = *param_2 - param_3;
  uVar4 = local_8;
  if ((int)local_8 < 0) {
    uVar4 = -local_8;
    local_8 = local_8 - 1;
  }
  iVar2 = 0;
  for (; uVar4 != 0; uVar4 = (int)uVar4 >> 1) {
    iVar2 = iVar2 + 1;
  }
  bVar1 = *(byte *)(iVar2 + 0x400 + param_4);
  uVar4 = *(uint *)(param_4 + iVar2 * 4);
  iVar5 = param_1[3];
  if ((char)bVar1 == 0) {
    *(undefined4 *)(*(int *)param_1[8] + 0x14) = 0x27;
    (*(code *)**(undefined4 **)param_1[8])((undefined4 *)param_1[8]);
  }
  iVar5 = iVar5 + (char)bVar1;
  uVar4 = ((1 << (bVar1 & 0x1f)) - 1U & uVar4) << (0x18U - (char)iVar5 & 0x1f) | param_1[2];
  for (; 7 < iVar5; iVar5 = iVar5 + -8) {
    param_4._2_1_ = (char)(uVar4 >> 0x10);
    *(char *)*param_1 = param_4._2_1_;
    iVar3 = param_1[1];
    *param_1 = *param_1 + 1;
    param_1[1] = iVar3 + -1;
    if ((iVar3 + -1 == 0) && (iVar3 = FUN_004b19e0(param_1), iVar3 == 0)) {
      return 0;
    }
    if (param_4._2_1_ == -1) {
      *(undefined1 *)*param_1 = 0;
      iVar3 = param_1[1];
      *param_1 = *param_1 + 1;
      param_1[1] = iVar3 + -1;
      if ((iVar3 + -1 == 0) && (iVar3 = FUN_004b19e0(param_1), iVar3 == 0)) {
        return 0;
      }
    }
    uVar4 = uVar4 << 8;
  }
  param_1[2] = uVar4;
  param_1[3] = iVar5;
  if (iVar2 != 0) {
    iVar5 = iVar2 + iVar5;
    uVar4 = ((1 << ((byte)iVar2 & 0x1f)) - 1U & local_8) << (0x18U - (char)iVar5 & 0x1f) | uVar4;
    for (; 7 < iVar5; iVar5 = iVar5 + -8) {
      param_3._2_1_ = (char)(uVar4 >> 0x10);
      *(char *)*param_1 = param_3._2_1_;
      iVar2 = param_1[1];
      *param_1 = *param_1 + 1;
      param_1[1] = iVar2 + -1;
      if ((iVar2 + -1 == 0) && (iVar2 = FUN_004b19e0(param_1), iVar2 == 0)) {
        return 0;
      }
      if (param_3._2_1_ == -1) {
        *(undefined1 *)*param_1 = 0;
        iVar2 = param_1[1];
        *param_1 = *param_1 + 1;
        param_1[1] = iVar2 + -1;
        if ((iVar2 + -1 == 0) && (iVar2 = FUN_004b19e0(param_1), iVar2 == 0)) {
          return 0;
        }
      }
      uVar4 = uVar4 << 8;
    }
    param_1[2] = uVar4;
    param_1[3] = iVar5;
  }
  param_3 = 0;
  piStack_4 = &DAT_004bd0b0;
  do {
    local_8 = (uint)param_2[*piStack_4];
    if (local_8 == 0) {
      param_3 = param_3 + 1;
    }
    else {
      for (; 0xf < param_3; param_3 = param_3 + -0x10) {
        iVar2 = param_1[3];
        bVar1 = *(byte *)(param_5 + 0x13c);
        uVar4 = param_5[0xf0];
        if ((char)bVar1 == 0) {
          *(undefined4 *)(*(int *)param_1[8] + 0x14) = 0x27;
          (*(code *)**(undefined4 **)param_1[8])((undefined4 *)param_1[8]);
        }
        iVar2 = iVar2 + (char)bVar1;
        uVar4 = ((1 << (bVar1 & 0x1f)) - 1U & uVar4) << (0x18U - (char)iVar2 & 0x1f) | param_1[2];
        for (; 7 < iVar2; iVar2 = iVar2 + -8) {
          param_4._2_1_ = (char)(uVar4 >> 0x10);
          *(char *)*param_1 = param_4._2_1_;
          iVar5 = param_1[1];
          *param_1 = *param_1 + 1;
          param_1[1] = iVar5 + -1;
          if ((iVar5 + -1 == 0) && (iVar5 = FUN_004b19e0(param_1), iVar5 == 0)) {
            return 0;
          }
          if (param_4._2_1_ == -1) {
            *(undefined1 *)*param_1 = 0;
            iVar5 = param_1[1];
            *param_1 = *param_1 + 1;
            param_1[1] = iVar5 + -1;
            if ((iVar5 + -1 == 0) && (iVar5 = FUN_004b19e0(param_1), iVar5 == 0)) {
              return 0;
            }
          }
          uVar4 = uVar4 << 8;
        }
        param_1[2] = uVar4;
        param_1[3] = iVar2;
      }
      iVar2 = local_8;
      if ((int)local_8 < 0) {
        iVar2 = -local_8;
        local_8 = local_8 + -1;
      }
      iVar5 = 1;
      while (iVar2 = iVar2 >> 1, iVar2 != 0) {
        iVar5 = iVar5 + 1;
      }
      iVar2 = param_1[3];
      iVar3 = param_3 * 0x10 + iVar5;
      bVar1 = *(byte *)(iVar3 + 0x400 + (int)param_5);
      uVar4 = param_5[iVar3];
      if ((char)bVar1 == 0) {
        *(undefined4 *)(*(int *)param_1[8] + 0x14) = 0x27;
        (*(code *)**(undefined4 **)param_1[8])((undefined4 *)param_1[8]);
      }
      iVar2 = iVar2 + (char)bVar1;
      uVar4 = ((1 << (bVar1 & 0x1f)) - 1U & uVar4) << (0x18U - (char)iVar2 & 0x1f) | param_1[2];
      for (; 7 < iVar2; iVar2 = iVar2 + -8) {
        param_4._2_1_ = (char)(uVar4 >> 0x10);
        *(char *)*param_1 = param_4._2_1_;
        iVar3 = param_1[1];
        *param_1 = *param_1 + 1;
        param_1[1] = iVar3 + -1;
        if ((iVar3 + -1 == 0) && (iVar3 = FUN_004b19e0(param_1), iVar3 == 0)) {
          return 0;
        }
        if (param_4._2_1_ == -1) {
          *(undefined1 *)*param_1 = 0;
          iVar3 = param_1[1];
          *param_1 = *param_1 + 1;
          param_1[1] = iVar3 + -1;
          if ((iVar3 + -1 == 0) && (iVar3 = FUN_004b19e0(param_1), iVar3 == 0)) {
            return 0;
          }
        }
        uVar4 = uVar4 << 8;
      }
      param_1[2] = uVar4;
      param_1[3] = iVar2;
      iVar2 = FUN_004b1a10(param_1,local_8,iVar5);
      if (iVar2 == 0) {
        return 0;
      }
      param_3 = 0;
    }
    piStack_4 = piStack_4 + 1;
  } while ((int)piStack_4 < 0x4bd1ac);
  if ((0 < param_3) &&
     (iVar2 = FUN_004b1a10(param_1,*param_5,(int)*(char *)(param_5 + 0x100)), iVar2 == 0)) {
    return 0;
  }
  return 1;
}

