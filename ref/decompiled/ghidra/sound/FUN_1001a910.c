/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001a910 @ 0x1001A910 */


undefined8 __cdecl
FUN_1001a910(double *param_1,undefined4 *param_2,int param_3,short *param_4,int param_5)

{
  uint *puVar1;
  short sVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  short *psVar7;
  short *psVar8;
  bool bVar9;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  double local_28;
  short *local_20;
  short *local_c;
  short *local_8;
  
  local_28 = 0.0;
  bVar5 = false;
  if (param_5 == 1) {
    local_30 = *(undefined4 *)(param_4 + 0xf8);
    uStack_2c = *(undefined4 *)(param_4 + 0xfa);
    local_38 = *(undefined4 *)(param_4 + 0x100);
    uStack_34 = *(undefined4 *)(param_4 + 0x102);
    iVar6 = *(int *)(param_4 + 4);
    local_20 = param_4;
    psVar7 = *(short **)(iVar6 + 0x20);
    local_8 = psVar7;
    if (psVar7 < *(short **)(iVar6 + 0x1c)) {
      local_8 = *(short **)(iVar6 + 0x24);
    }
    local_c = *(short **)(iVar6 + 0x18);
    puVar1 = (uint *)(param_4 + 0x2c);
    bVar9 = (*puVar1 & 8) != 0;
    if (bVar9) {
      local_28 = *(double *)(param_4 + 0xe4) / (double)param_3;
    }
    param_4 = (short *)((int)(char)~(byte)*(undefined4 *)(param_4 + 0x2e) & 1);
    if ((*puVar1 & 0x20) != 0) {
      if (psVar7 < (short *)*param_2) {
        bVar5 = true;
      }
      else {
        param_4 = (short *)0x0;
      }
    }
  }
  else {
    uStack_2c = *(undefined4 *)(param_4 + 0x42);
    local_30 = *(undefined4 *)(param_4 + 0x40);
    uStack_34 = *(undefined4 *)(param_4 + 0x3a);
    local_38 = *(undefined4 *)(param_4 + 0x38);
    bVar9 = (*(byte *)(param_4 + 0x4e) & 8) != 0;
    if (bVar9) {
      local_28 = *(double *)(param_4 + 0x78) / (double)param_3;
    }
    if (((*(byte *)(param_4 + 0x4c) & 1) == 0) || ((*(byte *)(param_4 + 0x4e) & 2) != 0)) {
      local_c = *(short **)(param_4 + 0xc);
      psVar7 = *(short **)(param_4 + 0x10);
      param_4 = (short *)0x0;
      local_8 = psVar7;
    }
    else {
      psVar7 = *(short **)(param_4 + 0x6c);
      psVar8 = param_4 + 0x6a;
      param_4 = (short *)0x1;
      local_c = psVar7;
      local_8 = *(short **)psVar8;
    }
  }
  dVar3 = (double)CONCAT44(uStack_34,local_38);
  dVar4 = (double)CONCAT44(uStack_2c,local_30);
  iVar6 = param_3;
  psVar8 = (short *)*param_2;
  while( true ) {
    while ((int)local_8 <= (int)psVar8) {
      if (param_4 == (short *)0x0) goto LAB_1001aaa2;
      *param_2 = local_c;
      psVar8 = local_c;
      if (bVar5) {
        param_4 = (short *)0x0;
      }
    }
    sVar2 = psVar8[1];
    *param_1 = (double)*psVar8 * dVar4 + *param_1;
    param_1[1] = (double)sVar2 * dVar3 + param_1[1];
    iVar6 = iVar6 + -1;
    if (iVar6 == 0) break;
    param_1 = param_1 + 2;
    psVar8 = psVar8 + 2;
    if (bVar9) {
      dVar4 = dVar4 - local_28;
      dVar3 = dVar3 - local_28;
    }
  }
LAB_1001aaa2:
  *param_2 = psVar8;
  if (((param_5 == 1) && ((*(byte *)(local_20 + 0x2c) & 0x20) != 0)) &&
     (psVar7 = param_4, param_4 == (short *)0x0)) {
    *(uint *)(local_20 + 0x2e) = *(uint *)(local_20 + 0x2e) | 1;
  }
  return CONCAT44(psVar7,param_3 - iVar6);
}

