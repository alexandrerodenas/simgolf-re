/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10008830 @ 0x10008830 */
/* Body size: 287 addresses */


void __thiscall FUN_10008830(void *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_50 [16];
  int local_10;
  int local_c;
  int *local_8;
  
  puVar2 = local_50;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = this;
  (**(code **)(*(int *)this + 0xd8))();
  iVar1 = __chkesp();
  if (param_1 < iVar1) {
    (**(code **)(*local_8 + 0xdc))();
    iVar1 = __chkesp();
    if (param_2 < iVar1) {
      (**(code **)(*local_8 + 0x10))();
      local_c = __chkesp();
      if (local_c != 0) {
        local_10 = local_8[9] + -8;
        switch(local_8[9]) {
        case 8:
          break;
        default:
          break;
        case 0x10:
          break;
        case 0x18:
          break;
        case 0x20:
        }
      }
    }
  }
  local_8 = (int *)0x10008949;
  __chkesp();
  return;
}

