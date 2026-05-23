/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1000aed0 @ 0x1000AED0 */
/* Body size: 123 addresses */


void __fastcall FUN_1000aed0(void *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_54 [16];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  void *local_8;
  
  puVar1 = local_54;
  for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0xcccccccc;
    puVar1 = puVar1 + 1;
  }
  local_8 = param_1;
  thunk_FUN_1000afe0(param_1,&local_c);
  puVar1 = (undefined4 *)thunk_FUN_1000af70(local_8,&local_10);
  thunk_FUN_1000b470(&local_14,*puVar1);
  thunk_FUN_1000b5b0(local_8,*(void **)((int)local_8 + 4));
  *(undefined4 *)((int)local_8 + 4) = 0;
  *(undefined4 *)((int)local_8 + 8) = 0;
  local_8 = (void *)0x1000af47;
  __chkesp();
  return;
}

