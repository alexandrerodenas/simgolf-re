/* Ghidra decompiled: golf.exe */
/* Function: FUN_0042f940 @ 0x0042F940 */
/* Body size: 232 addresses */


undefined4 FUN_0042f940(int param_1,int param_2,int *param_3,int *param_4)

{
  short sVar1;
  int iVar2;
  
  if ((((-1 < param_1) && (param_1 < 0x32)) && (-1 < param_2)) && (param_2 < 0x32)) {
    iVar2 = (param_2 + param_1 * 0x32) * 2;
    sVar1 = *(short *)((int)&DAT_0055eb40 + iVar2);
    if (sVar1 == 0) {
      FUN_0042fb90(param_1 * 0x400 + 0x200,param_2 * 0x400 + 0x200,param_3,param_4,0);
      if (((-0x41 < *param_3) && (*param_3 < DAT_00822c8c + 0x40)) &&
         ((-0x2b < *param_4 && (*param_4 < DAT_00822c90 + 0x2a)))) {
        *(short *)((int)&DAT_0055eb40 + iVar2) = (short)*param_3;
        *(short *)(&DAT_0055fec8 + iVar2) = (short)*param_4;
        return 1;
      }
      *(undefined2 *)((int)&DAT_0055eb40 + iVar2) = 0xff9d;
    }
    else if (sVar1 != -99) {
      *param_3 = (int)sVar1;
      *param_4 = (int)*(short *)(&DAT_0055fec8 + iVar2);
      return 1;
    }
  }
  return 0;
}

