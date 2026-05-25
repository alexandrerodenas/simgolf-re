/* Ghidra decompiled: golf.exe */
/* Function: FUN_004b716a @ 0x004B716A */


uint FUN_004b716a(LPWSTR param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((param_2 != (byte *)0x0) && (param_3 != 0)) {
    bVar1 = *param_2;
    if (bVar1 != 0) {
      if (DAT_00840b44 == 0) {
        if (param_1 != (LPWSTR)0x0) {
          *param_1 = (ushort)bVar1;
        }
        return 1;
      }
      if ((PTR_DAT_004e5010[(uint)bVar1 * 2 + 1] & 0x80) == 0) {
        iVar2 = MultiByteToWideChar(DAT_00840b54,9,(LPCSTR)param_2,1,param_1,
                                    (uint)(param_1 != (LPWSTR)0x0));
        if (iVar2 != 0) {
          return 1;
        }
      }
      else {
        if (1 < (int)DAT_004e521c) {
          if ((int)param_3 < (int)DAT_004e521c) goto LAB_004b71fc;
          iVar2 = MultiByteToWideChar(DAT_00840b54,9,(LPCSTR)param_2,DAT_004e521c,param_1,
                                      (uint)(param_1 != (LPWSTR)0x0));
          if (iVar2 != 0) {
            return DAT_004e521c;
          }
        }
        if ((DAT_004e521c <= param_3) && (param_2[1] != 0)) {
          return DAT_004e521c;
        }
      }
LAB_004b71fc:
      puVar3 = (undefined4 *)FUN_004a910c();
      *puVar3 = 0x2a;
      return 0xffffffff;
    }
    if (param_1 != (LPWSTR)0x0) {
      *param_1 = L'\0';
    }
  }
  return 0;
}

