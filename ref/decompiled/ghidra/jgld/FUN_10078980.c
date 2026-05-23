/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10078980 @ 0x10078980 */
/* Body size: 283 addresses */


void __cdecl FUN_10078980(int param_1,void *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_4c [16];
  int local_c;
  int local_8;
  
  puVar2 = local_4c;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (*(int *)((int)param_2 + 0x38) != 0) {
    for (local_8 = 0; local_8 < *(int *)((int)param_2 + 0x30); local_8 = local_8 + 1) {
      FUN_10078ed0(param_1,*(void **)(*(int *)((int)param_2 + 0x38) + 4 + local_8 * 0x10));
    }
    FUN_10078ed0(param_1,*(void **)((int)param_2 + 0x38));
  }
  FUN_10078ed0(param_1,*(void **)((int)param_2 + 0xa0));
  FUN_10078ed0(param_1,*(void **)((int)param_2 + 0xac));
  if (*(int *)((int)param_2 + 0xb0) != 0) {
    for (local_c = 0; local_c < (int)(uint)*(byte *)((int)param_2 + 0xb5); local_c = local_c + 1) {
      FUN_10078ed0(param_1,*(void **)(*(int *)((int)param_2 + 0xb0) + local_c * 4));
    }
    FUN_10078ed0(param_1,*(void **)((int)param_2 + 0xb0));
  }
  FUN_10078940(param_2);
  local_8 = 0x10078a97;
  __chkesp();
  return;
}

