/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1002a610 @ 0x1002A610 */
/* Body size: 119 addresses */


int __cdecl FUN_1002a610(LPSTR param_1,undefined2 param_2)

{
  LONG LVar1;
  undefined2 extraout_var;
  undefined2 uVar3;
  int iVar2;
  void *this;
  bool bVar4;
  
  LVar1 = InterlockedIncrement(&DAT_10110b70);
  bVar4 = DAT_10110b60 == 0;
  uVar3 = (short)((uint)LVar1 >> 0x10);
  if (!bVar4) {
    InterlockedDecrement(&DAT_10110b70);
    FUN_10019e10(this,0x13);
    uVar3 = extraout_var;
  }
  iVar2 = FUN_1002a690(param_1,CONCAT22(uVar3,param_2));
  if (bVar4) {
    InterlockedDecrement(&DAT_10110b70);
  }
  else {
    FUN_10019eb0(0x13);
  }
  return iVar2;
}

