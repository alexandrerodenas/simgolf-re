/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10042c20 @ 0x10042C20 */
/* Body size: 51 addresses */


void __cdecl FUN_10042c20(int *param_1,char *param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = FUN_100470bf(param_2,1,param_3,(int *)param_1[0x15]);
  if (uVar1 != param_3) {
    FUN_10042d90(param_1,s_Read_Error_10055900);
  }
  return;
}

