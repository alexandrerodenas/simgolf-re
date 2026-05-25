/* Ghidra decompiled: golf.exe */
/* Function: FUN_0046ddd0 @ 0x0046DDD0 */


undefined4 FUN_0046ddd0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = DAT_00822c88;
  iVar2 = FUN_0043b610(1,1);
  if (iVar2 == 0) {
    return 0;
  }
  DAT_00571fd4 = 1000;
  DAT_00834170 = 0x2c00;
  DAT_0059e7b8 = 0x4000000;
  DAT_00822c88 = uVar1;
  iVar2 = FUN_0043a8c0();
  if (iVar2 == 0) {
    DAT_0059e7b8 = iVar2;
    return 0;
  }
  FUN_0046c970();
  DAT_00571fd4 = 1000;
  return 1;
}

