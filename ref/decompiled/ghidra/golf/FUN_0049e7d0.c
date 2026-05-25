/* Ghidra decompiled: golf.exe */
/* Function: FUN_0049e7d0 @ 0x0049E7D0 */


void __thiscall FUN_0049e7d0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  bVar2 = true;
  iVar6 = *(int *)(*(int *)(param_1 + -0x24) + 8);
  iVar4 = *(int *)(iVar6 + 0xac + param_1);
  iVar5 = iVar6 + 0x9c + param_1;
  iVar6 = iVar4 + -1;
  if (-2 < iVar6) {
    *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar5 + 8);
    iVar3 = 1;
    if (0 < iVar4) {
      do {
        iVar3 = iVar3 + -1;
        *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(*(int *)(iVar5 + 0xc) + 0x10);
      } while (iVar3 != 0);
      *(int *)(iVar5 + 0x14) = iVar6;
    }
  }
  while( true ) {
    if (param_3 < 1) {
      iVar5 = *(int *)(*(int *)(param_1 + -0x24) + 8);
      iVar6 = iVar5 + param_1;
      iVar5 = (param_2 / (*(int *)(iVar5 + 0x44 + param_1) + *(int *)(iVar5 + 0x24 + param_1))) *
              *(int *)(iVar6 + 0x38) + *(int *)(iVar6 + 0xb0);
      if (iVar5 == *(int *)(iVar6 + 0xcc)) {
        if (*(int *)(iVar6 + 0xd0) != -1) {
          *(undefined4 *)(iVar6 + 0xd0) = 0xffffffff;
          (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + -0x24) + 4) + -0x24 + param_1) + 0x120))
                    ();
          return;
        }
      }
      else {
        *(int *)(iVar6 + 0xd0) = iVar5;
        iVar6 = *(int *)(*(int *)(param_1 + -0x24) + 8);
        if (*(int *)(iVar6 + 0xd0 + param_1) != *(int *)(iVar6 + 0xd4 + param_1)) {
          piVar1 = *(int **)(*(int *)(*(int *)(param_1 + -0x24) + 4) + 0x28 + param_1);
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 0x1c))();
          }
          iVar6 = *(int *)(*(int *)(param_1 + -0x24) + 8);
          *(undefined4 *)(iVar6 + param_1 + 0xd4) = *(undefined4 *)(iVar6 + 0xd0 + param_1);
        }
        (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + -0x24) + 4) + -0x24 + param_1) + 0x120))()
        ;
      }
      return;
    }
    iVar6 = 0;
    if ((!bVar2) &&
       (iVar5 = *(int *)(*(int *)(param_1 + -0x24) + 8),
       *(int *)(iVar5 + param_1 + 0xb0) == *(int *)(iVar5 + 0xac + param_1) + -1)) break;
    bVar2 = false;
    iVar4 = *(int *)(*(int *)(param_1 + -0x24) + 8);
    iVar5 = iVar4 + 0x9c + param_1;
    iVar4 = *(int *)(iVar4 + 0xa4 + param_1);
    if (iVar4 != 0) {
      *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(*(int *)(iVar5 + 0xc) + 0xc);
      iVar3 = *(int *)(iVar5 + 0x14) + 1;
      *(int *)(iVar5 + 0x14) = iVar3;
      if (iVar3 == *(int *)(iVar5 + 0x10)) {
        *(undefined4 *)(iVar5 + 0x14) = 0;
      }
    }
    if (*(int *)(iVar5 + 0xc) != 0) {
      if (iVar4 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(*(int *)(iVar5 + 0xc) + 8);
      }
      iVar6 = *(int *)(iVar6 + 8);
    }
    iVar4 = FUN_00477580();
    iVar5 = *(int *)(*(int *)(param_1 + -0x24) + 8);
    iVar3 = *(int *)(iVar5 + param_1 + 0x24) + *(int *)(iVar5 + 0x48 + param_1);
    iVar5 = iVar4 * iVar6;
    if (iVar4 * iVar6 < iVar3) {
      iVar5 = iVar3;
    }
    param_3 = param_3 - iVar5;
  }
  return;
}

