/* Ghidra decompiled: jgl.dll */
/* Function: FUN_100064b0 @ 0x100064B0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 __thiscall FUN_100064b0(void *this,int *param_1,undefined2 param_2)

{
  RECT *lprcSrc2;
  BOOL BVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  RECT local_20;
  int *local_10;
  undefined4 *local_c;
  uint local_8;
  
  local_10 = this;
  if (param_1 != (int *)0x0) {
    local_20.left = *param_1;
    local_20.top = param_1[1];
    local_20.right = param_1[2];
    local_20.bottom = param_1[3];
    lprcSrc2 = (RECT *)(**(code **)(*(int *)this + 0xcc))();
    BVar1 = IntersectRect(&local_20,&local_20,lprcSrc2);
    if ((BVar1 != 0) &&
       (local_c = (undefined4 *)(**(code **)(*(int *)this + 0x14))(local_20.left,local_20.top),
       local_c != (undefined4 *)0x0)) {
      iVar2 = local_20.bottom - local_20.top;
      uVar4 = local_20.right - local_20.left;
      local_8 = uVar4;
      _DAT_10057b58 = (**(code **)(*(int *)this + 0xe0))();
      _DAT_10057b58 = _DAT_10057b58 - uVar4;
      uVar4 = local_8 >> 2;
      puVar5 = local_c;
      do {
        for (; uVar3 = local_8 & 3, uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar5 = CONCAT22(CONCAT11((undefined1)param_2,(undefined1)param_2),
                             CONCAT11((undefined1)param_2,(undefined1)param_2));
          puVar5 = puVar5 + 1;
        }
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined1 *)puVar5 = (undefined1)param_2;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
        }
        puVar5 = (undefined4 *)((int)puVar5 + _DAT_10057b58);
        iVar2 = iVar2 + -1;
        uVar4 = local_8 >> 2;
      } while (iVar2 != 0);
      (**(code **)(*local_10 + 0x24))(1);
    }
    return 0;
  }
  FUN_100063f0(this,param_2);
  return 0;
}

