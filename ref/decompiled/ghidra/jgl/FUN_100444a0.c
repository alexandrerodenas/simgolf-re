/* Ghidra decompiled: jgl.dll */
/* Function: FUN_100444a0 @ 0x100444A0 */


void __cdecl FUN_100444a0(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = param_1[0x1a];
  if ((uVar1 & 1) == 0) {
    FUN_10042d90(param_1,s_Missing_IHDR_before_hIST_10056040);
  }
  else {
    if ((uVar1 & 4) != 0) {
      FUN_10042dc0((int)param_1,s_Invalid_hIST_after_IDAT_1005600c);
      FUN_10042fd0(param_1,param_3);
      return;
    }
    if ((uVar1 & 2) == 0) {
      FUN_10042dc0((int)param_1,s_Missing_PLTE_before_hIST_10055ff0);
      FUN_10042fd0(param_1,param_3);
      return;
    }
    if ((param_2 != 0) && ((*(byte *)(param_2 + 8) & 0x40) != 0)) {
      FUN_10042dc0((int)param_1,s_Duplicate_hIST_chunk_10055fd8);
      FUN_10042fd0(param_1,param_3);
      return;
    }
  }
  uVar1 = param_3;
  if (param_3 != (uint)*(ushort *)(param_1 + 0x46) * 2) {
    FUN_10042dc0((int)param_1,s_Incorrect_hIST_chunk_length_10056024);
    FUN_10042fd0(param_1,uVar1);
    return;
  }
  iVar5 = (int)param_3 / 2;
  pvVar2 = FUN_10042cc0(param_1,iVar5 * 2);
  iVar4 = 0;
  param_1[0x7d] = (int)pvVar2;
  param_1[0x1b] = param_1[0x1b] | 0x4000;
  if (0 < iVar5) {
    do {
      FUN_10042fa0(param_1,(byte *)&param_3,2);
      iVar3 = FUN_10042f80((byte *)&param_3);
      *(short *)(param_1[0x7d] + iVar4 * 2) = (short)iVar3;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar5);
  }
  iVar4 = FUN_10042fd0(param_1,0);
  if (iVar4 == 0) {
    FUN_10045f20((int)param_1,param_2,param_1[0x7d]);
  }
  return;
}

