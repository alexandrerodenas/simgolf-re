/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001ae50 @ 0x1001AE50 */


void __thiscall FUN_1001ae50(void *this,undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_8;
  
  piVar2 = (int *)0x0;
  local_8 = 0x80;
  piVar4 = this;
  do {
    piVar4 = piVar4 + 1;
    piVar1 = (int *)*piVar4;
    if ((piVar1 != (int *)0x0) && (piVar1 != piVar2)) {
      (**(code **)(*piVar1 + 4))(param_1);
      iVar3 = *piVar4;
      iVar5 = 0;
      if (*(int *)(iVar3 + 0x1438) != 1 && -1 < *(int *)(iVar3 + 0x1438) + -1) {
        iVar6 = 0x1440;
        do {
          (**(code **)(**(int **)(iVar6 + iVar3) + 4))(param_1);
          iVar3 = *piVar4;
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + 4;
        } while (iVar5 < *(int *)(iVar3 + 0x1438) + -1);
      }
      piVar2 = (int *)*piVar4;
    }
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  *(undefined4 *)((int)this + 0x218) = param_1;
  return;
}

