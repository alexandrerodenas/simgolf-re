/* Ghidra decompiled: golf.exe */
/* Function: FUN_00481ca0 @ 0x00481CA0 */


int __thiscall FUN_00481ca0(int param_1,byte param_2)

{
  int iVar1;
  DWORD DVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  if (*(int *)(param_1 + 0x54) == 0) {
    return 7;
  }
  DVar2 = GetFileSize(*(HANDLE *)(*(int *)(param_1 + 0x54) + 8),(LPDWORD)0x0);
  *(DWORD *)(param_1 + 0x7c) = DVar2;
  iVar1 = *(int *)(*(int *)(param_1 + 0x54) + 4);
  *(int *)(param_1 + 0x58) = iVar1;
  if (*(short *)(iVar1 + 4) != -0x50ee) {
    return 0x16;
  }
  if (*(short *)(iVar1 + 0xc) != 8) {
    return 0x17;
  }
  if (*(int *)(iVar1 + 0x1a) == -0xe0e0d0e) {
    if ((param_2 & 4) == 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x54) + 4);
      *(int *)(param_1 + 0x44) = iVar1;
      *(int *)(param_1 + 0x58) = iVar1;
      return (-(uint)(iVar1 != 0) & 0xfffffff9) + 7;
    }
    puVar3 = operator_new(DVar2);
    *(undefined4 **)(param_1 + 0x44) = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      FUN_00481ba0();
      return 4;
    }
    uVar5 = *(uint *)(param_1 + 0x7c);
    puVar6 = *(undefined4 **)(*(int *)(param_1 + 0x54) + 4);
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar3 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    if (*(undefined4 **)(param_1 + 0x54) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x54))(1);
    }
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x44);
    return (-(uint)(*(int *)(param_1 + 0x44) != 0) & 0xfffffff9) + 7;
  }
  puVar3 = operator_new(DVar2);
  *(undefined4 **)(param_1 + 0x44) = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    FUN_00481ba0();
    return 4;
  }
  uVar5 = *(uint *)(param_1 + 0x7c);
  puVar6 = *(undefined4 **)(*(int *)(param_1 + 0x54) + 4);
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar3 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar3 = puVar3 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar3 = *(undefined1 *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  if (*(undefined4 **)(param_1 + 0x54) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x54))(1);
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x44);
  *(undefined4 *)(*(int *)(param_1 + 0x44) + 0x58) = 0x1c;
  *(undefined2 *)(*(int *)(param_1 + 0x58) + 0x62) = *(undefined2 *)(*(int *)(param_1 + 0x58) + 6);
  *(undefined2 *)(*(int *)(param_1 + 0x58) + 0x60) = 1;
  *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x5c) = 0;
  *(undefined2 *)(*(int *)(param_1 + 0x58) + 100) = 0;
  *(undefined2 *)(*(int *)(param_1 + 0x58) + 0x66) = 0;
  *(undefined2 *)(*(int *)(param_1 + 0x58) + 0x68) = *(undefined2 *)(*(int *)(param_1 + 0x58) + 8);
  *(undefined2 *)(*(int *)(param_1 + 0x58) + 0x6a) = *(undefined2 *)(*(int *)(param_1 + 0x58) + 10);
  *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x1a) = 0xf1f1f2f2;
  return (-(uint)(*(int *)(param_1 + 0x44) != 0) & 0xfffffff9) + 7;
}

