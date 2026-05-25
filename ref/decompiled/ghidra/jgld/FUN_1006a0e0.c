/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006a0e0 @ 0x1006A0E0 */


void __cdecl FUN_1006a0e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44 [15];
  undefined4 uStack_8;
  
  puVar2 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (DAT_10128728 != (code *)0x0) {
    (*DAT_10128728)(param_2,param_3);
    __chkesp();
  }
  uStack_8 = 0x1006a12c;
  __chkesp();
  return;
}

