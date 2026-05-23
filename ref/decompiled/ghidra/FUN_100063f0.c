/* Ghidra decompiled: jgl.dll */
/* Function: FUN_100063f0 @ 0x100063F0 */
/* Body size: 189 addresses */


void __thiscall FUN_100063f0(void *this,undefined2 param_1)

{
  undefined2 uVar1;
  RECT *lprc2;
  RECT *lprc1;
  BOOL BVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  lprc2 = (RECT *)(**(code **)(*(int *)this + 0xd4))();
  lprc1 = (RECT *)(**(code **)(*(int *)this + 0xcc))();
  BVar2 = EqualRect(lprc1,lprc2);
  if (BVar2 == 0) {
    iVar4 = *(int *)this;
    uVar1 = (**(code **)(iVar4 + 0xcc))(param_1);
    (**(code **)(iVar4 + 0x44))(uVar1);
    return;
  }
  puVar3 = (undefined4 *)(**(code **)(*(int *)this + 0x18))();
  iVar4 = (**(code **)(*(int *)this + 0xd4))();
  iVar4 = *(int *)(iVar4 + 0xc);
  iVar5 = (**(code **)(*(int *)this + 0xd4))();
  for (iVar4 = ((*(uint *)(iVar5 + 8) >> 2) + (uint)((*(uint *)(iVar5 + 8) & 3) != 0)) * iVar4;
      iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar3 = CONCAT22(CONCAT11((undefined1)param_1,(undefined1)param_1),
                       CONCAT11((undefined1)param_1,(undefined1)param_1));
    puVar3 = puVar3 + 1;
  }
  (**(code **)(*(int *)this + 0x24))(1);
  return;
}

