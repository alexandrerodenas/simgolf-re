/* Ghidra decompiled: golf.exe */
/* Function: FUN_00482b90 @ 0x00482B90 */


uint __thiscall FUN_00482b90(int param_1,int param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  local_c = *unaff_FS_OFFSET;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b7d8b;
  *unaff_FS_OFFSET = &local_c;
  if (param_2 == 0) {
    uVar3 = 0x10;
  }
  else if (*(int *)(param_2 + 0x44) == 0) {
    uVar3 = 7;
  }
  else {
    FUN_00482dd0();
    *(int *)(param_1 + 4) = param_2;
    uVar3 = FUN_00474550(*(undefined2 *)(*(int *)(param_2 + 0x58) + 8),
                         *(undefined2 *)(*(int *)(param_2 + 0x58) + 10));
    if (uVar3 == 0) {
      *(uint *)(param_1 + 0x28) = (uint)*(ushort *)(*(int *)(param_2 + 0x58) + 100);
      *(uint *)(param_1 + 0x2c) = (uint)*(ushort *)(*(int *)(param_2 + 0x58) + 0x66);
      *(uint *)(param_1 + 0x20) = (uint)*(ushort *)(*(int *)(param_2 + 0x58) + 0x68);
      *(uint *)(param_1 + 0x24) = (uint)*(ushort *)(*(int *)(param_2 + 0x58) + 0x6a);
      iVar6 = *(int *)(param_2 + 0x74);
      if (iVar6 == 0) {
        piVar1 = *(int **)(param_1 + 0xc);
        iVar6 = DAT_0083ad0c;
      }
      else {
        piVar1 = *(int **)(param_1 + 0xc);
      }
      if ((piVar1 != (int *)0x0) && (iVar6 != 0)) {
        (**(code **)(*piVar1 + 0x10))(*(undefined4 *)(iVar6 + 4));
      }
      if (param_3 != 0) {
        uVar3 = (uint)*(ushort *)(*(int *)(param_2 + 0x58) + 0x60);
        puVar4 = operator_new(uVar3 * 0x2c + 4);
        uStack_4 = 0;
        if (puVar4 == (uint *)0x0) {
          puVar5 = (uint *)0x0;
        }
        else {
          puVar5 = puVar4 + 1;
          *puVar4 = uVar3;
          FUN_004a55d2(puVar5,0x2c,uVar3,FUN_00473ab0,&LAB_004041f0);
        }
        uStack_4 = 0xffffffff;
        *(uint **)(param_1 + 0x34) = puVar5;
        if (puVar5 != (uint *)0x0) {
          iVar6 = *(int *)(param_2 + 0x58);
          iVar8 = 0;
          uVar2 = *(uint *)(iVar6 + 0x70);
          if (*(short *)(iVar6 + 0x60) != 0) {
            iVar7 = 0;
            do {
              if ((uVar2 == 0) || ((uVar2 & 1 << ((byte)iVar8 & 0x1f)) != 0)) {
                uVar3 = FUN_00474550(*(undefined2 *)(iVar6 + 8),*(undefined2 *)(iVar6 + 10));
                if (uVar3 != 0) {
                  FUN_00482dd0();
                  goto LAB_00482da4;
                }
                *(uint *)(iVar7 + 0x20 + *(int *)(param_1 + 0x34)) =
                     (uint)*(ushort *)(*(int *)(param_2 + 0x58) + 100);
                *(uint *)(iVar7 + 0x24 + *(int *)(param_1 + 0x34)) =
                     (uint)*(ushort *)(*(int *)(param_2 + 0x58) + 0x66);
                *(uint *)(iVar7 + 0x18 + *(int *)(param_1 + 0x34)) =
                     (uint)*(ushort *)(*(int *)(param_2 + 0x58) + 0x68);
                *(uint *)(iVar7 + 0x1c + *(int *)(param_1 + 0x34)) =
                     (uint)*(ushort *)(*(int *)(param_2 + 0x58) + 0x6a);
                iVar6 = FUN_00482e40(iVar8,0xffffffff,iVar7 + *(int *)(param_1 + 0x34));
                if (iVar6 == 0) {
                  uVar3 = 1;
                  goto LAB_00482da4;
                }
              }
              iVar6 = *(int *)(param_2 + 0x58);
              iVar8 = iVar8 + 1;
              iVar7 = iVar7 + 0x2c;
            } while (iVar8 < (int)(uint)*(ushort *)(iVar6 + 0x60));
          }
        }
      }
      iVar6 = FUN_00482e40(0,0xffffffff,0);
      uVar3 = (uint)(iVar6 == 0);
    }
    else {
      FUN_00482dd0();
    }
  }
LAB_00482da4:
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}

