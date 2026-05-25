/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002e7c0 @ 0x1002E7C0 */


int __thiscall FUN_1002e7c0(void *this,char *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  char *pcVar9;
  uint *puVar10;
  uint uStack_104;
  uint local_100 [64];
  
  uVar6 = 0xffffffff;
  do {
    pcVar9 = param_1;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar9 = param_1 + 1;
    cVar2 = *param_1;
    param_1 = pcVar9;
  } while (cVar2 != '\0');
  uVar6 = ~uVar6;
  puVar8 = (uint *)(pcVar9 + -uVar6);
  puVar10 = local_100;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar10 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar10 = puVar10 + 1;
  }
  iVar5 = *(int *)((int)this + 0x40);
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(char *)puVar10 = (char)*puVar8;
    puVar8 = (uint *)((int)puVar8 + 1);
    puVar10 = (uint *)((int)puVar10 + 1);
  }
  piVar1 = (int *)((int)this + 0x40);
  if (((iVar5 == 0) || ((**(code **)(*(int *)this + 0x14))(), *piVar1 == 0)) &&
     (iVar5 = create_sound(piVar1,local_100,5), iVar5 != 0)) {
    return iVar5;
  }
  iVar5 = *piVar1;
  uStack_104 = CONCAT31(uStack_104._1_3_,*(byte *)((int)this + 0x58)) & 0xffffff01;
  *(byte *)(iVar5 + 0x58) =
       (*(byte *)(iVar5 + 0x58) ^ *(byte *)((int)this + 0x58) & 1) & 1 ^ *(byte *)(iVar5 + 0x58);
  if (*(void **)(iVar5 + 0x40) != (void *)0x0) {
    thunk_FUN_1002ddb0(*(void **)(iVar5 + 0x40),uStack_104);
  }
  iVar5 = thunk_FUN_1002add0(this,local_100);
  if (iVar5 == 0) {
    if ((*(byte *)((int)this + 0x58) & 2) != 0) {
      *(byte *)(*piVar1 + 0x58) = *(byte *)(*piVar1 + 0x58) | 2;
      iVar5 = *(int *)((int)this + 0x5c);
      if (iVar5 != 0) {
        iVar3 = *piVar1;
        iVar4 = *(int *)(iVar3 + 0x40);
        if (iVar4 != 0) {
          *(int *)(iVar4 + 0x5c) = iVar5;
        }
        *(int *)(iVar3 + 0x5c) = iVar5;
      }
    }
    if ((int *)*piVar1 != (int *)0x0) {
      (**(code **)(*(int *)*piVar1 + 0x40))(*(undefined4 *)((int)this + 4));
      (**(code **)(*(int *)*piVar1 + 0x44))(*(undefined4 *)((int)this + 8));
    }
    iVar5 = 0;
  }
  return iVar5;
}

