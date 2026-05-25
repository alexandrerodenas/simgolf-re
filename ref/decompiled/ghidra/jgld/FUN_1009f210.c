/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1009f210 @ 0x1009F210 */


undefined * __cdecl FUN_1009f210(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44 [16];
  
  puVar2 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *param_1 = *param_1 - param_2;
  return &DAT_10128af0 + *param_1 * 8;
}

