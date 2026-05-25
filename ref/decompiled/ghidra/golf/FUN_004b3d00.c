/* Ghidra decompiled: golf.exe */
/* Function: FUN_004b3d00 @ 0x004B3D00 */


void FUN_004b3d00(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_3 < param_4) {
    iVar1 = param_3 + -1;
    do {
      FUN_004b04f0(param_1,iVar1,param_1,param_3,1,param_2);
      param_3 = param_3 + 1;
    } while (param_3 < param_4);
  }
  return;
}

