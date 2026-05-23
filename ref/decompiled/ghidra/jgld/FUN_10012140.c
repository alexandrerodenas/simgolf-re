/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10012140 @ 0x10012140 */
/* Body size: 1586 addresses */


void FUN_10012140(uint *param_1)

{
  byte *pbVar1;
  size_t sVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 local_464 [16];
  undefined4 local_424;
  undefined4 local_420;
  undefined4 local_41c;
  byte local_418 [768];
  int *local_118;
  uint *local_114;
  uint local_110;
  uint local_10c [20];
  int local_bc;
  int local_b8;
  byte *local_b4;
  uint local_b0;
  uint local_ac;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined1 local_a6;
  undefined1 local_a5;
  undefined2 local_a4;
  undefined2 local_a2;
  short local_a0;
  short local_9e;
  undefined2 local_9c;
  undefined2 local_9a;
  undefined1 local_68;
  undefined1 local_67;
  undefined2 local_66;
  undefined2 local_64;
  undefined2 local_62;
  undefined2 local_60;
  undefined4 local_28 [5];
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_100aef09;
  local_10 = ExceptionList;
  puVar7 = local_464;
  for (iVar6 = 0x115; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = 0xcccccccc;
    puVar7 = puVar7 + 1;
  }
  ExceptionList = &local_10;
  thunk_FUN_10002650(local_28);
  local_8 = 0;
  local_10c[0]._0_1_ = 0;
  FUN_1007f770(local_10c,param_1);
  sVar2 = _strlen((char *)local_10c);
  for (local_114 = (uint *)((int)local_10c + sVar2);
      (local_10c < local_114 && ((char)*local_114 != '.'));
      local_114 = (uint *)((int)local_114 + -1)) {
  }
  if ((char)*local_114 == '.') {
    *(char *)local_114 = '\0';
    FUN_1007f770(local_10c,(uint *)&DAT_1011d354);
  }
  (**(code **)(*local_14 + 0x18))();
  local_b8 = __chkesp();
  if (local_b8 == 0) {
    local_41c = 7;
    local_8 = 0xffffffff;
    thunk_FUN_10002820(local_28);
  }
  else {
    iVar8 = 1;
    (**(code **)(*local_14 + 0xd8))();
    iVar6 = __chkesp();
    (**(code **)(*local_14 + 0xdc))();
    iVar3 = __chkesp();
    local_b4 = (byte *)thunk_FUN_10002bd0(local_28,(LPCSTR)local_10c,iVar6 * iVar3 * 2 + 0x80,iVar8)
    ;
    if (local_b4 == (byte *)0x0) {
      (**(code **)(*local_14 + 0x24))(1);
      __chkesp();
      local_420 = 4;
      local_8 = 0xffffffff;
      thunk_FUN_10002820(local_28);
    }
    else {
      local_a8 = 10;
      local_a7 = 5;
      local_a6 = 1;
      local_a5 = 8;
      local_a4 = 0;
      local_a2 = 0;
      (**(code **)(*local_14 + 0xd8))();
      uVar4 = __chkesp();
      local_a0 = (short)uVar4 + -1;
      (**(code **)(*local_14 + 0xdc))();
      uVar4 = __chkesp();
      local_9e = (short)uVar4 + -1;
      local_9c = 0;
      local_9a = 0;
      local_68 = 0;
      local_67 = 1;
      (**(code **)(*local_14 + 0xe0))();
      uVar4 = __chkesp();
      local_66 = (undefined2)uVar4;
      local_64 = 0;
      local_62 = 0;
      local_60 = 0;
      FUN_1007f3a0((undefined4 *)local_b4,(undefined4 *)&local_a8,0x80);
      local_b4 = local_b4 + 0x80;
      (**(code **)(*local_14 + 0xdc))();
      for (local_bc = __chkesp(); 0 < local_bc; local_bc = local_bc + -1) {
        local_110 = 0;
        while( true ) {
          (**(code **)(*local_14 + 0xe0))();
          uVar5 = __chkesp();
          if (uVar5 <= local_110) break;
          local_ac = CONCAT31(local_ac._1_3_,1);
          local_b0 = CONCAT31(local_b0._1_3_,*(undefined1 *)(local_b8 + local_110));
          while( true ) {
            uVar5 = local_110 + (local_ac & 0xff);
            (**(code **)(*local_14 + 0xe0))();
            iVar6 = __chkesp();
            if (((iVar6 - 1U <= uVar5) ||
                ((local_b0 & 0xff) != (uint)*(byte *)(local_b8 + local_110 + (local_ac & 0xff)))) ||
               (0x3e < (local_ac & 0xff))) break;
            local_ac = CONCAT31(local_ac._1_3_,(byte)local_ac + 1);
          }
          if ((local_ac & 0xff) < 2) {
            if (*(byte *)(local_b8 + local_110) < 0x40) {
              *local_b4 = (byte)local_b0;
              local_b4 = local_b4 + 1;
            }
            else {
              *local_b4 = (byte)local_ac | 0xc0;
              local_b4[1] = (byte)local_b0;
              local_b4 = local_b4 + 2;
            }
          }
          else {
            *local_b4 = (byte)local_ac | 0xc0;
            local_b4[1] = (byte)local_b0;
            local_b4 = local_b4 + 2;
          }
          local_110 = local_110 + (local_ac & 0xff);
        }
        (**(code **)(*local_14 + 0xe0))();
        iVar6 = __chkesp();
        local_b8 = local_b8 + iVar6;
      }
      *local_b4 = 0xc;
      local_b4 = local_b4 + 1;
      if (local_14[0x1f] == 0) {
        local_118 = *(int **)(DAT_1012873c + 4);
      }
      else {
        local_118 = (int *)local_14[0x1f];
      }
      if (local_118 != (int *)0x0) {
        (**(code **)(*local_118 + 0x10))(local_418,0,0x100);
        iVar6 = __chkesp();
        if (iVar6 == 0) {
          for (local_bc = 0; pbVar1 = local_b4, local_bc < 0x100; local_bc = local_bc + 1) {
            *local_b4 = local_418[local_bc * 3];
            local_b4 = local_b4 + 1;
            *local_b4 = local_418[local_bc * 3 + 1];
            local_b4 = pbVar1 + 2;
            *local_b4 = local_418[local_bc * 3 + 2];
            local_b4 = pbVar1 + 3;
          }
        }
      }
      (**(code **)(*local_14 + 0x24))(1);
      __chkesp();
      thunk_FUN_10002ef0(local_28,(uint)local_b4);
      local_424 = 0;
      local_8 = 0xffffffff;
      thunk_FUN_10002820(local_28);
    }
  }
  ExceptionList = local_10;
  local_8 = 0x1001276c;
  __chkesp();
  return;
}

