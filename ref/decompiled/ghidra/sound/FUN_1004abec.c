/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004abec @ 0x1004ABEC */
/* Body size: 74 addresses */


int __cdecl FUN_1004abec(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_100b5708 = 1;
                    /* WARNING: Could not recover jumptable at 0x1004ac06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_100b5708 = 1;
                    /* WARNING: Could not recover jumptable at 0x1004ac1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_100b5754;
  }
  DAT_100b5708 = (uint)bVar2;
  return param_1;
}

