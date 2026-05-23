/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10069a70 @ 0x10069A70 */
/* Body size: 61 addresses */


void __cdecl FUN_10069a70(HWND param_1,HWND param_2)

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
  if (param_1 != param_2) {
    thunk_FUN_100699c0(param_1);
  }
  uStack_8 = 0x10069aa9;
  __chkesp();
  return;
}

