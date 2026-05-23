/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10044090 @ 0x10044090 */
/* Body size: 544 addresses */


void __cdecl FUN_10044090(int *param_1,int param_2,uint param_3)

{
  char cVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  byte local_8 [2];
  byte local_6 [2];
  byte local_4 [4];
  
  if ((param_1[0x1a] & 1U) == 0) {
    FUN_10042d90(param_1,s_Missing_IHDR_before_tRNS_10055f14);
LAB_100440b3:
    cVar1 = *(char *)((int)param_1 + 0x126);
    if (cVar1 == '\x03') {
      if ((*(byte *)(param_1 + 0x1a) & 2) == 0) {
        FUN_10042dc0((int)param_1,s_Missing_PLTE_before_tRNS_10055ef8);
      }
      else if (*(ushort *)(param_1 + 0x46) < param_3) {
        FUN_10042dc0((int)param_1,s_Incorrect_tRNS_chunk_length_10055eac);
        FUN_10042fd0(param_1,param_3);
        return;
      }
      if (param_3 == 0) {
        FUN_10042dc0((int)param_1,s_Zero_length_tRNS_chunk_10055e94);
        FUN_10042fd0(param_1,0);
        return;
      }
      pbVar2 = FUN_10042cc0(param_1,param_3);
      param_1[0x62] = (int)pbVar2;
      param_1[0x1b] = param_1[0x1b] | 0x2000;
      FUN_10042fa0(param_1,pbVar2,param_3);
      *(short *)((int)param_1 + 0x11a) = (short)param_3;
    }
    else if (cVar1 == '\x02') {
      if (param_3 != 6) {
        FUN_10042dc0((int)param_1,s_Incorrect_tRNS_chunk_length_10055eac);
        FUN_10042fd0(param_1,param_3);
        return;
      }
      FUN_10042fa0(param_1,local_8,6);
      *(undefined2 *)((int)param_1 + 0x11a) = 1;
      iVar3 = FUN_10042f80(local_8);
      *(short *)((int)param_1 + 0x18e) = (short)iVar3;
      iVar3 = FUN_10042f80(local_6);
      *(short *)(param_1 + 100) = (short)iVar3;
      iVar3 = FUN_10042f80(local_4);
      *(short *)((int)param_1 + 0x192) = (short)iVar3;
    }
    else {
      if (cVar1 != '\0') {
        pcVar4 = s_tRNS_chunk_not_allowed_with_alph_10055e68;
        goto LAB_10044295;
      }
      if (param_3 != 2) {
        FUN_10042dc0((int)param_1,s_Incorrect_tRNS_chunk_length_10055eac);
        FUN_10042fd0(param_1,param_3);
        return;
      }
      FUN_10042fa0(param_1,local_8,2);
      *(undefined2 *)((int)param_1 + 0x11a) = 1;
      iVar3 = FUN_10042f80(local_8);
      *(short *)(param_1 + 0x65) = (short)iVar3;
    }
    iVar3 = FUN_10042fd0(param_1,0);
    if (iVar3 == 0) {
      FUN_10046420((int)param_1,param_2,param_1[0x62],(uint)*(ushort *)((int)param_1 + 0x11a),
                   param_1 + 99);
      return;
    }
  }
  else {
    if ((param_1[0x1a] & 4U) == 0) {
      if ((param_2 != 0) && ((*(byte *)(param_2 + 8) & 0x10) != 0)) {
        FUN_10042dc0((int)param_1,s_Duplicate_tRNS_chunk_10055ec8);
        FUN_10042fd0(param_1,param_3);
        return;
      }
      goto LAB_100440b3;
    }
    pcVar4 = s_Invalid_tRNS_after_IDAT_10055ee0;
LAB_10044295:
    FUN_10042dc0((int)param_1,pcVar4);
    FUN_10042fd0(param_1,param_3);
  }
  return;
}

