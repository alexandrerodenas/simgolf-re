/* Ghidra decompiled: golf.exe */
/* Function: FUN_00433040 @ 0x00433040 */


uint FUN_00433040(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  if (DAT_0055e924 != 0) {
    uVar2 = FUN_00434ac0(param_1,param_2);
    return uVar2;
  }
  iVar3 = FUN_00432f90(param_1,param_2);
  if (iVar3 != -1) {
    if (iVar3 < 0x14) {
      DAT_004c2848 = (int)(char)(&DAT_004c79a0)[iVar3];
      uVar2 = FUN_0045c1e0(3);
      return uVar2 & 0xffff;
    }
    if (iVar3 == 0x14) {
      DAT_004c2848 = 0xffffffff;
      uVar2 = FUN_0045c1e0(3);
      return uVar2 & 0xffff;
    }
    if (iVar3 == 0x15) {
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
      for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
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
      FUN_0040d320(200,0x154,0x80007fff,0xfffffffe);
      FUN_00480c80(0);
      FUN_0045c0c0(0);
      uVar2 = FUN_0045c1e0(3);
      return uVar2 & 0xffff;
    }
    if (iVar3 == 0x16) {
      DAT_0055e924 = 1;
      DAT_00567afc = 0;
    }
  }
  uVar2 = FUN_0045c1e0(3);
  return uVar2 & 0xffff;
}

