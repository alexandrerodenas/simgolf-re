/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1000f9e0 @ 0x1000F9E0 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_1000f9e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  RECT *pRVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  undefined4 local_68 [16];
  int local_28;
  int local_24;
  int local_20;
  byte *local_1c;
  RECT local_18;
  int *local_8;
  
  puVar4 = local_68;
  for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  if (param_5 != 0) {
    thunk_FUN_10010390(&local_18.left,param_1,param_2,param_3,param_4);
    (**(code **)(*local_8 + 0xcc))();
    pRVar1 = (RECT *)__chkesp();
    iVar2 = thunk_FUN_10008590(&local_18,&local_18,pRVar1);
    if (iVar2 != 0) {
      local_20 = thunk_FUN_10009120(&local_18.left);
      local_24 = thunk_FUN_10009160((int)&local_18);
      (**(code **)(*local_8 + 0xe0))();
      local_28 = __chkesp();
      local_28 = local_28 - local_20;
      (**(code **)(*local_8 + 0xc))(local_18.left,local_18.top);
      local_1c = (byte *)__chkesp();
      iVar2 = local_20;
      pbVar5 = local_1c;
      iVar3 = local_24;
      if (local_1c != (byte *)0x0) {
        do {
          do {
            *pbVar5 = *(byte *)(param_5 + (uint)*pbVar5);
            pbVar5 = pbVar5 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
          iVar3 = iVar3 + -1;
          iVar2 = local_20;
          pbVar5 = pbVar5 + local_28;
        } while (iVar3 != 0);
        (**(code **)(*local_8 + 0x24))(1);
        __chkesp();
      }
    }
  }
  local_8 = (int *)0x1000fb13;
  __chkesp();
  return;
}

