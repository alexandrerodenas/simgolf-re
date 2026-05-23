/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006e210 @ 0x1006E210 */
/* Body size: 58 addresses */


void __cdecl FUN_1006e210(int param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44 [16];
  
  puVar2 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0x60) = param_2;
  *(undefined1 *)(param_1 + 100) = param_3;
  *(undefined1 *)(param_1 + 0x65) = param_4;
  return;
}

