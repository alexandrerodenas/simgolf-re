/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10046b5f @ 0x10046B5F */
/* Body size: 86 addresses */


undefined4 __cdecl FUN_10046b5f(FILE *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((param_1->_flag & 0x40U) == 0) {
    if ((param_1->_flag & 0x83U) != 0) {
      uVar2 = FUN_10048f2c((int *)param_1);
      __freebuf(param_1);
      iVar1 = FUN_10048e13(param_1->_file);
      if (iVar1 < 0) {
        uVar2 = 0xffffffff;
      }
      else if (param_1->_tmpfname != (char *)0x0) {
        FUN_10046abc(param_1->_tmpfname);
        param_1->_tmpfname = (char *)0x0;
      }
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  param_1->_flag = 0;
  return uVar2;
}

