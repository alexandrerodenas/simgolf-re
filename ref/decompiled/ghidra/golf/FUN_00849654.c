/* Ghidra decompiled: golf.exe */
/* Function: FUN_00849654 @ 0x00849654 */
/* Body size: 179 addresses */


void FUN_00849654(int *param_1,char *param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  
  pcVar2 = (char *)FUN_0084b630(*(undefined4 *)(*param_1 + 0x8c),param_2,0x5c);
  uVar3 = 0xffffffff;
  pcVar6 = param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  if (pcVar2 == param_2 + (~uVar3 - 2)) {
    uVar3 = 0xffffffff;
    pcVar6 = param_3 + 1;
    do {
      pcVar2 = pcVar6;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar2 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar2;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar4 = -1;
    do {
      pcVar6 = param_2;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar6 = param_2 + 1;
      cVar1 = *param_2;
      param_2 = pcVar6;
    } while (cVar1 != '\0');
    pcVar2 = pcVar2 + -uVar3;
    pcVar6 = pcVar6 + -1;
    for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar6 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else {
    uVar3 = 0xffffffff;
    do {
      pcVar6 = param_3;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar6 = param_3 + 1;
      cVar1 = *param_3;
      param_3 = pcVar6;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar4 = -1;
    do {
      pcVar2 = param_2;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar2 = param_2 + 1;
      cVar1 = *param_2;
      param_2 = pcVar2;
    } while (cVar1 != '\0');
    pcVar6 = pcVar6 + -uVar3;
    pcVar2 = pcVar2 + -1;
    for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar2 = pcVar2 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar2 = pcVar2 + 1;
    }
  }
  return;
}

