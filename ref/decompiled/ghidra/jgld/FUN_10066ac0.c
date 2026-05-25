/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10066ac0 @ 0x10066AC0 */


void __fastcall FUN_10066ac0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

