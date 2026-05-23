/* Ghidra decompiled: golf.exe */
/* Function: FUN_004b5810 @ 0x004B5810 */
/* Body size: 433 addresses */


void FUN_004b5810(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[0x51];
  iVar2 = *(int *)(iVar1 + 0x14);
  if (iVar2 == 0) {
    FUN_004b59d0(param_1);
    FUN_004b5ad0(param_1);
    if (param_1[0x2a] == 0) {
      (**(code **)param_1[0x56])(param_1);
      (**(code **)param_1[0x57])(param_1);
      (**(code **)param_1[0x53])(param_1,0);
    }
    (**(code **)param_1[0x58])(param_1);
    (**(code **)param_1[0x59])(param_1,param_1[0x2c]);
    (**(code **)param_1[0x54])(param_1,(*(int *)(iVar1 + 0x1c) < 2) - 1U & 3);
    (**(code **)param_1[0x52])(param_1,0);
    if (param_1[0x2c] == 0) {
      *(undefined4 *)(iVar1 + 0xc) = 1;
    }
    else {
      *(undefined4 *)(iVar1 + 0xc) = 0;
    }
  }
  else {
    if (iVar2 == 1) {
      FUN_004b59d0(param_1);
      FUN_004b5ad0(param_1);
      if (((param_1[0x4d] != 0) || (param_1[0x4f] == 0)) || (param_1[0x2b] != 0)) {
        (**(code **)param_1[0x59])(param_1,1);
        (**(code **)param_1[0x54])(param_1,2);
        *(undefined4 *)(iVar1 + 0xc) = 0;
        goto LAB_004b599a;
      }
      *(undefined4 *)(iVar1 + 0x14) = 2;
      *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + 1;
    }
    else if (iVar2 != 2) {
      *(undefined4 *)(*param_1 + 0x14) = 0x2f;
      (**(code **)*param_1)(param_1);
      goto LAB_004b599a;
    }
    if (param_1[0x2c] == 0) {
      FUN_004b59d0(param_1);
      FUN_004b5ad0(param_1);
    }
    (**(code **)param_1[0x59])(param_1,0);
    (**(code **)param_1[0x54])(param_1,2);
    if (*(int *)(iVar1 + 0x20) == 0) {
      (**(code **)(param_1[0x55] + 8))(param_1);
    }
    (**(code **)(param_1[0x55] + 0xc))(param_1);
    *(undefined4 *)(iVar1 + 0xc) = 0;
  }
LAB_004b599a:
  *(uint *)(iVar1 + 0x10) = (uint)(*(int *)(iVar1 + 0x18) == *(int *)(iVar1 + 0x1c) + -1);
  if (param_1[2] != 0) {
    *(int *)(param_1[2] + 0xc) = *(int *)(iVar1 + 0x18);
    *(undefined4 *)(param_1[2] + 0x10) = *(undefined4 *)(iVar1 + 0x1c);
  }
  return;
}

