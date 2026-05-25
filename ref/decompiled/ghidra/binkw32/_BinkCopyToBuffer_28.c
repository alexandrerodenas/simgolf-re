/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkCopyToBuffer@28 @ 0x30004BA0 */


undefined4
_BinkCopyToBuffer_28
          (int *param_1,uint param_2,uint param_3,int param_4,uint param_5,uint param_6,uint param_7
          )

{
  int *piVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  undefined8 uVar10;
  undefined4 local_10;
  
                    /* 0x4ba0  18  _BinkCopyToBuffer@28 */
  local_10 = 0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  param_1[0x4e] = 1;
  uVar8 = param_7 | param_1[8] & 0x70030000U;
  uVar4 = param_7 & 0xf;
  _YUV_init_4(uVar4);
  if ((int)param_3 < 0) {
    param_2 = param_2 - ((param_4 - param_6) + -1) * param_3;
    param_6 = 0;
  }
  if ((((param_1[0x7b] != -1) && (FUN_30004710(param_1), param_1[0x7b] != -1)) && (param_1[5] != 0))
     && (param_1[0x3f] == 0)) {
    FUN_30005710((int)param_1);
    uVar10 = _RADTimerRead_0();
    uVar5 = (uint)(((((ulonglong)(uint)(param_1[0x80] * 1000 + param_1[0x85] * -1000) *
                     (ulonglong)(uint)param_1[6]) / (ulonglong)(uint)param_1[5] & 0xffffffff) *
                   (ulonglong)(uint)param_1[0xb6]) / 0x10000);
    uVar7 = (int)uVar10 - param_1[0x84];
    if ((uVar7 < uVar5) || (uVar7 - uVar5 <= (uint)param_1[0x86])) {
      param_1[0xda] = 0;
    }
    else {
      if (((param_7 & 0x80000) == 0) && ((param_1[8] & 0x80000U) == 0)) {
        param_1[0xda] = 1;
        param_1[0xdb] = param_1[0xdb] + 1;
        if ((param_1[0x42] == 0) &&
           (((uint)((param_1[0x56] + 1) * 100) / (param_1[0x55] + 1U) < 10 && (param_1[0x3f] == 0)))
           ) {
          param_1[0x4e] = 0;
          if ((uint)((param_1[0x56] + 1) * 100) / (param_1[0x55] + 1U) < 0x28) {
            do {
              if (param_1[0x7b] != -1) {
                FUN_30004710(param_1);
              }
              iVar6 = (*(code *)param_1[0x48])(param_1 + 0x44);
            } while ((iVar6 != 0) &&
                    ((uint)((param_1[0x56] + 1) * 100) / (param_1[0x55] + 1U) < 0x28));
          }
          if (param_1[0xb3] != 0) {
            param_1[0xb3] = 0;
            if ((1 < (uint)param_1[3]) && (param_1[3] <= param_1[0xdd])) {
              _BinkSetSoundOnOff_8((int)param_1,0);
              piVar1 = param_1 + 0xa8;
              LOCK();
              *(char *)piVar1 = (char)*piVar1 + '\x01';
              UNLOCK();
              if ((uint)((param_1[0x56] + 1) * 100) / (param_1[0x55] + 1U) < 0x5a) {
                do {
                  iVar6 = (*(code *)param_1[0x48])(param_1 + 0x44);
                  if (iVar6 == 0) break;
                } while ((uint)((param_1[0x56] + 1) * 100) / (param_1[0x55] + 1U) < 0x5a);
              }
              iVar6 = *piVar1;
              while (iVar6 != 1) {
                Sleep(0);
                iVar6 = *piVar1;
              }
              param_1[0xdc] = param_1[0xdc] + 1;
              FUN_30004970((int)param_1);
              param_1[0x84] = 0;
              LOCK();
              *(char *)piVar1 = (char)*piVar1 + -1;
              UNLOCK();
              _BinkSetSoundOnOff_8((int)param_1,1);
            }
          }
          param_1[0x4e] = 1;
        }
        param_1[0x4e] = 0;
        return 1;
      }
      local_10 = 1;
    }
  }
  if (((((param_1[8] & 0x8000000U) == 0) && (param_1[0x42] == 0)) && (param_1[0x4c] == 0)) &&
     ((uint)((param_1[0x56] + 1) * 100) / (param_1[0x55] + 1U) < 0x4b)) {
    Sleep(0);
  }
  param_1[0x9f] = uVar8;
  if ((param_7 & 0x80000000) == 0) {
    pbVar3 = (byte *)param_1[0x37];
    uVar5 = 0xffffffff;
    pbVar9 = pbVar3;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      bVar2 = *pbVar9;
      pbVar9 = pbVar9 + 1;
    } while (bVar2 != 0);
    if ((uint)param_1[0x39] <= ~uVar5 - 1) goto switchD_30004f66_switchD;
    switch(uVar4) {
    case 1:
      _YUV_blit_24bpp_mask_48
                (param_2,param_5,param_6,param_3,pbVar3,param_1[0x38],param_1[param_1[0x2e] + 0x2f],
                 param_1[0x79],param_1[0x7a],(byte *)param_1[0x33],param_1[0x34],uVar8);
      break;
    case 2:
      _YUV_blit_24rbpp_mask_48
                (param_2,param_5,param_6,param_3,pbVar3,param_1[0x38],param_1[param_1[0x2e] + 0x2f],
                 param_1[0x79],param_1[0x7a],(byte *)param_1[0x33],param_1[0x34],uVar8);
      break;
    case 3:
      goto switchD_30005288_caseD_3;
    case 4:
      goto switchD_30005288_caseD_4;
    case 5:
      if (param_1[0x31] != 0) {
        _YUV_blit_32abpp_mask_52
                  (param_2,param_5,param_6,param_3,pbVar3,param_1[0x38],
                   param_1[param_1[0x2e] + 0x2f],param_1[0x79],param_1[0x7a],(byte *)param_1[0x33],
                   param_1[0x34],param_1[param_1[0x2e] + 0x31],uVar8);
        break;
      }
switchD_30005288_caseD_3:
      _YUV_blit_32bpp_mask_48
                (param_2,param_5,param_6,param_3,pbVar3,param_1[0x38],param_1[param_1[0x2e] + 0x2f],
                 param_1[0x79],param_1[0x7a],(byte *)param_1[0x33],param_1[0x34],uVar8);
      break;
    case 6:
      if (param_1[0x31] != 0) {
        _YUV_blit_32rabpp_mask_52
                  (param_2,param_5,param_6,param_3,pbVar3,param_1[0x38],
                   param_1[param_1[0x2e] + 0x2f],param_1[0x79],param_1[0x7a],(byte *)param_1[0x33],
                   param_1[0x34],param_1[param_1[0x2e] + 0x31],uVar8);
        break;
      }
switchD_30005288_caseD_4:
      _YUV_blit_32rbpp_mask_48
                (param_2,param_5,param_6,param_3,pbVar3,param_1[0x38],param_1[param_1[0x2e] + 0x2f],
                 param_1[0x79],param_1[0x7a],(byte *)param_1[0x33],param_1[0x34],uVar8);
      break;
    case 7:
      if (param_1[0x31] != 0) {
        _YUV_blit_16a4bpp_mask_52
                  (param_2,param_5,param_6,param_3,pbVar3,param_1[0x38],
                   param_1[param_1[0x2e] + 0x2f],param_1[0x79],param_1[0x7a],(byte *)param_1[0x33],
                   param_1[0x34],param_1[param_1[0x2e] + 0x31],uVar8);
        break;
      }
    case 9:
    case 10:
    case 0xb:
    case 0xc:
switchD_30005288_caseD_9:
      _YUV_blit_16bpp_mask_48
                (param_2,param_5,param_6,param_3,pbVar3,param_1[0x38],param_1[param_1[0x2e] + 0x2f],
                 param_1[0x79],param_1[0x7a],(byte *)param_1[0x33],param_1[0x34],uVar8);
      break;
    case 8:
      if (param_1[0x31] != 0) {
        _YUV_blit_16a1bpp_mask_52
                  (param_2,param_5,param_6,param_3,pbVar3,param_1[0x38],
                   param_1[param_1[0x2e] + 0x2f],param_1[0x79],param_1[0x7a],(byte *)param_1[0x33],
                   param_1[0x34],param_1[param_1[0x2e] + 0x31],uVar8);
        break;
      }
      goto switchD_30005288_caseD_9;
    case 0xd:
      _YUV_blit_YUY2_mask_48
                (param_2,param_5,param_6,param_3,pbVar3,param_1[0x38],param_1[param_1[0x2e] + 0x2f],
                 param_1[0x79],param_1[0x7a],(byte *)param_1[0x33],param_1[0x34],uVar8);
      break;
    case 0xe:
      _YUV_blit_UYVY_mask_48
                (param_2,param_5,param_6,param_3,pbVar3,param_1[0x38],param_1[param_1[0x2e] + 0x2f],
                 param_1[0x79],param_1[0x7a],(byte *)param_1[0x33],param_1[0x34],uVar8);
      break;
    case 0xf:
      goto switchD_30004f66_caseD_f;
    }
    goto switchD_30004f66_default;
  }
