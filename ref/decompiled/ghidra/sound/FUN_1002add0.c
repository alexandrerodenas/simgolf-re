/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002add0 @ 0x1002ADD0 */
/* Body size: 236 addresses */


int __thiscall FUN_1002add0(void *this,uint *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined4 *puVar7;
  
  if (DAT_100b507c == 0) {
    return 1;
  }
  puVar2 = (undefined4 *)((int)this + 0x40);
  if (*(int **)((int)this + 0x40) == (int *)0x0) {
    iVar1 = create_sound(puVar2,param_1,1);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  else {
    iVar1 = (**(code **)(**(int **)((int)this + 0x40) + 0x60))();
    if (iVar1 != 0) {
      return 0xf;
    }
  }
  iVar1 = (**(code **)(*(int *)*puVar2 + 0x10))(param_1);
  uVar3 = *(uint *)((int)this + 0x44);
  if (iVar1 == 0) {
    if ((uVar3 & 1) == 0) {
      *(uint *)((int)this + 0x44) = uVar3 | 1;
      (**(code **)(*(int *)this + 0x7c))();
      if (*(int *)((int)this + 0x30) != 0) {
        (**(code **)(*(int *)*puVar2 + 0x48))(1);
      }
    }
  }
  else {
    *(uint *)((int)this + 0x44) = uVar3 & 0xfffffffe;
  }
  uVar3 = 0xffffffff;
  puVar6 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    uVar4 = *puVar6;
    puVar6 = (uint *)((int)puVar6 + 1);
  } while ((char)uVar4 != '\0');
  puVar2 = operator_new(~uVar3);
  uVar3 = 0xffffffff;
  do {
    puVar6 = param_1;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    puVar6 = (uint *)((int)param_1 + 1);
    uVar4 = *param_1;
    param_1 = puVar6;
  } while ((char)uVar4 != '\0');
  uVar3 = ~uVar3;
  puVar5 = (undefined4 *)((int)puVar6 - uVar3);
  puVar7 = puVar2;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  if (*(undefined **)((int)this + 0x50) != (undefined *)0x0) {
    FUN_1004249a(*(undefined **)((int)this + 0x50));
  }
  *(undefined4 **)((int)this + 0x50) = puVar2;
  return iVar1;
}

