/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1007ae70 @ 0x1007AE70 */


void __cdecl FUN_1007ae70(int *param_1,int param_2,uint param_3)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_50 [16];
  undefined4 local_10;
  byte local_c [4];
  uint local_8;
  
  puVar3 = local_50;
  for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if ((param_1[0x1a] & 1U) == 0) {
    FUN_10078fe0(param_1,"Missing IHDR before bKGD");
  }
  else {
    if ((param_1[0x1a] & 4U) != 0) {
      FUN_10079040((int)param_1,"Invalid bKGD after IDAT");
      FUN_10079510(param_1,param_3);
      goto LAB_1007b18f;
    }
    if ((*(char *)((int)param_1 + 0x126) == '\x03') && ((param_1[0x1a] & 2U) == 0)) {
      FUN_10079040((int)param_1,"Missing PLTE before bKGD");
      FUN_10079510(param_1,param_3);
      goto LAB_1007b18f;
    }
    if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x20) != 0)) {
      FUN_10079040((int)param_1,"Duplicate bKGD chunk");
      FUN_10079510(param_1,param_3);
      goto LAB_1007b18f;
    }
  }
  if (*(char *)((int)param_1 + 0x126) == '\x03') {
    local_8 = 1;
  }
  else if ((*(byte *)((int)param_1 + 0x126) & 2) == 0) {
    local_8 = 2;
  }
  else {
    local_8 = 6;
  }
  if (param_3 == local_8) {
    FUN_100794b0(param_1,(byte *)&local_10,local_8);
    iVar2 = FUN_10079510(param_1,0);
    if (iVar2 == 0) {
      if (*(char *)((int)param_1 + 0x126) == '\x03') {
        *(byte *)(param_1 + 0x4e) = (byte)local_10;
        if (*(short *)(param_2 + 0x14) != 0) {
          if ((uint)*(ushort *)(param_2 + 0x14) < (local_10 & 0xff)) {
            FUN_10079040((int)param_1,"Incorrect bKGD chunk index value");
            FUN_10079510(param_1,param_3);
            goto LAB_1007b18f;
          }
          *(ushort *)((int)param_1 + 0x13a) =
               (ushort)*(byte *)(param_1[0x45] + (local_10 & 0xff) * 3);
          *(ushort *)(param_1 + 0x4f) = (ushort)*(byte *)(param_1[0x45] + 1 + (local_10 & 0xff) * 3)
          ;
          *(ushort *)((int)param_1 + 0x13e) =
               (ushort)*(byte *)(param_1[0x45] + 2 + (local_10 & 0xff) * 3);
        }
      }
      else if ((*(byte *)((int)param_1 + 0x126) & 2) == 0) {
        sVar1 = FUN_10079470((byte *)&local_10);
        *(short *)(param_1 + 0x50) = sVar1;
        *(short *)((int)param_1 + 0x13e) = (short)param_1[0x50];
        *(undefined2 *)(param_1 + 0x4f) = *(undefined2 *)((int)param_1 + 0x13e);
        *(short *)((int)param_1 + 0x13a) = (short)param_1[0x4f];
      }
      else {
        sVar1 = FUN_10079470((byte *)&local_10);
        *(short *)((int)param_1 + 0x13a) = sVar1;
        sVar1 = FUN_10079470((byte *)((int)&local_10 + 2));
        *(short *)(param_1 + 0x4f) = sVar1;
        sVar1 = FUN_10079470(local_c);
        *(short *)((int)param_1 + 0x13e) = sVar1;
      }
      FUN_1007dad0((int)param_1,param_2,param_1 + 0x4e);
    }
  }
  else {
    FUN_10079040((int)param_1,"Incorrect bKGD chunk length");
    FUN_10079510(param_1,param_3);
  }
LAB_1007b18f:
  local_8 = 0x1007b19c;
  __chkesp();
  return;
}

