/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006cd00 @ 0x1006CD00 */


void __cdecl FUN_1006cd00(int *param_1,uint *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_4c [16];
  uint local_c;
  byte local_8 [4];
  
  puVar2 = local_4c;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  FUN_10079510(param_1,0);
  do {
    FUN_10078c40(param_1,local_8,4);
    local_c = FUN_100793b0(local_8);
    FUN_10078790((int)param_1);
    FUN_100794b0(param_1,(byte *)(param_1 + 0x47),4);
    iVar1 = _memcmp(param_1 + 0x47,&DAT_101231a0,4);
    if (iVar1 == 0) {
      FUN_100796e0(param_1,param_2,local_c);
    }
    else {
      iVar1 = _memcmp(param_1 + 0x47,&DAT_101231a8,4);
      if (iVar1 == 0) {
        if ((local_c == 0) && ((param_1[0x1a] & 8U) == 0)) {
          FUN_10079510(param_1,0);
        }
        else {
          FUN_10078fe0(param_1,"Too many IDAT\'s found");
        }
      }
      else {
        iVar1 = _memcmp(param_1 + 0x47,&DAT_101231b8,4);
        if (iVar1 == 0) {
          FUN_100799e0(param_1,(int)param_2,local_c);
        }
        else {
          iVar1 = _memcmp(param_1 + 0x47,&DAT_101231b0,4);
          if (iVar1 == 0) {
            FUN_10079c20(param_1,(int)param_2,local_c);
          }
          else {
            iVar1 = _memcmp(param_1 + 0x47,&DAT_101231c0,4);
            if (iVar1 == 0) {
              FUN_1007ae70(param_1,(int)param_2,local_c);
            }
            else {
              iVar1 = _memcmp(param_1 + 0x47,&DAT_101231c8,4);
              if (iVar1 == 0) {
                FUN_1007a0d0(param_1,(int)param_2,local_c);
              }
              else {
                iVar1 = _memcmp(param_1 + 0x47,&DAT_101231d0,4);
                if (iVar1 == 0) {
                  FUN_10079cc0(param_1,(int)param_2,local_c);
                }
                else {
                  iVar1 = _memcmp(param_1 + 0x47,&DAT_101231d8,4);
                  if (iVar1 == 0) {
                    FUN_1007b1a0(param_1,(int)param_2,local_c);
                  }
                  else {
                    iVar1 = _memcmp(param_1 + 0x47,&DAT_101231e0,4);
                    if (iVar1 == 0) {
                      FUN_1007b4d0(param_1,(int)param_2,local_c);
                    }
                    else {
                      iVar1 = _memcmp(param_1 + 0x47,&DAT_101231e8,4);
                      if (iVar1 == 0) {
                        FUN_1007b620(param_1,(int)param_2,local_c);
                      }
                      else {
                        iVar1 = _memcmp(param_1 + 0x47,&DAT_101231f0,4);
                        if (iVar1 == 0) {
                          FUN_1007b380(param_1,(int)param_2,local_c);
                        }
                        else {
                          iVar1 = _memcmp(param_1 + 0x47,&DAT_101231f8,4);
                          if (iVar1 == 0) {
                            FUN_10079ec0(param_1,(int)param_2,local_c);
                          }
                          else {
                            iVar1 = _memcmp(param_1 + 0x47,&DAT_10123200,4);
                            if (iVar1 == 0) {
                              FUN_1007a7d0(param_1,(int)param_2,local_c);
                            }
                            else {
                              iVar1 = _memcmp(param_1 + 0x47,&DAT_10123208,4);
                              if (iVar1 == 0) {
                                FUN_1007baf0(param_1,(int)param_2,local_c);
                              }
                              else {
                                iVar1 = _memcmp(param_1 + 0x47,&DAT_10123210,4);
                                if (iVar1 == 0) {
                                  FUN_1007b9b0(param_1,(int)param_2,local_c);
                                }
                                else {
                                  iVar1 = _memcmp(param_1 + 0x47,&DAT_10123218,4);
                                  if (iVar1 == 0) {
                                    FUN_1007ab40(param_1,(int)param_2,local_c);
                                  }
                                  else {
                                    iVar1 = _memcmp(param_1 + 0x47,&DAT_10123220,4);
                                    if (iVar1 == 0) {
                                      FUN_1007bc40(param_1,(int)param_2,local_c);
                                    }
                                    else {
                                      FUN_1007c150(param_1,(int)param_2,local_c);
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
        }
      }
    }
  } while ((param_1[0x1a] & 0x10U) == 0);
  local_8[0] = 0x45;
  local_8[1] = 0xd1;
  local_8[2] = 6;
  local_8[3] = 0x10;
  __chkesp();
  return;
}

