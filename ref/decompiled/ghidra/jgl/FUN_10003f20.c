/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10003f20 @ 0x10003F20 */
/* Body size: 341 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_10003f20(void *this,int *param_1,uint param_2)

{
  int iVar1;
  RECT *lprcSrc2;
  BOOL BVar2;
  undefined4 *puVar3;
  int iVar4;
  int unaff_EBX;
  uint uVar5;
  int unaff_EBP;
  int *piVar6;
  undefined2 unaff_retaddr;
  RECT local_10;
  
  if (param_1 == (int *)0x0) {
    FUN_10003e40(this,param_2);
    return 0;
  }
  if (((param_2 & 0x80000000) == 0) &&
     ((piVar6 = *(int **)((int)this + 0x7c), piVar6 != (int *)0x0 ||
      ((DAT_10057d9c != 0 && (piVar6 = *(int **)(DAT_10057d9c + 4), piVar6 != (int *)0x0)))))) {
    iVar1 = (**(code **)(*(int *)this + 0xe4))();
    if (*(int *)(iVar1 + 4) == 0) {
      (**(code **)(*piVar6 + 0x18))();
    }
    else {
      if (*(int *)(iVar1 + 4) != 1) {
        return 0x18;
      }
      (**(code **)(*piVar6 + 0x1c))();
    }
  }
  local_10.left = *param_1;
  local_10.top = param_1[1];
  local_10.right = param_1[2];
  local_10.bottom = param_1[3];
  lprcSrc2 = (RECT *)(**(code **)(*(int *)this + 0xcc))();
  BVar2 = IntersectRect(&local_10,&local_10,lprcSrc2);
  if ((BVar2 != 0) &&
     (puVar3 = (undefined4 *)(**(code **)(*(int *)this + 0x1c))(local_10.left,local_10.top),
     puVar3 != (undefined4 *)0x0)) {
    uVar5 = local_10.left - unaff_EBP;
    iVar1 = local_10.top - unaff_EBX;
    iVar4 = (**(code **)(*(int *)this + 0xe0))();
    _DAT_10057b3c = (iVar4 + uVar5 * 0x7fffffff) * 2;
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      FUN_10002760(puVar3,unaff_retaddr,uVar5);
      iVar4 = (**(code **)(*(int *)this + 0xe0))();
      puVar3 = (undefined4 *)((int)puVar3 + iVar4 * 2);
    }
    (**(code **)(*(int *)this + 0x24))(1);
  }
  return 0;
}

