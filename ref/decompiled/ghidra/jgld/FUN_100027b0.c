/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100027b0 @ 0x100027B0 */
/* Body size: 90 addresses */


void __thiscall FUN_100027b0(void *this,LPCSTR param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_5c [16];
  undefined4 local_1c [5];
  void *local_8;
  
  puVar2 = local_5c;
  for (iVar1 = 0x16; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *(undefined ***)this = &PTR_LAB_1011d01c;
  local_8 = this;
  thunk_FUN_10002650(local_1c);
  thunk_FUN_10002820(local_1c);
  thunk_FUN_10002a20(local_8,param_1,0);
  local_8 = (void *)0x10002804;
  __chkesp();
  return;
}

