/* Ghidra decompiled: golf.exe */
/* Function: FUN_0042ee80 @ 0x0042EE80 */
/* Body size: 183 addresses */


int FUN_0042ee80(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0040bf60(param_1,param_2);
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = (int)*(char *)((int)&DAT_005722e8 + param_1 * 0x32 + param_2);
  if (iVar1 == 4) {
    return 0xc;
  }
  if (iVar1 == 0x14) {
    return 0;
  }
  if (iVar1 == 0x15) {
    return -0x10;
  }
  iVar2 = iVar1 * 0x30;
  if ((char)(&DAT_00578372)[iVar2] < '\x01') {
    return -8;
  }
  if (iVar1 == 0x11) {
    return 0x20;
  }
  if ((DAT_005a34e0 == '\x01') && (iVar1 == 0x12)) {
    return 0x10;
  }
  if ((&DAT_00578376)[iVar2] == '\r') {
    return ((char)(&DAT_00578373)[iVar2] * 5) / 2;
  }
  return ((int)(char)(&DAT_00578373)[iVar2] * (int)(char)(&DAT_00578372)[iVar2]) / 2;
}

