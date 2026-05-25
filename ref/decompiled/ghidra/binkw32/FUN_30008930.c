/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30008930 @ 0x30008930 */


void FUN_30008930(uint *param_1,uint *param_2,uint *param_3,uint *param_4,int param_5,int param_6,
                 int param_7,uint param_8,uint param_9,uint *param_10,undefined4 param_11,
                 uint *param_12,uint param_13,uint param_14)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  
  if ((param_14 & 0x100000) != 0) {
    if ((param_13 & 0x100000) == 0) {
      param_10 = (uint *)((int)param_10 + *param_10);
    }
    else {
      FUN_30008ab0(param_3,param_4,param_6 + 7U & 0xfffffff8,param_7 + 7U & 0xfffffff8,param_8,
                   param_10 + 1,param_11,param_5,1,param_12,param_13);
      param_10 = (uint *)((int)param_10 + *param_10);
    }
  }
  if ((param_13 & 0x8000) == 0) {
    param_10 = param_10 + 1;
  }
  puVar1 = FUN_30008ab0(param_1,param_2,param_6 + 7U & 0xfffffff8,param_7 + 7U & 0xfffffff8,param_8,
                        param_10,param_11,param_5,1,param_12,param_13);
  if ((param_13 & 0x8000) == 0) {
    puVar1 = (uint *)((param_10[-1] - 4) + (int)param_10);
  }
  if ((param_13 & 0x20000) == 0) {
    puVar3 = (uint *)((int)param_2 + param_8 * param_9);
    puVar5 = (uint *)((int)param_1 + param_8 * param_9);
    uVar6 = (param_6 + 1U >> 1) + 7 & 0xfffffff8;
    uVar4 = param_8 >> 1;
    uVar7 = (param_7 + 1U >> 1) + 7 & 0xfffffff8;
    puVar1 = FUN_30008ab0(puVar5,puVar3,uVar6,uVar7,uVar4,puVar1,param_11,param_5,2,param_12,
                          param_13);
    iVar2 = uVar4 * (param_9 >> 1);
    FUN_30008ab0((uint *)(iVar2 + (int)puVar5),(uint *)(iVar2 + (int)puVar3),uVar6,uVar7,uVar4,
                 puVar1,param_11,param_5,2,param_12,param_13);
  }
  return;
}

