/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10003cf0 @ 0x10003CF0 */
/* Body size: 194 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10003cf0(float *param_1)

{
  double dVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  float10 fVar5;
  undefined4 local_50 [16];
  undefined8 local_10;
  float *local_8;
  
  puVar3 = local_50;
  for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_10 = (double)(param_1[2] * param_1[2] + param_1[1] * param_1[1] + *param_1 * *param_1);
  local_8 = param_1;
  fVar5 = (float10)FUN_1007e8e4((int)local_10);
  dVar1 = (double)fVar5;
  local_10 = dVar1;
  if ((dVar1 != _DAT_1011d040) &&
     ((local_10._0_4_ = SUB84(dVar1,0), (int)local_10 != 0 ||
      (local_10._4_4_ = (int)((ulonglong)dVar1 >> 0x20), bVar4 = local_10._4_4_ != 0x3ff00000, bVar4
      )))) {
    local_10 = _DAT_1011d030 / dVar1;
    *local_8 = *local_8 * (float)local_10;
    local_8[1] = local_8[1] * (float)local_10;
    local_8[2] = local_8[2] * (float)local_10;
  }
  local_8 = (float *)0x10003dae;
  __chkesp();
  return;
}

