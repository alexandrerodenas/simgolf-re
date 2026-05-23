/* Ghidra decompiled: golf.exe */
/* Function: FUN_0040cb00 @ 0x0040CB00 */
/* Body size: 247 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0040cb00(undefined4 param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  if ((((DAT_00569498 != '\0') || (DAT_0053df54 != 0)) && (param_2 < 1)) || (DAT_00567afc == 3)) {
    return 0;
  }
  uVar2 = 0xffffffff;
  pcVar4 = (char *)&DAT_0051a068;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  DAT_0053df54 = 0;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = &DAT_005a6d40;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  DAT_00569498 = 1;
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  DAT_005a34ec = param_1;
  uVar2 = 0xffffffff;
  pcVar4 = (char *)&DAT_0051a068;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  DAT_004c2e08 = param_3;
  DAT_005a7144 = (~uVar2 - 1) / ((DAT_00822c88 != 0) + 3) + 0x10;
  if (param_2 < 0) {
    DAT_005694a4 = -param_2;
  }
  _DAT_0056d1a8 = FUN_0045c1e0(600);
  _DAT_0056d1a8 = _DAT_0056d1a8 & 0xffff;
  uVar2 = FUN_0045c1e0(200);
  _DAT_0056d1ac = (uVar2 & 0xffff) + 200;
  return 1;
}

