/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1008f3a0 @ 0x1008F3A0 */
/* Body size: 119 addresses */


int * __cdecl FUN_1008f3a0(undefined4 param_1,undefined4 param_2,int *param_3,uint *param_4)

{
  int iVar1;
  short local_2c;
  char local_2a;
  uint local_28 [6];
  uint local_10;
  uint local_c;
  ushort local_8;
  
  FUN_1008f420(&local_10,&param_1);
  iVar1 = FUN_10095210(local_10,local_c,local_8,0x11,0,&local_2c);
  param_3[2] = iVar1;
  *param_3 = (int)local_2a;
  param_3[1] = (int)local_2c;
  FUN_1007f760(param_4,local_28);
  param_3[3] = (int)param_4;
  return param_3;
}

