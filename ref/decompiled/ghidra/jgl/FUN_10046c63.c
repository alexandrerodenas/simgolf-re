/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10046c63 @ 0x10046C63 */
/* Body size: 95 addresses */


LPVOID __cdecl FUN_10046c63(LPVOID param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  LPVOID pvVar3;
  
  if (param_2 < 0xffffffe1) {
    puVar1 = (uint *)FUN_100482f7((int)param_1);
    if (puVar1 == (uint *)0x0) {
      if (param_2 == 0) {
        param_2 = 1;
      }
      pvVar3 = HeapReAlloc(DAT_100593dc,0x10,param_1,param_2 + 0xf & 0xfffffff0);
    }
    else {
      pvVar3 = (LPVOID)0x0;
      if ((param_2 <= DAT_1005664c) &&
         (iVar2 = FUN_10048b02(puVar1,(int)param_1,param_2), iVar2 != 0)) {
        pvVar3 = param_1;
      }
    }
  }
  else {
    pvVar3 = (LPVOID)0x0;
  }
  return pvVar3;
}

