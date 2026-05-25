/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10013500 @ 0x10013500 */


void __fastcall FUN_10013500(void *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  void *local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = param_1;
  thunk_FUN_10013670(param_1,*(int *)((int)param_1 + 0x24));
  if (*(int *)((int)local_8 + 0x34) != 0) {
    thunk_FUN_10013670(*(void **)((int)local_8 + 0x34),-1);
  }
  if ((*(int *)((int)local_8 + 0x34) != 0) && (*(int *)((int)local_8 + 0x3c) != 0)) {
    thunk_FUN_10013670(*(void **)(*(int *)((int)local_8 + 0x34) + 0x3c),-1);
  }
  if (*(int *)((int)local_8 + 0x3c) != 0) {
    thunk_FUN_10013670(*(void **)((int)local_8 + 0x3c),-1);
  }
  if ((*(int *)((int)local_8 + 0x38) != 0) && (*(int *)((int)local_8 + 0x3c) != 0)) {
    thunk_FUN_10013670(*(void **)(*(int *)((int)local_8 + 0x38) + 0x3c),-1);
  }
  if (*(int *)((int)local_8 + 0x38) != 0) {
    thunk_FUN_10013670(*(void **)((int)local_8 + 0x38),-1);
  }
  if ((*(int *)((int)local_8 + 0x38) != 0) && (*(int *)((int)local_8 + 0x40) != 0)) {
    thunk_FUN_10013670(*(void **)(*(int *)((int)local_8 + 0x38) + 0x40),-1);
  }
  if (*(int *)((int)local_8 + 0x40) != 0) {
    thunk_FUN_10013670(*(void **)((int)local_8 + 0x40),-1);
  }
  if ((*(int *)((int)local_8 + 0x34) != 0) && (*(int *)((int)local_8 + 0x40) != 0)) {
    thunk_FUN_10013670(*(void **)(*(int *)((int)local_8 + 0x34) + 0x40),-1);
  }
  local_8 = (void *)0x10013619;
  __chkesp();
  return;
}

