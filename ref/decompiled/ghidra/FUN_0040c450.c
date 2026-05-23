/* Ghidra decompiled: golf.exe */
/* Function: FUN_0040c450 @ 0x0040C450 */
/* Body size: 94 addresses */


int FUN_0040c450(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0040c2f0(param_1,param_2);
  iVar2 = FUN_0040c3a0(param_1,param_2);
  if ((param_3 & 1) != 0) {
    iVar1 = FUN_00467130(iVar1,0xffffffff,1);
    iVar2 = FUN_00467130(iVar2,0xffffffff,1);
  }
  return (&DAT_004c2898)[param_3] * iVar2 + (&DAT_004c2878)[param_3] * iVar1;
}