switchD_30004f66_switchD:
  switch(uVar4) {
  case 1:
    _YUV_blit_24bpp_48(param_2,param_5,param_6,param_3,param_1[param_1[0x2e] + 0x2f],0,0,
                       param_1[0x79],param_1[0x7a],param_1[0x33],param_1[0x34],uVar8);
    break;
  case 2:
    _YUV_blit_24rbpp_48(param_2,param_5,param_6,param_3,param_1[param_1[0x2e] + 0x2f],0,0,
                        param_1[0x79],param_1[0x7a],param_1[0x33],param_1[0x34],uVar8);
    break;
  case 3:
    goto switchD_30004f66_caseD_3;
  case 4:
    goto switchD_30004f66_caseD_4;
  case 5:
    if (param_1[0x31] != 0) {
      _YUV_blit_32abpp_52(param_2,param_5,param_6,param_3,param_1[param_1[0x2e] + 0x2f],0,0,
                          param_1[0x79],param_1[0x7a],param_1[0x33],param_1[0x34],
                          param_1[param_1[0x2e] + 0x31],uVar8);
      break;
    }
switchD_30004f66_caseD_3:
    _YUV_blit_32bpp_48(param_2,param_5,param_6,param_3,param_1[param_1[0x2e] + 0x2f],0,0,
                       param_1[0x79],param_1[0x7a],param_1[0x33],param_1[0x34],uVar8);
    break;
  case 6:
    if (param_1[0x31] != 0) {
      _YUV_blit_32rabpp_52
                (param_2,param_5,param_6,param_3,param_1[param_1[0x2e] + 0x2f],0,0,param_1[0x79],
                 param_1[0x7a],param_1[0x33],param_1[0x34],param_1[param_1[0x2e] + 0x31],uVar8);
      break;
    }
switchD_30004f66_caseD_4:
    _YUV_blit_32rbpp_48(param_2,param_5,param_6,param_3,param_1[param_1[0x2e] + 0x2f],0,0,
                        param_1[0x79],param_1[0x7a],param_1[0x33],param_1[0x34],uVar8);
    break;
  case 7:
    if (param_1[0x31] != 0) {
      _YUV_blit_16a4bpp_52
                (param_2,param_5,param_6,param_3,param_1[param_1[0x2e] + 0x2f],0,0,param_1[0x79],
                 param_1[0x7a],param_1[0x33],param_1[0x34],param_1[param_1[0x2e] + 0x31],uVar8);
      break;
    }
  case 9:
  case 10:
  case 0xb:
  case 0xc:
switchD_30004f66_caseD_9:
    _YUV_blit_16bpp_48(param_2,param_5,param_6,param_3,param_1[param_1[0x2e] + 0x2f],0,0,
                       param_1[0x79],param_1[0x7a],param_1[0x33],param_1[0x34],uVar8);
    break;
  case 8:
    if (param_1[0x31] != 0) {
      _YUV_blit_16a1bpp_52
                (param_2,param_5,param_6,param_3,param_1[param_1[0x2e] + 0x2f],0,0,param_1[0x79],
                 param_1[0x7a],param_1[0x33],param_1[0x34],param_1[param_1[0x2e] + 0x31],uVar8);
      break;
    }
    goto switchD_30004f66_caseD_9;
  case 0xd:
    _YUV_blit_YUY2_48(param_2,param_5,param_6,param_3,param_1[param_1[0x2e] + 0x2f],0,0,
                      param_1[0x79],param_1[0x7a],param_1[0x33],param_1[0x34],uVar8);
    break;
  case 0xe:
    _YUV_blit_UYVY_48(param_2,param_5,param_6,param_3,param_1[param_1[0x2e] + 0x2f],0,0,
                      param_1[0x79],param_1[0x7a],param_1[0x33],param_1[0x34],uVar8);
    break;
  case 0xf:
switchD_30004f66_caseD_f:
    _YUV_blit_YV12_52(param_2,param_5,param_6,param_3,param_4,param_1[param_1[0x2e] + 0x2f],0,0,
                      param_1[0x79],param_1[0x7a],param_1[0x33],param_1[0x34],uVar8);
  }
switchD_30004f66_default:
  if (param_1[0x7b] != -1) {
    FUN_30004710(param_1);
  }
  param_1[0x4e] = 0;
  return local_10;
}

