/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004c256 @ 0x1004C256 */


undefined4 __cdecl FUN_1004c256(FILE *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((param_1->_flag & 0x40) == 0) {
    FUN_1004368d((uint)param_1);
    uVar1 = __fclose_lk(param_1);
    FUN_100436df((uint)param_1);
  }
  else {
    param_1->_flag = 0;
  }
  return uVar1;
}

