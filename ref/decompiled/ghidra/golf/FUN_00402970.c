/* Ghidra decompiled: golf.exe */
/* Function: FUN_00402970 @ 0x00402970 */


int FUN_00402970(undefined1 param_1)

{
  char *pcVar1;
  char cVar2;
  undefined2 uVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  iVar6 = 0;
  if (DAT_00585862 != '\0') {
    puVar4 = &DAT_00585862;
    do {
      pcVar1 = puVar4 + 0x4c;
      puVar4 = puVar4 + 0x4c;
      iVar6 = iVar6 + 1;
    } while (*pcVar1 != '\0');
  }
  iVar7 = iVar6 * 0x4c;
  piVar8 = &DAT_00585850 + iVar6 * 0x13;
  for (iVar5 = 0x13; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar8 = 0;
    piVar8 = piVar8 + 1;
  }
  cVar2 = FUN_0045c1e0(5);
  iVar5 = (int)DAT_0058bcbc;
  (&DAT_00585850)[iVar6 * 0x13] = DAT_0058bcba * 0x400 + 0x600;
  cVar2 = DAT_00575cb9 + cVar2;
  (&DAT_00585854)[iVar6 * 0x13] = iVar5 * 0x400 + 0x600;
  (&DAT_00585862)[iVar7] = 1;
  (&DAT_00585866)[iVar7] = cVar2 - 2U & 7;
  (&DAT_00585863)[iVar7] = param_1;
  (&DAT_0058586e)[iVar6 * 0x26] = 0xb;
  uVar3 = FUN_0045c1e0(0x20);
  *(undefined2 *)(&DAT_0058586a + iVar7) = uVar3;
  (&DAT_00585860)[iVar7] = 0xff;
  return iVar6;
}

