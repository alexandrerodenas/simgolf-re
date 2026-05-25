/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10037930 @ 0x10037930 */


void __cdecl FUN_10037930(int param_1)

{
  LPCRITICAL_SECTION p_Var1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_44 [15];
  undefined4 uStack_8;
  
  puVar3 = local_44;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if (*(int *)(param_1 + 0x34) < 0) {
    p_Var1 = (LPCRITICAL_SECTION)thunk_FUN_10003f80(param_1);
    FUN_10034a80(p_Var1);
  }
  uStack_8 = 0x1003796f;
  __chkesp();
  return;
}

