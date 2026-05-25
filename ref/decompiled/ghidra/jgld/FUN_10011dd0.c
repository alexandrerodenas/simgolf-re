/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10011dd0 @ 0x10011DD0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall FUN_10011dd0(void *this,int *param_1,undefined2 param_2)

{
  RECT *pRVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 local_64 [16];
  undefined4 *local_24;
  RECT local_20;
  uint local_10;
  int local_c;
  int *local_8;
  
  puVar5 = local_64;
  for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = 0xcccccccc;
    puVar5 = puVar5 + 1;
  }
  local_24 = (undefined4 *)0x0;
  local_8 = this;
  if (param_1 == (int *)0x0) {
    thunk_FUN_10011c40(this,param_2);
  }
  else {
    local_20.left = *param_1;
    local_20.top = param_1[1];
    local_20.right = param_1[2];
    local_20.bottom = param_1[3];
    (**(code **)(*(int *)this + 0xcc))();
    pRVar1 = (RECT *)__chkesp();
    iVar2 = thunk_FUN_10008590(&local_20,&local_20,pRVar1);
    if (iVar2 != 0) {
      (**(code **)(*local_8 + 0x14))((short)local_20.left,(short)local_20.top);
      local_24 = (undefined4 *)__chkesp();
      if (local_24 != (undefined4 *)0x0) {
        local_c = local_20.bottom - local_20.top;
        local_10 = local_20.right - local_20.left;
        (**(code **)(*local_8 + 0xe0))();
        _DAT_1012847c = __chkesp();
        _DAT_1012847c = _DAT_1012847c - local_10;
        uVar3 = local_10 >> 2;
        puVar5 = local_24;
        iVar2 = local_c;
        do {
          for (; uVar4 = local_10 & 3, uVar3 != 0; uVar3 = uVar3 - 1) {
            *puVar5 = CONCAT22(CONCAT11((undefined1)param_2,(undefined1)param_2),
                               CONCAT11((undefined1)param_2,(undefined1)param_2));
            puVar5 = puVar5 + 1;
          }
          for (; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined1 *)puVar5 = (undefined1)param_2;
            puVar5 = (undefined4 *)((int)puVar5 + 1);
          }
          puVar5 = (undefined4 *)((int)puVar5 + _DAT_1012847c);
          iVar2 = iVar2 + -1;
          uVar3 = local_10 >> 2;
        } while (iVar2 != 0);
        (**(code **)(*local_8 + 0x24))(1);
        __chkesp();
      }
    }
  }
  local_8 = (int *)0x10011f19;
  __chkesp();
  return;
}

