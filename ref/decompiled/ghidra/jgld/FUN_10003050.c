/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10003050 @ 0x10003050 */
/* Body size: 73 addresses */


void __fastcall FUN_10003050(void *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  void *local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = param_1;
  thunk_FUN_100036e0(param_1,0,0,0);
  *(undefined4 *)((int)local_8 + 0xc) = 0x3f800000;
  local_8 = (void *)0x10003095;
  __chkesp();
  return;
}

