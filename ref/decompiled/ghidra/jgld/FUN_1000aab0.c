/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1000aab0 @ 0x1000AAB0 */


int __fastcall FUN_1000aab0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x58);
}

