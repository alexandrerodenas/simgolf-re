/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006c3f0 @ 0x1006C3F0 */
/* Body size: 1804 addresses */


void __cdecl FUN_1006c3f0(int *param_1,byte *param_2,byte *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_54 [16];
  char *local_14;
  uint local_10;
  byte local_c [4];
  int local_8;
  
  puVar2 = local_54;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if ((param_1[0x1b] & 0x40U) == 0) {
    FUN_1007d6b0(param_1);
  }
  if ((*(char *)((int)param_1 + 0x123) != '\0') && ((param_1[0x1c] & 2U) != 0)) {
    local_10 = (uint)*(byte *)(param_1 + 0x49);
    switch(local_10) {
    case 0:
      if ((param_1[0x39] & 7U) != 0) {
        if (param_3 != (byte *)0x0) {
          FUN_1007c310((int)param_1,param_3,
                       *(uint *)(&DAT_101232b4 + (uint)*(byte *)(param_1 + 0x49) * 4));
        }
        FUN_1007d280(param_1);
        goto LAB_1006caeb;
      }
      break;
    case 1:
      if (((param_1[0x39] & 7U) != 0) || ((uint)param_1[0x32] < 5)) {
        if (param_3 != (byte *)0x0) {
          FUN_1007c310((int)param_1,param_3,
                       *(uint *)(&DAT_101232b4 + (uint)*(byte *)(param_1 + 0x49) * 4));
        }
        FUN_1007d280(param_1);
        goto LAB_1006caeb;
      }
      break;
    case 2:
      if ((param_1[0x39] & 7U) != 4) {
        if ((param_3 != (byte *)0x0) && ((param_1[0x39] & 4U) != 0)) {
          FUN_1007c310((int)param_1,param_3,
                       *(uint *)(&DAT_101232b4 + (uint)*(byte *)(param_1 + 0x49) * 4));
        }
        FUN_1007d280(param_1);
        goto LAB_1006caeb;
      }
      break;
    case 3:
      if (((param_1[0x39] & 3U) != 0) || ((uint)param_1[0x32] < 3)) {
        if (param_3 != (byte *)0x0) {
          FUN_1007c310((int)param_1,param_3,
                       *(uint *)(&DAT_101232b4 + (uint)*(byte *)(param_1 + 0x49) * 4));
        }
        FUN_1007d280(param_1);
        goto LAB_1006caeb;
      }
      break;
    case 4:
      if ((param_1[0x39] & 3U) != 2) {
        if ((param_3 != (byte *)0x0) && ((param_1[0x39] & 2U) != 0)) {
          FUN_1007c310((int)param_1,param_3,
                       *(uint *)(&DAT_101232b4 + (uint)*(byte *)(param_1 + 0x49) * 4));
        }
        FUN_1007d280(param_1);
        goto LAB_1006caeb;
      }
      break;
    case 5:
      if (((param_1[0x39] & 1U) != 0) || ((uint)param_1[0x32] < 2)) {
        if (param_3 != (byte *)0x0) {
          FUN_1007c310((int)param_1,param_3,
                       *(uint *)(&DAT_101232b4 + (uint)*(byte *)(param_1 + 0x49) * 4));
        }
        FUN_1007d280(param_1);
        goto LAB_1006caeb;
      }
      break;
    case 6:
      if ((param_1[0x39] & 1U) == 0) {
        FUN_1007d280(param_1);
        goto LAB_1006caeb;
      }
    }
  }
  if ((param_1[0x1a] & 4U) == 0) {
    FUN_10078fe0(param_1,"Invalid attempt to read row data");
  }
  param_1[0x20] = param_1[0x3b];
  param_1[0x21] = param_1[0x37];
  do {
    if (param_1[0x1e] == 0) {
      while (param_1[0x43] == 0) {
        FUN_10079510(param_1,0);
        FUN_10078c40(param_1,local_c,4);
        iVar1 = FUN_100793b0(local_c);
        param_1[0x43] = iVar1;
        FUN_10078790((int)param_1);
        FUN_100794b0(param_1,(byte *)(param_1 + 0x47),4);
        iVar1 = _memcmp(param_1 + 0x47,&DAT_101231a8,4);
        if (iVar1 != 0) {
          FUN_10078fe0(param_1,"Not enough image data");
        }
      }
      param_1[0x1e] = param_1[0x2c];
      param_1[0x1d] = param_1[0x2b];
      if ((uint)param_1[0x43] < (uint)param_1[0x2c]) {
        param_1[0x1e] = param_1[0x43];
      }
      FUN_100794b0(param_1,(byte *)param_1[0x2b],param_1[0x1e]);
      param_1[0x43] = param_1[0x43] - param_1[0x1e];
    }
    local_8 = FUN_1009c0f0(param_1 + 0x1d,1);
    if (local_8 == 1) {
      if (((param_1[0x21] != 0) || (param_1[0x1e] != 0)) || (param_1[0x43] != 0)) {
        FUN_10078fe0(param_1,"Extra compressed data");
      }
      param_1[0x1a] = param_1[0x1a] | 8;
      param_1[0x1b] = param_1[0x1b] | 0x20;
      break;
    }
    if (local_8 != 0) {
      if (param_1[0x23] == 0) {
        local_14 = "Decompression error";
      }
      else {
        local_14 = (char *)param_1[0x23];
      }
      FUN_10078fe0(param_1,local_14);
    }
  } while (param_1[0x21] != 0);
  *(undefined1 *)(param_1 + 0x42) = *(undefined1 *)((int)param_1 + 0x126);
  param_1[0x40] = param_1[0x38];
  *(undefined1 *)((int)param_1 + 0x10a) = *(undefined1 *)((int)param_1 + 0x12a);
  *(undefined1 *)((int)param_1 + 0x109) = *(undefined1 *)((int)param_1 + 0x127);
  *(undefined1 *)((int)param_1 + 0x10b) = *(undefined1 *)((int)param_1 + 0x129);
  param_1[0x41] = param_1[0x40] * (uint)*(byte *)((int)param_1 + 0x10b) + 7 >> 3;
  FUN_1007ce80((int)param_1,(int)(param_1 + 0x40),(byte *)(param_1[0x3b] + 1),
               (byte *)(param_1[0x3a] + 1),(uint)*(byte *)param_1[0x3b]);
  FUN_10078f20(param_1,(undefined4 *)param_1[0x3a],(undefined4 *)param_1[0x3b],param_1[0x36] + 1);
  if (param_1[0x1c] != 0) {
    FUN_100717d0(param_1);
  }
  if ((*(char *)((int)param_1 + 0x123) == '\0') || ((param_1[0x1c] & 2U) == 0)) {
    if (param_2 != (byte *)0x0) {
      FUN_1007c310((int)param_1,param_2,0xff);
    }
    if (param_3 != (byte *)0x0) {
      FUN_1007c310((int)param_1,param_3,0xff);
    }
  }
  else {
    if (*(byte *)(param_1 + 0x49) < 6) {
      FUN_1007c810((uint *)(param_1 + 0x40),param_1[0x3b] + 1,(uint)*(byte *)(param_1 + 0x49),
                   param_1[0x1c]);
    }
    if (param_3 != (byte *)0x0) {
      FUN_1007c310((int)param_1,param_3,
                   *(uint *)(&DAT_101232b4 + (uint)*(byte *)(param_1 + 0x49) * 4));
    }
    if (param_2 != (byte *)0x0) {
      FUN_1007c310((int)param_1,param_2,
                   *(uint *)(&DAT_10123298 + (uint)*(byte *)(param_1 + 0x49) * 4));
    }
  }
  FUN_1007d280(param_1);
  if (param_1[0x66] != 0) {
    (*(code *)param_1[0x66])(param_1,param_1[0x39],(char)param_1[0x49]);
    __chkesp();
  }
LAB_1006caeb:
  local_8 = 0x1006caf8;
  __chkesp();
  return;
}

