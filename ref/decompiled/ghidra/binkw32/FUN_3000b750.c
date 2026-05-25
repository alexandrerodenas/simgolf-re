/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000b750 @ 0x3000B750 */


undefined4 FUN_3000b750(undefined4 *param_1,LPCSTR param_2,uint param_3)

{
  DWORD DVar1;
  HANDLE pvVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = param_1;
  for (iVar3 = 0x33; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  if ((param_3 & 0x800000) == 0) {
    pvVar2 = CreateFileA(param_2,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x8000080,(HANDLE)0x0);
    param_1[0x13] = pvVar2;
    if (param_1[0x13] == -1) {
      pvVar2 = CreateFileA(param_2,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x8000080,(HANDLE)0x0);
      param_1[0x13] = pvVar2;
    }
    if (param_1[0x13] == -1) {
      return 0;
    }
  }
  else {
    param_1[0x13] = param_2;
    param_1[0x1d] = 1;
    DVar1 = SetFilePointer(param_2,0,(PLONG)0x0,1);
    param_1[0x1e] = DVar1;
  }
  *param_1 = FUN_3000b810;
  param_1[1] = FUN_3000b8c0;
  param_1[2] = FUN_3000bc00;
  param_1[3] = FUN_3000bc60;
  param_1[4] = FUN_3000bd40;
  param_1[5] = FUN_3000bce0;
  return 1;
}

