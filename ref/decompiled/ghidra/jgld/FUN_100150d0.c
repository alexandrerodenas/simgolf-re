/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100150d0 @ 0x100150D0 */


void __thiscall FUN_100150d0(void *this,char param_1,char param_2)

{
  code *pcVar1;
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
  local_c = *(int *)((int)this + 0x20);
  local_8 = this;
  if (local_c == 8) {
    thunk_FUN_1001bae0(this,param_1,param_2);
  }
  else {
    iVar2 = FUN_10081f90(0,0x1011d508,DAT_10122dd0 + 9,0,&DAT_1011d528);
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_8 = (void *)0x10015154;
  __chkesp();
  return;
}

