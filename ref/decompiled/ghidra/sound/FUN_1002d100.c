/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002d100 @ 0x1002D100 */


void __thiscall FUN_1002d100(void *this,uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  uint *local_10;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  local_10 = operator_new(0x110);
  if (local_10 == (uint *)0x0) {
    local_10 = (uint *)0x0;
  }
  else {
    puVar7 = local_10 + 3;
    for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    local_10[1] = 0;
    *local_10 = 0;
    local_10[2] = 1;
  }
  uVar5 = 0xffffffff;
  puVar7 = param_1 + 3;
  do {
    puVar8 = puVar7;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    puVar8 = (uint *)((int)puVar7 + 1);
    uVar6 = *puVar7;
    puVar7 = puVar8;
  } while ((char)uVar6 != '\0');
  uVar5 = ~uVar5;
  puVar7 = (uint *)((int)puVar8 - uVar5);
  puVar8 = local_10 + 3;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(char *)puVar8 = (char)*puVar7;
    puVar7 = (uint *)((int)puVar7 + 1);
    puVar8 = (uint *)((int)puVar8 + 1);
  }
  if (*local_10 < uVar2) {
    *local_10 = uVar2;
  }
  local_10[1] = uVar2;
  if (uVar1 < uVar2) {
    local_10[1] = uVar1;
  }
  *local_10 = uVar1;
  local_10[2] = param_1[2];
  uVar5 = uVar2;
  if (uVar2 <= uVar1) {
    do {
      piVar3 = *(int **)((int)this + uVar5 * 4 + 4);
      if (piVar3 != (int *)0x0) {
        uVar6 = piVar3[1];
        uVar5 = *piVar3 + 1;
        FUN_1004249a(*(undefined **)((int)this + uVar6 * 4 + 4));
        if (uVar6 < uVar5) {
          puVar9 = (undefined4 *)((int)this + uVar6 * 4 + 4);
          for (iVar4 = uVar5 - uVar6; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar9 = 0;
            puVar9 = puVar9 + 1;
          }
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 <= uVar1);
    if (uVar2 <= uVar1) {
      puVar9 = (undefined4 *)((int)this + uVar2 * 4 + 4);
      for (iVar4 = (uVar1 - uVar2) + 1; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = local_10;
        puVar9 = puVar9 + 1;
      }
    }
  }
  return;
}

