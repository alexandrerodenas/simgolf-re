/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10078940 @ 0x10078940 */


void __cdecl FUN_10078940(void *param_1)

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
  _memset(param_1,0,0xb8);
  uStack_8 = 0x10078978;
  __chkesp();
  return;
}

