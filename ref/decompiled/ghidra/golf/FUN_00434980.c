/* Ghidra decompiled: golf.exe */
/* Function: FUN_00434980 @ 0x00434980 */
/* Body size: 315 addresses */


undefined4 FUN_00434980(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = 0xffffffff;
  iVar1 = FUN_00467170(param_1 + -0x10d,param_2 + -500);
  if (iVar1 < 0x10) {
    uVar4 = 0xfffffffe;
  }
  iVar1 = FUN_00467170(param_1 + -0x12e,param_2 + -0x233);
  if (iVar1 < 0x14) {
    uVar4 = 0;
  }
  iVar1 = FUN_00467170(param_1 + -0x14d,param_2 + -0x20e);
  if (iVar1 < 0x14) {
    uVar4 = 1;
  }
  iVar1 = FUN_00467170(param_1 + -0x16b,param_2 + -0x233);
  if (iVar1 < 0x14) {
    uVar4 = 2;
  }
  iVar1 = param_2 + -0x23f;
  iVar2 = FUN_00467170(param_1 + -0x1d6,iVar1);
  if (iVar2 < 0x12) {
    uVar4 = 3;
  }
  iVar2 = FUN_00467170(param_1 + -0x24f,iVar1);
  if (iVar2 < 0x12) {
    uVar4 = 4;
  }
  iVar2 = FUN_00467170(param_1 + -0x28c,iVar1);
  if (iVar2 < 0x12) {
    uVar4 = 5;
  }
  iVar1 = FUN_00467170(param_1 + -0x2ca,iVar1);
  if (iVar1 < 0x12) {
    uVar4 = 6;
  }
  iVar1 = FUN_00467170(param_1 + -0xf8,param_2 + -0x237);
  if (iVar1 < 0xc) {
    uVar4 = 7;
  }
  iVar1 = FUN_00467170(param_1 + -0x213,param_2 + -0x244);
  uVar3 = 9;
  if (0xb < iVar1) {
    uVar3 = uVar4;
  }
  return uVar3;
}

