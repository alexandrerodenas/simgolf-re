/* Ghidra decompiled: golf.exe */
/* Function: FUN_004532a0 @ 0x004532A0 */


void FUN_004532a0(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  if (param_1 < 0) {
    pcVar5 = &DAT_004d3174;
  }
  else {
    switch(param_1 / 0x19) {
    case 0:
      pcVar5 = s__fair__004d316c;
      break;
    case 1:
      pcVar5 = s__good__004d3164;
      break;
    case 2:
    case 3:
      pcVar5 = s__very_good__004d3154;
      break;
    default:
      pcVar5 = s__outstanding__004d3144;
    }
  }
  uVar2 = 0xffffffff;
  do {
    pcVar7 = pcVar5;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  iVar3 = -1;
  pcVar5 = (char *)&DAT_0051a068;
  do {
    pcVar6 = pcVar5;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  pcVar5 = pcVar7 + -uVar2;
  pcVar7 = pcVar6 + -1;
  for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar7 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  }
  return;
}

