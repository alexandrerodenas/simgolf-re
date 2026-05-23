/* Ghidra decompiled: golf.exe */
/* Function: FUN_0040d320 @ 0x0040D320 */
/* Body size: 881 addresses */


void FUN_0040d320(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int local_8;
  
  FUN_004762d0(&DAT_0051b360,0,0,0);
  iVar1 = FUN_0045af30((-(uint)(DAT_004c2e08 != -1) & 0xfffffff9) + 0x2c);
  iVar1 = iVar1 * 0xf + 0x20;
  local_8 = iVar1;
  if (DAT_004c2e08 != -1) {
    if (iVar1 < 0x60) {
      local_8 = 0x60;
    }
    param_2 = param_2 + 0x2c;
    param_4 = -2;
    param_1 = param_1 + 0x1c;
  }
  DAT_00587ea0 = local_8;
  if (param_4 < 0) {
    if (param_4 == -3) {
      FUN_0040d0b0(param_1 + -8,param_2 + -8,0x1a0,local_8 + 0x10,0xffffffff);
    }
    else if (param_4 == -2) {
      FUN_0040cef0(param_1 + -8,param_2 + -8,0x1a0,local_8 + 0x10,1);
    }
    else {
      FUN_0040cdd0();
    }
    if (DAT_004c2e08 == -1) {
      FUN_004762d0(&DAT_0051b360,0,0,0);
      FUN_0045b0d0(99,param_1 + 0xc,param_2 + 0x10,(-(uint)(param_4 != -3) & 0x7fe7) + 0x80000018);
      return;
    }
    if (-1 < DAT_004c2e08) {
      FUN_00473f60(&DAT_0058bb7c,PTR_DAT_004c1570,param_1 + -0x32,param_2 + -0x28,0);
      FUN_0045c200(DAT_004c2e08,param_1 + -0x32,param_2 + -0x28,0xffffffff);
    }
    if ((DAT_004c2e08 < -5) && (-0xf < DAT_004c2e08)) {
      FUN_00473cb0(PTR_DAT_004c1570,param_1 + 8,param_2 + -0x14,1,1,1,0);
    }
    if (DAT_004c2e08 == -5) {
      FUN_00473f60(&DAT_0058bb7c,PTR_DAT_004c1570,param_1 + -0x28,param_2 + -0x28,0);
    }
    if (DAT_004c2e08 == -4) {
      FUN_00473f60(&DAT_005791f8 +
                   s_Ocean_s_Edge_004c1ea8[(char)(&DAT_00571ff4)[DAT_0059bf90 * 0x2e] * 0x82] * 0x2c
                   ,PTR_DAT_004c1570,param_1 + 8,param_2,0);
    }
    param_2 = param_2 + 0x10;
    if (DAT_004c2e08 == -3) {
      FUN_00473f60(&DAT_0053dea4,PTR_DAT_004c1570,param_1,param_2,0);
    }
    if (DAT_004c2e08 == -2) {
      FUN_00473f60(&DAT_0053ded0,PTR_DAT_004c1570,param_1,param_2,0);
    }
    if (DAT_004c2e08 == -0x14) {
      FUN_00473f60(&DAT_0053de78,PTR_DAT_004c1570,param_1,param_2,0);
    }
    if (DAT_004c2e08 == -0x15) {
      FUN_00473f60(&DAT_0053df28,PTR_DAT_004c1570,param_1,param_2,0);
    }
    if (DAT_004c2e08 == -0x16) {
      FUN_00473f60(&DAT_0053defc,PTR_DAT_004c1570,param_1,param_2,0);
    }
    if (iVar1 < 0x60) {
      param_2 = param_2 + ((local_8 - iVar1) + -0x10) / 2;
    }
    FUN_004762d0(&DAT_0051b360,0,0,0);
    FUN_0045b0d0(99,param_1 + 100,param_2,(-(uint)(param_4 != -3) & 0x7fe7) + 0x80000018);
  }
  else {
    FUN_0040cdd0(param_1 + -8,param_2 + -8,0x1a0,
                 (int)(local_8 * param_4 + (local_8 * param_4 >> 0x1f & 3U)) >> 2,1);
    if (param_4 == 0) {
      FUN_004481b0(0x10b,100,0,0,0);
      return;
    }
  }
  return;
}

