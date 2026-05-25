/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000ecc0 @ 0x3000ECC0 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_3000ecc0(undefined4 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = rdtsc();
  (*DAT_3004b528)(param_1);
  uVar2 = rdtsc();
  FUN_3000ebd0((int)uVar2 - (int)uVar1);
  return;
}

