/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10011f80 @ 0x10011F80 */


void __thiscall FUN_10011f80(void *this,int *param_1,undefined1 param_2)

{
  RECT *pRVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined4 local_68 [16];
  RECT local_28;
  uint local_18;
  uint local_14;
  int local_10;
  undefined1 *local_c;
  int *local_8;
  
  puVar5 = local_68;
  for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = 0xcccccccc;
    puVar5 = puVar5 + 1;
  }
  local_c = (undefined1 *)0x0;
  local_8 = this;
  if (param_1 == (int *)0x0) {
    (**(code **)(*(int *)this + 0xd4))();
    param_1 = (int *)__chkesp();
  }
  local_28.left = *param_1;
  local_28.top = param_1[1];
  local_28.right = param_1[2];
  local_28.bottom = param_1[3];
  (**(code **)(*local_8 + 0xcc))();
  pRVar1 = (RECT *)__chkesp();
  iVar2 = thunk_FUN_10008590(&local_28,&local_28,pRVar1);
  if (iVar2 != 0) {
    (**(code **)(*local_8 + 0x14))((short)local_28.left,(short)local_28.top);
    local_c = (undefined1 *)__chkesp();
    if (local_c != (undefined1 *)0x0) {
      local_14 = local_28.bottom - local_28.top;
      local_18 = local_28.right - local_28.left;
      (**(code **)(*local_8 + 0xe0))();
      local_10 = __chkesp();
      local_10 = local_10 - local_18;
      uVar4 = local_14;
      puVar6 = local_c;
      do {
        if ((uVar4 & 1) != 0) {
          puVar6 = puVar6 + 1;
        }
        for (uVar3 = local_18 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar6 = param_2;
          puVar6 = puVar6 + 2;
        }
        if ((uVar4 & 1) == 0) {
          if ((local_18 & 1) != 0) {
            *puVar6 = param_2;
            puVar6 = puVar6 + 1;
          }
        }
        else if ((local_18 & 1) == 0) {
          puVar6 = puVar6 + -1;
        }
        puVar6 = puVar6 + local_10;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      (**(code **)(*local_8 + 0x24))(1);
      __chkesp();
    }
  }
  local_8 = (int *)0x100120e0;
  __chkesp();
  return;
}

