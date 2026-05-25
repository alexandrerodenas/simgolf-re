/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004349a @ 0x1004349A */


int __cdecl FUN_1004349a(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_100434c8(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(byte *)((int)param_1 + 0xd) & 0x40) != 0) {
    iVar1 = FUN_100491f7(param_1[4]);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}

