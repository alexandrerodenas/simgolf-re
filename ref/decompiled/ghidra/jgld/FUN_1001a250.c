/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1001a250 @ 0x1001A250 */


void __thiscall FUN_1001a250(void *this,undefined4 *param_1,uint param_2,int param_3)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_60 [16];
  uint local_20;
  int local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  uint local_c;
  int *local_8;
  
  puVar3 = local_60;
  for (iVar2 = 0x17; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_8 = this;
  (**(code **)(*(int *)this + 8))();
  __chkesp();
  local_8[0xc] = param_2;
  local_8[0xd] = param_3;
  local_8[8] = 0x10;
  local_8[9] = param_2 * param_3 * 2;
  iVar2 = thunk_FUN_10014a40(local_8[9]);
  local_8[5] = iVar2;
  if (local_8[5] != 0) {
    DAT_101284c8 = DAT_101284c8 + param_2 * param_3;
    if (param_1 != (undefined4 *)0x0) {
      if ((((DAT_101284c4 == 0) || (param_2 < 5)) || (0xff < (int)param_2)) ||
         (0xffff < (int)(param_2 * param_3))) {
LAB_1001a580:
        local_8[6] = local_8[6] & 0xfffffffe;
        FUN_1007f3a0((undefined4 *)local_8[5],param_1,param_2 * param_3);
      }
      else {
        local_c = param_2 * param_3 + param_3 * -4;
        iVar2 = thunk_FUN_10014a40(param_3 << 2);
        local_8[7] = iVar2;
        if (local_8[7] == 0) {
          (**(code **)(*local_8 + 8))();
          __chkesp();
          goto LAB_1001a5ba;
        }
        local_14 = (undefined4 *)local_8[5];
        local_18 = param_1;
        for (local_1c = 0; local_1c < param_3; local_1c = local_1c + 1) {
          local_10 = local_18;
          local_20 = 0;
          while (((int)local_20 < (int)param_2 &&
                 ((uint)*(ushort *)((int)local_18 + local_20 * 2) == local_8[10]))) {
            local_20 = local_20 + 1;
          }
          *(undefined1 *)(local_8[7] + local_1c * 4) = (undefined1)local_20;
          local_20 = param_2;
          do {
            local_20 = local_20 - 1;
            if ((int)local_20 <= (int)(uint)*(byte *)(local_8[7] + local_1c * 4)) break;
          } while ((uint)*(ushort *)((int)local_18 + local_20 * 2) == local_8[10]);
          *(char *)(local_8[7] + 1 + local_1c * 4) =
               ((char)local_20 + '\x01') - *(char *)(local_8[7] + local_1c * 4);
          if (*(char *)(local_8[7] + 1 + local_1c * 4) != '\0') {
            if (local_c < *(byte *)(local_8[7] + 1 + local_1c * 4)) {
              thunk_FUN_10014a90((void *)local_8[7]);
              local_8[7] = 0;
              goto LAB_1001a580;
            }
            *(short *)(local_8[7] + 2 + local_1c * 4) = (short)((int)local_14 - local_8[5] >> 1);
            FUN_1007f3a0(local_14,(undefined4 *)
                                  ((int)local_18 + (uint)*(byte *)(local_8[7] + local_1c * 4) * 2),
                         (uint)*(byte *)(local_8[7] + 1 + local_1c * 4));
            local_c = local_c - *(byte *)(local_8[7] + 1 + local_1c * 4);
            local_14 = (undefined4 *)
                       ((int)local_14 + (uint)*(byte *)(local_8[7] + 1 + local_1c * 4) * 2);
          }
          local_18 = (undefined4 *)((int)local_18 + param_2 * 2);
        }
        local_8[6] = local_8[6] | 1;
        local_8[9] = param_2 * param_3 - local_c;
        pvVar1 = FID_conflict___expand((void *)local_8[5],local_8[9]);
        local_8[5] = (int)pvVar1;
        DAT_101284cc = DAT_101284cc + (param_2 * param_3 - local_8[9]) + param_3 * -4;
      }
    }
    local_8[0xb] = param_2;
  }
LAB_1001a5ba:
  local_8 = (int *)0x1001a5c7;
  __chkesp();
  return;
}

