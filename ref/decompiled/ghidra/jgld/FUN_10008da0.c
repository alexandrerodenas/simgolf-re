/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10008da0 @ 0x10008DA0 */


void __thiscall FUN_10008da0(void *this,int param_1,int param_2,LPCSTR param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_4c [16];
  HDC local_c;
  int *local_8;
  
  puVar2 = local_4c;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = this;
  (**(code **)(*(int *)this + 0x28))();
  local_c = (HDC)__chkesp();
  TextOutA(local_c,param_1,param_2,param_3,param_4);
  __chkesp();
  (**(code **)(*local_8 + 0x2c))(1);
  __chkesp();
  local_c = (HDC)0x10008e1c;
  __chkesp();
  return;
}

