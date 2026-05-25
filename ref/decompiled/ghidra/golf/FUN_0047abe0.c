/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047abe0 @ 0x0047ABE0 */


void __thiscall FUN_0047abe0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  
  if ((*(uint *)(param_1 + 0x9c) & 0x200000) != 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0xa0) & 8) != 0) {
    return;
  }
  if (((*(uint *)(param_1 + 0x9c) & 0x1000) != 0) && (param_2 == 0)) {
    return;
  }
  if ((~*(uint *)(param_2 + 0x9c) & 0x1000) == 0) {
    return;
  }
  if (*(int *)(param_2 + 0x140) == 0) {
    if (*(int *)(param_2 + 0x148) == 0) {
      pvVar3 = _malloc(0x1c);
    }
    else {
      pvVar3 = (void *)FUN_00474860(0x1c);
    }
    *(void **)(param_2 + 0x138) = pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_0047ad6e;
    *(int *)((int)pvVar3 + 4) = param_1;
    *(int *)(*(int *)(param_2 + 0x138) + 0xc) = *(int *)(param_2 + 0x138);
    *(int *)(*(int *)(param_2 + 0x138) + 0x10) = *(int *)(param_2 + 0x138);
    if (*(int *)(param_2 + 0x148) == 0) {
      pvVar3 = _malloc(4);
      *(void **)(*(int *)(param_2 + 0x138) + 8) = pvVar3;
    }
    else {
      uVar4 = FUN_00474860(4);
      *(undefined4 *)(*(int *)(param_2 + 0x138) + 8) = uVar4;
    }
    if (*(int *)(*(int *)(param_2 + 0x138) + 8) == 0) goto LAB_0047ad6e;
    *(int *)(param_2 + 0x13c) = *(int *)(param_2 + 0x138);
  }
  else {
    if (*(int *)(param_2 + 0x148) == 0) {
      pvVar3 = _malloc(0x1c);
    }
    else {
      pvVar3 = (void *)FUN_00474860(0x1c);
    }
    *(void **)(*(int *)(*(int *)(param_2 + 0x138) + 0x10) + 0xc) = pvVar3;
    iVar1 = *(int *)(*(int *)(param_2 + 0x138) + 0x10);
    iVar2 = *(int *)(iVar1 + 0xc);
    if (iVar2 == 0) goto LAB_0047ad6e;
    *(int *)(iVar2 + 0x10) = iVar1;
    *(int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x138) + 0x10) + 0xc) + 0xc) =
         *(int *)(param_2 + 0x138);
    *(undefined4 *)(*(int *)(param_2 + 0x138) + 0x10) =
         *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x138) + 0x10) + 0xc);
    iVar1 = *(int *)(*(int *)(param_2 + 0x138) + 0x10);
    *(int *)(param_2 + 0x13c) = iVar1;
    *(int *)(iVar1 + 4) = param_1;
    if (*(int *)(param_2 + 0x148) == 0) {
      pvVar3 = _malloc(4);
      *(void **)(*(int *)(param_2 + 0x13c) + 8) = pvVar3;
    }
    else {
      uVar4 = FUN_00474860(4);
      *(undefined4 *)(*(int *)(param_2 + 0x13c) + 8) = uVar4;
    }
    if (*(int *)(*(int *)(param_2 + 0x13c) + 8) == 0) goto LAB_0047ad6e;
  }
  *(int *)(param_2 + 0x144) = *(int *)(param_2 + 0x140);
  *(int *)(param_2 + 0x140) = *(int *)(param_2 + 0x140) + 1;
LAB_0047ad6e:
  if (-1 < *(int *)(param_2 + 0x140) + -1) {
    *(undefined4 *)(param_2 + 0x144) = 0;
    *(undefined4 *)(param_2 + 0x13c) = *(undefined4 *)(param_2 + 0x138);
  }
  *(int *)(param_1 + 0x130) = param_2;
  return;
}

