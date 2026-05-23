/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10045bf0 @ 0x10045BF0 */
/* Body size: 581 addresses */


void __cdecl FUN_10045bf0(int *param_1)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  
  param_1[0x1e] = 0;
  FUN_1003e890(param_1);
  if (*(char *)((int)param_1 + 0x123) == '\0') {
    iVar6 = param_1[0x32];
    uVar2 = param_1[0x36];
    param_1[0x34] = param_1[0x33];
    param_1[0x38] = iVar6;
  }
  else {
    if ((*(byte *)(param_1 + 0x1c) & 2) == 0) {
      param_1[0x34] = ((param_1[0x33] - DAT_100557fc) + -1 + DAT_10055818) / DAT_10055818;
    }
    else {
      param_1[0x34] = param_1[0x33];
    }
    iVar6 = param_1[0x32];
    uVar2 = ((iVar6 - *(int *)(&DAT_100557c4 + (uint)*(byte *)(param_1 + 0x49) * 4)) + -1 +
            *(uint *)(&DAT_100557e0 + (uint)*(byte *)(param_1 + 0x49) * 4)) /
            *(uint *)(&DAT_100557e0 + (uint)*(byte *)(param_1 + 0x49) * 4);
    param_1[0x38] = uVar2;
    uVar2 = *(byte *)((int)param_1 + 0x129) * uVar2 + 7 >> 3;
  }
  uVar5 = param_1[0x1c];
  param_1[0x37] = uVar2 + 1;
  uVar2 = (uint)*(byte *)((int)param_1 + 0x129);
  if (((uVar5 & 4) != 0) && (*(byte *)((int)param_1 + 0x127) < 8)) {
    uVar2 = 8;
  }
  if ((uVar5 & 0x1000) != 0) {
    cVar1 = *(char *)((int)param_1 + 0x126);
    if (cVar1 == '\x03') {
      uVar2 = (-(uint)(*(short *)((int)param_1 + 0x11a) != 0) & 8) + 0x18;
    }
    else if (cVar1 == '\0') {
      if (uVar2 < 8) {
        uVar2 = 8;
      }
      if (*(short *)((int)param_1 + 0x11a) != 0) {
        uVar2 = uVar2 * 2;
      }
    }
    else if ((cVar1 == '\x02') && (*(short *)((int)param_1 + 0x11a) != 0)) {
      uVar2 = (uVar2 * 4) / 3;
    }
  }
  if ((uVar5 & 0x8000) != 0) {
    cVar1 = *(char *)((int)param_1 + 0x126);
    if (cVar1 == '\x03') {
      uVar2 = 0x20;
    }
    else if (cVar1 == '\0') {
      uVar2 = ((8 < uVar2) - 1 & 0xfffffff0) + 0x20;
    }
    else if (cVar1 == '\x02') {
      uVar2 = ((0x20 < uVar2) - 1 & 0xffffffe0) + 0x40;
    }
  }
  if ((uVar5 & 0x4000) != 0) {
    if ((((*(short *)((int)param_1 + 0x11a) == 0) || ((uVar5 & 0x1000) == 0)) &&
        ((uVar5 & 0x8000) == 0)) && (*(char *)((int)param_1 + 0x126) != '\x04')) {
      uVar2 = ((8 < (int)uVar2) - 1 & 0xffffffe8) + 0x30;
    }
    else {
      uVar2 = ((0x10 < (int)uVar2) - 1 & 0xffffffe0) + 0x40;
    }
  }
  if (((uVar5 & 0x100000) != 0) &&
     (uVar5 = (uint)*(byte *)((int)param_1 + 0x65) * (uint)*(byte *)(param_1 + 0x19),
     uVar5 - uVar2 != 0 && (int)uVar2 <= (int)uVar5)) {
    uVar2 = uVar5;
  }
  pvVar3 = FUN_10042cc0(param_1,((iVar6 + 7U & 0xfffffff8) * uVar2 + 7 >> 3) + 1 +
                                ((int)(uVar2 + 7) >> 3));
  param_1[0x3b] = (int)pvVar3;
  puVar4 = FUN_10042cc0(param_1,param_1[0x36] + 1);
  param_1[0x3a] = (int)puVar4;
  FUN_10042d50(param_1,puVar4,0,param_1[0x36] + 1);
  param_1[0x1b] = param_1[0x1b] | 0x40;
  return;
}

