/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10018920 @ 0x10018920 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_10018920(void *this,int *param_1,int param_2,int param_3,float param_4,int param_5,char param_6)

{
  code *pcVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_98 [16];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  uint local_14;
  undefined4 local_10;
  int local_c;
  int *local_8;
  
  puVar5 = local_98;
  for (iVar4 = 0x25; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0xcccccccc;
    puVar5 = puVar5 + 1;
  }
  local_14 = CONCAT31(local_14._1_3_,1);
  local_10 = 0;
  local_c = *(int *)((int)this + 0x10);
  if (param_5 != 0) {
    *(int *)((int)this + 0x10) = param_5;
  }
  if (param_1 != (int *)0x0) {
    local_8 = this;
    (**(code **)(*(int *)this + 0x20))();
    iVar4 = __chkesp();
    if (iVar4 != 0) {
      (**(code **)(*param_1 + 0xe4))();
      iVar4 = __chkesp();
      if (*(int *)(iVar4 + 4) == 1) {
        local_14 = local_14 & 0xffffff00;
      }
      local_18 = local_8[8];
      if (local_18 == 8) {
        (**(code **)(*param_1 + 0xe4))();
        piVar2 = (int *)__chkesp();
        local_1c = *piVar2;
        if (local_1c == 8) {
          iVar4 = FUN_10081f90(0,0x1011d508,DAT_10122e14 + 0x1e,0,&DAT_1011d528);
          if (iVar4 == 1) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        else if (local_1c == 0x10) {
          uVar3 = thunk_FUN_100180e0((int)local_8);
          if (uVar3 == 0) {
            if ((param_4 < (float)_DAT_1011d040) || ((float)_DAT_1011d030 < param_4)) {
              local_10 = 3;
            }
            else if (param_4 <= _DAT_1011d378 + (float)_DAT_1011d5f0) {
              if ((float)_DAT_1011d5f0 - _DAT_1011d378 <= param_4) {
                if ((local_14 & 0xff) == 0) {
                  local_58 = thunk_FUN_10041f80(local_8,param_1,param_2,param_3,param_6);
                }
                else {
                  local_58 = thunk_FUN_1002d890(local_8,param_1,param_2,param_3,param_6);
                }
                local_10 = local_58;
              }
              else if (param_4 <= _DAT_1011d378 + (float)_DAT_1011d5b0) {
                if ((float)_DAT_1011d5b0 - _DAT_1011d378 <= param_4) {
                  if ((local_14 & 0xff) == 0) {
                    local_54 = thunk_FUN_10043430(local_8,param_1,param_2,param_3,param_6);
                  }
                  else {
                    local_54 = thunk_FUN_1002ed60(local_8,param_1,param_2,param_3,param_6);
                  }
                  local_10 = local_54;
                }
                else if (param_4 <= _DAT_1011d378 + (float)_DAT_1011d590) {
                  if ((float)_DAT_1011d590 - _DAT_1011d378 <= param_4) {
                    if ((local_14 & 0xff) == 0) {
                      local_50 = thunk_FUN_10045e50(local_8,param_1,param_2,param_3,param_6);
                    }
                    else {
                      local_50 = thunk_FUN_100317c0(local_8,param_1,param_2,param_3,param_6);
                    }
                    local_10 = local_50;
                  }
                  else if (param_4 <= _DAT_1011d378) {
                    local_10 = 0;
                  }
                  else {
                    if ((local_14 & 0xff) == 0) {
                      local_4c = thunk_FUN_10048910(local_8,param_1,param_2,param_3,param_6);
                    }
                    else {
                      local_4c = thunk_FUN_10034300(local_8,param_1,param_2,param_3,param_6);
                    }
                    local_10 = local_4c;
                  }
                }
                else {
                  if ((local_14 & 0xff) == 0) {
                    local_48 = thunk_FUN_10050bb0(local_8,param_1,param_2,param_3,param_6);
                  }
                  else {
                    local_48 = thunk_FUN_1003c660(local_8,param_1,param_2,param_3,param_6);
                  }
                  local_10 = local_48;
                }
              }
              else if (param_4 <= _DAT_1011d378 + (float)_DAT_1011d5a0) {
                if ((float)_DAT_1011d5a0 - _DAT_1011d378 <= param_4) {
                  if ((local_14 & 0xff) == 0) {
                    local_44 = thunk_FUN_1004b430(local_8,param_1,param_2,param_3,param_6);
                  }
                  else {
                    local_44 = thunk_FUN_10036e60(local_8,param_1,param_2,param_3,param_6);
                  }
                  local_10 = local_44;
                }
                else {
                  if ((local_14 & 0xff) == 0) {
                    local_40 = thunk_FUN_100537f0(local_8,param_1,param_2,param_3,param_6);
                  }
                  else {
                    local_40 = thunk_FUN_1003f2e0(local_8,param_1,param_2,param_3,param_6);
                  }
                  local_10 = local_40;
                }
              }
              else {
                if ((local_14 & 0xff) == 0) {
                  local_3c = thunk_FUN_1004dff0(local_8,param_1,param_2,param_3,param_6);
                }
                else {
                  local_3c = thunk_FUN_10039a60(local_8,param_1,param_2,param_3,param_6);
                }
                local_10 = local_3c;
              }
            }
            else if (param_4 <= _DAT_1011d378 + (float)_DAT_1011d5e0) {
              if ((float)_DAT_1011d5e0 - _DAT_1011d378 <= param_4) {
                if ((local_14 & 0xff) == 0) {
                  local_38 = thunk_FUN_10044940(local_8,param_1,param_2,param_3,param_6);
                }
                else {
                  local_38 = thunk_FUN_10030290(local_8,param_1,param_2,param_3,param_6);
                }
                local_10 = local_38;
              }
              else if (param_4 <= _DAT_1011d378 + (float)_DAT_1011d5c0) {
                if ((float)_DAT_1011d5c0 - _DAT_1011d378 <= param_4) {
                  if ((local_14 & 0xff) == 0) {
                    local_34 = thunk_FUN_1004ca10(local_8,param_1,param_2,param_3,param_6);
                  }
                  else {
                    local_34 = thunk_FUN_10038460(local_8,param_1,param_2,param_3,param_6);
                  }
                  local_10 = local_34;
                }
                else {
                  if ((local_14 & 0xff) == 0) {
                    local_30 = thunk_FUN_1004f5d0(local_8,param_1,param_2,param_3,param_6);
                  }
                  else {
                    local_30 = thunk_FUN_1003b060(local_8,param_1,param_2,param_3,param_6);
                  }
                  local_10 = local_30;
                }
              }
              else {
                if ((local_14 & 0xff) == 0) {
                  local_2c = thunk_FUN_10054e20(local_8,param_1,param_2,param_3,param_6);
                }
                else {
                  local_2c = thunk_FUN_10040930(local_8,param_1,param_2,param_3,param_6);
                }
                local_10 = local_2c;
              }
            }
            else if (param_4 <= _DAT_1011d378 + (float)_DAT_1011d5d0) {
              if ((float)_DAT_1011d5d0 - _DAT_1011d378 <= param_4) {
                if ((local_14 & 0xff) == 0) {
                  local_28 = thunk_FUN_100473b0(local_8,param_1,param_2,param_3,param_6);
                }
                else {
                  local_28 = thunk_FUN_10032d60(local_8,param_1,param_2,param_3,param_6);
                }
                local_10 = local_28;
              }
              else {
                if ((local_14 & 0xff) == 0) {
                  local_24 = thunk_FUN_100521d0(local_8,param_1,param_2,param_3,param_6);
                }
                else {
                  local_24 = thunk_FUN_1003dca0(local_8,param_1,param_2,param_3,param_6);
                }
                local_10 = local_24;
              }
            }
            else if (param_4 <= _DAT_1011d34c - _DAT_1011d378) {
              if ((local_14 & 0xff) == 0) {
                local_20 = thunk_FUN_10049ea0(local_8,param_1,param_2,param_3,param_6);
              }
              else {
                local_20 = thunk_FUN_100358b0(local_8,param_1,param_2,param_3,param_6);
              }
              local_10 = local_20;
            }
            else {
              (**(code **)(*local_8 + 0x44))(param_1,param_2,param_3,param_5);
              local_10 = __chkesp();
            }
          }
          else {
            iVar4 = FUN_10081f90(0,0x1011d508,DAT_10122e14 + 0x23,0,&DAT_1011d528);
            if (iVar4 == 1) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
        }
        else {
          iVar4 = FUN_10081f90(0,0x1011d508,DAT_10122e14 + 0x78,0,&DAT_1011d528);
          if (iVar4 == 1) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          local_10 = 0x17;
        }
      }
      else {
        iVar4 = FUN_10081f90(0,0x1011d508,DAT_10122e14 + 0x82,0,&DAT_1011d528);
        if (iVar4 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_10 = 0x17;
      }
      local_8[4] = local_c;
      (**(code **)(*local_8 + 0x24))(1);
      __chkesp();
    }
  }
  local_8 = (int *)0x100191a0;
  __chkesp();
  return;
}

