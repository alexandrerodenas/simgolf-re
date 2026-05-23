/* Ghidra decompiled: golf.exe */
/* Function: FUN_0040b840 @ 0x0040B840 */
/* Body size: 358 addresses */


void FUN_0040b840(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 auStack_74 [16];
  char local_64 [100];
  
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
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = local_64;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  DAT_00568d08 = FUN_004a5d48(local_64,0x8000);
  DAT_0051a068._0_1_ = 0;
  FUN_004a583a(DAT_00568d08,&DAT_0051a068,100);
  if (param_1 == 2) {
    FUN_004a5a78(DAT_00568d08);
    return;
  }
  if (param_1 == 0) {
    uVar2 = 0xffffffff;
    pcVar4 = s_Loading_Course_004c52f4;
    do {
      pcVar5 = pcVar4;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar5 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar5;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar4 = pcVar5 + -uVar2;
    pcVar5 = (char *)&DAT_0051a068;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar5 = pcVar5 + 4;
    }
    DAT_004c2e08 = 0xffffffff;
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar5 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    }
    FUN_0040d320(200,200,0x80001284,0xfffffffe);
    FUN_00480c80(0);
    FUN_00442180(0);
    FUN_004315e0();
  }
  FUN_004a583a(DAT_00568d08,&DAT_0051a068,100);
  if (param_1 == 3) {
    FUN_004a5a78(DAT_00568d08);
    return;
  }
  FUN_0040bbf0(1);
  FUN_004a583a(DAT_00568d08,auStack_74,8);
  FUN_004a6057(DAT_00568d08);
  FUN_004a5a78(DAT_00568d08);
  if (param_1 == 0) {
    DAT_00567afc = param_1;
    DAT_004c2854 = 0xffffffff;
    DAT_004c2848 = 0xffffffff;
    FUN_0042f7a0();
  }
  return;
}

