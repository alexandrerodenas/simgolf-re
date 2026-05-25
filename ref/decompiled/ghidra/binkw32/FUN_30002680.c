/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30002680 @ 0x30002680 */


undefined4 __cdecl FUN_30002680(HWND param_1,int param_2)

{
  int iVar1;
  HDC pHVar2;
  int iVar3;
  code *pcVar4;
  code *pcVar5;
  int local_98;
  undefined1 local_94 [36];
  undefined2 local_70;
  undefined4 local_6c;
  int local_2c;
  int local_28;
  int local_24;
  
  if (DAT_30041634 != 0) {
    return 0;
  }
  pcVar4 = GetDeviceCaps_exref;
  if ((((param_2 != 0) && (DAT_30041640 != 0)) && (DAT_30041644 != 0)) &&
     (pcVar5 = ChangeDisplaySettingsA_exref, iVar3 = DAT_30041648, DAT_30041648 != 0)) {
    do {
      if (iVar3 == 1) {
        if (DAT_30041648 == 0x10) {
LAB_300026f8:
          DAT_30041648 = 0x20;
        }
        else {
          if (DAT_30041648 == 0x20) {
LAB_30002741:
            DAT_30041648 = 0x18;
            goto LAB_3000274b;
          }
          DAT_30041648 = 0x10;
        }
      }
      else {
        if (iVar3 == 2) {
          if (DAT_30041648 == 0x20) {
            DAT_30041648 = 0x18;
            goto LAB_3000274d;
          }
          if (DAT_30041648 != 0x18) goto LAB_300026f8;
          DAT_30041648 = 0x10;
        }
        else if (iVar3 == 3) {
          if (DAT_30041648 == 0x20) goto LAB_30002741;
          goto LAB_300026f8;
        }
LAB_3000274b:
        iVar3 = 0;
      }
LAB_3000274d:
      local_6c = 0x1c0000;
      local_70 = 0x94;
      local_28 = DAT_30041640;
      local_24 = DAT_30041644;
      local_2c = DAT_30041648;
      iVar1 = (*pcVar5)(local_94,4);
      if (iVar1 == 0) {
        DAT_30041664 = 1;
        pHVar2 = GetDC(param_1);
        (*pcVar4)(pHVar2,0xe);
        iVar1 = (*pcVar4)(pHVar2,0xc);
        DAT_30041650 = local_98 * iVar1;
        ReleaseDC(param_1,pHVar2);
        pcVar5 = ChangeDisplaySettingsA_exref;
        pcVar4 = GetDeviceCaps_exref;
        if (DAT_30041650 == DAT_30041648) goto LAB_3000282e;
        ChangeDisplaySettingsA((DEVMODEA *)0x0,4);
        pcVar4 = GetDeviceCaps_exref;
      }
    } while (iVar3 != 0);
    local_6c = 0x180000;
    local_70 = 0x94;
    local_28 = DAT_30041640;
    local_24 = DAT_30041644;
    iVar3 = (*pcVar5)(local_94,4);
    if (iVar3 == 0) {
      DAT_30041664 = 1;
    }
LAB_3000282e:
    DAT_30041648 = 0;
    DAT_30041644 = 0;
    DAT_30041640 = 0;
  }
  DAT_30041528 = GetSystemMetrics(0);
  DAT_30041524 = GetSystemMetrics(1);
  pHVar2 = GetDC(param_1);
  iVar3 = (*pcVar4)(pHVar2,0xe);
  iVar1 = (*pcVar4)(pHVar2,0xc);
  DAT_30041650 = iVar3 * iVar1;
  ReleaseDC(param_1,pHVar2);
  DAT_3004164c = (int)(DAT_30041650 + (DAT_30041650 >> 0x1f & 7U)) >> 3;
  DAT_30041668 = DAT_30041668 + 1;
  return 1;
}

