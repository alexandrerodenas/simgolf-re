/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10095730 @ 0x10095730 */


int __cdecl FUN_10095730(uint param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((param_1 < DAT_10129f9c) &&
     ((*(byte *)((&DAT_10129e60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_10090370(param_1);
    iVar2 = FUN_100957b0(param_1,param_2);
    __unlock_fhandle(param_1);
  }
  else {
    puVar1 = (undefined4 *)FUN_100904d0();
    *puVar1 = 9;
    iVar2 = -1;
  }
  return iVar2;
}

