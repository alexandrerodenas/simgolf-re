/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10006b80 @ 0x10006B80 */
/* Body size: 79 addresses */


void __fastcall FUN_10006b80(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  undefined4 *local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *param_1 = &PTR_LAB_1011d058;
  local_8 = param_1;
  thunk_FUN_100072b0(&DAT_10128428,(int)param_1);
  thunk_FUN_10007100(0x10128428);
  local_8 = (undefined4 *)0x10006bcb;
  __chkesp();
  return;
}

