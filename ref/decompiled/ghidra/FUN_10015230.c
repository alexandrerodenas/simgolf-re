/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10015230 @ 0x10015230 */
/* Body size: 224 addresses */


void __fastcall FUN_10015230(void *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_50 [16];
  int local_10;
  int local_c;
  void *local_8;
  
  puVar2 = local_50;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (*(char *)((int)param_1 + 0x208) != '\0') {
    *(undefined1 *)((int)param_1 + 0x20a) = 0;
  }
  if (*(int *)((int)param_1 + 0x24) == 0) {
    for (local_c = 0; local_c < *(int *)((int)param_1 + 0x44); local_c = local_c + 1) {
      *(undefined4 *)((int)param_1 + local_c * 0x38 + 0x6c) =
           *(undefined4 *)(&DAT_100687f8 + *(int *)((int)param_1 + 0x28) * 0x24);
    }
  }
  else {
    for (local_10 = 0; local_10 < *(int *)((int)param_1 + 0x44); local_10 = local_10 + 1) {
      *(undefined4 *)((int)param_1 + local_10 * 0x38 + 0x6c) =
           *(undefined4 *)
            (&DAT_10068804 +
            *(int *)((int)param_1 + 0x240) * 0x24 + *(int *)((int)param_1 + 0x24) * 900);
    }
  }
  local_8 = param_1;
  thunk_FUN_10013500(param_1);
  local_8 = (void *)0x1001530c;
  __chkesp();
  return;
}

