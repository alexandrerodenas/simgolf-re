/* Ghidra decompiled: golf.exe */
/* Function: FUN_004ac691 @ 0x004AC691 */
/* Body size: 74 addresses */


int FUN_004ac691(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_00840cdc = 1;
                    /* WARNING: Could not recover jumptable at 0x004ac6ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_00840cdc = 1;
                    /* WARNING: Could not recover jumptable at 0x004ac6c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_00840b54;
  }
  DAT_00840cdc = (uint)bVar2;
  return param_1;
}

