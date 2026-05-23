/* Ghidra decompiled: golf.exe */
/* Function: FUN_004b1b70 @ 0x004B1B70 */
/* Body size: 165 addresses */


undefined4 FUN_004b1b70(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  piVar1 = param_1;
  iVar4 = param_1[3] + 7;
  uVar3 = 0x7f << (0x18U - (char)iVar4 & 0x1f) | param_1[2];
  while( true ) {
    if (iVar4 < 8) {
      piVar1[2] = uVar3;
      piVar1[3] = iVar4;
      piVar1[2] = 0;
      piVar1[3] = 0;
      return 1;
    }
    param_1._2_1_ = (char)(uVar3 >> 0x10);
    *(char *)*piVar1 = param_1._2_1_;
    iVar2 = piVar1[1];
    *piVar1 = *piVar1 + 1;
    piVar1[1] = iVar2 + -1;
    if ((iVar2 + -1 == 0) && (iVar2 = FUN_004b19e0(piVar1), iVar2 == 0)) break;
    if (param_1._2_1_ == -1) {
      *(undefined1 *)*piVar1 = 0;
      iVar2 = piVar1[1];
      *piVar1 = *piVar1 + 1;
      piVar1[1] = iVar2 + -1;
      if ((iVar2 + -1 == 0) && (iVar2 = FUN_004b19e0(piVar1), iVar2 == 0)) {
        return 0;
      }
    }
    iVar4 = iVar4 + -8;
    uVar3 = uVar3 << 8;
  }
  return 0;
}

