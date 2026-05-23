/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1009f370 @ 0x1009F370 */
/* Body size: 3393 addresses */


void __cdecl FUN_1009f370(int param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_9c [16];
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  uint local_3c;
  int local_38;
  uint local_34;
  int *local_30;
  undefined1 *local_2c;
  uint local_28;
  undefined1 *local_24;
  uint local_20;
  byte *local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  byte *local_c;
  uint local_8;
  
  puVar3 = local_9c;
  for (iVar2 = 0x26; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_30 = *(int **)(param_1 + 0xc);
  local_1c = (byte *)*param_2;
  local_20 = param_2[1];
  local_14 = *(uint *)(param_1 + 0x20);
  local_18 = *(uint *)(param_1 + 0x1c);
  local_24 = *(undefined1 **)(param_1 + 0x30);
  if (local_24 < *(undefined1 **)(param_1 + 0x2c)) {
    local_34 = (*(int *)(param_1 + 0x2c) - (int)local_24) - 1;
  }
  else {
    local_34 = *(int *)(param_1 + 0x28) - (int)local_24;
  }
  local_28 = local_34;
  do {
    local_38 = *local_30;
    switch(local_38) {
    case 0:
      if ((0x101 < local_28) && (9 < local_20)) {
        *(uint *)(param_1 + 0x20) = local_14;
        *(uint *)(param_1 + 0x1c) = local_18;
        param_2[1] = local_20;
        param_2[2] = (int)(local_1c + (param_2[2] - *param_2));
        *param_2 = (int)local_1c;
        *(undefined1 **)(param_1 + 0x30) = local_24;
        iVar2 = FUN_100a0340((uint)*(byte *)(local_30 + 4),(uint)*(byte *)((int)local_30 + 0x11),
                             local_30[5],local_30[6],param_1,param_2);
        local_1c = (byte *)*param_2;
        local_20 = param_2[1];
        local_14 = *(uint *)(param_1 + 0x20);
        local_18 = *(uint *)(param_1 + 0x1c);
        local_24 = *(undefined1 **)(param_1 + 0x30);
        if (local_24 < *(undefined1 **)(param_1 + 0x2c)) {
          local_3c = (*(int *)(param_1 + 0x2c) - (int)local_24) - 1;
        }
        else {
          local_3c = *(int *)(param_1 + 0x28) - (int)local_24;
        }
        local_28 = local_3c;
        if (iVar2 != 0) {
          *local_30 = (-(uint)(iVar2 != 1) & 2) + 7;
          break;
        }
      }
      local_30[3] = (uint)*(byte *)(local_30 + 4);
      local_30[2] = local_30[5];
      *local_30 = 1;
    case 1:
      local_8 = local_30[3];
      for (; local_18 < local_8; local_18 = local_18 + 8) {
        if (local_20 == 0) {
          *(uint *)(param_1 + 0x20) = local_14;
          *(uint *)(param_1 + 0x1c) = local_18;
          param_2[1] = 0;
          param_2[2] = (int)(local_1c + (param_2[2] - *param_2));
          *param_2 = (int)local_1c;
          *(undefined1 **)(param_1 + 0x30) = local_24;
          FUN_100a0130(param_1,(int)param_2);
          goto LAB_100a009d;
        }
        local_20 = local_20 - 1;
        local_14 = local_14 | (uint)*local_1c << ((byte)local_18 & 0x1f);
        local_1c = local_1c + 1;
      }
      local_c = (byte *)(local_30[2] + (local_14 & *(uint *)(&DAT_101274a4 + local_8 * 4)) * 8);
      local_14 = local_14 >> (local_c[1] & 0x1f);
      local_18 = local_18 - local_c[1];
      bVar1 = *local_c;
      local_10 = (uint)bVar1;
      if (local_10 == 0) {
        local_30[2] = *(int *)(local_c + 4);
        *local_30 = 6;
      }
      else if ((bVar1 & 0x10) == 0) {
        if ((bVar1 & 0x40) == 0) {
          local_30[3] = local_10;
          local_30[2] = *(int *)(local_c + 4);
        }
        else {
          if ((bVar1 & 0x20) == 0) {
            *local_30 = 9;
            param_2[6] = (int)"invalid literal/length code";
            *(uint *)(param_1 + 0x20) = local_14;
            *(uint *)(param_1 + 0x1c) = local_18;
            param_2[1] = local_20;
            param_2[2] = (int)(local_1c + (param_2[2] - *param_2));
            *param_2 = (int)local_1c;
            *(undefined1 **)(param_1 + 0x30) = local_24;
            FUN_100a0130(param_1,(int)param_2);
            goto LAB_100a009d;
          }
          *local_30 = 7;
        }
      }
      else {
        local_30[2] = local_10 & 0xf;
        local_30[1] = *(int *)(local_c + 4);
        *local_30 = 2;
      }
      break;
    case 2:
      local_8 = local_30[2];
      for (; local_18 < local_8; local_18 = local_18 + 8) {
        if (local_20 == 0) {
          *(uint *)(param_1 + 0x20) = local_14;
          *(uint *)(param_1 + 0x1c) = local_18;
          param_2[1] = 0;
          param_2[2] = (int)(local_1c + (param_2[2] - *param_2));
          *param_2 = (int)local_1c;
          *(undefined1 **)(param_1 + 0x30) = local_24;
          FUN_100a0130(param_1,(int)param_2);
          goto LAB_100a009d;
        }
        local_20 = local_20 - 1;
        local_14 = local_14 | (uint)*local_1c << ((byte)local_18 & 0x1f);
        local_1c = local_1c + 1;
      }
      local_30[1] = local_30[1] + (local_14 & *(uint *)(&DAT_101274a4 + local_8 * 4));
      local_14 = local_14 >> ((byte)local_8 & 0x1f);
      local_18 = local_18 - local_8;
      local_30[3] = (uint)*(byte *)((int)local_30 + 0x11);
      local_30[2] = local_30[6];
      *local_30 = 3;
    case 3:
      local_8 = local_30[3];
      for (; local_18 < local_8; local_18 = local_18 + 8) {
        if (local_20 == 0) {
          *(uint *)(param_1 + 0x20) = local_14;
          *(uint *)(param_1 + 0x1c) = local_18;
          param_2[1] = 0;
          param_2[2] = (int)(local_1c + (param_2[2] - *param_2));
          *param_2 = (int)local_1c;
          *(undefined1 **)(param_1 + 0x30) = local_24;
          FUN_100a0130(param_1,(int)param_2);
          goto LAB_100a009d;
        }
        local_20 = local_20 - 1;
        local_14 = local_14 | (uint)*local_1c << ((byte)local_18 & 0x1f);
        local_1c = local_1c + 1;
      }
      local_c = (byte *)(local_30[2] + (local_14 & *(uint *)(&DAT_101274a4 + local_8 * 4)) * 8);
      local_14 = local_14 >> (local_c[1] & 0x1f);
      local_18 = local_18 - local_c[1];
      bVar1 = *local_c;
      local_10 = (uint)bVar1;
      if ((bVar1 & 0x10) == 0) {
        if ((bVar1 & 0x40) != 0) {
          *local_30 = 9;
          param_2[6] = (int)"invalid distance code";
          *(uint *)(param_1 + 0x20) = local_14;
          *(uint *)(param_1 + 0x1c) = local_18;
          param_2[1] = local_20;
          param_2[2] = (int)(local_1c + (param_2[2] - *param_2));
          *param_2 = (int)local_1c;
          *(undefined1 **)(param_1 + 0x30) = local_24;
          FUN_100a0130(param_1,(int)param_2);
          goto LAB_100a009d;
        }
        local_30[3] = local_10;
        local_30[2] = *(int *)(local_c + 4);
      }
      else {
        local_30[2] = local_10 & 0xf;
        local_30[3] = *(int *)(local_c + 4);
        *local_30 = 4;
      }
      break;
    case 4:
      local_8 = local_30[2];
      for (; local_18 < local_8; local_18 = local_18 + 8) {
        if (local_20 == 0) {
          *(uint *)(param_1 + 0x20) = local_14;
          *(uint *)(param_1 + 0x1c) = local_18;
          param_2[1] = 0;
          param_2[2] = (int)(local_1c + (param_2[2] - *param_2));
          *param_2 = (int)local_1c;
          *(undefined1 **)(param_1 + 0x30) = local_24;
          FUN_100a0130(param_1,(int)param_2);
          goto LAB_100a009d;
        }
        local_20 = local_20 - 1;
        local_14 = local_14 | (uint)*local_1c << ((byte)local_18 & 0x1f);
        local_1c = local_1c + 1;
      }
      local_30[3] = local_30[3] + (local_14 & *(uint *)(&DAT_101274a4 + local_8 * 4));
      local_14 = local_14 >> ((byte)local_8 & 0x1f);
      local_18 = local_18 - local_8;
      *local_30 = 5;
    case 5:
      if ((uint)((int)local_24 - *(int *)(param_1 + 0x24)) < (uint)local_30[3]) {
        local_40 = (undefined1 *)
                   (*(int *)(param_1 + 0x28) -
                   (local_30[3] - ((int)local_24 - *(int *)(param_1 + 0x24))));
      }
      else {
        local_40 = local_24 + -local_30[3];
      }
      local_2c = local_40;
      while (local_30[1] != 0) {
        if (local_28 == 0) {
          if ((local_24 == *(undefined1 **)(param_1 + 0x28)) &&
             (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x24))) {
            local_24 = *(undefined1 **)(param_1 + 0x24);
            if (local_24 < *(undefined1 **)(param_1 + 0x2c)) {
              local_44 = (*(int *)(param_1 + 0x2c) - (int)local_24) - 1;
            }
            else {
              local_44 = *(int *)(param_1 + 0x28) - (int)local_24;
            }
            local_28 = local_44;
          }
          if (local_28 == 0) {
            *(undefined1 **)(param_1 + 0x30) = local_24;
            FUN_100a0130(param_1,(int)param_2);
            local_24 = *(undefined1 **)(param_1 + 0x30);
            if (local_24 < *(undefined1 **)(param_1 + 0x2c)) {
              local_48 = (*(int *)(param_1 + 0x2c) - (int)local_24) - 1;
            }
            else {
              local_48 = *(int *)(param_1 + 0x28) - (int)local_24;
            }
            local_28 = local_48;
            if ((local_24 == *(undefined1 **)(param_1 + 0x28)) &&
               (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x24))) {
              local_24 = *(undefined1 **)(param_1 + 0x24);
              if (local_24 < *(undefined1 **)(param_1 + 0x2c)) {
                local_4c = (*(int *)(param_1 + 0x2c) - (int)local_24) - 1;
              }
              else {
                local_4c = *(int *)(param_1 + 0x28) - (int)local_24;
              }
              local_28 = local_4c;
            }
            if (local_28 == 0) {
              *(uint *)(param_1 + 0x20) = local_14;
              *(uint *)(param_1 + 0x1c) = local_18;
              param_2[1] = local_20;
              param_2[2] = (int)(local_1c + (param_2[2] - *param_2));
              *param_2 = (int)local_1c;
              *(undefined1 **)(param_1 + 0x30) = local_24;
              FUN_100a0130(param_1,(int)param_2);
              goto LAB_100a009d;
            }
          }
        }
        *local_24 = *local_2c;
        local_24 = local_24 + 1;
        local_2c = local_2c + 1;
        local_28 = local_28 - 1;
        if (local_2c == *(undefined1 **)(param_1 + 0x28)) {
          local_2c = *(undefined1 **)(param_1 + 0x24);
        }
        local_30[1] = local_30[1] + -1;
      }
      *local_30 = 0;
      break;
    case 6:
      if (local_28 != 0) goto LAB_1009fe7d;
      if ((local_24 == *(undefined1 **)(param_1 + 0x28)) &&
         (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x24))) {
        local_24 = *(undefined1 **)(param_1 + 0x24);
        if (local_24 < *(undefined1 **)(param_1 + 0x2c)) {
          local_50 = (*(int *)(param_1 + 0x2c) - (int)local_24) - 1;
        }
        else {
          local_50 = *(int *)(param_1 + 0x28) - (int)local_24;
        }
        local_28 = local_50;
      }
      if (local_28 == 0) {
        *(undefined1 **)(param_1 + 0x30) = local_24;
        FUN_100a0130(param_1,(int)param_2);
        local_24 = *(undefined1 **)(param_1 + 0x30);
        if (local_24 < *(undefined1 **)(param_1 + 0x2c)) {
          local_54 = (*(int *)(param_1 + 0x2c) - (int)local_24) - 1;
        }
        else {
          local_54 = *(int *)(param_1 + 0x28) - (int)local_24;
        }
        local_28 = local_54;
        if ((local_24 == *(undefined1 **)(param_1 + 0x28)) &&
           (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x24))) {
          local_24 = *(undefined1 **)(param_1 + 0x24);
          if (local_24 < *(undefined1 **)(param_1 + 0x2c)) {
            local_58 = (*(int *)(param_1 + 0x2c) - (int)local_24) - 1;
          }
          else {
            local_58 = *(int *)(param_1 + 0x28) - (int)local_24;
          }
          local_28 = local_58;
        }
        if (local_28 == 0) {
          *(uint *)(param_1 + 0x20) = local_14;
          *(uint *)(param_1 + 0x1c) = local_18;
          param_2[1] = local_20;
          param_2[2] = (int)(local_1c + (param_2[2] - *param_2));
          *param_2 = (int)local_1c;
          *(undefined1 **)(param_1 + 0x30) = local_24;
          FUN_100a0130(param_1,(int)param_2);
          goto LAB_100a009d;
        }
      }
