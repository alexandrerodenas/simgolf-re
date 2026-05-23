/* Ghidra decompiled: golf.exe */
/* Function: FUN_0040db90 @ 0x0040DB90 */
/* Body size: 536 addresses */


int FUN_0040db90(int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_14;
  int local_c;
  int local_8;
  
  local_14 = 0;
  bVar2 = false;
  local_8 = -1;
  if (-2 < param_3) {
    iVar5 = param_1 * 0x32 + -0x32;
    do {
      local_c = -1;
      iVar6 = param_2 + -1;
      do {
        if ((((local_8 == -1) || (local_c == -1)) || (local_8 == param_3)) || (local_c == param_3))
        {
          if (*(char *)((int)&DAT_005722e8 + iVar5 + iVar6) != '\x11') {
            bVar2 = true;
          }
        }
        else {
          if (param_4 == 0xc) {
            if (((DAT_005a34e0 == '\0') || (DAT_005a34e0 == '\x02')) &&
               (*(char *)((int)&DAT_005722e8 + iVar5 + iVar6) != '\x11')) {
              return -1;
            }
LAB_0040dc29:
            iVar4 = iVar6 + iVar5;
            if (*(char *)((int)&DAT_005722e8 + iVar4) == '\x15') {
              return -1;
            }
            if (((*(char *)((int)&DAT_005722e8 + iVar4) == '\x16') ||
                (((&DAT_0053caf0)[iVar4] & 0x400) != 0)) &&
               (iVar3 = FUN_0040df80(param_1 + local_8,iVar6),
               (short)(&DAT_0058bcb8)[iVar3 * 8] != param_4)) {
              return -1;
            }
            if (*(char *)((int)&DAT_005722e8 + iVar4) == '\0') {
              return -1;
            }
            if (((&DAT_0053caf0)[iVar4] & 0x8080) != 0) {
              return -1;
            }
          }
          else if (param_4 != 0) goto LAB_0040dc29;
          iVar4 = FUN_0040bf60(param_1 + local_8,iVar6);
          if (iVar4 != 0) {
            return -1;
          }
          cVar1 = *(char *)((int)&DAT_005722e8 + iVar6 + iVar5);
          if ((&DAT_00578376)[cVar1 * 0x30] == '\r') {
            local_14 = local_14 + (char)(&DAT_00578374)[cVar1 * 0x30];
          }
          if (cVar1 == '\f') {
            local_14 = local_14 + cRam005785b4;
          }
          if ((cVar1 == '\x11') && (param_4 != 0xc)) {
            local_14 = local_14 + cRam005786a4;
          }
          if (cVar1 == '\x12') {
            local_14 = local_14 + cRam005786d4;
          }
          if (cVar1 == '\x13') {
            local_14 = local_14 + cRam00578704;
          }
          if ((*(byte *)((int)&DAT_0053caf0 + (iVar6 + iVar5) * 2 + 1) & 0x80) != 0) {
            return -1;
          }
        }
        local_c = local_c + 1;
        iVar6 = iVar6 + 1;
      } while (local_c <= param_3);
      local_8 = local_8 + 1;
      iVar5 = iVar5 + 0x32;
    } while (local_8 <= param_3);
    if (bVar2) {
      return local_14;
    }
  }
  if ((param_4 != 0) && (param_4 != 4)) {
    return -1;
  }
  return local_14;
}

