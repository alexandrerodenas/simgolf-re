/* Ghidra decompiled: sound.dll */
/* Function: FUN_10007bd0 @ 0x10007BD0 */
/* Body size: 47 addresses */


undefined4 FUN_10007bd0(double *param_1,double *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_3 << 1;
  do {
    *param_1 = *param_1 + *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return 0;
}

