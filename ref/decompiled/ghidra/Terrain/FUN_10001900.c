/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10001900 @ 0x10001900 */


void __cdecl FUN_10001900(LPCSTR param_1,char *param_2,char *param_3)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_68 [16];
  undefined4 local_28;
  undefined2 local_24;
  int local_22;
  undefined2 local_1e;
  undefined2 local_1c;
  int local_1a;
  uint local_14;
  void *local_10;
  int local_c;
  undefined **local_8;
  
  puVar5 = local_68;
  for (iVar3 = 0x19; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0xcccccccc;
    puVar5 = puVar5 + 1;
  }
  local_8 = (undefined **)FUN_10018080(param_1,"wb");
  if (local_8 == (undefined **)0x0) goto LAB_10001ac5;
  if (*(int *)(param_2 + 0x14) == 0) {
    iVar4 = *(int *)(param_2 + 4) * (uint)*(ushort *)(param_2 + 0xe) + 7;
    iVar3 = FUN_100158b0(*(int *)(param_2 + 8));
    local_14 = ((int)(iVar4 + (iVar4 >> 0x1f & 7U)) >> 3) * iVar3;
  }
  else {
    local_14 = *(uint *)(param_2 + 0x14);
  }
  local_10 = (void *)0x28;
  local_28 = *(undefined4 *)(param_2 + 0x10);
  switch(local_28) {
  case 0:
switchD_1000199e_caseD_0:
    if ((*(ushort *)(param_2 + 0xe) < 9) || (*(int *)(param_2 + 0x20) != 0))
    goto switchD_1000199e_caseD_1;
    break;
  case 1:
  case 2:
switchD_1000199e_caseD_1:
    if (*(int *)(param_2 + 0x20) == 0) {
      local_10 = (void *)((int)local_10 + (1 << ((byte)*(undefined2 *)(param_2 + 0xe) & 0x1f)) * 4);
    }
    else {
      local_10 = (void *)((int)local_10 + *(int *)(param_2 + 0x20) * 4);
    }
    break;
  case 3:
    local_10 = (void *)0x34;
    if (*(int *)(param_2 + 0x20) != 0) goto switchD_1000199e_caseD_0;
  }
  local_22 = (int)local_10 + local_14 + 0xe;
  local_24 = 0x4d42;
  local_1e = 0;
  local_1c = 0;
  local_1a = (int)local_10 + 0xe;
  local_c = local_22;
  uVar1 = FUN_100180e0(&local_24,(char *)&local_24,1,0xe,local_8);
  if (uVar1 < 0xe) {
    FUN_10017c20(local_8);
  }
  else {
    pvVar2 = (void *)FUN_100180e0(local_10,param_2,1,(uint)local_10,local_8);
    if (pvVar2 < local_10) {
      FUN_10017c20(local_8);
    }
    else {
      uVar1 = FUN_100180e0(local_8,param_3,1,local_14,local_8);
      if (uVar1 < local_14) {
        FUN_10017c20(local_8);
      }
      else {
        FUN_10017c20(local_8);
      }
    }
  }
LAB_10001ac5:
  local_8 = (undefined **)0x10001ad2;
  __chkesp();
  return;
}

