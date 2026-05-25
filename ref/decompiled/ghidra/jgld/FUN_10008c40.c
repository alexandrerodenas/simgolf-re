/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10008c40 @ 0x10008C40 */


void __thiscall FUN_10008c40(void *this,uint param_1,uint param_2,uint param_3)

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
  SetTextColor(local_c,param_1 & 0xff | (param_2 & 0xff) << 8 | (param_3 & 0xff) << 0x10);
  __chkesp();
  (**(code **)(*local_8 + 0x2c))(1);
  __chkesp();
  local_c = (HDC)0x10008cd1;
  __chkesp();
  return;
}

