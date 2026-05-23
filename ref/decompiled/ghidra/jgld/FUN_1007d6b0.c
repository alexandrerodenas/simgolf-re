/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1007d6b0 @ 0x1007D6B0 */
/* Body size: 1054 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1007d6b0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_50 [16];
  uint local_10;
  size_t local_c;
  uint local_8;
  
  puVar2 = local_50;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  param_1[0x1e] = 0;
  FUN_100702a0(param_1);
  if (*(char *)((int)param_1 + 0x123) == '\0') {
    param_1[0x34] = param_1[0x33];
    param_1[0x38] = param_1[0x32];
    param_1[0x37] = param_1[0x36] + 1;
  }
  else {
    if ((param_1[0x1c] & 2U) == 0) {
      param_1[0x34] = ((param_1[0x33] + -1 + DAT_1012327c) - _DAT_10123260) / DAT_1012327c;
    }
    else {
      param_1[0x34] = param_1[0x33];
    }
    param_1[0x38] =
         (uint)((param_1[0x32] + -1 + *(int *)(&DAT_10123244 + (uint)*(byte *)(param_1 + 0x49) * 4))
               - *(int *)(&DAT_10123228 + (uint)*(byte *)(param_1 + 0x49) * 4)) /
         *(uint *)(&DAT_10123244 + (uint)*(byte *)(param_1 + 0x49) * 4);
    local_c = (param_1[0x38] * (uint)*(byte *)((int)param_1 + 0x129) + 7 >> 3) + 1;
    param_1[0x37] = local_c;
    if (param_1[0x37] != local_c) {
      FUN_10078fe0(param_1,"Rowbytes overflow in png_read_start_row");
    }
  }
  local_8 = (uint)*(byte *)((int)param_1 + 0x129);
  if (((param_1[0x1c] & 4U) != 0) && (*(byte *)((int)param_1 + 0x127) < 8)) {
    local_8 = 8;
  }
  if ((param_1[0x1c] & 0x1000U) != 0) {
    if (*(char *)((int)param_1 + 0x126) == '\x03') {
      if (*(short *)((int)param_1 + 0x11a) == 0) {
        local_8 = 0x18;
      }
      else {
        local_8 = 0x20;
      }
    }
    else if (*(char *)((int)param_1 + 0x126) == '\0') {
      if (local_8 < 8) {
        local_8 = 8;
      }
      if (*(short *)((int)param_1 + 0x11a) != 0) {
        local_8 = local_8 << 1;
      }
    }
    else if ((*(char *)((int)param_1 + 0x126) == '\x02') && (*(short *)((int)param_1 + 0x11a) != 0))
    {
      local_8 = (local_8 << 2) / 3;
    }
  }
  if ((param_1[0x1c] & 0x8000U) != 0) {
    if (*(char *)((int)param_1 + 0x126) == '\x03') {
      local_8 = 0x20;
    }
    else if (*(char *)((int)param_1 + 0x126) == '\0') {
      if (local_8 < 9) {
        local_8 = 0x10;
      }
      else {
        local_8 = 0x20;
      }
    }
    else if (*(char *)((int)param_1 + 0x126) == '\x02') {
      if (local_8 < 0x21) {
        local_8 = 0x20;
      }
      else {
        local_8 = 0x40;
      }
    }
  }
  if ((param_1[0x1c] & 0x4000U) != 0) {
    if ((((*(short *)((int)param_1 + 0x11a) == 0) || ((param_1[0x1c] & 0x1000U) == 0)) &&
        ((param_1[0x1c] & 0x8000U) == 0)) && (*(char *)((int)param_1 + 0x126) != '\x04')) {
      if (local_8 < 9) {
        local_8 = 0x18;
      }
      else {
        local_8 = 0x30;
      }
    }
    else if (local_8 < 0x11) {
      local_8 = 0x20;
    }
    else {
      local_8 = 0x40;
    }
  }
  if (((param_1[0x1c] & 0x100000U) != 0) &&
     (local_10 = (uint)*(byte *)(param_1 + 0x19) * (uint)*(byte *)((int)param_1 + 0x65),
     local_8 < local_10)) {
    local_8 = local_10;
  }
  local_c = ((param_1[0x32] + 7U & 0xfffffff8) * local_8 + 7 >> 3) + 1 + ((int)(local_8 + 7) >> 3);
  iVar1 = FUN_10078e60(param_1,local_c);
  param_1[0x3b] = iVar1;
  iVar1 = FUN_10078e60(param_1,param_1[0x36] + 1);
  param_1[0x3a] = iVar1;
  FUN_10078f80(param_1,(void *)param_1[0x3a],0,param_1[0x36] + 1);
  param_1[0x1b] = param_1[0x1b] | 0x40;
  local_8 = 0x1007daca;
  __chkesp();
  return;
}

