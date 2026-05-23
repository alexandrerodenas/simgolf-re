/* Ghidra decompiled: golf.exe */
/* Function: FUN_0048ce00 @ 0x0048CE00 */
/* Body size: 1658 addresses */


undefined4 * __fastcall FUN_0048ce00(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b8048;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  FUN_004804a0();
  local_4 = 0;
  FUN_004747a0();
  local_4._0_1_ = 1;
  FUN_004a13f0();
  local_4._0_1_ = 2;
  FUN_004a13f0();
  local_4._0_1_ = 3;
  FUN_00473ab0();
  param_1[0x4f9] = &DAT_004bb234;
  param_1[0x502] = &PTR_FUN_004ba278;
  param_1[0x503] = DAT_00839650;
  DAT_00839650 = 0;
  param_1[0x4f8] = &PTR_LAB_004ba270;
  *(undefined ***)(*(int *)(param_1[0x4f9] + 4) + 0x13e4 + (int)param_1) = &PTR_LAB_004ba26c;
  param_1[0x4fa] = 0;
  param_1[0x4fb] = 0;
  param_1[0x4fc] = 0;
  param_1[0x4fd] = 0;
  param_1[0x4fe] = 0;
  param_1[0x4f8] = &PTR_FUN_004bb22c;
  *(undefined ***)(*(int *)(param_1[0x4f9] + 4) + 0x13e4 + (int)param_1) = &PTR_LAB_004bb228;
  param_1[0x505] = &DAT_004bb234;
  param_1[0x50e] = &PTR_FUN_004ba278;
  param_1[0x50f] = DAT_00839650;
  DAT_00839650 = 0;
  param_1[0x504] = &PTR_LAB_004ba270;
  *(undefined ***)(*(int *)(param_1[0x505] + 4) + 0x1414 + (int)param_1) = &PTR_LAB_004ba26c;
  param_1[0x504] = &PTR_FUN_004bb22c;
  param_1[0x506] = 0;
  param_1[0x507] = 0;
  param_1[0x508] = 0;
  param_1[0x509] = 0;
  param_1[0x50a] = 0;
  *(undefined ***)(*(int *)(param_1[0x505] + 4) + 0x1414 + (int)param_1) = &PTR_LAB_004bb228;
  local_4._0_1_ = 6;
  FUN_004a0740(1);
  local_4._0_1_ = 7;
  FUN_00492850();
  *param_1 = &PTR_FUN_004bb3f8;
  param_1[0x9d] = &PTR_LAB_004bb3e4;
  local_4 = CONCAT31(local_4._1_3_,8);
  *(undefined1 *)(param_1 + 0x15d) = 0;
  param_1[0x7d9] = DAT_0083b9ec;
  param_1[0x7c0] = DAT_0083b8e8;
  puVar2 = &DAT_0083b900;
  puVar5 = &DAT_0083b6a8;
  puVar6 = param_1 + 0x734;
  for (iVar4 = 0x46; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar5 = &DAT_0083b7c0;
  puVar6 = param_1 + 0x77a;
  for (iVar4 = 0x46; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar5 = param_1 + 0x824;
  do {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
    *puVar5 = uVar1;
    puVar5 = puVar5 + 1;
  } while ((int)puVar2 < 0x83b90c);
  puVar5 = param_1 + 0x82a;
  iVar4 = 0;
  do {
    iVar3 = iVar4 + 4;
    puVar5[-3] = *(undefined4 *)((int)&DAT_0083b90c + iVar4);
    *puVar5 = *(undefined4 *)((int)&DAT_0083b918 + iVar4);
    puVar5[3] = *(undefined4 *)((int)&DAT_0083b924 + iVar4);
    puVar5[6] = *(undefined4 *)((int)&DAT_0083b930 + iVar4);
    puVar5[9] = *(undefined4 *)((int)&DAT_0083b93c + iVar4);
    puVar5[0xc] = *(undefined4 *)((int)&DAT_0083b948 + iVar4);
    puVar5[0xf] = *(undefined4 *)((int)&DAT_0083b954 + iVar4);
    puVar5[0x12] = *(undefined4 *)((int)&DAT_0083b960 + iVar4);
    puVar5[0x15] = *(undefined4 *)((int)&DAT_0083b96c + iVar4);
    puVar5 = puVar5 + 1;
    iVar4 = iVar3;
  } while (iVar3 < 0xc);
  param_1[0x516] = 0;
  param_1[0x517] = 0xffffffff;
  param_1[0x842] = 0;
  param_1[0x843] = 0;
  param_1[0x16f] = param_1;
  param_1[0x4df] = 0;
  param_1[0x170] = 0;
  param_1[0x7da] = 0;
  param_1[0x7db] = 0;
  param_1[0x171] = 0xffffffff;
  puVar5 = param_1 + 0x4e0;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  param_1[0x172] = 0;
  param_1[0x512] = DAT_0083b9b0;
  param_1[0x513] = DAT_0083b9ac;
  param_1[0x510] = DAT_0083b9a4;
  param_1[0x511] = DAT_0083b9a8;
  param_1[0x514] = DAT_004e44f0;
  param_1[0x515] = DAT_004e44f4;
  FUN_00473ae0();
  param_1[0x4f3] = 0;
  param_1[0x4f4] = 0;
  param_1[0x4f7] = DAT_0083b9e0;
  param_1[0x4f6] = DAT_0083b9dc;
  param_1[0x4f5] = DAT_0083b9d8;
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
  param_1[0x7ee] = 0x1000;
  param_1[0x7ef] = 0x1000;
  param_1[0x7f0] = 0;
  param_1[0x7f1] = DAT_004e44f8;
  param_1[0x7f2] = DAT_004e44fc;
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
  *(undefined1 *)(param_1 + 0x818) = DAT_004e4574;
  param_1[0x819] = DAT_004e4578;
  param_1[0x81a] = DAT_004e457c;
  param_1[0x81b] = DAT_004e4580;
  param_1[0x81c] = DAT_0083b9d0;
  param_1[0x81d] = DAT_0083b9d4;
  param_1[0x844] = 0;
  param_1[0x844] = DAT_0083b9f0;
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
  *unaff_FS_OFFSET = local_c;
  return param_1;
}

