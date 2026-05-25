/* Ghidra decompiled: golf.exe */
/* Function: FUN_004855b0 @ 0x004855B0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004855b0(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  
  _DAT_0083afd0 = param_3;
  DAT_0083ad50 = (int *)FUN_004a00a0(param_1);
  if (DAT_0083ad50 == (int *)0x0) {
    return 0x19;
  }
  if (((param_3 & 0x8000) != 0) &&
     (iVar1 = (**(code **)(*DAT_0083ad50 + 4))(&DAT_0083a4f8,param_2,&DAT_0083a7b8), iVar1 != 0)) {
    FUN_00485740();
    return iVar1;
  }
  if (((param_3 & 1) != 0) && (iVar1 = FUN_0047cfd0(param_2,1), iVar1 != 0)) {
    return iVar1;
  }
  if ((param_3 & 2) != 0) {
    FUN_00483320(0);
    DAT_0083ad0c = &DAT_0083acb0;
    FUN_00483030();
    FUN_00483060();
  }
  if (((param_3 & 4) != 0) && (iVar1 = FUN_004b04b0(), iVar1 != 0)) {
    return iVar1;
  }
  if (((param_3 & 8) != 0) && (iVar1 = FUN_0049fe50(), iVar1 != 0)) {
    return iVar1;
  }
  if (((param_3 & 0x10) != 0) && (iVar1 = FUN_004b04b0(), iVar1 != 0)) {
    return iVar1;
  }
  if (((param_3 & 0x20) != 0) && (iVar1 = FUN_0049e9d0(), iVar1 != 0)) {
    return iVar1;
  }
  if ((param_3 & 0x80) != 0) {
    iVar1 = FUN_00483ac0(&DAT_0083ad20);
    if (iVar1 != 0) {
      return iVar1;
    }
    FUN_004889f0(&DAT_0083ad20,0,0);
    DAT_0083ab68 = DAT_0083ad44;
  }
  if (((param_3 & 0x100) != 0) && (iVar1 = FUN_00490bf0(), iVar1 != 0)) {
    return iVar1;
  }
  if (((param_3 & 0x200) != 0) && (iVar1 = FUN_0049d3b0(), iVar1 != 0)) {
    return iVar1;
  }
  if (((param_3 & 0x400) != 0) && (iVar1 = FUN_0049d1b0(), iVar1 != 0)) {
    return iVar1;
  }
  if ((param_3 & 0x4000) != 0) {
    FUN_00491c10();
  }
  if (((param_3 & 0x800) != 0) && (iVar1 = FUN_004884e0(), iVar1 != 0)) {
    return iVar1;
  }
  if (((param_3 & 0x2000) != 0) && (iVar1 = FUN_0049d090(0x8000), iVar1 != 0)) {
    return 1;
  }
  if (((param_3 & 0x1000) != 0) && (iVar1 = FUN_00486fe0(), iVar1 != 0)) {
    return iVar1;
  }
  return 0;
}

