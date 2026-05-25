/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100934c0 @ 0x100934C0 */


int __cdecl FUN_100934c0(LPSTR param_1,undefined2 param_2)

{
  LONG LVar1;
  undefined2 extraout_var;
  undefined2 uVar3;
  int iVar2;
  bool bVar4;
  
  LVar1 = InterlockedIncrement(&DAT_10129bb0);
  bVar4 = DAT_10129ba0 == 0;
  uVar3 = (short)((uint)LVar1 >> 0x10);
  if (!bVar4) {
    InterlockedDecrement(&DAT_10129bb0);
    FUN_100833f0(0x13);
    uVar3 = extraout_var;
  }
  iVar2 = FUN_10093540(param_1,CONCAT22(uVar3,param_2));
  if (bVar4) {
    InterlockedDecrement(&DAT_10129bb0);
  }
  else {
    FUN_10083490(0x13);
  }
  return iVar2;
}

