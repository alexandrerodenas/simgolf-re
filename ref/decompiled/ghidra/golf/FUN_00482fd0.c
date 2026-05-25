/* Ghidra decompiled: golf.exe */
/* Function: FUN_00482fd0 @ 0x00482FD0 */


void __fastcall FUN_00482fd0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 5;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_004babbc;
  puVar2 = param_1 + 3;
  do {
    puVar2[-1] = 0xffffffff;
    *puVar2 = 0;
    *(undefined1 *)(puVar2 + 1) = 0;
    *(undefined1 *)((int)puVar2 + 5) = 0;
    puVar2[2] = 0;
    puVar2 = puVar2 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  param_1[1] = 0;
  return;
}

