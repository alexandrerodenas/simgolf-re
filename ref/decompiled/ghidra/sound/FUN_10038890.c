/* Ghidra decompiled: sound.dll */
/* Function: FUN_10038890 @ 0x10038890 */
/* Body size: 284 addresses */


undefined4 __thiscall FUN_10038890(void *this,uint param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  uint local_4;
  
  iVar5 = *(int *)((int)this + 0x5c);
  *(int *)((int)this + 100) = iVar5;
  if ((iVar5 != 0) && (*(int *)(iVar5 + 8) != 0)) {
    return 0x10;
  }
  local_4 = 0;
  piVar6 = (int *)0x0;
  if (param_1 != 0) {
    do {
      piVar2 = operator_new(0x20);
      if (piVar2 == (int *)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        *piVar2 = 0;
        piVar2[1] = 0;
        piVar2[2] = 0;
        piVar2[3] = (int)piVar2;
        piVar2[4] = 0;
        piVar2[5] = 0;
        piVar2[6] = 0;
        piVar2[7] = 0;
      }
      if (*piVar2 != 0) {
        return 0x10;
      }
      if (param_2 == 0) {
        return 10;
      }
      pvVar3 = operator_new(param_2);
      *piVar2 = (int)pvVar3;
      piVar2[1] = param_2;
      if (piVar6 != (int *)0x0) {
        piVar6[6] = (int)piVar2;
      }
      puVar4 = operator_new(0xc);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = piVar2;
      }
      if (*(int *)((int)this + 0x60) == 0) {
        *(undefined4 **)((int)this + 0x5c) = puVar4;
      }
      else {
        *(undefined4 **)(*(int *)((int)this + 0x60) + 4) = puVar4;
        *puVar4 = *(undefined4 *)((int)this + 0x60);
      }
      *(undefined4 **)((int)this + 0x60) = puVar4;
      local_4 = local_4 + 1;
      *(int *)((int)this + 0x68) = *(int *)((int)this + 0x68) + 1;
      piVar6 = piVar2;
    } while (local_4 < param_1);
  }
  iVar5 = *(int *)((int)this + 0x60);
  *(int *)((int)this + 100) = iVar5;
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(iVar5 + 8);
  }
  iVar1 = *(int *)((int)this + 0x5c);
  *(int *)((int)this + 100) = iVar1;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(iVar1 + 8);
    return 0;
  }
  *(undefined4 *)(iVar5 + 0x18) = 0;
  return 0;
}

