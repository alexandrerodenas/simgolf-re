/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10044ae0 @ 0x10044AE0 */


void __cdecl FUN_10044ae0(int *param_1,int param_2,uint param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  
  if ((*(byte *)(param_1 + 0x1a) & 1) == 0) {
    FUN_10042d90(param_1,s_Missing_IHDR_before_tEXt_10056230);
  }
  if ((param_1[0x1a] & 4U) != 0) {
    param_1[0x1a] = param_1[0x1a] | 8;
  }
  pbVar3 = FUN_10042cc0(param_1,param_3 + 1);
  FUN_10042fa0(param_1,pbVar3,param_3);
  iVar4 = FUN_10042fd0(param_1,0);
  if (iVar4 == 0) {
    pbVar3[param_3] = 0;
    bVar2 = *pbVar3;
    pbVar6 = pbVar3;
    while (bVar2 != 0) {
      pbVar1 = pbVar6 + 1;
      pbVar6 = pbVar6 + 1;
      bVar2 = *pbVar1;
    }
    if (pbVar6 != pbVar3 + param_3) {
      pbVar6 = pbVar6 + 1;
    }
    puVar5 = FUN_10042cc0(param_1,0x10);
    *puVar5 = 0xffffffff;
    puVar5[1] = pbVar3;
    puVar5[2] = pbVar6;
    FUN_100462d0(param_1,param_2,(int)puVar5,1);
    FUN_10042d00((int)param_1,puVar5);
    return;
  }
  FUN_10042d00((int)param_1,pbVar3);
  return;
}

