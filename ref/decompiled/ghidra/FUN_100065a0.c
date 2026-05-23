/* Ghidra decompiled: jgl.dll */
/* Function: FUN_100065a0 @ 0x100065A0 */
/* Body size: 250 addresses */


undefined4 __thiscall FUN_100065a0(void *this,int *param_1,undefined1 param_2)

{
  RECT *lprcSrc2;
  BOOL BVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  RECT local_20;
  undefined1 *local_10;
  uint local_c;
  uint local_8;
  
  if (param_1 == (int *)0x0) {
    param_1 = (int *)(**(code **)(*(int *)this + 0xd4))();
  }
  local_20.left = *param_1;
  local_20.top = param_1[1];
  local_20.right = param_1[2];
  local_20.bottom = param_1[3];
  lprcSrc2 = (RECT *)(**(code **)(*(int *)this + 0xcc))();
  BVar1 = IntersectRect(&local_20,&local_20,lprcSrc2);
  if ((BVar1 != 0) &&
     (local_10 = (undefined1 *)(**(code **)(*(int *)this + 0x14))(local_20.left,local_20.top),
     local_10 != (undefined1 *)0x0)) {
    local_c = local_20.bottom - local_20.top;
    uVar5 = local_20.right - local_20.left;
    local_8 = uVar5;
    iVar2 = (**(code **)(*(int *)this + 0xe0))();
    uVar4 = local_c;
    puVar6 = local_10;
    do {
      if ((uVar4 & 1) != 0) {
        puVar6 = puVar6 + 1;
      }
      for (uVar3 = local_8 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar6 = param_2;
        puVar6 = puVar6 + 2;
      }
      if ((uVar4 & 1) == 0) {
        if ((local_8 & 1) != 0) {
          *puVar6 = param_2;
          puVar6 = puVar6 + 1;
        }
      }
      else if ((local_8 & 1) == 0) {
        puVar6 = puVar6 + -1;
      }
      puVar6 = puVar6 + (iVar2 - uVar5);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    (**(code **)(*(int *)this + 0x24))(1);
  }
  return 0;
}

