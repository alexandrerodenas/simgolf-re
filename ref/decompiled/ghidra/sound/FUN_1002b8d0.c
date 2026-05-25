/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002b8d0 @ 0x1002B8D0 */


void __thiscall FUN_1002b8d0(void *this,uint *param_1,uint *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint *puVar9;
  uint *puVar10;
  
  uVar5 = (uint)param_2 & 4;
  if ((uVar5 == 0) || (((uint)param_2 & 0x80) == 0)) {
    if (param_1 != (uint *)0x0) {
      if (*(undefined **)((int)this + 0x50) != (undefined *)0x0) {
        FUN_1004249a(*(undefined **)((int)this + 0x50));
      }
      uVar6 = 0xffffffff;
      puVar9 = param_1;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        uVar7 = *puVar9;
        puVar9 = (uint *)((int)puVar9 + 1);
      } while ((char)uVar7 != '\0');
      puVar2 = operator_new(~uVar6);
      uVar6 = 0xffffffff;
      *(undefined4 **)((int)this + 0x50) = puVar2;
      puVar9 = param_1;
      do {
        puVar10 = puVar9;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        puVar10 = (uint *)((int)puVar9 + 1);
        uVar7 = *puVar9;
        puVar9 = puVar10;
      } while ((char)uVar7 != '\0');
      uVar6 = ~uVar6;
      puVar8 = (undefined4 *)((int)puVar10 - uVar6);
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar2 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar2 = puVar2 + 1;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar2 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
    }
    puVar9 = (uint *)((int)this + 0x58);
    *puVar9 = 0;
    if (uVar5 != 0) {
      piVar1 = (int *)((int)this + 0x40);
      *puVar9 = *puVar9 | 2;
      if ((*(int *)((int)this + 0x40) == 0) && (iVar3 = create_sound(piVar1,param_1,1), iVar3 == 0))
      {
        iVar3 = *(int *)*piVar1;
        uVar4 = (**(code **)(*(int *)this + 0x70))();
        (**(code **)(iVar3 + 0x6c))(uVar4);
        (**(code **)(*(int *)this + 0x7c))();
      }
      if ((int *)*piVar1 != (int *)0x0) {
        (**(code **)(*(int *)*piVar1 + 0x6c))(param_2);
      }
    }
    if (((uint)param_2 & 1) != 0) {
      *puVar9 = *puVar9 | 1;
    }
    if ((((uint)param_2 & 0x10) != 0) && (uVar5 == 0)) {
      *puVar9 = *puVar9 | 4;
    }
    if (((uint)param_2 & 2) != 0) {
      (**(code **)(*(int *)this + 0x48))(1);
      param_2 = param_1;
    }
    if (((uint)param_2 & 0x40) != 0) {
      *puVar9 = *puVar9 | 8;
    }
    if (((uint)param_2 & 0x80) != 0) {
      *puVar9 = *puVar9 | 0x10;
    }
    if (((uint)param_2 & 0x100) != 0) {
      *puVar9 = *puVar9 | 0x20;
    }
    if (((uint)param_2 & 0x400) != 0) {
      *puVar9 = *puVar9 | 0x40;
    }
  }
  return;
}

