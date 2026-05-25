/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004751d @ 0x1004751D */


int FUN_1004751d(void)

{
  byte *pbVar1;
  byte bVar2;
  undefined **ppuVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined **local_24;
  int local_20;
  int local_1c;
  undefined *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_20 = 0;
  local_24 = &PTR_LOOP_100653d8;
  do {
    if ((undefined **)PTR_LOOP_100673f8 == local_24) {
      local_20 = local_20 + 1;
    }
    piVar6 = (int *)local_24[4];
    if (piVar6 != (int *)0xffffffff) {
      local_1c = 0;
      local_10 = 0;
      ppuVar3 = local_24 + 6;
      piVar7 = piVar6 + 2;
      do {
        if (*ppuVar3 == (undefined *)0xffffffff) {
          if ((local_10 == 0) && ((undefined **)local_24[3] != ppuVar3)) {
            return -1;
          }
          local_10 = local_10 + 1;
        }
        else {
          if (piVar7 + 0x3c <= (int *)*piVar6) {
            return -2;
          }
          if ((char)piVar7[0x3c] != -1) {
            return -3;
          }
          local_c = 0;
          local_14 = (undefined *)0x0;
          local_8 = 0;
          iVar4 = 0;
          do {
            pbVar1 = (byte *)((int)piVar7 + iVar4);
            if (pbVar1 == (byte *)*piVar6) {
              local_c = local_c + 1;
            }
            if (*pbVar1 == 0) {
              local_14 = local_14 + 1;
              local_8 = local_8 + 1;
              iVar5 = iVar4 + 1;
            }
            else {
              if ((int)ppuVar3[1] <= local_8) {
                return -4;
              }
              if (local_c == 1) {
                if (local_8 < piVar7[-1]) {
                  return -5;
                }
                local_c = 2;
              }
              local_8 = 0;
              bVar2 = *pbVar1;
              iVar5 = iVar4;
              while (iVar5 = iVar5 + 1, iVar5 < (int)((uint)bVar2 + iVar4)) {
                if (*(char *)((int)piVar7 + iVar5) != '\0') {
                  return -6;
                }
                bVar2 = *(byte *)(iVar4 + 8 + (int)piVar6);
              }
            }
            iVar4 = iVar5;
          } while (iVar5 < 0xf0);
          if (local_14 != *ppuVar3) {
            return -7;
          }
          if (local_c == 0) {
            return -8;
          }
        }
        local_1c = local_1c + 1;
        ppuVar3 = ppuVar3 + 2;
        piVar6 = piVar6 + 0x400;
        piVar7 = piVar7 + 0x400;
      } while (local_1c < 0x400);
    }
    local_24 = (undefined **)*local_24;
    if (local_24 == &PTR_LOOP_100653d8) {
      return (-(uint)(local_20 != 0) & 9) - 9;
    }
  } while( true );
}

