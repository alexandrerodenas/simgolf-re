/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1000afe0 @ 0x1000AFE0 */


void FUN_1000afe0(int param_1,int param_2,int param_3,int param_4,short param_5,short param_6)

{
  RECT *pRVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  short *psVar7;
  RECT *pRVar8;
  undefined4 local_60 [16];
  int local_20;
  short *local_1c;
  RECT local_18;
  int *local_8;
  
  puVar6 = local_60;
  for (iVar4 = 0x17; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0xcccccccc;
    puVar6 = puVar6 + 1;
  }
  thunk_FUN_10008360(&local_18.left,param_1,param_2,param_3,param_4);
  pRVar8 = &local_18;
  (**(code **)(*local_8 + 0xcc))();
  pRVar1 = (RECT *)__chkesp();
  iVar4 = thunk_FUN_10008590(&local_18,pRVar1,pRVar8);
  if (iVar4 != 0) {
    (**(code **)(*local_8 + 0x1c))(local_18.left,local_18.top);
    local_1c = (short *)__chkesp();
    if (local_1c != (short *)0x0) {
      iVar2 = thunk_FUN_10009120(&local_18.left);
      iVar3 = thunk_FUN_10009160((int)&local_18);
      iVar4 = local_8[0x10];
      local_20 = (iVar4 - iVar2) * 2;
      iVar5 = iVar2;
      psVar7 = local_1c;
      do {
        do {
          if (*psVar7 == param_5) {
            *psVar7 = param_6;
          }
          psVar7 = psVar7 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        psVar7 = psVar7 + (iVar4 - iVar2);
        iVar3 = iVar3 + -1;
        iVar5 = iVar2;
      } while (iVar3 != 0);
      (**(code **)(*local_8 + 0x24))(1);
      __chkesp();
    }
  }
  local_8 = (int *)0x1000b0f4;
  __chkesp();
  return;
}

