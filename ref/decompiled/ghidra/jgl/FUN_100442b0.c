/* Ghidra decompiled: jgl.dll */
/* Function: FUN_100442b0 @ 0x100442B0 */


void __cdecl FUN_100442b0(int *param_1,int param_2,uint param_3)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  char *pcVar5;
  undefined4 local_8;
  byte local_4 [4];
  
  uVar2 = param_1[0x1a];
  if ((uVar2 & 1) == 0) {
    FUN_10042d90(param_1,s_Missing_IHDR_before_bKGD_10055fbc);
  }
  else {
    if ((uVar2 & 4) != 0) {
      FUN_10042dc0((int)param_1,s_Invalid_bKGD_after_IDAT_10055fa4);
      FUN_10042fd0(param_1,param_3);
      return;
    }
    if ((*(char *)((int)param_1 + 0x126) == '\x03') && ((uVar2 & 2) == 0)) {
      FUN_10042dc0((int)param_1,s_Missing_PLTE_before_bKGD_10055f88);
      FUN_10042fd0(param_1,param_3);
      return;
    }
    if ((param_2 != 0) && ((*(byte *)(param_2 + 8) & 0x20) != 0)) {
      FUN_10042dc0((int)param_1,s_Duplicate_bKGD_chunk_10055f70);
      FUN_10042fd0(param_1,param_3);
      return;
    }
  }
  if (*(byte *)((int)param_1 + 0x126) == 3) {
    uVar2 = 1;
  }
  else {
    uVar2 = (uint)(*(byte *)((int)param_1 + 0x126) & 2 | 1) << 1;
  }
  if (param_3 != uVar2) {
    pcVar5 = s_Incorrect_bKGD_chunk_length_10055f54;
LAB_100443d0:
    FUN_10042dc0((int)param_1,pcVar5);
    FUN_10042fd0(param_1,param_3);
    return;
  }
  FUN_10042fa0(param_1,(byte *)&local_8,uVar2);
  iVar3 = FUN_10042fd0(param_1,0);
  if (iVar3 == 0) {
    if (*(byte *)((int)param_1 + 0x126) == 3) {
      *(char *)(param_1 + 0x4e) = (char)local_8;
      if (*(ushort *)(param_2 + 0x14) != 0) {
        if (*(ushort *)(param_2 + 0x14) < ((ushort)local_8 & 0xff)) {
          pcVar5 = s_Incorrect_bKGD_chunk_index_value_10055f30;
          goto LAB_100443d0;
        }
        pbVar4 = (byte *)((local_8 & 0xff) * 3 + param_1[0x45]);
        *(ushort *)((int)param_1 + 0x13a) = (ushort)*pbVar4;
        *(ushort *)(param_1 + 0x4f) = (ushort)pbVar4[1];
        *(ushort *)((int)param_1 + 0x13e) = (ushort)pbVar4[2];
      }
    }
    else if ((*(byte *)((int)param_1 + 0x126) & 2) == 0) {
      iVar3 = FUN_10042f80((byte *)&local_8);
      uVar1 = (undefined2)iVar3;
      *(undefined2 *)(param_1 + 0x50) = uVar1;
      *(undefined2 *)((int)param_1 + 0x13e) = uVar1;
      *(undefined2 *)(param_1 + 0x4f) = uVar1;
      *(undefined2 *)((int)param_1 + 0x13a) = uVar1;
    }
    else {
      iVar3 = FUN_10042f80((byte *)&local_8);
      *(short *)((int)param_1 + 0x13a) = (short)iVar3;
      iVar3 = FUN_10042f80((byte *)((int)&local_8 + 2));
      *(short *)(param_1 + 0x4f) = (short)iVar3;
      iVar3 = FUN_10042f80(local_4);
      *(short *)((int)param_1 + 0x13e) = (short)iVar3;
    }
    FUN_10045e40((int)param_1,param_2,param_1 + 0x4e);
  }
  return;
}

