/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1004ca0b @ 0x1004CA0B */


int __cdecl FUN_1004ca0b(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_10057f88 = 1;
                    /* WARNING: Could not recover jumptable at 0x1004ca25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_10057f88 = 1;
                    /* WARNING: Could not recover jumptable at 0x1004ca3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_10057fbc;
  }
  DAT_10057f88 = (uint)bVar2;
  return param_1;
}

