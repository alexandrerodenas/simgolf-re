/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1007ab40 @ 0x1007AB40 */
/* Body size: 801 addresses */


void __cdecl FUN_1007ab40(int *param_1,int param_2,uint param_3)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_54 [16];
  byte local_14 [8];
  byte local_c [2];
  byte local_a [2];
  byte local_8 [4];
  
  puVar3 = local_54;
  for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if ((param_1[0x1a] & 1U) == 0) {
    FUN_10078fe0(param_1,"Missing IHDR before tRNS");
  }
  else {
    if ((param_1[0x1a] & 4U) != 0) {
      FUN_10079040((int)param_1,"Invalid tRNS after IDAT");
      FUN_10079510(param_1,param_3);
      goto LAB_1007ae50;
    }
    if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x10) != 0)) {
      FUN_10079040((int)param_1,"Duplicate tRNS chunk");
      FUN_10079510(param_1,param_3);
      goto LAB_1007ae50;
    }
  }
  if (*(char *)((int)param_1 + 0x126) == '\x03') {
    if ((param_1[0x1a] & 2U) == 0) {
      FUN_10079040((int)param_1,"Missing PLTE before tRNS");
    }
    else if (*(ushort *)(param_1 + 0x46) < param_3) {
      FUN_10079040((int)param_1,"Incorrect tRNS chunk length");
      FUN_10079510(param_1,param_3);
      goto LAB_1007ae50;
    }
    if (param_3 == 0) {
      FUN_10079040((int)param_1,"Zero length tRNS chunk");
      FUN_10079510(param_1,0);
      goto LAB_1007ae50;
    }
    iVar2 = FUN_10078e60(param_1,param_3);
    param_1[0x62] = iVar2;
    param_1[0x1b] = param_1[0x1b] | 0x2000;
    FUN_100794b0(param_1,(byte *)param_1[0x62],param_3);
    *(undefined2 *)((int)param_1 + 0x11a) = (undefined2)param_3;
  }
  else if (*(char *)((int)param_1 + 0x126) == '\x02') {
    if (param_3 != 6) {
      FUN_10079040((int)param_1,"Incorrect tRNS chunk length");
      FUN_10079510(param_1,param_3);
      goto LAB_1007ae50;
    }
    FUN_100794b0(param_1,local_c,6);
    *(undefined2 *)((int)param_1 + 0x11a) = 1;
    sVar1 = FUN_10079470(local_c);
    *(short *)((int)param_1 + 0x18e) = sVar1;
    sVar1 = FUN_10079470(local_a);
    *(short *)(param_1 + 100) = sVar1;
    sVar1 = FUN_10079470(local_8);
    *(short *)((int)param_1 + 0x192) = sVar1;
  }
  else {
    if (*(char *)((int)param_1 + 0x126) != '\0') {
      FUN_10079040((int)param_1,"tRNS chunk not allowed with alpha channel");
      FUN_10079510(param_1,param_3);
      goto LAB_1007ae50;
    }
    if (param_3 != 2) {
      FUN_10079040((int)param_1,"Incorrect tRNS chunk length");
      FUN_10079510(param_1,param_3);
      goto LAB_1007ae50;
    }
    FUN_100794b0(param_1,local_14,2);
    *(undefined2 *)((int)param_1 + 0x11a) = 1;
    sVar1 = FUN_10079470(local_14);
    *(short *)(param_1 + 0x65) = sVar1;
  }
  iVar2 = FUN_10079510(param_1,0);
  if (iVar2 == 0) {
    FUN_1007e470((int)param_1,param_2,param_1[0x62],(uint)*(ushort *)((int)param_1 + 0x11a),
                 param_1 + 99);
  }
LAB_1007ae50:
  local_8[0] = 0x5d;
  local_8[1] = 0xae;
  local_8[2] = 7;
  local_8[3] = 0x10;
  __chkesp();
  return;
}

