/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10067e40 @ 0x10067E40 */


void FUN_10067e40(void)

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
  thunk_FUN_10068fa0();
  local_8 = 0x10067e6f;
  __chkesp();
  return;
}

