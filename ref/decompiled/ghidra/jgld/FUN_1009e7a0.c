/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1009e7a0 @ 0x1009E7A0 */
/* Body size: 1886 addresses */


void __cdecl
FUN_1009e7a0(uint *param_1,uint param_2,uint param_3,int param_4,int param_5,int *param_6,
            uint *param_7,int param_8)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  undefined3 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_5c8 [16];
  undefined4 local_588;
  uint local_584;
  uint local_580;
  int local_57c;
  uint *local_578;
  uint local_574 [16];
  int local_534;
  uint local_530 [287];
  uint auStack_b4 [16];
  undefined4 local_74;
  uint local_70;
  uint local_6c;
  uint *local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  int local_54;
  uint local_50;
  uint local_4c;
  uint local_48 [17];
  
  puVar6 = local_5c8;
  for (iVar5 = 0x171; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0xcccccccc;
    puVar6 = puVar6 + 1;
  }
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[4] = 0;
  local_48[5] = 0;
  local_48[6] = 0;
  local_48[7] = 0;
  local_48[8] = 0;
  local_48[9] = 0;
  local_48[10] = 0;
  local_48[0xb] = 0;
  local_48[0xc] = 0;
  local_48[0xd] = 0;
  local_48[0xe] = 0;
  local_48[0xf] = 0;
  local_68 = param_1;
  local_58 = param_2;
  do {
    local_48[*local_68] = local_48[*local_68] + 1;
    local_68 = local_68 + 1;
    local_58 = local_58 - 1;
  } while (local_58 != 0);
  if (local_48[0] == param_2) {
    *param_6 = 0;
    *param_7 = 0;
  }
  else {
    local_64 = *param_7;
    for (local_5c = 1; (local_5c < 0x10 && (local_48[local_5c] == 0)); local_5c = local_5c + 1) {
    }
    local_60 = local_5c;
    if (*param_7 < local_5c) {
      local_64 = local_5c;
    }
    for (local_58 = 0xf; (local_58 != 0 && (local_48[local_58] == 0)); local_58 = local_58 - 1) {
    }
    local_50 = local_58;
    if (local_58 < local_64) {
      local_64 = local_58;
    }
    *param_7 = local_64;
    local_57c = 1 << ((byte)local_5c & 0x1f);
    for (; local_5c < local_58; local_5c = local_5c + 1) {
      local_57c = local_57c - local_48[local_5c];
      if (local_57c < 0) goto LAB_1009eeea;
      local_57c = local_57c * 2;
    }
    local_57c = local_57c - local_48[local_58];
    if (-1 < local_57c) {
      local_48[local_58] = local_48[local_58] + local_57c;
      local_5c = 0;
      local_574[1] = 0;
      local_68 = local_48;
      local_578 = local_574 + 2;
      while (local_68 = local_68 + 1, local_58 = local_58 - 1, local_58 != 0) {
        local_5c = local_5c + *local_68;
        *local_578 = local_5c;
        local_578 = local_578 + 1;
      }
      local_68 = param_1;
      local_58 = 0;
      do {
        local_5c = *local_68;
        local_68 = local_68 + 1;
        if (local_5c != 0) {
          local_530[local_574[local_5c]] = local_58;
          local_574[local_5c] = local_574[local_5c] + 1;
        }
        local_58 = local_58 + 1;
      } while (local_58 < param_2);
      local_58 = 0;
      local_574[0] = 0;
      local_68 = local_530;
      local_54 = -1;
      local_534 = -local_64;
      auStack_b4[1] = 0;
      local_6c = 0;
      local_580 = 0;
      for (; (int)local_60 <= (int)local_50; local_60 = local_60 + 1) {
        local_48[0x10] = local_48[local_60];
        while (uVar1 = local_48[0x10], local_48[0x10] = local_48[0x10] - 1, uVar1 != 0) {
          while ((int)(local_534 + local_64) < (int)local_60) {
            local_54 = local_54 + 1;
            local_534 = local_534 + local_64;
            local_584 = local_50 - local_534;
            if (local_64 < local_584) {
              local_584 = local_64;
            }
            local_5c = local_60 - local_534;
            local_4c = 1 << ((byte)local_5c & 0x1f);
            if (local_48[0x10] + 1 < local_4c) {
              local_4c = local_4c - (local_48[0x10] + 1);
              local_578 = local_48 + local_60;
              if (local_5c < local_584) {
                while (local_5c = local_5c + 1, local_5c < local_584) {
                  local_4c = local_4c * 2;
                  local_578 = local_578 + 1;
                  if (local_4c <= *local_578) break;
                  local_4c = local_4c - *local_578;
                }
              }
            }
            local_580 = 1 << ((byte)local_5c & 0x1f);
            (**(code **)(param_8 + 0x20))(*(undefined4 *)(param_8 + 0x28),local_580 + 1,8);
            local_6c = __chkesp();
            if (local_6c == 0) {
              if (local_54 != 0) {
                FUN_1009f250(auStack_b4[1],param_8);
              }
              goto LAB_1009eeea;
            }
            *param_6 = local_6c + 8;
            param_6 = (int *)(local_6c + 4);
            *param_6 = 0;
            local_6c = local_6c + 8;
            auStack_b4[local_54 + 1] = local_6c;
            if (local_54 != 0) {
              local_574[local_54] = local_58;
              local_74 = CONCAT31(CONCAT21(local_74._2_2_,(char)local_64),(undefined1)local_5c);
              local_70 = local_6c;
              local_5c = local_58 >> ((char)local_534 - (char)local_64 & 0x1fU);
              uVar1 = auStack_b4[local_54];
              *(undefined4 *)(uVar1 + local_5c * 8) = local_74;
              *(uint *)(uVar1 + 4 + local_5c * 8) = local_6c;
            }
          }
          bVar3 = (byte)local_534;
          cVar2 = (char)local_60;
          uVar4 = CONCAT21(local_74._2_2_,cVar2 - bVar3);
          if (local_68 < local_530 + param_2) {
            if (*local_68 < param_3) {
              local_74 = CONCAT31(uVar4,(-(*local_68 < 0x100) & 0xa0U) + 0x60);
              local_70 = *local_68;
              local_68 = local_68 + 1;
            }
            else {
              local_74 = CONCAT31(uVar4,(char)*(undefined4 *)(param_5 + (*local_68 - param_3) * 4) +
                                        'P');
              local_70 = *(uint *)(param_4 + (*local_68 - param_3) * 4);
              local_68 = local_68 + 1;
            }
          }
          else {
            local_74 = CONCAT31(uVar4,0xc0);
          }
          local_4c = 1 << (cVar2 - bVar3 & 0x1f);
          for (local_5c = local_58 >> (bVar3 & 0x1f); local_5c < local_580;
              local_5c = local_5c + local_4c) {
            *(undefined4 *)(local_6c + local_5c * 8) = local_74;
            *(uint *)(local_6c + 4 + local_5c * 8) = local_70;
          }
          for (local_5c = 1 << (cVar2 - 1U & 0x1f); (local_58 & local_5c) != 0;
              local_5c = local_5c >> 1) {
            local_58 = local_58 ^ local_5c;
          }
          local_58 = local_58 ^ local_5c;
          for (; (local_58 & (1 << ((byte)local_534 & 0x1f)) - 1U) != local_574[local_54];
              local_54 = local_54 + -1) {
            local_534 = local_534 - local_64;
          }
        }
      }
      if ((local_57c == 0) || (local_50 == 1)) {
        local_588 = 0;
      }
      else {
        local_588 = 0xfffffffb;
      }
    }
  }
LAB_1009eeea:
  local_48[0x10] = 0x1009eefa;
  __chkesp();
  return;
}

