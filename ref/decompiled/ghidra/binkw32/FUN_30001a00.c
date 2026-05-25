/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30001a00 @ 0x30001A00 */


void __cdecl FUN_30001a00(int *param_1,int param_2)

{
  BOOL BVar1;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined4 local_38 [8];
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_1[0x19] != 0) {
    BVar1 = IsWindowVisible((HWND)param_1[0x18]);
    if (BVar1 != 0) {
      local_50 = *param_1;
      local_4c = param_1[1];
      local_40 = param_1[0x14];
      local_58 = 0;
      local_54 = 0;
      local_48 = local_40;
      if (local_40 < 1) {
        local_58 = -local_40;
        local_48 = 0;
      }
      local_3c = param_1[0x15];
      local_44 = local_3c;
      if (local_3c < 1) {
        local_44 = 0;
        local_54 = -local_3c;
      }
      local_40 = param_1[0xf] + local_40;
      local_3c = param_1[0x10] + local_3c;
      if (DAT_30041528 < local_40) {
        local_50 = local_50 + (DAT_30041528 - local_40);
        local_40 = DAT_30041528;
      }
      if (DAT_30041524 < local_3c) {
        local_4c = local_4c + (DAT_30041524 - local_3c);
        local_3c = DAT_30041524;
      }
      if ((((local_58 <= local_50) && (local_54 <= local_4c)) && (local_48 <= local_40)) &&
         (local_44 <= local_3c)) {
        if (param_2 == 1) {
          param_1[0x1b] = 0;
        }
        else if (param_2 == 2) {
          param_1[0x1b] = 1;
        }
        local_18 = DAT_3004152c;
        local_14 = DAT_3004152c;
        local_38[0] = 0x38;
        (**(code **)(*(int *)param_1[0x12] + 0x84))
                  ((int *)param_1[0x12],&local_58,DAT_3004163c,&local_48,
                   (-(uint)(param_1[0x1b] != 0) & 0x3e00) + 0x200 | 0x800,local_38);
        return;
      }
    }
    (**(code **)(*(int *)param_1[0x12] + 0x84))((int *)param_1[0x12],0,DAT_3004163c,0,0x200,0);
  }
  return;
}

