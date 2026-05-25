/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10004420 @ 0x10004420 */


undefined4 __thiscall FUN_10004420(void *this,int *param_1,uint param_2)

{
  int iVar1;
  RECT *lprcSrc2;
  BOOL BVar2;
  undefined2 *puVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBX;
  uint uVar6;
  int unaff_EBP;
  int *piVar7;
  bool bVar8;
  undefined2 unaff_retaddr;
  RECT RStack_10;
  
  if (((param_2 & 0x80000000) == 0) &&
     ((piVar7 = *(int **)((int)this + 0x7c), piVar7 != (int *)0x0 ||
      ((DAT_10057d9c != 0 && (piVar7 = *(int **)(DAT_10057d9c + 4), piVar7 != (int *)0x0)))))) {
    iVar1 = (**(code **)(*(int *)this + 0xe4))();
    if (*(int *)(iVar1 + 4) == 0) {
      (**(code **)(*piVar7 + 0x18))();
    }
    else {
      if (*(int *)(iVar1 + 4) != 1) {
        return 0x18;
      }
      (**(code **)(*piVar7 + 0x1c))();
    }
  }
  if (param_1 == (int *)0x0) {
    param_1 = (int *)(**(code **)(*(int *)this + 0xd4))();
    RStack_10.left = *param_1;
    RStack_10.top = param_1[1];
    RStack_10.right = param_1[2];
  }
  else {
    RStack_10.left = *param_1;
    RStack_10.top = param_1[1];
    RStack_10.right = param_1[2];
  }
  RStack_10.bottom = param_1[3];
  lprcSrc2 = (RECT *)(**(code **)(*(int *)this + 0xcc))();
  BVar2 = IntersectRect(&RStack_10,&RStack_10,lprcSrc2);
  if ((BVar2 != 0) &&
     (puVar3 = (undefined2 *)(**(code **)(*(int *)this + 0x1c))(RStack_10.left,RStack_10.top),
     puVar3 != (undefined2 *)0x0)) {
    uVar6 = RStack_10.top - unaff_EBX;
    iVar1 = RStack_10.left - unaff_EBP;
    while (uVar6 != 0) {
      uVar6 = uVar6 - 1;
      uVar5 = uVar6 & 0x80000001;
      bVar8 = uVar5 == 0;
      if ((int)uVar5 < 0) {
        bVar8 = (uVar5 - 1 | 0xfffffffe) == 0xffffffff;
      }
      iVar4 = iVar1;
      if (!bVar8) {
        puVar3 = puVar3 + 1;
        iVar4 = iVar1 + -1;
      }
      RStack_10.bottom = (LONG)!bVar8;
      if (0 < iVar4) {
        uVar5 = iVar4 + 1U >> 1;
        do {
          *puVar3 = unaff_retaddr;
          puVar3 = puVar3 + 2;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      iVar4 = (**(code **)(*(int *)this + 0xe0))();
      puVar3 = puVar3 + ((iVar4 - RStack_10.bottom) - iVar1);
    }
    (**(code **)(*(int *)this + 0x24))(1);
    return 0;
  }
  return 0;
}

