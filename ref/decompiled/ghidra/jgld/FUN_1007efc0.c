/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1007efc0 @ 0x1007EFC0 */


undefined4 __cdecl FUN_1007efc0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  char *pcVar4;
  int iVar5;
  
  FUN_1007f310();
  uVar1 = FUN_10080b90((int)DAT_1012b394,2);
  if (uVar1 < (uint)((int)DAT_1012b390 + (4 - (int)DAT_1012b394))) {
    iVar5 = 0x68;
    pcVar4 = "onexit.c";
    uVar1 = 2;
    iVar2 = FUN_10080b90((int)DAT_1012b394,2);
    pvVar3 = (void *)FID_conflict___realloc_dbg(DAT_1012b394,iVar2 + 0x10,uVar1,(int)pcVar4,iVar5);
    if (pvVar3 == (void *)0x0) {
      FUN_1007f320();
      return 0;
    }
    DAT_1012b390 = (undefined4 *)((int)pvVar3 + ((int)DAT_1012b390 - (int)DAT_1012b394 >> 2) * 4);
    DAT_1012b394 = pvVar3;
  }
  *DAT_1012b390 = param_1;
  DAT_1012b390 = DAT_1012b390 + 1;
  FUN_1007f320();
  return param_1;
}

