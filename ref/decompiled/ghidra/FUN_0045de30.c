/* Ghidra decompiled: golf.exe */
/* Function: FUN_0045de30 @ 0x0045DE30 */
/* Body size: 70 addresses */


void FUN_0045de30(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = &DAT_005794b8 + param_1 * 0x40;
  puVar3 = &DAT_00582cb8;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_005794b8 + param_2 * 0x40;
  puVar3 = &DAT_005794b8 + param_1 * 0x40;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_00582cb8;
  puVar3 = &DAT_005794b8 + param_2 * 0x40;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

