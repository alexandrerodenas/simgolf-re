/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10008ae0 @ 0x10008AE0 */


void __thiscall FUN_10008ae0(void *this,int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_50 [16];
  HDC local_10;
  int local_c;
  int *local_8;
  
  puVar2 = local_50;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = this;
  (**(code **)(*(int *)this + 0x28))();
  local_10 = (HDC)__chkesp();
  local_c = *param_1;
  SelectObject(local_10,*(HGDIOBJ *)(local_c + 0x18));
  __chkesp();
  (**(code **)(*local_8 + 0x2c))(1);
  __chkesp();
  local_c = 0x10008b5b;
  __chkesp();
  return;
}

