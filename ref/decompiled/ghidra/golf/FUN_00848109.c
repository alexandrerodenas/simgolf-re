/* Ghidra decompiled: golf.exe */
/* Function: FUN_00848109 @ 0x00848109 */
/* Body size: 910 addresses */


undefined4 FUN_00848109(undefined4 *param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 local_2f0 [16];
  int local_2e0 [2];
  int *local_2d8;
  int *local_2d4;
  uint local_2d0;
  undefined1 local_2cc [16];
  undefined1 local_2bc [260];
  int local_1b8;
  undefined1 local_1b4 [260];
  int local_b0 [2];
  code *local_a8;
  code *local_84;
  code *local_80;
  undefined4 local_2c;
  code *local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  uint local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  int local_8;
  
  local_2d8 = local_b0;
  local_2d4 = local_2e0;
  uVar2 = FUN_0084aa1e(0x2f);
  FUN_0084ad10(local_2cc,uVar2);
  uVar2 = FUN_0084aa1e(0x30);
  FUN_0084ad10(local_2f0,uVar2);
  puVar6 = (undefined4 *)((param_2 - *(int *)(param_2 + 0x1c)) + *(int *)(param_2 + 0x10));
  *(undefined4 *)(param_2 + 0x20) = puVar6[4];
  local_1b8 = (*(code *)*puVar6)(local_2cc);
  if (local_1b8 == 0) {
    uVar2 = 1;
  }
  else {
    iVar3 = (*(code *)*puVar6)(local_2f0);
    if (iVar3 == 0) {
      uVar2 = 1;
    }
    else {
      local_b0[0] = puVar6[1];
      if (local_b0[0] == 0) {
        uVar2 = 1;
      }
      else {
        local_84 = (code *)puVar6[2];
        if (local_84 == (code *)0x0) {
          uVar2 = 1;
        }
        else {
          local_80 = (code *)puVar6[3];
          if (local_80 == (code *)0x0) {
            uVar2 = 1;
          }
          else {
            local_2e0[0] = puVar6[6];
            if (local_2e0[0] == 0) {
              uVar2 = 1;
            }
            else {
              sVar1 = FUN_00848497(puVar6,local_1b8,&local_2d8);
              if (sVar1 == 0) {
                uVar2 = 1;
              }
              else {
                sVar1 = FUN_00848bb0(puVar6,iVar3,&local_2d8);
                if (sVar1 == 0) {
                  uVar2 = 1;
                }
                else {
                  *(undefined4 *)(param_2 + 0x28) = local_2c;
                  if (param_1 == (undefined4 *)0x0) {
                    param_1 = (undefined4 *)(*local_a8)(0);
                  }
                  if (param_1 == (undefined4 *)0x0) {
                    uVar2 = 1;
                  }
                  else {
                    local_2d0 = FUN_0084918b(param_1);
                    puVar4 = (undefined4 *)(*local_84)(0x40,local_2d0);
                    if (puVar4 == (undefined4 *)0x0) {
                      uVar2 = 1;
                    }
                    else {
                      puVar7 = param_1;
                      puVar8 = puVar4;
                      for (uVar5 = local_2d0 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                        *puVar8 = *puVar7;
                        puVar7 = puVar7 + 1;
                        puVar8 = puVar8 + 1;
                      }
                      for (uVar5 = local_2d0 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
                        puVar7 = (undefined4 *)((int)puVar7 + 1);
                        puVar8 = (undefined4 *)((int)puVar8 + 1);
                      }
                      sVar1 = FUN_00848bfa(param_1,param_2,&local_2d8,local_1b4,0x104,local_2bc,
                                           0x104);
                      if (sVar1 == 0) {
                        uVar2 = 1;
                      }
                      else {
                        FUN_00848d6b(puVar4,param_2,&local_2d8);
                        FUN_00849003(puVar4,param_2,&local_2d8);
                        FUN_0084b50f(puVar6);
                        uVar2 = FUN_00848dc0(puVar6,&local_2d8,local_1b4,local_2bc);
                        *(undefined4 *)(param_2 + 0x24) = uVar2;
                        if (*(int *)(param_2 + 0x24) == 0) {
                          uVar2 = 1;
                        }
                        else {
                          FUN_0084b50f(puVar6);
                          uVar2 = FUN_0084aa1e(1);
                          local_20 = (code *)FUN_00848d02(*(undefined4 *)(param_2 + 0x24),puVar6,
                                                          &local_2d8,uVar2);
                          if (local_20 == (code *)0x0) {
                            uVar2 = 1;
                          }
                          else {
                            local_1c = param_1;
                            local_14 = local_2d0;
                            local_8 = param_2;
                            local_10 = local_1b4;
                            local_c = local_2bc;
                            local_18 = puVar4;
                            iVar3 = (*local_20)(&local_1c);
                            if (iVar3 == 0) {
                              if (puVar4 != (undefined4 *)0x0) {
                                (*local_80)(puVar4);
                              }
                              uVar2 = 0;
                            }
                            else {
                              uVar2 = 1;
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
  return uVar2;
}

