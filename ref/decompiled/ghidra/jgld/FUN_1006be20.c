/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006be20 @ 0x1006BE20 */


void __cdecl FUN_1006be20(int *param_1,uint *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_54 [16];
  uint local_14;
  byte local_10 [4];
  size_t local_c;
  uint local_8;
  
  puVar2 = local_54;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (*(byte *)(param_1 + 0x4b) < 8) {
    local_8 = (uint)*(byte *)(param_1 + 0x4b);
    local_c = 8 - local_8;
    FUN_10078c40(param_1,(int)param_2 + local_8 + 0x20,local_c);
    *(undefined1 *)(param_1 + 0x4b) = 8;
    iVar1 = FUN_100785f0((int)(param_2 + 8),local_8,local_c);
    if (iVar1 != 0) {
      if ((local_8 < 4) &&
         (iVar1 = FUN_100785f0((int)(param_2 + 8),local_8,local_c - 4), iVar1 != 0)) {
        FUN_10078fe0(param_1,"Not a PNG file");
      }
      else {
        FUN_10078fe0(param_1,"PNG file corrupted by ASCII conversion");
      }
    }
  }
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          FUN_10078c40(param_1,local_10,4);
          local_14 = FUN_100793b0(local_10);
          FUN_10078790((int)param_1);
          FUN_100794b0(param_1,(byte *)(param_1 + 0x47),4);
          iVar1 = _memcmp(param_1 + 0x47,&DAT_101231a0,4);
          if (iVar1 != 0) break;
          FUN_100796e0(param_1,param_2,local_14);
        }
        iVar1 = _memcmp(param_1 + 0x47,&DAT_101231b8,4);
        if (iVar1 != 0) break;
        FUN_100799e0(param_1,(int)param_2,local_14);
      }
      iVar1 = _memcmp(param_1 + 0x47,&DAT_101231b0,4);
      if (iVar1 != 0) break;
      FUN_10079c20(param_1,(int)param_2,local_14);
    }
    iVar1 = _memcmp(param_1 + 0x47,&DAT_101231a8,4);
    if (iVar1 == 0) break;
    iVar1 = _memcmp(param_1 + 0x47,&DAT_101231c0,4);
    if (iVar1 == 0) {
      FUN_1007ae70(param_1,(int)param_2,local_14);
    }
    else {
      iVar1 = _memcmp(param_1 + 0x47,&DAT_101231c8,4);
      if (iVar1 == 0) {
        FUN_1007a0d0(param_1,(int)param_2,local_14);
      }
      else {
        iVar1 = _memcmp(param_1 + 0x47,&DAT_101231d0,4);
        if (iVar1 == 0) {
          FUN_10079cc0(param_1,(int)param_2,local_14);
        }
        else {
          iVar1 = _memcmp(param_1 + 0x47,&DAT_101231d8,4);
          if (iVar1 == 0) {
            FUN_1007b1a0(param_1,(int)param_2,local_14);
          }
          else {
            iVar1 = _memcmp(param_1 + 0x47,&DAT_101231e0,4);
            if (iVar1 == 0) {
              FUN_1007b4d0(param_1,(int)param_2,local_14);
            }
            else {
              iVar1 = _memcmp(param_1 + 0x47,&DAT_101231e8,4);
              if (iVar1 == 0) {
                FUN_1007b620(param_1,(int)param_2,local_14);
              }
              else {
                iVar1 = _memcmp(param_1 + 0x47,&DAT_101231f0,4);
                if (iVar1 == 0) {
                  FUN_1007b380(param_1,(int)param_2,local_14);
                }
                else {
                  iVar1 = _memcmp(param_1 + 0x47,&DAT_101231f8,4);
                  if (iVar1 == 0) {
                    FUN_10079ec0(param_1,(int)param_2,local_14);
                  }
                  else {
                    iVar1 = _memcmp(param_1 + 0x47,&DAT_10123200,4);
                    if (iVar1 == 0) {
                      FUN_1007a7d0(param_1,(int)param_2,local_14);
                    }
                    else {
                      iVar1 = _memcmp(param_1 + 0x47,&DAT_10123208,4);
                      if (iVar1 == 0) {
                        FUN_1007baf0(param_1,(int)param_2,local_14);
                      }
                      else {
                        iVar1 = _memcmp(param_1 + 0x47,&DAT_10123210,4);
                        if (iVar1 == 0) {
                          FUN_1007b9b0(param_1,(int)param_2,local_14);
                        }
                        else {
                          iVar1 = _memcmp(param_1 + 0x47,&DAT_10123218,4);
                          if (iVar1 == 0) {
                            FUN_1007ab40(param_1,(int)param_2,local_14);
                          }
                          else {
                            iVar1 = _memcmp(param_1 + 0x47,&DAT_10123220,4);
                            if (iVar1 == 0) {
                              FUN_1007bc40(param_1,(int)param_2,local_14);
                            }
                            else {
                              FUN_1007c150(param_1,(int)param_2,local_14);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ((param_1[0x1a] & 1U) == 0) {
    FUN_10078fe0(param_1,"Missing IHDR before IDAT");
  }
  else if ((*(char *)((int)param_1 + 0x126) == '\x03') && ((param_1[0x1a] & 2U) == 0)) {
    FUN_10078fe0(param_1,"Missing PLTE before IDAT");
  }
  param_1[0x43] = local_14;
  param_1[0x1a] = param_1[0x1a] | 4;
  local_8 = 0x1006c334;
  __chkesp();
  return;
}

