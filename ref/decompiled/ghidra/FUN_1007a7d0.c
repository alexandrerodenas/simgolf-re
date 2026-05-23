/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1007a7d0 @ 0x1007A7D0 */
/* Body size: 866 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1007a7d0(int *param_1,int param_2,uint param_3)

{
  double dVar1;
  int iVar2;
  undefined4 *puVar3;
  float10 fVar4;
  undefined4 local_4c [16];
  uint local_c;
  uint local_8;
  
  puVar3 = local_4c;
  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if ((param_1[0x1a] & 1U) == 0) {
    FUN_10078fe0(param_1,"Missing IHDR before sRGB");
  }
  else {
    if ((param_1[0x1a] & 4U) != 0) {
      FUN_10079040((int)param_1,"Invalid sRGB after IDAT");
      FUN_10079510(param_1,param_3);
      goto LAB_1007ab21;
    }
    if ((param_1[0x1a] & 2U) == 0) {
      if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x800) != 0)) {
        FUN_10079040((int)param_1,"Duplicate sRGB chunk");
        FUN_10079510(param_1,param_3);
        goto LAB_1007ab21;
      }
    }
    else {
      FUN_10079040((int)param_1,"Out of place sRGB chunk");
    }
  }
  if (param_3 == 1) {
    FUN_100794b0(param_1,(byte *)&local_c,1);
    iVar2 = FUN_10079510(param_1,0);
    if (iVar2 == 0) {
      local_8 = local_c & 0xff;
      if (local_8 < 4) {
        if (((*(uint *)(param_2 + 8) & 1) != 0) &&
           (dVar1 = (double)(((float)param_1[0x57] * _DAT_1011e2d4 + (float)_DAT_1011d5f0) -
                            (float)_DAT_1011e328),
           fVar4 = FUN_10082960(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20)),
           (float10)_DAT_1011e320 < fVar4)) {
          FUN_10079040((int)param_1,"Ignoring incorrect gAMA value when sRGB is also present");
          FUN_10083010((undefined **)&DAT_101233f0,(byte *)"gamma=%f\n");
        }
        if (((*(uint *)(param_2 + 8) & 4) != 0) &&
           (((((dVar1 = (double)(*(float *)(param_2 + 0x80) - _DAT_1011e4c8),
               fVar4 = FUN_10082960(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20)),
               (float10)_DAT_1011e4c0 < fVar4 ||
               (dVar1 = (double)(*(float *)(param_2 + 0x84) - _DAT_1011e4b8),
               fVar4 = FUN_10082960(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20)),
               (float10)_DAT_1011e4c0 < fVar4)) ||
              (dVar1 = (double)(*(float *)(param_2 + 0x88) - _DAT_1011e4b4),
              fVar4 = FUN_10082960(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20)),
              (float10)_DAT_1011e4c0 < fVar4)) ||
             ((dVar1 = (double)(*(float *)(param_2 + 0x8c) - _DAT_1011e4b0),
              fVar4 = FUN_10082960(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20)),
              (float10)_DAT_1011e4c0 < fVar4 ||
              (dVar1 = (double)(*(float *)(param_2 + 0x90) - _DAT_1011e4ac),
              fVar4 = FUN_10082960(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20)),
              (float10)_DAT_1011e4c0 < fVar4)))) ||
            ((dVar1 = (double)(*(float *)(param_2 + 0x94) - _DAT_1011e4a8),
             fVar4 = FUN_10082960(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20)),
             (float10)_DAT_1011e4c0 < fVar4 ||
             ((dVar1 = (double)(*(float *)(param_2 + 0x98) - _DAT_1011e4a4),
              fVar4 = FUN_10082960(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20)),
              (float10)_DAT_1011e4c0 < fVar4 ||
              (dVar1 = (double)(*(float *)(param_2 + 0x9c) - _DAT_1011e4a0),
              fVar4 = FUN_10082960(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20)),
              (float10)_DAT_1011e4c0 < fVar4)))))))) {
          FUN_10079040((int)param_1,"Ignoring incorrect cHRM value when sRGB is also present");
        }
        FUN_1007e120((int)param_1,param_2,(char)local_8);
      }
      else {
        FUN_10079040((int)param_1,"Unknown sRGB intent");
      }
    }
  }
  else {
    FUN_10079040((int)param_1,"Incorrect sRGB chunk length");
    FUN_10079510(param_1,param_3);
  }
LAB_1007ab21:
  local_8 = 0x1007ab2e;
  __chkesp();
  return;
}

