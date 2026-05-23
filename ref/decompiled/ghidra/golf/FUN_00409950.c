/* Ghidra decompiled: golf.exe */
/* Function: FUN_00409950 @ 0x00409950 */
/* Body size: 148 addresses */


void FUN_00409950(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = (int)*(short *)(&DAT_0059fc64 + param_1 * 0x388);
  iVar2 = (int)(short)(&DAT_0059fc60)[param_1 * 0x1c4];
  if (iVar4 == 0) {
    uVar3 = (&DAT_0057957c)[iVar2 * 0x40];
  }
  else {
    uVar3 = (&DAT_0057958c)[iVar2 * 0x40];
  }
  iVar1 = (iVar4 + param_1 * 0xe2) * 4;
  *(undefined4 *)(&DAT_0059fc68 + iVar1) = uVar3;
  if (iVar4 == 0) {
    uVar3 = (&DAT_00579580)[iVar2 * 0x40];
  }
  else {
    uVar3 = (&DAT_00579590)[iVar2 * 0x40];
  }
  *(undefined4 *)(&DAT_0059fce8 + iVar1) = uVar3;
  if (iVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (&DAT_00579594)[iVar2 * 0x40];
  }
  *(undefined4 *)(&DAT_0059fd68 + iVar1) = uVar3;
  if (iVar4 < 0x1f) {
    *(short *)(&DAT_0059fc64 + param_1 * 0x388) = *(short *)(&DAT_0059fc64 + param_1 * 0x388) + 1;
  }
  return;
}

