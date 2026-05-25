/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1000c7b0 @ 0x1000C7B0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1000c7b0(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_9c [16];
  float local_5c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  puVar5 = local_9c;
  for (iVar4 = 0x26; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0xcccccccc;
    puVar5 = puVar5 + 1;
  }
  switch(param_1) {
  case 1:
    local_34 = 3;
    local_38 = 2;
    local_c = 4;
    local_10 = 1;
    local_14 = 3;
    local_18 = 1;
    local_1c = 1;
    local_20 = 2;
    local_24 = 7;
    local_28 = 1;
    local_2c = 0;
    local_30 = 0;
    break;
  case 3:
    local_34 = 7;
    local_38 = 1;
    local_c = 0;
    local_10 = 0;
    local_14 = 5;
    local_18 = 1;
    local_1c = 3;
    local_20 = 1;
    local_24 = 4;
    local_28 = 1;
    local_2c = 3;
    local_30 = 2;
    break;
  case 5:
    local_34 = 4;
    local_38 = 1;
    local_c = 3;
    local_10 = 2;
    local_14 = 0;
    local_18 = 1;
    local_1c = 5;
    local_20 = 1;
    local_24 = 0;
    local_28 = 0;
    local_2c = 7;
    local_30 = 1;
    break;
  case 7:
    local_34 = 0;
    local_38 = 0;
    local_c = 7;
    local_10 = 1;
    local_14 = 1;
    local_18 = 2;
    local_1c = 0;
    local_20 = 1;
    local_24 = 3;
    local_28 = 2;
    local_2c = 4;
    local_30 = 1;
  }
  fVar3 = (float)(*(int *)((int)this + param_1 * 4) + 1) * _DAT_10063e54;
  fVar1 = *(float *)(&DAT_100b28cc +
                    *(int *)((int)this + local_28 * 4 + local_24 * 0x38 + 0x48) * 0xc);
  fVar2 = *(float *)(&DAT_100b28cc +
                    *(int *)((int)this + local_30 * 4 + local_2c * 0x38 + 0x48) * 0xc);
  local_5c = (fVar3 + *(float *)(&DAT_100b28cc +
                                *(int *)((int)this + local_10 * 4 + local_c * 0x38 + 0x48) * 0xc)) *
             _DAT_1005f3e0;
  if (local_5c <= *(float *)(&DAT_100b28cc + *(int *)((int)this + 0x50) * 0xc)) {
    local_5c = *(float *)(&DAT_100b28cc + *(int *)((int)this + 0x50) * 0xc);
  }
  *(float *)(&DAT_100b28cc + *(int *)((int)this + 0x50) * 0xc) = local_5c;
  *(float *)(&DAT_100b28cc + *(int *)((int)this + local_18 * 4 + local_14 * 0x38 + 0x48) * 0xc) =
       (fVar3 + fVar1) * _DAT_1005f3e0;
  *(float *)(&DAT_100b28cc + *(int *)((int)this + local_20 * 4 + local_1c * 0x38 + 0x48) * 0xc) =
       (fVar3 + fVar2) * _DAT_1005f3e0;
  *(int *)((int)this + param_1 * 4) = *(int *)((int)this + param_1 * 4) + 1;
  *(float *)(&DAT_100b28cc + *(int *)((int)this + local_38 * 4 + local_34 * 0x38 + 0x48) * 0xc) =
       fVar3;
  *(undefined1 *)((int)this + 0x244) = 1;
  if (*(int *)((int)this + 0x34) != 0) {
    *(undefined1 *)(*(int *)((int)this + 0x34) + 0x244) = 1;
  }
  if ((*(int *)((int)this + 0x34) != 0) && (*(int *)((int)this + 0x3c) != 0)) {
    *(undefined1 *)(*(int *)(*(int *)((int)this + 0x34) + 0x3c) + 0x244) = 1;
  }
  if ((*(int *)((int)this + 0x34) != 0) && (*(int *)((int)this + 0x40) != 0)) {
    *(undefined1 *)(*(int *)(*(int *)((int)this + 0x34) + 0x40) + 0x244) = 1;
  }
  if (*(int *)((int)this + 0x3c) != 0) {
    *(undefined1 *)(*(int *)((int)this + 0x3c) + 0x244) = 1;
  }
  if (*(int *)((int)this + 0x40) != 0) {
    *(undefined1 *)(*(int *)((int)this + 0x40) + 0x244) = 1;
  }
  if (*(int *)((int)this + 0x38) != 0) {
    *(undefined1 *)(*(int *)((int)this + 0x38) + 0x244) = 1;
  }
  if ((*(int *)((int)this + 0x38) != 0) && (*(int *)((int)this + 0x3c) != 0)) {
    *(undefined1 *)(*(int *)(*(int *)((int)this + 0x38) + 0x3c) + 0x244) = 1;
  }
  if ((*(int *)((int)this + 0x38) != 0) && (*(int *)((int)this + 0x40) != 0)) {
    *(undefined1 *)(*(int *)(*(int *)((int)this + 0x38) + 0x40) + 0x244) = 1;
  }
  return;
}

