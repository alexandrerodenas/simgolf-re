/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10068610 @ 0x10068610 */
/* Body size: 56 addresses */


void __fastcall FUN_10068610(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  int local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = param_1;
  thunk_FUN_10068360(param_1);
  local_8 = 0x10068644;
  __chkesp();
  return;
}

