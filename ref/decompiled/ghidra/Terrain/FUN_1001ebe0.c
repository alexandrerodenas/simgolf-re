/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1001ebe0 @ 0x1001EBE0 */


int __cdecl FUN_1001ebe0(int *param_1)

{
  int iVar1;
  DWORD DVar2;
  
  iVar1 = FUN_1001ec30(param_1);
  if (iVar1 == 0) {
    if ((param_1[3] & 0x4000U) == 0) {
      iVar1 = 0;
    }
    else {
      DVar2 = FUN_10026370(param_1[4]);
      iVar1 = -(uint)(DVar2 != 0);
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}

