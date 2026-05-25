/* Ghidra decompiled: sound.dll */
/* Function: FUN_10010920 @ 0x10010920 */


undefined4 __fastcall FUN_10010920(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint unaff_EDI;
  uint uVar5;
  uint uVar6;
  int *local_14;
  uint *local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_14 = (int *)0x0;
  local_8 = 0;
  if (*(int *)(param_1 + 0x60) == 0) {
    return 0x14;
  }
  DAT_10063dfc = (-(uint)(DAT_10063dfc != 0x370) & 0xfffffffc) + 0x374;
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    piVar2 = *(int **)(param_1 + 0x60);
    (**(code **)(*piVar2 + 0x10))(piVar2,&local_8,&local_14);
  }
  else {
    piVar2 = *(int **)(param_1 + 0x60);
    local_c = 0;
    local_10 = (uint *)0x0;
    local_4 = 0;
    uVar5 = 0;
    iVar1 = (**(code **)(*piVar2 + 0x10))(piVar2,&local_4,&local_c);
    if (iVar1 != 0) {
      thunk_FUN_1000f480(iVar1);
    }
    while (uVar5 < 0x10000) {
      (**(code **)(**(int **)(param_1 + 0x60) + 0x10))
                (*(int **)(param_1 + 0x60),&local_10,&stack0xffffffe4);
      uVar5 = uVar5 + 1;
    }
    if (0xffff < uVar5 + 1) {
      return 0x27;
    }
    (**(code **)(**(int **)(param_1 + 0x60) + 0x10))
              (*(int **)(param_1 + 0x60),&local_14,&stack0xffffffe0);
    *(int **)(param_1 + 0x28) = piVar2;
    *(int **)(param_1 + 0x24) = piVar2;
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfe;
  }
  if (piVar2 != *(int **)(param_1 + 0x28)) {
    *(int **)(param_1 + 0x28) = piVar2;
  }
  uVar5 = *(uint *)(param_1 + 0x78);
  uVar6 = *(int *)(param_1 + 0x24) + DAT_10063dfc & 0xffff;
  uVar4 = *(int *)(param_1 + 0x38) + uVar6;
  *(uint *)(param_1 + 0x24) = uVar6;
  if (uVar4 < uVar5) {
    uVar3 = *(uint *)(param_1 + 0x30);
    if (uVar4 < uVar3) {
      iVar1 = (uVar5 - uVar3) + uVar4;
      goto LAB_10010a71;
    }
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x30);
    uVar4 = uVar4 - uVar5;
    if (uVar4 < uVar3) {
      iVar1 = (uVar5 - uVar3) + uVar4;
      goto LAB_10010a71;
    }
  }
  iVar1 = uVar4 - uVar3;
LAB_10010a71:
  *(uint *)(param_1 + 0x30) = uVar4;
  *(uint *)(param_1 + 0x24) = uVar6;
  *local_14 = iVar1;
  *local_10 = uVar3;
  if (uVar3 < unaff_EDI) {
    uVar3 = (uVar3 - unaff_EDI) + *(int *)(param_1 + 0x78);
  }
  else {
    uVar3 = uVar3 - unaff_EDI;
  }
  if (*(ushort *)(param_1 + 0xb4) != 0) {
    *(uint *)(param_1 + 0x1c) = uVar3 / *(ushort *)(param_1 + 0xb4);
    return 0;
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return 0;
}

