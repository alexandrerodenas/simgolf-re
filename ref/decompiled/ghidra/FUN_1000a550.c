/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1000a550 @ 0x1000A550 */
/* Body size: 103 addresses */


void __thiscall FUN_1000a550(void *this,uint *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_4c [16];
  int local_c;
  void *local_8;
  
  puVar3 = local_4c;
  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_8 = this;
  (**(code **)(*(int *)this + 0xe4))();
  piVar1 = (int *)__chkesp();
  local_c = *piVar1;
  if (local_c == 8) {
    thunk_FUN_10012140(param_1);
  }
  local_8 = (void *)0x1000a5b1;
  __chkesp();
  return;
}

