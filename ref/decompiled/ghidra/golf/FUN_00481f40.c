/* Ghidra decompiled: golf.exe */
/* Function: FUN_00481f40 @ 0x00481F40 */
/* Body size: 1141 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall
FUN_00481f40(int param_1,undefined4 param_2,int param_3,uint param_4,undefined4 *param_5,
            byte param_6)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 extraout_var;
  undefined4 *puVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined4 uStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uVar4 = (undefined2)((uint)param_2 >> 0x10);
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b7d73;
  uStack_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_c;
  if (param_3 != 0) {
    FUN_00481ba0();
    if (*(undefined4 **)(param_1 + 0x54) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x54))(1);
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
    pvVar1 = operator_new(0x14);
    uStack_4 = 0;
    if (pvVar1 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00492d80();
    }
    uStack_4 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x54) = uVar2;
    iVar3 = FUN_00492dd0(param_3,1);
    if (iVar3 == 0) {
      FUN_00481ba0();
      iVar3 = 6;
      goto LAB_004823a0;
    }
    if ((param_6 & 1) == 0) {
      if ((param_6 & 2) == 0) {
        puVar5 = DAT_0083ac24;
        if ((param_6 & 3) == 0) {
          puVar5 = param_5;
        }
      }
      else {
        iVar3 = *(int *)(param_1 + 0x78);
        if (iVar3 != 0) {
          FUN_00483010();
          FUN_004a4ffc(iVar3);
          *(undefined4 *)(param_1 + 0x78) = 0;
        }
        DAT_0083aca4 = (undefined4 *)0x0;
        if (DAT_0083ac98 == 0) {
          if (DAT_0083aca0 == 0) {
            iVar3 = FUN_004823c0(0x1c,*(undefined4 *)
                                       ((int)&DAT_0083ac90 + *(int *)(DAT_0083ac8c + 4)));
            uStack_4 = 2;
            if (iVar3 == 0) {
              DAT_0083ac90 = (int *)0x0;
            }
            else {
              DAT_0083ac90 = (int *)FUN_00482ae0(1);
            }
            uStack_4 = 0xffffffff;
          }
          else {
            DAT_0083ac90 = (int *)FUN_004823c0(0x1c,DAT_0083aca0);
            if (DAT_0083ac90 == (int *)0x0) {
              DAT_0083ac90 = (int *)0x0;
            }
            else {
              *DAT_0083ac90 = (int)&DAT_004ba28c;
              DAT_0083ac90[5] = (int)&PTR_FUN_004ba278;
              DAT_0083ac90[6] = DAT_00839650;
              DAT_00839650 = 0;
              *(undefined ***)(*(int *)(*DAT_0083ac90 + 4) + (int)DAT_0083ac90) = &PTR_LAB_004ba288;
            }
          }
          if (DAT_0083ac90 != (int *)0x0) {
            DAT_0083ac90[1] = 0;
            DAT_0083ac90[3] = (int)DAT_0083ac90;
            DAT_0083ac90[4] = (int)DAT_0083ac90;
            if (DAT_0083aca0 == 0) {
              iVar3 = FUN_004823c0(0x10,*(undefined4 *)
                                         ((int)&DAT_0083ac90 + *(int *)(DAT_0083ac8c + 4)));
              uStack_4 = 4;
            }
            else {
              iVar3 = FUN_004823c0(0x10,DAT_0083aca0);
              uStack_4 = 3;
            }
            if (iVar3 == 0) {
              iVar3 = 0;
            }
            else {
              iVar3 = FUN_00482b20(1);
            }
            uStack_4 = 0xffffffff;
            DAT_0083ac90[2] = iVar3;
            if (DAT_0083ac90[2] != 0) {
              (*(code *)*DAT_0083ac88)(DAT_0083ac90[2]);
              DAT_0083ac94 = DAT_0083ac90;
LAB_00482304:
              _DAT_0083ac9c = DAT_0083ac98;
              DAT_0083ac98 = DAT_0083ac98 + 1;
            }
          }
        }
        else {
          if (DAT_0083aca0 == 0) {
            iVar3 = FUN_004823c0(0x1c,*(undefined4 *)
                                       ((int)&DAT_0083ac90 + *(int *)(DAT_0083ac8c + 4)));
            uStack_4 = 6;
            if (iVar3 == 0) {
              uVar2 = 0;
            }
            else {
              uVar2 = FUN_00482ae0(1);
            }
            *(undefined4 *)(DAT_0083ac90[4] + 0xc) = uVar2;
          }
          else {
            iVar3 = FUN_004823c0(0x1c,DAT_0083aca0);
            uStack_4 = 5;
            if (iVar3 == 0) {
              uVar2 = 0;
            }
            else {
              uVar2 = FUN_00482ae0(1);
            }
            *(undefined4 *)(DAT_0083ac90[4] + 0xc) = uVar2;
          }
          uStack_4 = 0xffffffff;
          iVar3 = *(int *)(DAT_0083ac90[4] + 0xc);
          if (iVar3 != 0) {
            *(int *)(iVar3 + 0x10) = DAT_0083ac90[4];
            *(int **)(*(int *)(DAT_0083ac90[4] + 0xc) + 0xc) = DAT_0083ac90;
            DAT_0083ac90[4] = *(int *)(DAT_0083ac90[4] + 0xc);
            DAT_0083ac94 = (int *)DAT_0083ac90[4];
            DAT_0083ac94[1] = 0;
            if (DAT_0083aca0 == 0) {
              iVar3 = FUN_004823c0(0x10,*(undefined4 *)
                                         ((int)&DAT_0083ac90 + *(int *)(DAT_0083ac8c + 4)));
              uStack_4 = 8;
            }
            else {
              iVar3 = FUN_004823c0(0x10,DAT_0083aca0);
              uStack_4 = 7;
            }
            if (iVar3 == 0) {
              iVar3 = 0;
            }
            else {
              iVar3 = FUN_00482b20(1);
            }
            uStack_4 = 0xffffffff;
            DAT_0083ac94[2] = iVar3;
            if (DAT_0083ac94[2] != 0) {
              (*(code *)*DAT_0083ac88)(DAT_0083ac94[2]);
              goto LAB_00482304;
            }
          }
        }
        puVar5 = DAT_0083aca4;
        (**(code **)*DAT_0083aca4)();
        DAT_0083ac24 = puVar5;
      }
    }
    else {
      if (param_5 != (undefined4 *)0x0) {
        FUN_00481ba0();
        iVar3 = 3;
        goto LAB_004823a0;
      }
      if (*(int *)(param_1 + 0x78) == 0) {
        pvVar1 = operator_new(0x58);
        uStack_4 = 1;
        if (pvVar1 == (void *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = FUN_00482fd0();
        }
        uStack_4 = 0xffffffff;
        *(int *)(param_1 + 0x78) = iVar3;
        if (iVar3 == 0) {
          FUN_00481ba0();
          iVar3 = 4;
          goto LAB_004823a0;
        }
      }
      puVar5 = *(undefined4 **)(param_1 + 0x78);
      (**(code **)*puVar5)();
    }
    *(undefined4 **)(param_1 + 0x74) = puVar5;
    iVar3 = FUN_00481ca0(param_4);
    uVar4 = extraout_var;
    if (iVar3 != 0) {
      FUN_00481ba0();
      goto LAB_004823a0;
    }
  }
  if (*(int *)(param_1 + 0x44) == 0) {
    FUN_00481ba0();
    iVar3 = 7;
  }
  else {
    iVar3 = FUN_00481e40(CONCAT22(uVar4,*(undefined2 *)(*(int *)(param_1 + 0x58) + 0x60)),
                         *(undefined2 *)(*(int *)(param_1 + 0x58) + 0x62));
    if (iVar3 == 0) {
      FUN_00482b90(param_1,param_4 & 2);
      iVar3 = 0;
    }
    else {
      FUN_00481ba0();
    }
  }
LAB_004823a0:
  *unaff_FS_OFFSET = uStack_c;
  return iVar3;
}

