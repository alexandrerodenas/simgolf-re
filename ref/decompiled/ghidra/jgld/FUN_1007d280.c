/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1007d280 @ 0x1007D280 */


void __cdecl FUN_1007d280(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_54 [16];
  char *local_14;
  byte local_10 [4];
  int local_c;
  undefined4 local_8;
  
  puVar2 = local_54;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  param_1[0x39] = param_1[0x39] + 1;
  if ((uint)param_1[0x34] <= (uint)param_1[0x39]) {
    if (*(char *)((int)param_1 + 0x123) != '\0') {
      param_1[0x39] = 0;
      FUN_10078f80(param_1,(void *)param_1[0x3a],0,param_1[0x36] + 1);
      while (*(char *)(param_1 + 0x49) = (char)param_1[0x49] + '\x01', *(byte *)(param_1 + 0x49) < 7
            ) {
        param_1[0x38] =
             (uint)((param_1[0x32] + -1 +
                    *(int *)(&DAT_10123244 + (uint)*(byte *)(param_1 + 0x49) * 4)) -
                   *(int *)(&DAT_10123228 + (uint)*(byte *)(param_1 + 0x49) * 4)) /
             *(uint *)(&DAT_10123244 + (uint)*(byte *)(param_1 + 0x49) * 4);
        param_1[0x37] = (param_1[0x38] * (uint)*(byte *)((int)param_1 + 0x129) + 7 >> 3) + 1;
        if (((param_1[0x1c] & 2U) != 0) ||
           (param_1[0x34] =
                 (uint)((param_1[0x33] + -1 + (&DAT_1012327c)[*(byte *)(param_1 + 0x49)]) -
                       *(int *)(&DAT_10123260 + (uint)*(byte *)(param_1 + 0x49) * 4)) /
                 (uint)(&DAT_1012327c)[*(byte *)(param_1 + 0x49)], param_1[0x38] != 0)) break;
      }
      if (*(byte *)(param_1 + 0x49) < 7) goto LAB_1007d69f;
    }
    if ((param_1[0x1b] & 0x20U) == 0) {
      param_1[0x20] = (int)&local_8;
      param_1[0x21] = 1;
      while( true ) {
        if (param_1[0x1e] == 0) {
          while (param_1[0x43] == 0) {
            FUN_10079510(param_1,0);
            FUN_10078c40(param_1,local_10,4);
            iVar1 = FUN_100793b0(local_10);
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
        local_c = FUN_1009c0f0(param_1 + 0x1d,1);
        if (local_c == 1) break;
        if (local_c != 0) {
          if (param_1[0x23] == 0) {
            local_14 = "Decompression Error";
          }
          else {
            local_14 = (char *)param_1[0x23];
          }
          FUN_10078fe0(param_1,local_14);
        }
        if (param_1[0x21] == 0) {
          FUN_10078fe0(param_1,"Extra compressed data");
        }
      }
      if (((param_1[0x21] == 0) || (param_1[0x1e] != 0)) || (param_1[0x43] != 0)) {
        FUN_10078fe0(param_1,"Extra compressed data");
      }
      param_1[0x1a] = param_1[0x1a] | 8;
      param_1[0x1b] = param_1[0x1b] | 0x20;
      param_1[0x21] = 0;
    }
    if ((param_1[0x43] != 0) || (param_1[0x1e] != 0)) {
      FUN_10078fe0(param_1,"Extra compression data");
    }
    FUN_1009bdd0((int)(param_1 + 0x1d));
    param_1[0x1a] = param_1[0x1a] | 8;
  }
LAB_1007d69f:
  local_8 = 0x1007d6ac;
  __chkesp();
  return;
}

