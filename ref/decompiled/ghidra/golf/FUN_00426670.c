/* Ghidra decompiled: golf.exe */
/* Function: FUN_00426670 @ 0x00426670 */


void FUN_00426670(int param_1)

{
  short sVar1;
  int iVar2;
  undefined2 *puVar3;
  
  iVar2 = param_1 * 0x100;
  (&DAT_005794da)[iVar2] = 0;
  (&DAT_005794d5)[iVar2] = 0;
  (&DAT_005794d9)[iVar2] = 0;
  sVar1 = (&DAT_0057956e)[param_1 * 0x80];
  puVar3 = &DAT_005689e8;
  do {
    if (puVar3[2] == sVar1) {
      *puVar3 = 0xffff;
    }
    puVar3 = puVar3 + 4;
  } while ((int)puVar3 < 0x568d08);
  return;
}

