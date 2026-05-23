/* Ghidra decompiled: golf.exe */
/* Function: FUN_00485790 @ 0x00485790 */
/* Body size: 781 addresses */


int FUN_00485790(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  undefined4 *unaff_FS_OFFSET;
  undefined4 uStack_3a4;
  byte *pbStack_3a0;
  int local_39c;
  int local_398;
  void *pvStack_394;
  int local_390;
  char local_38c;
  byte local_38b;
  char local_38a;
  byte bStack_389;
  undefined2 local_388;
  undefined1 uStack_386;
  undefined1 uStack_385;
  ushort local_384;
  ushort uStack_382;
  uint local_34b;
  undefined1 uStack_30c;
  undefined1 auStack_30b [767];
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b7e8e;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  FUN_004a63a1(&local_38c,0x80,1,param_1);
  if (((local_38c == '\n') && (local_38a == '\x01')) && (3 < local_38b)) {
    iVar6 = ((uint)uStack_382 - (uint)CONCAT11(uStack_385,uStack_386)) + 1;
    iVar2 = FUN_00474e70(((uint)local_384 - (CONCAT12(uStack_386,local_388) & 0xffff)) + 1,iVar6,8);
    if (iVar2 != 0) goto LAB_00485a82;
    if ((1 << (bStack_389 & 0x1f)) * (local_34b & 0xff) == 0x100) {
      local_390 = 0;
      iVar2 = (int)(8 / (ulonglong)(longlong)(int)(uint)bStack_389) * (local_34b >> 8 & 0xffff) *
              (local_34b & 0xff);
      iVar6 = iVar2 * iVar6;
      if ((*(int **)(local_398 + 4) == (int *)0x0) ||
         (local_39c = iVar6, pbStack_3a0 = (byte *)(**(code **)(**(int **)(local_398 + 4) + 0x18))()
         , pbStack_3a0 == (byte *)0x0)) {
        iVar2 = 7;
      }
      else {
        while (iVar6 != 0) {
          FUN_004a63a1(&uStack_3a4,1,1,param_1);
          bVar1 = (byte)uStack_3a4;
          if ((bVar1 & 0xc0) == 0xc0) {
            pvStack_394 = (void *)(CONCAT31(pvStack_394._1_3_,bVar1) & 0xffffff3f);
            FUN_004a63a1(&uStack_3a4,1,1,param_1);
            bVar1 = (byte)uStack_3a4;
          }
          else {
            pvStack_394 = (void *)CONCAT31(pvStack_394._1_3_,1);
          }
          uVar7 = (uint)pvStack_394 & 0xff;
          pbVar9 = pbStack_3a0;
          for (uVar4 = uVar7 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(uint *)pbVar9 = CONCAT22(CONCAT11(bVar1,bVar1),CONCAT11(bVar1,bVar1));
            pbVar9 = pbVar9 + 4;
          }
          iVar5 = local_390 + uVar7;
          for (uVar4 = (uint)pvStack_394 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *pbVar9 = bVar1;
            pbVar9 = pbVar9 + 1;
          }
          pbStack_3a0 = pbStack_3a0 + uVar7;
          local_39c = local_39c - uVar7;
          local_390 = iVar5;
          iVar6 = local_39c;
          if (iVar2 <= iVar5) {
            if (*(int **)(local_398 + 4) == (int *)0x0) {
              iVar6 = 0;
            }
            else {
              iVar6 = (**(code **)(**(int **)(local_398 + 4) + 0xe0))();
            }
            pbStack_3a0 = pbStack_3a0 + (iVar6 - iVar5);
            local_39c = local_39c + (iVar5 - iVar2);
            local_390 = 0;
            iVar6 = local_39c;
          }
        }
        if (*(int **)(local_398 + 4) != (int *)0x0) {
          (**(code **)(**(int **)(local_398 + 4) + 0x24))(1);
        }
        FUN_004a63a1(&uStack_3a4,1,1,param_1);
        puVar8 = auStack_30b;
        iVar6 = 0x100;
        do {
          FUN_004a63a1(&uStack_3a4,1,1,param_1);
          puVar8[-1] = (undefined1)uStack_3a4;
          FUN_004a63a1(&uStack_3a4,1,1,param_1);
          *puVar8 = (undefined1)uStack_3a4;
          FUN_004a63a1(&uStack_3a4,1,1,param_1);
          puVar8[1] = (undefined1)uStack_3a4;
          puVar8 = puVar8 + 3;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        pvStack_394 = operator_new(0x58);
        uStack_4 = 0;
        if (pvStack_394 == (void *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puVar3 = (undefined4 *)FUN_00482fd0();
        }
        uStack_4 = 0xffffffff;
        *(undefined4 **)(local_398 + 0xac) = puVar3;
        if (puVar3[1] == 0) {
          (**(code **)*puVar3)();
        }
        (**(code **)(*(int *)puVar3[1] + 0x14))(&uStack_30c,0,0x100);
        FUN_004789f0(*(undefined4 *)(local_398 + 0xac));
        iVar2 = 0;
      }
      goto LAB_00485a82;
    }
  }
  iVar2 = 3;
LAB_00485a82:
  *unaff_FS_OFFSET = local_c;
  return iVar2;
}

