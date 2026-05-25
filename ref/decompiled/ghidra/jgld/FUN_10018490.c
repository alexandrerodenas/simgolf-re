/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10018490 @ 0x10018490 */


void __thiscall
FUN_10018490(void *this,int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6)

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
  local_c = *(undefined4 *)((int)this + 0x10);
  if (param_6 != 0) {
    *(int *)((int)this + 0x10) = param_6;
  }
  local_8 = this;
  thunk_FUN_1002cec0(param_1,param_3,param_4,param_5,param_2);
  local_8 = (void *)0x100184ee;
  __chkesp();
  return;
}

