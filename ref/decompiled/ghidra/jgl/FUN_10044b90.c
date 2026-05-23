/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10044b90 @ 0x10044B90 */
/* Body size: 898 addresses */


void __cdecl FUN_10044b90(int *param_1,int param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  int *piVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  byte *pbVar12;
  char *pcVar13;
  uint local_48;
  int local_40;
  undefined1 local_34 [52];
  
  local_40 = -1;
  if ((*(byte *)(param_1 + 0x1a) & 1) == 0) {
    FUN_10042d90(param_1,s_Missing_IHDR_before_zTXt_10056288);
  }
  if ((param_1[0x1a] & 4U) != 0) {
    param_1[0x1a] = param_1[0x1a] | 8;
  }
  pbVar4 = FUN_10042cc0(param_1,param_3 + 1);
  FUN_10042fa0(param_1,pbVar4,param_3);
  iVar5 = FUN_10042fd0(param_1,0);
  if (iVar5 != 0) {
    FUN_10042d00((int)param_1,pbVar4);
    return;
  }
  pbVar4[param_3] = 0;
  bVar1 = *pbVar4;
  pbVar9 = pbVar4;
  while (bVar1 != 0) {
    pbVar10 = pbVar9 + 1;
    pbVar9 = pbVar9 + 1;
    bVar1 = *pbVar10;
  }
  if (pbVar9 == pbVar4 + param_3) {
    FUN_10042dc0((int)param_1,s_Zero_length_zTXt_chunk_10056270);
    pbVar10 = pbVar9;
  }
  else {
    local_40 = (int)(char)pbVar9[1];
    pbVar10 = pbVar9 + 1;
    if (local_40 == 0) {
      pbVar9 = pbVar9 + 2;
      param_1[0x1d] = (int)pbVar9;
      pbVar10 = pbVar4 + (param_3 - (int)pbVar9);
      param_1[0x21] = param_1[0x2c];
      uVar11 = (int)pbVar9 - (int)pbVar4;
      param_1[0x1e] = (int)pbVar10;
      param_1[0x20] = param_1[0x2b];
      local_48 = 0;
      pbVar9 = (byte *)0x0;
      while( true ) {
        if (pbVar10 == (byte *)0x0) goto LAB_10044e70;
        iVar5 = FUN_1004fa80(param_1 + 0x1d,1);
        if ((iVar5 != 0) && (iVar5 != 1)) break;
        iVar2 = param_1[0x21];
        if ((iVar2 == 0) || (pbVar6 = pbVar9, iVar5 == 1)) {
          if (pbVar9 == (byte *)0x0) {
            pbVar6 = FUN_10042cc0(param_1,(param_1[0x2c] - iVar2) + 1 + uVar11);
            iVar2 = param_1[0x2c];
            iVar3 = param_1[0x21];
            pbVar9 = (byte *)param_1[0x2b];
            pbVar10 = pbVar6 + uVar11;
            for (uVar8 = (uint)(iVar2 - iVar3) >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pbVar10 = *(undefined4 *)pbVar9;
              pbVar9 = pbVar9 + 4;
              pbVar10 = pbVar10 + 4;
            }
            for (uVar8 = iVar2 - iVar3 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pbVar10 = *pbVar9;
              pbVar9 = pbVar9 + 1;
              pbVar10 = pbVar10 + 1;
            }
            pbVar9 = pbVar4;
            pbVar10 = pbVar6;
            for (uVar8 = uVar11 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pbVar10 = *(undefined4 *)pbVar9;
              pbVar9 = pbVar9 + 4;
              pbVar10 = pbVar10 + 4;
            }
            for (uVar8 = uVar11 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pbVar10 = *pbVar9;
              pbVar9 = pbVar9 + 1;
              pbVar10 = pbVar10 + 1;
            }
            local_48 = (param_1[0x2c] - param_1[0x21]) + uVar11;
          }
          else {
            pbVar6 = FUN_10042cc0(param_1,(param_1[0x2c] - iVar2) + 1 + local_48);
            pbVar10 = pbVar9;
            pbVar12 = pbVar6;
            for (uVar8 = local_48 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pbVar12 = *(undefined4 *)pbVar10;
              pbVar10 = pbVar10 + 4;
              pbVar12 = pbVar12 + 4;
            }
            for (uVar8 = local_48 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pbVar12 = *pbVar10;
              pbVar10 = pbVar10 + 1;
              pbVar12 = pbVar12 + 1;
            }
            FUN_10042d00((int)param_1,pbVar9);
            iVar2 = param_1[0x2c];
            iVar3 = param_1[0x21];
            pbVar9 = (byte *)param_1[0x2b];
            pbVar10 = pbVar6 + local_48;
            for (uVar8 = (uint)(iVar2 - iVar3) >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pbVar10 = *(undefined4 *)pbVar9;
              pbVar9 = pbVar9 + 4;
              pbVar10 = pbVar10 + 4;
            }
            for (uVar8 = iVar2 - iVar3 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pbVar10 = *pbVar9;
              pbVar9 = pbVar9 + 1;
              pbVar10 = pbVar10 + 1;
            }
            local_48 = local_48 + (param_1[0x2c] - param_1[0x21]);
          }
          pbVar6[local_48] = 0;
          pbVar9 = pbVar6;
          if (iVar5 == 1) goto LAB_10044e70;
          param_1[0x20] = param_1[0x2b];
          param_1[0x21] = param_1[0x2c];
        }
        pbVar10 = (byte *)param_1[0x1e];
        pbVar9 = pbVar6;
      }
      pcVar13 = (char *)param_1[0x23];
      if (pcVar13 == (char *)0x0) {
        pcVar13 = s_Error_decoding_zTXt_chunk_10055944;
      }
      FUN_10042dc0((int)param_1,pcVar13);
      FUN_1004f8b0((int)(param_1 + 0x1d));
      param_1[0x1e] = 0;
      if (pbVar9 == (byte *)0x0) {
        local_48 = uVar11 + 0x1b;
        pbVar9 = FUN_10042cc0(param_1,local_48);
        pbVar10 = pbVar4;
        pbVar6 = pbVar9;
        for (uVar8 = uVar11 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pbVar6 = *(undefined4 *)pbVar10;
          pbVar10 = pbVar10 + 4;
          pbVar6 = pbVar6 + 4;
        }
        for (uVar8 = uVar11 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pbVar6 = *pbVar10;
          pbVar10 = pbVar10 + 1;
          pbVar6 = pbVar6 + 1;
        }
      }
      pbVar9[local_48 - 1] = 0;
      pbVar10 = pbVar4 + param_3 + (-1 - (int)pbVar9);
      if ((byte *)0x19 < pbVar10) {
        pbVar10 = (byte *)0x1a;
      }
      pbVar6 = (byte *)s_Error_decoding_zTXt_chunk_10055944;
      pbVar12 = pbVar9 + uVar11;
      for (uVar8 = (uint)(pbVar10 + 1) >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pbVar12 = *(undefined4 *)pbVar6;
        pbVar6 = pbVar6 + 4;
        pbVar12 = pbVar12 + 4;
      }
      for (uVar8 = (uint)(pbVar10 + 1) & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pbVar12 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        pbVar12 = pbVar12 + 1;
      }
LAB_10044e70:
      FUN_1004f8b0((int)(param_1 + 0x1d));
      param_1[0x1e] = 0;
      FUN_10042d00((int)param_1,pbVar4);
      pbVar10 = pbVar9 + uVar11;
      pbVar4 = pbVar9;
      goto LAB_10044edc;
    }
    FUN_1004706d(local_34,(byte *)s_Unknown_zTXt_compression_type__d_1005624c);
    FUN_10042dc0((int)param_1,local_34);
    pbVar9 = pbVar4 + param_3 + (-1 - (int)pbVar10);
    if ((byte *)0x19 < pbVar9) {
      pbVar9 = (byte *)0x1a;
    }
    pbVar6 = (byte *)s_Error_decoding_zTXt_chunk_10055944;
    pbVar12 = pbVar10;
    for (uVar11 = (uint)(pbVar9 + 1) >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pbVar12 = *(undefined4 *)pbVar6;
      pbVar6 = pbVar6 + 4;
      pbVar12 = pbVar12 + 4;
    }
    for (uVar11 = (uint)(pbVar9 + 1) & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pbVar12 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      pbVar12 = pbVar12 + 1;
    }
  }
LAB_10044edc:
  piVar7 = FUN_10042cc0(param_1,0x10);
  *piVar7 = local_40;
  piVar7[1] = (int)pbVar4;
  piVar7[2] = (int)pbVar10;
  FUN_100462d0(param_1,param_2,(int)piVar7,1);
  FUN_10042d00((int)param_1,piVar7);
  return;
}

