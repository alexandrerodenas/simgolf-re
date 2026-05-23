/* Ghidra decompiled: golf.exe */
/* Function: FUN_0045b880 @ 0x0045B880 */
/* Body size: 34 addresses */


void FUN_0045b880(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_0056fcb0;
  for (iVar1 = 0x400; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  puVar2 = (undefined4 *)&DAT_0059d81c;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xffffffff;
    puVar2 = puVar2 + 1;
  }
  return;
}

