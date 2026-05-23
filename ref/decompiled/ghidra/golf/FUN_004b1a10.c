/* Ghidra decompiled: golf.exe */
/* Function: FUN_004b1a10 @ 0x004B1A10 */
/* Body size: 198 addresses */


undefined4 FUN_004b1a10(int *param_1,uint param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  piVar1 = param_1;
  iVar3 = param_1[3];
  if (param_3 == 0) {
    *(undefined4 *)(*(int *)param_1[8] + 0x14) = 0x27;
    (*(code *)**(undefined4 **)param_1[8])((undefined4 *)param_1[8]);
  }
  iVar3 = iVar3 + param_3;
  uVar4 = ((1 << ((byte)param_3 & 0x1f)) - 1U & param_2) << (0x18U - (char)iVar3 & 0x1f) |
          param_1[2];
  while( true ) {
    if (iVar3 < 8) {
      piVar1[2] = uVar4;
      piVar1[3] = iVar3;
      return 1;
    }
    param_1._2_1_ = (char)(uVar4 >> 0x10);
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
    iVar3 = iVar3 + -8;
    uVar4 = uVar4 << 8;
  }
  return 0;
}

