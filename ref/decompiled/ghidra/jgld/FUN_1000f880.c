/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1000f880 @ 0x1000F880 */


void FUN_1000f880(int param_1,int param_2,int param_3,int param_4,char param_5,char param_6)

{
  RECT *pRVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  RECT *pRVar7;
  undefined4 local_60 [16];
  int local_20;
  char *local_1c;
  RECT local_18;
  int *local_8;
  
  puVar5 = local_60;
  for (iVar4 = 0x17; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0xcccccccc;
    puVar5 = puVar5 + 1;
  }
  thunk_FUN_10008360(&local_18.left,param_1,param_2,param_3,param_4);
  pRVar7 = &local_18;
  (**(code **)(*local_8 + 0xcc))();
  pRVar1 = (RECT *)__chkesp();
  iVar4 = thunk_FUN_10008590(&local_18,pRVar1,pRVar7);
  if (iVar4 != 0) {
    (**(code **)(*local_8 + 0x14))(local_18.left,local_18.top);
    local_1c = (char *)__chkesp();
    if (local_1c != (char *)0x0) {
      iVar2 = thunk_FUN_10009120(&local_18.left);
      iVar3 = thunk_FUN_10009160((int)&local_18);
      local_20 = local_8[0x10] - iVar2;
      iVar4 = iVar2;
      pcVar6 = local_1c;
      do {
        do {
          if (*pcVar6 == param_5) {
            *pcVar6 = param_6;
          }
          pcVar6 = pcVar6 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        pcVar6 = pcVar6 + local_20;
        iVar3 = iVar3 + -1;
        iVar4 = iVar2;
      } while (iVar3 != 0);
      (**(code **)(*local_8 + 0x24))(1);
      __chkesp();
    }
  }
  local_8 = (int *)0x1000f98e;
  __chkesp();
  return;
}

