/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a29a0 @ 0x004A29A0 */
/* Body size: 19 addresses */


void __thiscall FUN_004a29a0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x54);
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = param_2;
    puVar2 = puVar2 + 1;
  }
  return;
}

