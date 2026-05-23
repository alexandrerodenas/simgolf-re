/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1009e680 @ 0x1009E680 */
/* Body size: 77 addresses */


void __cdecl FUN_1009e680(int param_1,size_t param_2,size_t param_3)

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
  _calloc(param_2,param_3);
  uStack_8 = 0x1009e6c9;
  __chkesp();
  return;
}

