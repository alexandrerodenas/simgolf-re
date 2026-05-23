/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10014a40 @ 0x10014A40 */
/* Body size: 53 addresses */


void __cdecl FUN_10014a40(size_t param_1)

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
  _malloc(param_1);
  uStack_8 = 0x10014a71;
  __chkesp();
  return;
}

