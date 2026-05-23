/* Ghidra decompiled: golf.exe */
/* Function: FUN_004ad93e @ 0x004AD93E */
/* Body size: 125 addresses */


int FUN_004ad93e(uchar *param_1)

{
  int iVar1;
  size_t _MaxCount;
  size_t sVar2;
  int *piVar3;
  
  if (((DAT_00842164 != 0) &&
      ((DAT_00840a88 != (int *)0x0 ||
       (((DAT_00840a90 != 0 && (iVar1 = FUN_004ad9fa(), iVar1 == 0)) && (DAT_00840a88 != (int *)0x0)
        ))))) && (piVar3 = DAT_00840a88, param_1 != (uchar *)0x0)) {
    _MaxCount = _strlen((char *)param_1);
    for (; (char *)*piVar3 != (char *)0x0; piVar3 = piVar3 + 1) {
      sVar2 = _strlen((char *)*piVar3);
      if (((_MaxCount < sVar2) && (((uchar *)*piVar3)[_MaxCount] == '=')) &&
         (iVar1 = __mbsnbicoll((uchar *)*piVar3,param_1,_MaxCount), iVar1 == 0)) {
        return *piVar3 + 1 + _MaxCount;
      }
    }
  }
  return 0;
}

