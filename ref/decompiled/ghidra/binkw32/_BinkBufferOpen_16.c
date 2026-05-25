/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkBufferOpen@16 @ 0x30001B70 */


uint * _BinkBufferOpen_16(HWND param_1,uint param_2,uint param_3,uint param_4)

{
  char cVar1;
  int *piVar2;
  HCURSOR pHVar3;
  int iVar4;
  HDC hdc;
  uint *puVar5;
  int iVar6;
  HCURSOR pHVar7;
  uint uVar8;
  uint uVar9;
  BITMAPINFO *pBVar10;
  undefined4 *puVar11;
  char *pcVar12;
  char *pcVar13;
  uint *puVar14;
  uint uVar15;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_38;
  HDC local_34;
  BITMAPINFO *local_30;
  uint local_28;
  uint local_24;
  uint local_20;
  HBITMAP local_1c;
  void *local_18;
  HGDIOBJ local_14;
  tagRECT tStack_10;
  
                    /* 0x1b70  8  _BinkBufferOpen@16 */
  uVar9 = param_4 & 0xff000000;
  uVar8 = 0;
  pHVar7 = (HCURSOR)0x0;
  local_24 = 0;
  local_38 = 0;
  local_44 = 0;
  local_20 = 0;
  local_50 = 0;
  local_30 = (BITMAPINFO *)0x0;
  local_34 = (HDC)0x0;
  local_18 = (void *)0x0;
  local_1c = (HBITMAP)0x0;
  local_14 = (HGDIOBJ)0x0;
  local_40 = 0;
  local_48 = 0;
  local_28 = 0;
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  if (param_3 == 0) {
    return (uint *)0x0;
  }
  local_54 = param_4 & 0x1f;
  if (local_54 == 2) {
    iVar4 = FUN_30002680(param_1,param_4 >> 0x17 & 1);
    if (iVar4 == 0) {
      local_40 = 1;
      FUN_30002400();
    }
    else {
      local_48 = 1;
    }
  }
  else {
    local_40 = 1;
    FUN_30002400();
    if (DAT_30041638 != (int *)0x0) {
      local_4c = local_54;
      if (local_54 != 0) goto LAB_30001dc3;
      local_4c = 1;
      goto LAB_30001dc3;
    }
    if (local_54 != 0) {
      pcVar12 = "DirectDraw is not available";
      puVar11 = &DAT_30041530;
      for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar11 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        puVar11 = puVar11 + 1;
      }
      FUN_30002650();
      return (uint *)0x0;
    }
  }
