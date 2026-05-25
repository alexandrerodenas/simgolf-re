/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30031126 @ 0x30031126 */


int __cdecl FUN_30031126(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_3004f3d0 = 1;
                    /* WARNING: Could not recover jumptable at 0x30031140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_3004f3d0 = 1;
                    /* WARNING: Could not recover jumptable at 0x30031155. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_3004f228;
  }
  DAT_3004f3d0 = (uint)bVar2;
  return param_1;
}

