/* Ghidra decompiled: golf.exe */
/* Function: FUN_0040c170 @ 0x0040C170 */


uint FUN_0040c170(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if ((((((byte)DAT_0059e7b8 & 1) == 0) && (-1 < param_1)) && (param_1 < 0x32)) &&
     ((-1 < param_2 && (param_2 < 0x32)))) {
    if (DAT_00834170 != 0) {
      if (((*(char *)((int)&DAT_005722e8 + param_1 * 0x32 + param_2) == '\x14') &&
          (iVar2 = FUN_0040bf60(param_1 + -1,param_2), iVar2 != 0)) &&
         (iVar2 = FUN_0040bf60(param_1,param_2 + 1), iVar2 != 0)) {
        return 3;
      }
      if (DAT_00834170 != 0) {
        return (uint)*(byte *)((int)&DAT_005a4998 + param_2 + param_1 * 0x33);
      }
    }
    iVar2 = param_2 + param_1 * 0x32;
    cVar1 = *(char *)((int)&DAT_005722e8 + iVar2);
    if ((((cVar1 != '\x11') && ((&DAT_0057231a)[iVar2] != '\x11')) && (cVar1 != '\x12')) &&
       (cVar1 != '\x13')) {
      if ((&DAT_00571ff6)[DAT_0059bf90 * 0x2e] == '\x02') {
        iVar4 = param_2 << 7;
        iVar2 = 7;
      }
      else {
        iVar4 = param_2 << 6;
        iVar2 = 6;
      }
      iVar2 = FUN_0042dba0(param_1 << iVar2,iVar4);
      if (((&DAT_00571ff8)[DAT_0059bf90 * 0x2e] == '\x01') && (param_2 < 0x10)) {
        iVar4 = (int)((ulonglong)((longlong)((0x10 - param_2) * DAT_004c2fa0) * -0x2aaaaaab) >> 0x20
                     );
        iVar2 = iVar2 + (iVar4 - (iVar4 >> 0x1f));
      }
      uVar3 = FUN_00467130(iVar2 / DAT_004c2fa0 + 1,(DAT_00822c88 != 0) + '\x03',0xf);
      return uVar3;
    }
  }
  return 3;
}