LAB_30001c71:
  if ((local_48 == 0) &&
     (((DAT_30041638 == (int *)0x0 || (DAT_3004164c == 0)) &&
      (iVar4 = FUN_30002680(param_1,param_4 >> 0x17 & 1), iVar4 != 0)))) {
    local_48 = 1;
  }
  if (1 < (int)DAT_3004164c) {
    hdc = GetDC(param_1);
    local_34 = CreateCompatibleDC(hdc);
    ReleaseDC(param_1,hdc);
    if ((local_34 != (HDC)0x0) &&
       (local_30 = (BITMAPINFO *)radmalloc(0x428), local_30 != (BITMAPINFO *)0x0)) {
      pBVar10 = local_30;
      for (iVar4 = 0x10a; iVar4 != 0; iVar4 = iVar4 + -1) {
        (pBVar10->bmiHeader).biSize = 0;
        pBVar10 = (BITMAPINFO *)&(pBVar10->bmiHeader).biWidth;
      }
      (local_30->bmiHeader).biSize = 0x28;
      uVar8 = (DAT_3004164c * param_2 + 0x1f & 0xffffffe0) / DAT_3004164c;
      (local_30->bmiHeader).biHeight = -param_3;
      (local_30->bmiHeader).biPlanes = 1;
      (local_30->bmiHeader).biWidth = uVar8;
      (local_30->bmiHeader).biBitCount = (short)DAT_3004164c * 8;
      (local_30->bmiHeader).biCompression = -(uint)(DAT_3004164c != 3) & 3;
      uVar8 = FUN_30002cc0(hdc,local_30->bmiColors);
      local_1c = CreateDIBSection(local_34,local_30,0,&local_18,(HANDLE)0x0,0);
      if (local_1c != (HBITMAP)0x0) {
        local_14 = SelectObject(local_34,local_1c);
        param_4 = (local_30->bmiHeader).biWidth * DAT_3004164c + 3 & 0xfffffffc;
        local_54 = 2;
        uVar8 = uVar8 | -(uint)(uVar9 != 0) & 0x8000000;
        local_50 = 0xff000000;
LAB_3000221c:
        puVar5 = (uint *)radmalloc(0xa4);
        puVar14 = puVar5;
        for (iVar4 = 0x29; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar14 = 0;
          puVar14 = puVar14 + 1;
        }
        puVar5[1] = param_3;
        *puVar5 = param_2;
        puVar5[0xe] = local_50;
        puVar5[4] = uVar8;
        puVar5[0x12] = (uint)pHVar7;
        puVar5[0x13] = local_28;
        puVar5[0x1c] = local_24;
        puVar5[0x19] = local_38;
        puVar5[0x1a] = local_44;
        puVar5[0x1f] = local_54;
        puVar5[0x20] = local_20;
        puVar5[0x18] = (uint)param_1;
        puVar5[9] = DAT_30041528;
        puVar5[10] = DAT_30041524;
        puVar5[0xb] = DAT_30041650;
        puVar5[0x23] = (uint)local_1c;
        puVar5[0x25] = param_4;
        puVar5[0x24] = (uint)local_18;
        puVar5[0x28] = (uint)local_14;
        puVar5[0x26] = (uint)local_30;
        puVar5[0x27] = (uint)local_34;
        puVar5[0x21] = local_40;
        puVar5[0x22] = local_48;
        GetWindowRect(param_1,&tStack_10);
        puVar5[2] = tStack_10.right - tStack_10.left;
        puVar5[3] = tStack_10.bottom - tStack_10.top;
        puVar5[7] = tStack_10.left;
        puVar5[8] = tStack_10.top;
        tStack_10.left = 0;
        tStack_10.top = 0;
        ClientToScreen(param_1,(LPPOINT)&tStack_10);
        puVar5[7] = tStack_10.left - puVar5[7];
        puVar5[8] = tStack_10.top - puVar5[8];
        GetClientRect(param_1,&tStack_10);
        puVar5[0xc] = puVar5[2] - tStack_10.right;
        puVar5[0xd] = puVar5[3] - tStack_10.bottom;
        puVar5[2] = puVar5[0xc] + *puVar5;
        puVar5[3] = (puVar5[3] - tStack_10.bottom) + puVar5[1];
        _BinkBufferSetOffset_12((int *)puVar5,0,0);
        _BinkBufferSetScale_12(puVar5,*puVar5,puVar5[1]);
        piVar2 = (int *)puVar5[0x13];
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x20))(piVar2,0,param_1);
        }
        return puVar5;
      }
      DeleteDC(local_34);
      radfree((int)local_30);
    }
  }
  if (local_54 == 0) {
    local_4c = 3;
LAB_30001dc3:
    iVar4 = local_4c - 1;
LAB_30001dca:
    switch(iVar4) {
    case 0:
      if ((uVar9 == 0) &&
         (uVar8 = _BinkDDSurfaceType_4(&DAT_3004163c->unused), pHVar3 = DAT_3004163c, uVar8 != 0)) {
        if (uVar8 == 0xffffffff) {
LAB_30001f0f:
          pcVar12 = "Video mode not supported.";
          puVar11 = &DAT_30041530;
          for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar11 = *(undefined4 *)pcVar12;
            pcVar12 = pcVar12 + 4;
            puVar11 = puVar11 + 1;
          }
          *(undefined2 *)puVar11 = *(undefined2 *)pcVar12;
        }
        else {
          uVar8 = uVar8 | 0x4000000;
          local_20 = 1;
          GetClassLongA(param_1,-0xc);
          local_24 = _BinkIsSoftwareCursor_8(pHVar3);
          pHVar7 = pHVar3;
          local_54 = local_4c;
        }
      }
      break;
    case 2:
      if (((DAT_3004165c & uVar9) == uVar9) &&
         (pHVar7 = (HCURSOR)FUN_300028e0((int *)0x32315659,param_2,param_3), pHVar7 != (HCURSOR)0x0)
         ) {
        local_38 = 1;
        uVar8 = _BinkDDSurfaceType_4((int *)pHVar7);
        uVar8 = uVar8 | 0x4000000;
        local_50 = DAT_3004165c;
        local_54 = local_4c;
      }
      break;
    case 3:
      if (((DAT_3004165c & uVar9) == uVar9) &&
         (pHVar7 = (HCURSOR)FUN_300028e0((int *)0x32595559,param_2,param_3), pHVar7 != (HCURSOR)0x0)
         ) {
        local_38 = 1;
        uVar8 = _BinkDDSurfaceType_4((int *)pHVar7);
        uVar8 = uVar8 | 0x4000000;
        local_50 = DAT_3004165c;
        local_54 = local_4c;
      }
      break;
    case 4:
      if (((DAT_3004165c & uVar9) == uVar9) &&
         (pHVar7 = (HCURSOR)FUN_300028e0((int *)0x59565955,param_2,param_3), pHVar7 != (HCURSOR)0x0)
         ) {
        local_38 = 1;
        uVar8 = _BinkDDSurfaceType_4((int *)pHVar7);
        uVar8 = uVar8 | 0x4000000;
        local_50 = DAT_3004165c;
        local_54 = local_4c;
      }
      break;
    case 5:
      if (((DAT_30041660 & uVar9) == uVar9) &&
         (pHVar7 = (HCURSOR)FUN_30002bc0(0x32315659,param_2,param_3), pHVar7 != (HCURSOR)0x0)) {
        uVar8 = _BinkDDSurfaceType_4((int *)pHVar7);
        uVar8 = uVar8 | -(uint)(uVar9 != 0) & 0x8000000;
        local_50 = DAT_30041660;
LAB_30002006:
        local_44 = 1;
        DAT_30041660 = local_50;
        local_54 = local_4c;
      }
      break;
    case 6:
      if (((DAT_30041660 & uVar9) == uVar9) &&
         (pHVar7 = (HCURSOR)FUN_30002bc0(0x32595559,param_2,param_3), pHVar7 != (HCURSOR)0x0)) {
        uVar8 = _BinkDDSurfaceType_4((int *)pHVar7);
LAB_30001feb:
        uVar8 = uVar8 | -(uint)(uVar9 != 0) & 0x8000000;
        local_50 = DAT_30041660;
        goto LAB_30002006;
      }
      break;
    case 7:
      if (((DAT_30041660 & uVar9) == uVar9) &&
         (pHVar7 = (HCURSOR)FUN_30002bc0(0x59565955,param_2,param_3), pHVar7 != (HCURSOR)0x0)) {
        uVar8 = _BinkDDSurfaceType_4((int *)pHVar7);
        local_50 = DAT_30041660;
        uVar8 = uVar8 | -(uint)(uVar9 != 0) & 0x8000000;
        goto LAB_30002006;
      }
      break;
    case 8:
      if ((DAT_30041660 & uVar9) == uVar9) {
        uVar15 = 0;
LAB_300020d7:
        pHVar7 = (HCURSOR)FUN_30002bc0(uVar15,param_2,param_3);
        if (pHVar7 != (HCURSOR)0x0) {
          uVar8 = _BinkDDSurfaceType_4((int *)pHVar7);
          if (uVar8 != 0) {
            if (uVar8 == 0xffffffff) {
              (**(code **)(pHVar7->unused + 8))(pHVar7);
              pHVar7 = (HCURSOR)0x0;
              goto LAB_30001f0f;
            }
            goto LAB_30001feb;
          }
          (**(code **)(pHVar7->unused + 8))(pHVar7);
          pHVar7 = (HCURSOR)0x0;
        }
      }
      break;
    case 9:
      if ((DAT_30041660 & uVar9) == uVar9) {
        uVar15 = 1;
        goto LAB_300020d7;
      }
    }
    if (local_54 != 0) {
      if (pHVar7 != (HCURSOR)0x0) {
        (**(code **)(*DAT_30041638 + 0x10))(DAT_30041638,0,&local_28,0);
        goto LAB_3000221c;
      }
      if ((char)DAT_30041530 == '\0') goto LAB_30002125;
      goto joined_r0x30002163;
    }
    local_4c = local_4c + 1;
    iVar4 = iVar4 + 1;
    DAT_30041530._0_1_ = '\0';
    if (iVar4 != 1) goto code_r0x30002038;
    goto LAB_30001c71;
  }
  pcVar12 = "256 color mode not supported.";
  if (1 < (int)DAT_3004164c) {
    pcVar12 = "Unable to create DIBSection.";
  }
  uVar8 = 0xffffffff;
  do {
    pcVar13 = pcVar12;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar13 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar13;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  pcVar12 = pcVar13 + -uVar8;
  pcVar13 = (char *)&DAT_30041530;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
    pcVar12 = pcVar12 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar13 = *pcVar12;
    pcVar12 = pcVar12 + 1;
    pcVar13 = pcVar13 + 1;
  }
joined_r0x30002163:
  if (local_40 != 0) {
    FUN_30002650();
  }
  if (local_48 == 0) {
    return (uint *)0x0;
  }
  FUN_300028b0();
  return (uint *)0x0;
code_r0x30002038:
  if (9 < iVar4) {
LAB_30002125:
    if ((DAT_30041650 == 0) || (pcVar12 = "256 color mode not supported.", 8 < (int)DAT_30041650)) {
      pcVar12 = "No capable blitting style available.";
    }
    uVar8 = 0xffffffff;
    goto code_r0x30002142;
  }
  goto LAB_30001dca;
  while( true ) {
    uVar8 = uVar8 - 1;
    pcVar13 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar13;
    if (cVar1 == '\0') break;
code_r0x30002142:
    pcVar13 = pcVar12;
    if (uVar8 == 0) break;
  }
  uVar8 = ~uVar8;
  pcVar12 = pcVar13 + -uVar8;
  pcVar13 = (char *)&DAT_30041530;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
    pcVar12 = pcVar12 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar13 = *pcVar12;
    pcVar12 = pcVar12 + 1;
    pcVar13 = pcVar13 + 1;
  }
  goto joined_r0x30002163;
}