LAB_1009fe7d:
      *local_24 = (char)local_30[2];
      local_24 = local_24 + 1;
      local_28 = local_28 - 1;
      *local_30 = 0;
      break;
    case 7:
      *(undefined1 **)(param_1 + 0x30) = local_24;
      FUN_100a0130(param_1,(int)param_2);
      local_24 = *(undefined1 **)(param_1 + 0x30);
      if (local_24 < *(undefined1 **)(param_1 + 0x2c)) {
        local_5c = (*(int *)(param_1 + 0x2c) - (int)local_24) - 1;
      }
      else {
        local_5c = *(int *)(param_1 + 0x28) - (int)local_24;
      }
      local_28 = local_5c;
      if (*(int *)(param_1 + 0x2c) == *(int *)(param_1 + 0x30)) {
        *local_30 = 8;
switchD_1009f413_caseD_8:
        *(uint *)(param_1 + 0x20) = local_14;
        *(uint *)(param_1 + 0x1c) = local_18;
        param_2[1] = local_20;
        param_2[2] = (int)(local_1c + (param_2[2] - *param_2));
        *param_2 = (int)local_1c;
        *(undefined1 **)(param_1 + 0x30) = local_24;
        FUN_100a0130(param_1,(int)param_2);
      }
      else {
        *(uint *)(param_1 + 0x20) = local_14;
        *(uint *)(param_1 + 0x1c) = local_18;
        param_2[1] = local_20;
        param_2[2] = (int)(local_1c + (param_2[2] - *param_2));
        *param_2 = (int)local_1c;
        *(undefined1 **)(param_1 + 0x30) = local_24;
        FUN_100a0130(param_1,(int)param_2);
      }
LAB_100a009d:
      local_8 = 0x100a00ad;
      __chkesp();
      return;
    case 8:
      goto switchD_1009f413_caseD_8;
    case 9:
      *(uint *)(param_1 + 0x20) = local_14;
      *(uint *)(param_1 + 0x1c) = local_18;
      param_2[1] = local_20;
      param_2[2] = (int)(local_1c + (param_2[2] - *param_2));
      *param_2 = (int)local_1c;
      *(undefined1 **)(param_1 + 0x30) = local_24;
      FUN_100a0130(param_1,(int)param_2);
      goto LAB_100a009d;
    default:
      *(uint *)(param_1 + 0x20) = local_14;
      *(uint *)(param_1 + 0x1c) = local_18;
      param_2[1] = local_20;
      param_2[2] = (int)(local_1c + (param_2[2] - *param_2));
      *param_2 = (int)local_1c;
      *(undefined1 **)(param_1 + 0x30) = local_24;
      FUN_100a0130(param_1,(int)param_2);
      goto LAB_100a009d;
    }
  } while( true );
}

