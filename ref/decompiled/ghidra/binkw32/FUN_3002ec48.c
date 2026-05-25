/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002ec48 @ 0x3002EC48 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_3002ec48(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_3004f728 == 0) {
    FUN_30031351();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_3004f28c,0x104);
  _DAT_3004f278 = &DAT_3004f28c;
  pbVar2 = &DAT_3004f28c;
  if (*DAT_3004f758 != 0) {
    pbVar2 = DAT_3004f758;
  }
  FUN_3002ece1(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_3002ece1(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_3004f260 = puVar1;
  _DAT_3004f25c = local_8 + -1;
  return;
}

