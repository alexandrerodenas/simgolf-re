/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10005670 @ 0x10005670 */


void __thiscall FUN_10005670(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  
  iVar1 = (**(code **)(*(int *)this + 0xcc))();
  if (*(int *)(iVar1 + 4) <= param_3) {
    iVar1 = (**(code **)(*(int *)this + 0xcc))();
    if (param_3 < *(int *)(iVar1 + 0xc)) {
      if (param_1 != param_2) {
        iVar1 = param_1;
        iVar4 = param_2;
        if (param_2 < param_1) {
          iVar1 = param_2;
          iVar4 = param_1;
        }
        iVar2 = (**(code **)(*(int *)this + 0xcc))();
        if (iVar1 < *(int *)(iVar2 + 8)) {
          piVar3 = (int *)(**(code **)(*(int *)this + 0xcc))();
          if (*piVar3 <= iVar4) {
            piVar3 = (int *)(**(code **)(*(int *)this + 0xcc))();
            if (iVar1 < *piVar3) {
              piVar3 = (int *)(**(code **)(*(int *)this + 0xcc))();
              iVar1 = *piVar3;
            }
            iVar2 = (**(code **)(*(int *)this + 0xcc))();
            if (*(int *)(iVar2 + 8) <= iVar4) {
              iVar4 = (**(code **)(*(int *)this + 0xcc))();
              iVar4 = *(int *)(iVar4 + 8) + -1;
            }
            puVar5 = (undefined4 *)(**(code **)(*(int *)this + 0x14))(iVar1,param_3);
            if (puVar5 != (undefined4 *)0x0) {
              uVar6 = (iVar4 - iVar1) + 1;
              for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                *puVar5 = CONCAT22(CONCAT11((undefined1)param_2,(undefined1)param_2),
                                   CONCAT11((undefined1)param_2,(undefined1)param_2));
                puVar5 = puVar5 + 1;
              }
              for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                *(undefined1 *)puVar5 = (undefined1)param_2;
                puVar5 = (undefined4 *)((int)puVar5 + 1);
              }
              (**(code **)(*(int *)this + 0x24))(1);
            }
          }
        }
      }
    }
  }
  return;
}

