/* Ghidra decompiled: golf.exe */
/* Function: FUN_0048db60 @ 0x0048DB60 */
/* Body size: 668 addresses */


undefined4 __thiscall FUN_0048db60(int *param_1,uint param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  FUN_0048d480();
  if ((param_2 & 0x100000) == 0) {
    param_1[0x164] = 0;
  }
  if ((param_2 & 1) == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 4) == 0) {
        param_1[0x595] = 0x10;
      }
      else {
        param_1[0x595] = 4;
      }
    }
    else {
      param_1[0x595] = 2;
    }
  }
  else {
    param_1[0x595] = 1;
  }
  if (param_3 != 0) {
    piVar1 = param_1 + 0x169;
    iVar2 = FUN_00474820(param_3);
    if (iVar2 != 0) {
      return 4;
    }
    if ((param_2 & 0x40000) == 0) {
      FUN_004026a0();
      param_1[0x509] = 0;
      param_1[0x50a] = (int)piVar1;
      FUN_004026a0();
      param_1[0x4fd] = 0;
      param_1[0x4fe] = (int)piVar1;
      FUN_004a12e0(piVar1);
      goto LAB_0048dd30;
    }
  }
  if (param_1[0x506] != 0) {
    param_3 = 0;
    if (0 < param_1[0x508]) {
      do {
        param_1[0x507] = *(int *)(param_1[0x506] + 0xc);
        piVar1 = *(int **)(param_1[0x506] + 8);
        (**(code **)(param_1[0x504] + 4))(piVar1);
        if (piVar1 != (int *)0x0) {
          (*(code *)**(undefined4 **)(*(int *)(*piVar1 + 4) + (int)piVar1))(1);
        }
        *(undefined4 *)(param_1[0x506] + 8) = 0;
        piVar1 = (int *)param_1[0x506];
        if (piVar1 != (int *)0x0) {
          (*(code *)**(undefined4 **)(*(int *)(*piVar1 + 4) + (int)piVar1))(1);
        }
        param_1[0x506] = param_1[0x507];
        param_3 = param_3 + 1;
      } while (param_3 < param_1[0x508]);
    }
    param_1[0x506] = 0;
    param_1[0x509] = 0;
    param_1[0x508] = 0;
  }
  param_1[0x509] = 0;
  param_1[0x50a] = 0;
  if (param_1[0x4fa] != 0) {
    param_3 = 0;
    if (0 < param_1[0x4fc]) {
      do {
        param_1[0x4fb] = *(int *)(param_1[0x4fa] + 0xc);
        piVar1 = *(int **)(param_1[0x4fa] + 8);
        (**(code **)(param_1[0x4f8] + 4))(piVar1);
        if (piVar1 != (int *)0x0) {
          (*(code *)**(undefined4 **)(*(int *)(*piVar1 + 4) + (int)piVar1))(1);
        }
        *(undefined4 *)(param_1[0x4fa] + 8) = 0;
        piVar1 = (int *)param_1[0x4fa];
        if (piVar1 != (int *)0x0) {
          (*(code *)**(undefined4 **)(*(int *)(*piVar1 + 4) + (int)piVar1))(1);
        }
        param_1[0x4fa] = param_1[0x4fb];
        param_3 = param_3 + 1;
      } while (param_3 < param_1[0x4fc]);
    }
    param_1[0x4fa] = 0;
    param_1[0x4fd] = 0;
    param_1[0x4fc] = 0;
  }
  param_1[0x4fd] = 0;
  param_1[0x4fe] = 0;
  FUN_004a1250(0);
LAB_0048dd30:
  param_1[0x7da] = param_2;
  if (param_1[0x164] == 0) {
    *(uint *)((int)param_1 + *(int *)(param_1[0x519] + 8) + 0x1488) =
         *(uint *)(*(int *)(param_1[0x519] + 8) + 0x1488 + (int)param_1) & 0xfffffffc;
    FUN_0048e190(0x1000,0x1000);
  }
  else {
    FUN_0048e120(param_1[0x167]);
    FUN_0048e0b0(param_1[0x168]);
    FUN_0048e190(param_1[0x165],param_1[0x166]);
    *(uint *)((int)param_1 + *(int *)(param_1[0x519] + 8) + 0x1488) =
         *(uint *)(*(int *)(param_1[0x519] + 8) + 0x1488 + (int)param_1) | 3;
  }
  if ((param_2 & 0x1000) != 0) {
    FUN_0048e190(0x1000,0x1000);
  }
  FUN_00492920(10);
  (**(code **)(*param_1 + 0x1a0))();
  return 0;
}

