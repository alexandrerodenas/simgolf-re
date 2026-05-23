/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10005760 @ 0x10005760 */
/* Body size: 252 addresses */


void __thiscall FUN_10005760(void *this,int param_1,int param_2,int param_3,undefined1 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  
  iVar3 = param_3;
  piVar1 = (int *)(**(code **)(*(int *)this + 0xcc))();
  if (*piVar1 <= param_1) {
    iVar2 = (**(code **)(*(int *)this + 0xcc))();
    if (param_1 < *(int *)(iVar2 + 8)) {
      if (param_2 != param_3) {
        if (param_3 < param_2) {
          param_3 = param_2;
          param_2 = iVar3;
        }
        iVar3 = (**(code **)(*(int *)this + 0xcc))();
        if (param_2 < *(int *)(iVar3 + 0xc)) {
          iVar3 = (**(code **)(*(int *)this + 0xcc))();
          if (*(int *)(iVar3 + 4) <= param_3) {
            iVar3 = (**(code **)(*(int *)this + 0xcc))();
            if (param_2 < *(int *)(iVar3 + 4)) {
              iVar3 = (**(code **)(*(int *)this + 0xcc))();
              param_2 = *(int *)(iVar3 + 4);
            }
            iVar3 = (**(code **)(*(int *)this + 0xcc))();
            if (*(int *)(iVar3 + 0xc) <= param_3) {
              iVar3 = (**(code **)(*(int *)this + 0xcc))();
              param_3 = *(int *)(iVar3 + 0xc) + -1;
            }
            puVar4 = (undefined1 *)(**(code **)(*(int *)this + 0x14))(param_1,param_2);
            if (puVar4 != (undefined1 *)0x0) {
              iVar3 = (**(code **)(*(int *)this + 0xe0))();
              iVar2 = (param_3 - param_2) + 1;
              do {
                *puVar4 = param_4;
                puVar4 = puVar4 + iVar3;
                iVar2 = iVar2 + -1;
              } while (iVar2 != 0);
              (**(code **)(*(int *)this + 0x24))(1);
            }
          }
        }
      }
    }
  }
  return;
}

