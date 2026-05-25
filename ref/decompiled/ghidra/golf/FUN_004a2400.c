/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a2400 @ 0x004A2400 */


int __thiscall FUN_004a2400(int param_1,int param_2,undefined4 param_3,int param_4,uint param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  void *pvVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  char *pcVar15;
  undefined4 *unaff_FS_OFFSET;
  int local_28;
  int local_20;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  local_c = *unaff_FS_OFFSET;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b937b;
  *unaff_FS_OFFSET = &local_c;
  if (param_2 == 0) {
LAB_004a2426:
    iVar9 = 3;
  }
  else {
    piVar1 = (int *)(param_1 + -0x604);
    FUN_004a2a60();
    *(undefined4 *)(*(int *)(*piVar1 + 8) + -0x5dc + param_1) = param_3;
    *(int *)(*(int *)(*piVar1 + 8) + -0x5d8 + param_1) = param_4;
    if ((*(uint *)(param_2 + 0x9c) & 0x1000) == 0) {
      param_5 = param_5 | 0x100000;
    }
    iVar9 = *(int *)(*piVar1 + 8) + param_1;
    iVar9 = FUN_004806c0(param_3,param_4,*(undefined4 *)(iVar9 + -0x5a4),
                         *(undefined4 *)(iVar9 + -0x5a0),0,param_5,param_2,0,0);
    if (iVar9 == 0) {
      iVar9 = *(int *)(*piVar1 + 8) + param_1;
      FUN_00476310(*(undefined4 *)(iVar9 + -0x584),*(undefined4 *)(iVar9 + -0x578),
                   *(undefined4 *)(iVar9 + -0x56c),*(undefined4 *)(iVar9 + -0x560));
      iVar9 = *(int *)(*piVar1 + 8) + param_1;
      FUN_00476340(*(undefined4 *)(iVar9 + -0x580),*(undefined4 *)(iVar9 + -0x574),
                   *(undefined4 *)(iVar9 + -0x568),*(undefined4 *)(iVar9 + -0x55c));
      iVar9 = *(int *)(*piVar1 + 8) + param_1;
      FUN_00476370(*(undefined4 *)(iVar9 + -0x57c),*(undefined4 *)(iVar9 + -0x570),
                   *(undefined4 *)(iVar9 + -0x564),*(undefined4 *)(iVar9 + -0x558));
      iVar9 = *(int *)(*piVar1 + 8) + param_1;
      FUN_004762d0(*(undefined4 *)(iVar9 + -0x590),*(undefined4 *)(iVar9 + -0x58c),
                   *(undefined4 *)(iVar9 + -0x588),0);
      iVar4 = *(int *)(param_1 + -0x588);
      param_5 = 0;
      iVar5 = *(int *)(*(int *)(*piVar1 + 8) + -0x598 + param_1);
      iVar9 = *(int *)(*piVar1 + 8) + param_1;
      iVar6 = *(int *)(iVar9 + -0x5bc);
      iVar7 = *(int *)(iVar9 + -0x59c);
      iVar11 = *(int *)(iVar9 + -0x5cc) + iVar6 * 2 + *(int *)(param_1 + -0x588);
      param_2 = 0;
      if (0 < *(int *)(iVar9 + -0x5ac)) {
        do {
          iVar13 = *(int *)(iVar9 + -0x59c) * param_2;
          param_4 = 0;
          iVar2 = iVar13 + iVar11;
          if (0 < *(int *)(iVar9 + -0x5a8)) {
            piVar14 = (int *)(param_1 + -0x600 + param_5 * 4);
            local_28 = iVar6 >> 1;
            local_20 = (iVar5 - iVar6) + (iVar6 >> 1);
            do {
              if ((undefined4 *)*piVar14 != (undefined4 *)0x0) {
                (*(code *)**(undefined4 **)*piVar14)(1);
              }
              pvVar10 = operator_new(0x5dc);
              uStack_4 = 0;
              if (pvVar10 == (void *)0x0) {
                iVar9 = 0;
              }
              else {
                iVar9 = FUN_00486070();
              }
              uStack_4 = 0xffffffff;
              *piVar14 = iVar9;
              if (iVar9 == 0) {
                iVar9 = 4;
                goto LAB_004a2886;
              }
              iVar9 = 0;
              if (param_1 != 0x604) {
                iVar9 = *(int *)(*piVar1 + 4) + -0x604 + param_1;
              }
              if (&stack0x00000000 == (undefined1 *)0x2c) goto LAB_004a2426;
              iVar9 = FUN_00486110(iVar2,local_28,
                                   (((iVar7 + iVar6 * -2) - iVar4) + iVar11 + iVar13) - iVar2,
                                   local_20 - local_28,iVar9,1);
              if (iVar9 != 0) goto LAB_004a2886;
              if ((*(uint *)(*(int *)(*piVar1 + 8) + -0x5e0 + param_1) & 0x1000) != 0) {
                *(uint *)(*piVar14 + 0x580) = *(uint *)(*piVar14 + 0x580) | 2;
              }
              iVar9 = *(int *)(*piVar1 + 8) + param_1;
              FUN_00476310(*(undefined4 *)(iVar9 + -0x584),*(undefined4 *)(iVar9 + -0x578),
                           *(undefined4 *)(*(int *)(*piVar1 + 8) + -0x56c + param_1),
                           *(undefined4 *)(iVar9 + -0x560));
              iVar9 = *(int *)(*piVar1 + 8) + param_1;
              FUN_004762d0(*(undefined4 *)(iVar9 + -0x590),*(undefined4 *)(iVar9 + -0x58c),
                           *(undefined4 *)(*(int *)(*piVar1 + 8) + -0x588 + param_1),0);
              FUN_00486250(piVar14[0x14]);
              FUN_00486200(piVar14[10]);
              *(undefined4 *)(*piVar14 + 0x584) =
                   *(undefined4 *)(*(int *)(*piVar1 + 8) + -0x594 + param_1);
              *(undefined4 *)(*piVar14 + 0x590) =
                   *(undefined4 *)(*(int *)(*piVar1 + 8) + -0x554 + param_1);
              *(undefined4 *)(*piVar14 + 0x594) =
                   *(undefined4 *)(*(int *)(*piVar1 + 8) + -0x550 + param_1);
              *(undefined4 *)(*piVar14 + 0x598) =
                   *(undefined4 *)(*(int *)(*piVar1 + 8) + -0x54c + param_1);
              uVar12 = 0xffffffff;
              *(undefined4 *)(*piVar14 + 0x59c) =
                   *(undefined4 *)(*(int *)(*piVar1 + 8) + -0x5c0 + param_1);
              piVar8 = (int *)*piVar14;
              piVar8[0x168] = 0;
              pcVar15 = (char *)piVar8[0x15d];
              do {
                if (uVar12 == 0) break;
                uVar12 = uVar12 - 1;
                cVar3 = *pcVar15;
                pcVar15 = pcVar15 + 1;
              } while (cVar3 != '\0');
              piVar8[0x169] = ~uVar12 - 1;
              (**(code **)(*piVar8 + 0x120))();
              (**(code **)(*(int *)*piVar14 + 4))(0);
              iVar9 = *(int *)(*(int *)(*piVar1 + 8) + -0x598 + param_1);
              local_28 = local_28 + iVar9;
              local_20 = local_20 + iVar9;
              param_5 = param_5 + 1;
              piVar14 = piVar14 + 1;
              param_4 = param_4 + 1;
            } while (param_4 < *(int *)(*(int *)(*piVar1 + 8) + param_1 + -0x5a8));
          }
          param_2 = param_2 + 1;
          iVar9 = *(int *)(*piVar1 + 8) + param_1;
        } while (param_2 < *(int *)(*(int *)(*piVar1 + 8) + -0x5ac + param_1));
      }
      iVar9 = 0;
    }
  }
LAB_004a2886:
  *unaff_FS_OFFSET = local_c;
  return iVar9;
}

