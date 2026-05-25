/* Ghidra decompiled: sound.dll */
/* Function: FUN_100106b0 @ 0x100106B0 */


undefined4 __fastcall FUN_100106b0(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint unaff_EBP;
  undefined4 uVar6;
  uint unaff_ESI;
  undefined4 local_c;
  int *local_8;
  uint *puStack_4;
  
  uVar6 = 0;
  piVar1 = *(int **)(param_1 + 0x60);
  local_8 = (int *)0x0;
  local_c = 0;
  if (piVar1 == (int *)0x0) {
    return 0x14;
  }
  (**(code **)(*piVar1 + 0x10))(piVar1,&local_c,&local_8);
  uVar3 = *(uint *)(param_1 + 0x10);
  if (unaff_ESI < uVar3) {
    iVar2 = *(int *)(param_1 + 0x78) - uVar3;
  }
  else {
    iVar2 = -uVar3;
  }
  if (*(ushort *)(param_1 + 0xb4) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (iVar2 + unaff_ESI) / (uint)*(ushort *)(param_1 + 0xb4);
  }
  *(uint *)(param_1 + 0x18) = uVar3;
  if (unaff_EBP == *(uint *)(param_1 + 0x24)) {
    return 0x15;
  }
  uVar3 = *(uint *)(param_1 + 0x78);
  uVar5 = *(int *)(param_1 + 0x38) + unaff_EBP;
  *(uint *)(param_1 + 0x10) = unaff_ESI;
  if (uVar5 < uVar3) {
    uVar4 = *(uint *)(param_1 + 0x30);
    if ((uVar4 <= unaff_EBP) || (uVar5 <= uVar4)) {
      uVar4 = *(int *)(param_1 + 0x40) + unaff_EBP;
      if (uVar3 <= uVar4) {
        uVar4 = uVar4 - uVar3;
      }
      if (uVar5 < uVar4) {
        iVar2 = (uVar3 - uVar4) + uVar5;
      }
      else {
LAB_1001079b:
        iVar2 = uVar5 - uVar4;
      }
LAB_1001079f:
      uVar6 = 0x2d;
      goto LAB_100107a4;
    }
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x30);
    uVar5 = uVar5 - uVar3;
    if (unaff_EBP < uVar4) {
      if (uVar5 < uVar4) {
        iVar2 = (uVar3 - uVar4) + uVar5;
        goto LAB_100107a4;
      }
    }
    else if (uVar5 <= uVar4) {
      uVar4 = *(int *)(param_1 + 0x40) + unaff_EBP;
      if (uVar3 <= uVar4) {
        uVar4 = uVar4 - uVar3;
      }
      if (uVar4 <= uVar5) goto LAB_1001079b;
      iVar2 = (uVar3 - uVar4) + uVar5;
      goto LAB_1001079f;
    }
  }
  iVar2 = uVar5 - uVar4;
LAB_100107a4:
  *(uint *)(param_1 + 0x30) = uVar5;
  *(uint *)(param_1 + 0x24) = unaff_EBP;
  *local_8 = iVar2;
  *puStack_4 = uVar4;
  if (uVar4 < unaff_ESI) {
    iVar2 = *(int *)(param_1 + 0x78) - unaff_ESI;
  }
  else {
    iVar2 = -unaff_ESI;
  }
  if (*(ushort *)(param_1 + 0xb4) != 0) {
    *(uint *)(param_1 + 0x1c) = (iVar2 + uVar4) / (uint)*(ushort *)(param_1 + 0xb4);
    return uVar6;
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return uVar6;
}

