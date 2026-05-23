/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10067f10 @ 0x10067F10 */
/* Body size: 63 addresses */


void FUN_10067f10(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  undefined4 local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  thunk_FUN_10067f60(param_1);
  local_8 = 0x10067f49;
  __chkesp();
  return;
}

