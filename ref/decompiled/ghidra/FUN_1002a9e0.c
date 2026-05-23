/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1002a9e0 @ 0x1002A9E0 */
/* Body size: 1007 addresses */


uint * __thiscall FUN_1002a9e0(void *this,int param_1,uint *param_2)

{
  byte *pbVar1;
  int iVar2;
  size_t sVar3;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *extraout_ECX_02;
  void *extraout_ECX_03;
  void *pvVar4;
  size_t sVar5;
  uint *local_b4;
  uint *local_b0;
  uint *local_ac;
  uint *local_a0;
  uint local_9c [33];
  int local_18;
  int local_14;
  int local_10;
  uint *local_c;
  int local_8;
  
  if ((param_1 < 0) || (5 < param_1)) {
    local_c = (uint *)0x0;
  }
  else {
    FUN_10019e10(this,0x13);
    local_8 = 1;
    DAT_10110b60 = DAT_10110b60 + 1;
    pvVar4 = extraout_ECX;
    while (DAT_10110b70 != 0) {
      Sleep(1);
      pvVar4 = extraout_ECX_00;
    }
    if (param_1 == 0) {
      local_18 = 1;
      local_10 = 0;
      if (param_2 == (uint *)0x0) {
        local_c = FUN_1002af70(pvVar4);
      }
      else if ((((char)*param_2 == 'L') && (*(char *)((int)param_2 + 1) == 'C')) &&
              (*(char *)((int)param_2 + 2) == '_')) {
        local_a0 = param_2;
        do {
          pbVar1 = FUN_1002f1a0((byte *)local_a0,&DAT_100608a4);
          if (((pbVar1 == (byte *)0x0) || (sVar5 = (int)pbVar1 - (int)local_a0, sVar5 == 0)) ||
             (*pbVar1 == 0x3b)) {
            if (local_8 != 0) {
              FUN_10019eb0(0x13);
              DAT_10110b60 = DAT_10110b60 + -1;
            }
            return (uint *)0x0;
          }
          local_14 = 1;
          while ((local_14 < 6 &&
                 ((iVar2 = _strncmp(*(char **)(local_14 * 0xc + 0x10066c48),(char *)local_a0,sVar5),
                  iVar2 != 0 ||
                  (sVar3 = _strlen(*(char **)(local_14 * 0xc + 0x10066c48)), sVar5 != sVar3))))) {
            local_14 = local_14 + 1;
          }
          pbVar1 = pbVar1 + 1;
          sVar5 = FUN_1002f160(pbVar1,&DAT_100608a0);
          if ((sVar5 == 0) && (*pbVar1 != 0x3b)) {
            if (local_8 != 0) {
              FUN_10019eb0(0x13);
              DAT_10110b60 = DAT_10110b60 + -1;
            }
            return (uint *)0x0;
          }
          if (local_14 < 6) {
            _strncpy((char *)local_9c,(char *)pbVar1,sVar5);
            *(undefined1 *)((int)local_9c + sVar5) = 0;
            iVar2 = FUN_1002add0(local_14,local_9c);
            if (iVar2 != 0) {
              local_10 = local_10 + 1;
            }
          }
          local_a0 = (uint *)(pbVar1 + sVar5);
          if ((byte)*local_a0 != 0) {
            local_a0 = (uint *)((int)local_a0 + 1);
          }
        } while ((byte)*local_a0 != 0);
        if (local_10 == 0) {
          local_b0 = (uint *)0x0;
        }
        else {
          local_b0 = FUN_1002af70(local_a0);
        }
        local_c = local_b0;
      }
      else {
        local_c = FUN_1002b070(param_2,local_9c,(undefined4 *)0x0,(undefined4 *)0x0);
        if (local_c != (uint *)0x0) {
          pvVar4 = extraout_ECX_01;
          for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
            if (local_14 != 0) {
              iVar2 = _strcmp((char *)local_9c,(&DAT_10066c4c)[local_14 * 3]);
              if (iVar2 == 0) {
                local_10 = local_10 + 1;
                pvVar4 = extraout_ECX_02;
              }
              else {
                iVar2 = FUN_1002add0(local_14,local_9c);
                pvVar4 = extraout_ECX_03;
                if (iVar2 == 0) {
                  local_18 = 0;
                }
                else {
                  local_10 = local_10 + 1;
                }
              }
            }
          }
          if (local_18 == 0) {
            if (local_10 == 0) {
              local_b4 = (uint *)0x0;
            }
            else {
              local_b4 = FUN_1002af70(pvVar4);
            }
            local_c = local_b4;
          }
          else {
            local_c = FUN_1002af70(pvVar4);
            __free_dbg(DAT_10066c4c,2);
            DAT_10066c4c = (void *)0x0;
          }
        }
      }
    }
    else {
      if (param_2 == (uint *)0x0) {
        local_ac = (&DAT_10066c4c)[param_1 * 3];
      }
      else {
        local_ac = (uint *)FUN_1002add0(param_1,param_2);
      }
      local_c = local_ac;
    }
    if (local_8 != 0) {
      FUN_10019eb0(0x13);
      DAT_10110b60 = DAT_10110b60 + -1;
    }
  }
  return local_c;
}

