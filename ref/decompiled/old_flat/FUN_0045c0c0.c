/* Ghidra decompiled: golf.exe */
/* Function: FUN_0045c0c0 @ 0x0045C0C0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0045c0c0(int param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  int iVar3;
  
  DVar1 = timeGetTime();
  DAT_00822d94 = 0;
  DAT_00822d68 = 0;
  while( true ) {
    FUN_0045c030();
    DVar2 = timeGetTime();
    if (DAT_00822d68 != 0) break;
    iVar3 = FUN_0045ae70();
    if (((iVar3 != 0) || (DAT_0083afcc != 0)) ||
       ((param_1 != 0 && (param_1 <= (int)(DVar2 - DVar1))))) break;
  }
  DAT_00822d94 = DAT_00822b9c;
  _DAT_00822d7c = DAT_00822b98;
  iVar3 = FUN_0045ae70();
  if (iVar3 != 0) {
    DAT_00822d94 = FUN_0045ae50();
    _DAT_00822d7c = FUN_0045ae30();
  }
  FUN_00483d30();
  return 1;
}

