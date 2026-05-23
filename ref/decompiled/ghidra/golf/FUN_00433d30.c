/* Ghidra decompiled: golf.exe */
/* Function: FUN_00433d30 @ 0x00433D30 */
/* Body size: 277 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00433d30(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  uVar2 = FUN_00433c60(param_1,param_2);
  if (uVar2 == 0xfffffffe) {
    DAT_0055e928 = 0;
    DAT_00567afc = 1;
    _DAT_0059e7b8 = _DAT_0059e7b8 & 0xfffffffd;
    return 0xffffffff;
  }
  if (uVar2 != 0xfffffffd) {
    uVar3 = uVar2;
    if (-1 < (int)uVar2) {
      uVar3 = _DAT_0059e7b8 | 2;
      DAT_004c2848 = 0xffffffff;
      DAT_00542f20 = uVar2;
      _DAT_0059e7b8 = uVar3;
    }
    return uVar3;
  }
  uVar2 = 0xffffffff;
  pcVar5 = s_To_UNDO_a_previous_action__right_004c7ec4;
  do {
    pcVar7 = pcVar5;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar5 = pcVar7 + -uVar2;
  pcVar7 = (char *)&DAT_0051a068;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar7 = pcVar7 + 4;
  }
  DAT_004c2e08 = 0xffffffea;
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar7 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar5 = s_Right_click_again_to_effect_the_c_004c7e7c;
  do {
    pcVar7 = pcVar5;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  iVar4 = -1;
  pcVar5 = (char *)&DAT_0051a068;
  do {
    pcVar6 = pcVar5;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  pcVar5 = pcVar7 + -uVar2;
  pcVar7 = pcVar6 + -1;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar7 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  }
  FUN_0040d320(200,0x154,0x80007fff,0xfffffffe);
  _DAT_0059e7b8 = _DAT_0059e7b8 & 0xfffffffd;
  DAT_0055e928 = 0;
  DAT_00567afc = 1;
  FUN_00480c80(0);
  uVar2 = FUN_0045c0c0(0);
  return uVar2;
}

