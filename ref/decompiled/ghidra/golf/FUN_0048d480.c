/* Ghidra decompiled: golf.exe */
/* Function: FUN_0048d480 @ 0x0048D480 */
/* Body size: 1760 addresses */


void __fastcall FUN_0048d480(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iStack_4;
  
  (**(code **)(*param_1 + 0x19c))();
  param_1[0x7d9] = DAT_0083b9ec;
  param_1[0x7c0] = DAT_0083b8e8;
  piVar4 = &DAT_0083b6a8;
  piVar1 = param_1 + 0x734;
  for (iVar3 = 0x46; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar1 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar1 = piVar1 + 1;
  }
  piVar4 = &DAT_0083b7c0;
  piVar1 = param_1 + 0x77a;
  for (iVar3 = 0x46; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar1 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar1 = piVar1 + 1;
  }
  if (param_1[0x842] != 0) {
    FUN_004a5007(param_1[0x842]);
    param_1[0x842] = 0;
  }
  if (param_1[0x843] != 0) {
    FUN_004a5007(param_1[0x843]);
    param_1[0x843] = 0;
  }
  param_1[0x16f] = (int)param_1;
  piVar1 = &DAT_0083b900;
  piVar4 = param_1 + 0x824;
  do {
    iVar3 = *piVar1;
    piVar1 = piVar1 + 1;
    *piVar4 = iVar3;
    piVar4 = piVar4 + 1;
  } while ((int)piVar1 < 0x83b90c);
  piVar4 = param_1 + 0x82a;
  iVar3 = 0;
  do {
    iVar2 = iVar3 + 4;
    piVar4[-3] = *(int *)((int)&DAT_0083b90c + iVar3);
    *piVar4 = *(int *)((int)&DAT_0083b918 + iVar3);
    piVar4[3] = *(int *)((int)&DAT_0083b924 + iVar3);
    piVar4[6] = *(int *)((int)&DAT_0083b930 + iVar3);
    piVar4[9] = *(int *)((int)&DAT_0083b93c + iVar3);
    piVar4[0xc] = *(int *)((int)&DAT_0083b948 + iVar3);
    piVar4[0xf] = *(int *)((int)&DAT_0083b954 + iVar3);
    piVar4[0x12] = *(int *)((int)&DAT_0083b960 + iVar3);
    piVar4[0x15] = *(int *)((int)&DAT_0083b96c + iVar3);
    piVar4 = piVar4 + 1;
    iVar3 = iVar2;
  } while (iVar2 < 0xc);
  piVar1 = &DAT_0083b978;
  piVar4 = param_1 + 0x81e;
  do {
    iVar3 = *piVar1;
    piVar1 = piVar1 + 1;
    *piVar4 = iVar3;
    piVar4 = piVar4 + 1;
  } while ((int)piVar1 < 0x83b984);
  piVar1 = &DAT_0083b984;
  piVar4 = param_1 + 0x821;
  do {
    iVar3 = *piVar1;
    piVar1 = piVar1 + 1;
    *piVar4 = iVar3;
    piVar4 = piVar4 + 1;
  } while ((int)piVar1 < 0x83b990);
  FUN_00489e40();
  FUN_0049ece0();
  FUN_0049d690();
  FUN_004a35e0();
  FUN_004a23a0();
  FUN_00480610();
  param_1[0x4df] = 0;
  if ((char)param_1[0x15d] == '\0') {
    FUN_00473ae0();
    param_1[0x4f3] = 0;
    param_1[0x4f4] = 0;
  }
  param_1[0x170] = 0;
  param_1[0x171] = -1;
  if (param_1[0x172] != 0) {
    FUN_004a5007(param_1[0x172]);
    param_1[0x172] = 0;
  }
  param_1[0x516] = 0;
  param_1[0x517] = -1;
  (**(code **)(param_1[0x177] + 0x16c))();
  (**(code **)(param_1[0x32b] + 0x16c))();
  if (param_1[0x506] != 0) {
    iStack_4 = 0;
    if (0 < param_1[0x508]) {
      do {
        param_1[0x507] = *(int *)(param_1[0x506] + 0xc);
        piVar4 = *(int **)(param_1[0x506] + 8);
        (**(code **)(param_1[0x504] + 4))(piVar4);
        if (piVar4 != (int *)0x0) {
          (*(code *)**(undefined4 **)(*(int *)(*piVar4 + 4) + (int)piVar4))(1);
        }
        *(undefined4 *)(param_1[0x506] + 8) = 0;
        piVar4 = (int *)param_1[0x506];
        if (piVar4 != (int *)0x0) {
          (*(code *)**(undefined4 **)(*(int *)(*piVar4 + 4) + (int)piVar4))(1);
        }
        param_1[0x506] = param_1[0x507];
        iStack_4 = iStack_4 + 1;
      } while (iStack_4 < param_1[0x508]);
    }
    param_1[0x506] = 0;
    param_1[0x509] = 0;
    param_1[0x508] = 0;
  }
  param_1[0x509] = 0;
  if (param_1[0x4fa] != 0) {
    iStack_4 = 0;
    if (0 < param_1[0x4fc]) {
      do {
        param_1[0x4fb] = *(int *)(param_1[0x4fa] + 0xc);
        piVar4 = *(int **)(param_1[0x4fa] + 8);
        (**(code **)(param_1[0x4f8] + 4))(piVar4);
        if (piVar4 != (int *)0x0) {
          (*(code *)**(undefined4 **)(*(int *)(*piVar4 + 4) + (int)piVar4))(1);
        }
        *(undefined4 *)(param_1[0x4fa] + 8) = 0;
        piVar4 = (int *)param_1[0x4fa];
        if (piVar4 != (int *)0x0) {
          (*(code *)**(undefined4 **)(*(int *)(*piVar4 + 4) + (int)piVar4))(1);
        }
        param_1[0x4fa] = param_1[0x4fb];
        iStack_4 = iStack_4 + 1;
      } while (iStack_4 < param_1[0x4fc]);
    }
    param_1[0x4fa] = 0;
    param_1[0x4fd] = 0;
    param_1[0x4fc] = 0;
  }
  param_1[0x4fd] = 0;
  piVar4 = param_1 + 0x4e0;
  iVar3 = 8;
  do {
    if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar4)(1);
      *piVar4 = 0;
    }
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  param_1[0x512] = DAT_0083b9b0;
  param_1[0x513] = DAT_0083b9ac;
  param_1[0x510] = DAT_0083b9a4;
  param_1[0x511] = DAT_0083b9a8;
  param_1[0x514] = DAT_004e44f0;
  param_1[0x515] = DAT_004e44f4;
  param_1[0x7dc] = 0;
  param_1[0x7dd] = 0;
  param_1[0x7de] = 0;
  param_1[0x7df] = 0;
  param_1[0x7e0] = 0;
  param_1[0x7e1] = 0;
  param_1[0x7e2] = 0;
  param_1[0x7e3] = 0;
  param_1[0x7e4] = 0;
  param_1[0x7e5] = 0;
  param_1[0x7e6] = 0;
  param_1[0x7e7] = 0;
  param_1[0x7e8] = 0;
  param_1[0x7e9] = 0;
  param_1[0x7ea] = 0;
  param_1[0x7eb] = 0;
  param_1[0x7ec] = 0;
  param_1[0x7ed] = 0;
  param_1[0x7da] = 0;
  param_1[0x7db] = 0;
  param_1[0x7ee] = 0x1000;
  param_1[0x7ef] = 0x1000;
  param_1[0x7f0] = 0;
  if ((char)param_1[0x15d] == '\0') {
    param_1[0x7f1] = DAT_004e44f8;
    param_1[0x7f2] = DAT_004e44f8;
    param_1[0x7f3] = DAT_004e4500;
    param_1[0x7f4] = DAT_0083b9b4;
    param_1[0x7f8] = DAT_004e4504;
    param_1[0x7fc] = DAT_004e4514;
    param_1[0x800] = DAT_004e4524;
    param_1[0x804] = DAT_004e4534;
    param_1[0x7f5] = DAT_0083b9b8;
    param_1[0x7f9] = DAT_004e4508;
    param_1[0x7fd] = DAT_004e4518;
    param_1[0x801] = DAT_004e4528;
    param_1[0x805] = DAT_004e4538;
    param_1[0x7f6] = DAT_0083b9bc;
    param_1[0x7fa] = DAT_004e450c;
    param_1[0x7fe] = DAT_004e451c;
    param_1[0x802] = DAT_004e452c;
    param_1[0x806] = DAT_004e453c;
    param_1[0x7f7] = DAT_0083b9c0;
    param_1[0x7fb] = DAT_004e4510;
    param_1[0x7ff] = DAT_004e4520;
    param_1[0x803] = DAT_004e4530;
    param_1[0x807] = DAT_004e4540;
    param_1[0x808] = 0;
    param_1[0x809] = 0;
    param_1[0x80a] = 0;
    param_1[0x80b] = DAT_0083b9c4;
    *(undefined1 *)(param_1 + 0x80e) = DAT_004e4544;
    param_1[0x80f] = DAT_004e4550;
    param_1[0x812] = DAT_004e455c;
    param_1[0x815] = DAT_004e4568;
    param_1[0x80c] = DAT_0083b9c8;
    *(undefined1 *)((int)param_1 + 0x2039) = DAT_004e4548;
    param_1[0x810] = DAT_004e4554;
    param_1[0x813] = DAT_004e4560;
    param_1[0x816] = DAT_004e456c;
    param_1[0x80d] = DAT_0083b9cc;
    *(undefined1 *)((int)param_1 + 0x203a) = DAT_004e454c;
    param_1[0x811] = DAT_004e4558;
    param_1[0x814] = DAT_004e4564;
    param_1[0x817] = DAT_004e4570;
    param_1[0x819] = DAT_004e4578;
    param_1[0x81a] = DAT_004e457c;
    param_1[0x81b] = DAT_004e4580;
    param_1[0x81c] = DAT_0083b9d0;
    param_1[0x81d] = DAT_0083b9d4;
    param_1[0x4f7] = DAT_0083b9e0;
    param_1[0x4f6] = DAT_0083b9dc;
    param_1[0x4f5] = DAT_0083b9d8;
  }
  param_1[0x844] = 0;
  param_1[0x844] = DAT_0083b9f0;
  *(undefined1 *)(param_1 + 0x818) = DAT_004e4574;
  param_1[0x164] = DAT_0083b8f4;
  param_1[0x165] = DAT_0083b8f8;
  param_1[0x166] = DAT_0083b8fc;
  param_1[0x167] = DAT_004e44e4;
  param_1[0x168] = DAT_004e44e8;
  if (param_1[0x164] != 0) {
    FUN_0048e120(param_1[0x167]);
    FUN_0048e0b0(param_1[0x168]);
    FUN_0048e190(param_1[0x165],param_1[0x166]);
    *(uint *)((int)param_1 + *(int *)(param_1[0x519] + 8) + 0x1488) =
         *(uint *)(*(int *)(param_1[0x519] + 8) + 0x1488 + (int)param_1) | 3;
  }
  FUN_004747e0();
  return;
}

