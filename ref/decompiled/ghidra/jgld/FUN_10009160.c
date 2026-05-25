/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10009160 @ 0x10009160 */


int __cdecl FUN_10009160(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44 [16];
  
  puVar2 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4);
}

