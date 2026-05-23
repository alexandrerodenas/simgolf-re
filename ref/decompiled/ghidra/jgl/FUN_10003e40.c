/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10003e40 @ 0x10003E40 */
/* Body size: 218 addresses */


void __thiscall FUN_10003e40(void *this,uint param_1)

{
  int iVar1;
  RECT *lprc2;
  RECT *lprc1;
  BOOL BVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  
  if (((param_1 & 0x80000000) == 0) &&
     ((piVar6 = *(int **)((int)this + 0x7c), piVar6 != (int *)0x0 ||
      ((DAT_10057d9c != 0 && (piVar6 = *(int **)(DAT_10057d9c + 4), piVar6 != (int *)0x0)))))) {
    iVar1 = (**(code **)(*(int *)this + 0xe4))();
    if (*(int *)(iVar1 + 4) == 0) {
      iVar1 = (**(code **)(*piVar6 + 0x18))();
    }
    else {
      if (*(int *)(iVar1 + 4) != 1) {
        return;
      }
      iVar1 = (**(code **)(*piVar6 + 0x1c))();
    }
    param_1 = (uint)*(ushort *)(iVar1 + (param_1 & 0xff) * 2);
  }
  lprc2 = (RECT *)(**(code **)(*(int *)this + 0xd4))();
  lprc1 = (RECT *)(**(code **)(*(int *)this + 0xcc))();
  BVar2 = EqualRect(lprc1,lprc2);
  if (BVar2 != 0) {
    puVar4 = (undefined4 *)(**(code **)(*(int *)this + 0x20))();
    iVar1 = (**(code **)(*(int *)this + 0xd4))();
    iVar1 = *(int *)(iVar1 + 0xc);
    iVar5 = (**(code **)(*(int *)this + 0xd4))();
    FUN_10002760(puVar4,(short)param_1,*(int *)(iVar5 + 8) * iVar1);
    (**(code **)(*(int *)this + 0x24))(1);
    return;
  }
  iVar1 = *(int *)this;
  uVar3 = (**(code **)(iVar1 + 0xcc))(param_1);
  (**(code **)(iVar1 + 0x44))(uVar3);
  return;
}

