/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002b909 @ 0x3002B909 */


void __cdecl FUN_3002b909(undefined *param_1)

{
  undefined *lpMem;
  uint *puVar1;
  byte *pbVar2;
  int local_8;
  
  lpMem = param_1;
  if (param_1 != (undefined *)0x0) {
    if (DAT_3004f754 == 3) {
      puVar1 = (uint *)FUN_3002c6d2((int)param_1);
      if (puVar1 != (uint *)0x0) {
        FUN_3002c6fd(puVar1,(int)lpMem);
        return;
      }
    }
    else if ((DAT_3004f754 == 2) &&
            (pbVar2 = (byte *)FUN_3002d137(param_1,&local_8,(uint *)&param_1), pbVar2 != (byte *)0x0
            )) {
      FUN_3002d18e(local_8,(int)param_1,pbVar2);
      return;
    }
    HeapFree(DAT_3004f750,0,lpMem);
  }
  return;
}

