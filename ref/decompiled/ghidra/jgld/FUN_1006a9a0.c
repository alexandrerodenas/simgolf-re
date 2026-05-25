/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006a9a0 @ 0x1006A9A0 */


void __thiscall FUN_1006a9a0(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_4c [16];
  int local_c;
  void *local_8;
  
  puVar2 = local_4c;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  for (local_c = 0; local_c < param_3; local_c = local_c + 1) {
    *(undefined1 *)((int)this + (local_c + param_2) * 4 + 0xc) =
         *(undefined1 *)(param_1 + local_c * 3);
    *(undefined1 *)((int)this + (local_c + param_2) * 4 + 0xd) =
         *(undefined1 *)(param_1 + 1 + local_c * 3);
    *(undefined1 *)((int)this + (local_c + param_2) * 4 + 0xe) =
         *(undefined1 *)(param_1 + 2 + local_c * 3);
  }
  local_8 = this;
  thunk_FUN_1006a3d0();
  local_8 = (void *)0x1006aa3d;
  __chkesp();
  return;
}

