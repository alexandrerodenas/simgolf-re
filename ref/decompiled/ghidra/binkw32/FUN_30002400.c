/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30002400 @ 0x30002400 */


void FUN_30002400(void)

{
  int iVar1;
  int iVar2;
  HDC hdc;
  int iVar3;
  int *piVar4;
  int aiStack_84 [2];
  undefined4 *puStack_7c;
  undefined4 uStack_78;
  HWND pHStack_14;
  HWND pHStack_8;
  int iStack_4;
  
  if (DAT_30041634 != 0) {
LAB_300025e1:
    DAT_30041634 = DAT_30041634 + 1;
    return;
  }
  if (DAT_30041658 == 0) {
    uStack_78 = 0x30002420;
    FUN_300025f0();
  }
  if (DAT_30041658 < 0x20) {
    return;
  }
  uStack_78 = 0;
  puStack_7c = &DAT_30041638;
  aiStack_84[1] = 0;
  aiStack_84[0] = 0x3000243c;
  iVar1 = (*DAT_30041654)();
  if (iVar1 != 0) {
    return;
  }
  if ((iStack_4 != 0) && (((DAT_30041640 == 0 || (DAT_30041644 == 0)) || (DAT_30041648 == 0)))) {
    iStack_4 = 0;
  }
  aiStack_84[0] = (-(uint)(iStack_4 != 0) & 9) + 8;
  iVar2 = (**(code **)(*DAT_30041638 + 0x50))(DAT_30041638,pHStack_8);
  iVar1 = DAT_30041648;
  if (iVar2 == 0) {
    do {
      do {
        if (iStack_4 == 0) goto LAB_30002573;
        if (iVar1 == 1) {
          if (DAT_30041648 == 0x10) {
LAB_300024b6:
            DAT_30041648 = 0x20;
          }
          else {
            if (DAT_30041648 == 0x20) {
LAB_300024ff:
              DAT_30041648 = 0x18;
              goto LAB_30002509;
            }
            DAT_30041648 = 0x10;
          }
        }
        else {
          if (iVar1 == 2) {
            if (DAT_30041648 == 0x20) {
              DAT_30041648 = 0x18;
              goto LAB_3000250b;
            }
            if (DAT_30041648 != 0x18) goto LAB_300024b6;
            DAT_30041648 = 0x10;
          }
          else if (iVar1 == 3) {
            if (DAT_30041648 == 0x20) goto LAB_300024ff;
            goto LAB_300024b6;
          }
LAB_30002509:
          iVar1 = 0;
        }
LAB_3000250b:
        iVar2 = (**(code **)(*DAT_30041638 + 0x54))
                          (DAT_30041638,DAT_30041640,DAT_30041644,DAT_30041648);
        iStack_4 = iVar1;
      } while (iVar2 != 0);
      hdc = GetDC(pHStack_8);
      iVar2 = GetDeviceCaps(hdc,0xe);
      iVar3 = GetDeviceCaps(hdc,0xc);
      DAT_30041650 = iVar2 * iVar3;
      ReleaseDC(pHStack_14,hdc);
      pHStack_8 = pHStack_14;
    } while (DAT_30041650 != DAT_30041648);
LAB_30002573:
    DAT_30041648 = 0;
    DAT_30041644 = 0;
    DAT_30041640 = 0;
    piVar4 = aiStack_84;
    for (iVar1 = 0x1b; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar4 = 0;
      piVar4 = piVar4 + 1;
    }
    aiStack_84[0] = 0x6c;
    aiStack_84[1] = 1;
    iVar1 = (**(code **)(*DAT_30041638 + 0x18))(DAT_30041638,aiStack_84,&DAT_3004163c,0);
    if (iVar1 == 0) {
      FUN_30001200();
      goto LAB_300025e1;
    }
  }
  (**(code **)(*DAT_30041638 + 8))(DAT_30041638);
  return;
}

