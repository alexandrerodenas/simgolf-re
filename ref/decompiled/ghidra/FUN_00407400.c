/* Ghidra decompiled: golf.exe */
/* Function: FUN_00407400 @ 0x00407400 */
/* Body size: 152 addresses */


undefined4 FUN_00407400(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)((int)&DAT_005722e8 + param_1 * 0x32 + param_2);
  if ((('\0' < (char)(&DAT_00578372)[cVar1 * 0x30]) && (cVar1 != '\x16')) && (cVar1 != '\x15')) {
    iVar2 = (&DAT_004c2898)[param_3] + param_2 + ((&DAT_004c2878)[param_3] + param_1) * 0x32;
    if ((((&DAT_0053caf0)[iVar2] & 0x120) == 0) &&
       ('\0' < (char)(&DAT_00578372)[*(char *)((int)&DAT_005722e8 + iVar2) * 0x30])) {
      iVar2 = FUN_0040bf60((&DAT_004c2878)[param_3] + param_1,(&DAT_004c2898)[param_3] + param_2);
      if (iVar2 == 0) {
        return 1;
      }
    }
  }
  return 0;
}

