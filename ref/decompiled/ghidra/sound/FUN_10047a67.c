/* Ghidra decompiled: sound.dll */
/* Function: FUN_10047a67 @ 0x10047A67 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10047a67(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_100b5d34 == 0) {
    FUN_1004ae27();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_100b55f8,0x104);
  _DAT_100b5574 = &DAT_100b55f8;
  pbVar2 = &DAT_100b55f8;
  if (*DAT_100b7084 != 0) {
    pbVar2 = DAT_100b7084;
  }
  FUN_10047b00(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_10047b00(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_100b555c = puVar1;
  _DAT_100b5558 = local_8 + -1;
  return;
}

