/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10066470 @ 0x10066470 */


void __thiscall FUN_10066470(void *this,RECT *param_1)

{
  int *piVar1;
  int iVar2;
  RECT *pRVar3;
  int iVar4;
  undefined4 *puVar5;
  HDC pHVar6;
  int x1;
  LONG x1_00;
  int y1;
  LONG y1_00;
  DWORD DVar7;
  undefined4 local_60 [16];
  tagRECT local_20;
  int *local_10;
  HDC local_c;
  void *local_8;
  
  puVar5 = local_60;
  for (iVar4 = 0x17; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0xcccccccc;
    puVar5 = puVar5 + 1;
  }
  local_10 = *(int **)(*(int *)((int)this + 0x148) + 4);
  local_8 = this;
  (**(code **)(*local_10 + 0x28))();
  local_c = (HDC)__chkesp();
  (**(code **)(*local_10 + 0xec))(*(undefined4 *)(DAT_1012873c + 4));
  __chkesp();
  if (param_1 == (RECT *)0x0) {
    DVar7 = 0xcc0020;
    y1 = 0;
    x1 = 0;
    pHVar6 = local_c;
    (**(code **)(*local_10 + 0xd4))();
    iVar4 = __chkesp();
    iVar4 = thunk_FUN_10009160(iVar4);
    (**(code **)(*local_10 + 0xd4))();
    piVar1 = (int *)__chkesp();
    iVar2 = thunk_FUN_10009120(piVar1);
    BitBlt(*(HDC *)((int)local_8 + 0x138),0,0,iVar2,iVar4,pHVar6,x1,y1,DVar7);
    __chkesp();
  }
  else {
    (**(code **)(*local_10 + 0xd4))();
    pRVar3 = (RECT *)__chkesp();
    iVar4 = thunk_FUN_10008590(&local_20,param_1,pRVar3);
    if (iVar4 != 0) {
      DVar7 = 0xcc0020;
      pHVar6 = local_c;
      x1_00 = local_20.left;
      y1_00 = local_20.top;
      iVar4 = thunk_FUN_10009160((int)&local_20);
      iVar2 = thunk_FUN_10009120(&local_20.left);
      BitBlt(*(HDC *)((int)local_8 + 0x138),local_20.left,local_20.top,iVar2,iVar4,pHVar6,x1_00,
             y1_00,DVar7);
      __chkesp();
    }
  }
  (**(code **)(*local_10 + 0x2c))(1);
  __chkesp();
  local_10 = (int *)0x100665e4;
  __chkesp();
  return;
}

