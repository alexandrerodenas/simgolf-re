/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10012cf0 @ 0x10012CF0 */


void __fastcall FUN_10012cf0(void *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_4c [16];
  int local_c;
  void *local_8;
  
  puVar2 = local_4c;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (*(char *)((int)param_1 + 0x244) != '\0') {
    local_8 = param_1;
    thunk_FUN_10011ef0(param_1,0,2);
    thunk_FUN_10011ef0(local_8,1,2);
    thunk_FUN_10011ef0(local_8,0,3);
    thunk_FUN_10011ef0(local_8,1,3);
    for (local_c = 0; local_c < 3; local_c = local_c + 1) {
      *(float *)(&DAT_10070a18 + local_c * 4 + *(int *)((int)local_8 + 0x50) * 0xc) =
           *(float *)((int)local_8 + local_c * 4 + 0x74) +
           *(float *)((int)local_8 + local_c * 4 + 0xac) +
           *(float *)((int)local_8 + local_c * 4 + 0xe4) +
           *(float *)((int)local_8 + local_c * 4 + 0x11c) +
           *(float *)((int)local_8 + local_c * 4 + 0x154) +
           *(float *)((int)local_8 + local_c * 4 + 0x18c) +
           *(float *)((int)local_8 + local_c * 4 + 0x1c4) +
           *(float *)((int)local_8 + local_c * 4 + 0x1fc);
    }
    thunk_FUN_10037c80((float *)(&DAT_10070a18 + *(int *)((int)local_8 + 0x50) * 0xc));
    *(undefined1 *)((int)local_8 + 0x244) = 0;
  }
  local_8 = (void *)0x10012e15;
  __chkesp();
  return;
}

