/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004f459 @ 0x1004F459 */


undefined4 __cdecl FUN_1004f459(int param_1,int param_2)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  char local_7c [120];
  
  iVar1 = (*DAT_100b57c0)((ushort)param_1 & 0x3ff | 0x400,1,local_7c,0x78);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_1004f5d7(local_7c);
  if ((param_1 != iVar1) && (param_2 != 0)) {
    sVar2 = FUN_1004f610(DAT_100b57b0);
    sVar3 = _strlen(DAT_100b57b0);
    if (sVar2 == sVar3) {
      return 0;
    }
  }
  return 1;
}

