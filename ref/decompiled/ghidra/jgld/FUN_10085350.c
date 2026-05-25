/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10085350 @ 0x10085350 */


int __cdecl FUN_10085350(int *param_1)

{
  int iVar1;
  DWORD DVar2;
  
  iVar1 = FUN_100853a0(param_1);
  if (iVar1 == 0) {
    if ((param_1[3] & 0x4000U) == 0) {
      iVar1 = 0;
    }
    else {
      DVar2 = FUN_100904f0(param_1[4]);
      iVar1 = -(uint)(DVar2 != 0);
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}

