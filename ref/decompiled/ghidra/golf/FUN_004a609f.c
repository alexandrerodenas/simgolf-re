/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a609f @ 0x004A609F */


undefined4 FUN_004a609f(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((*(byte *)(param_1 + 0xc) & 0x40) == 0) {
    FUN_004a9874(param_1);
    uVar1 = __fclose_lk(param_1);
    FUN_004a98c6(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return uVar1;
}

