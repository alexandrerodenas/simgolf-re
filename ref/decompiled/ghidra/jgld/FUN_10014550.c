/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10014550 @ 0x10014550 */


void __cdecl FUN_10014550(undefined4 param_1,LPCSTR param_2)

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
  OutputDebugStringA(param_2);
  __chkesp();
  uStack_8 = 0x10014588;
  __chkesp();
  return;
}

