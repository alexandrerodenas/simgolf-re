/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10018510 @ 0x10018510 */


void __thiscall
FUN_10018510(void *this,int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8,int param_9)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_4c [16];
  undefined4 local_c;
  void *local_8;
  
  puVar2 = local_4c;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (param_5 == param_6) {
    local_c = *(undefined4 *)((int)this + 0x10);
    if (param_9 != 0) {
      *(int *)((int)this + 0x10) = param_9;
    }
    local_8 = this;
    thunk_FUN_1002d390(param_1,param_3,param_4,param_5,param_7,param_8,param_2);
  }
  local_8 = (void *)0x10018585;
  __chkesp();
  return;
}

