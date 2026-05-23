/* Ghidra decompiled: golf.exe */
/* Function: FUN_004840c0 @ 0x004840C0 */
/* Body size: 18 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004840c0(void)

{
  undefined4 uVar1;
  
  if (DAT_0083afc0 == 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x004840cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*_DAT_0083af94)();
  return uVar1;
}

