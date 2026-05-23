/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1004946d @ 0x1004946D */
/* Body size: 153 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004946d(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_1005a410 == 0) {
    FUN_1004cc36();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_10057e3c,0x104);
  _DAT_10057de8 = &DAT_10057e3c;
  pbVar2 = &DAT_10057e3c;
  if (*DAT_1005a404 != 0) {
    pbVar2 = DAT_1005a404;
  }
  FUN_10049506(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_10049506(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_10057dd0 = puVar1;
  _DAT_10057dcc = local_8 + -1;
  return;
}

