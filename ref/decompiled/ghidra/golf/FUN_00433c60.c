/* Ghidra decompiled: golf.exe */
/* Function: FUN_00433c60 @ 0x00433C60 */
/* Body size: 193 addresses */


undefined4 FUN_00433c60(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = 0xffffffff;
  iVar1 = FUN_00467170(param_1 + -0x10e,param_2 + -499);
  if (iVar1 < 0x10) {
    uVar4 = 0xfffffffe;
  }
  iVar1 = param_2 + -0x223;
  iVar2 = FUN_00467170(param_1 + -0x160,iVar1);
  if (iVar2 < 0x19) {
    uVar4 = 0;
  }
  iVar2 = FUN_00467170(param_1 + -0x1d3,iVar1);
  if (iVar2 < 0x19) {
    uVar4 = 1;
  }
  iVar2 = FUN_00467170(param_1 + -0x24b,iVar1);
  if (iVar2 < 0x19) {
    uVar4 = 2;
  }
  iVar1 = FUN_00467170(param_1 + -0x2cb,iVar1);
  if (iVar1 < 0x10) {
    uVar4 = 3;
  }
  iVar1 = FUN_00467170(param_1 + -0x10b,param_2 + -0x231);
  uVar3 = 0xfffffffd;
  if (0xb < iVar1) {
    uVar3 = uVar4;
  }
  return uVar3;
}

