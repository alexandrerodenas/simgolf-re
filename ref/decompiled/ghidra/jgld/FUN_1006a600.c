/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006a600 @ 0x1006A600 */


void __fastcall FUN_1006a600(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_4c [16];
  int local_c;
  int *local_8;
  
  puVar2 = local_4c;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = param_1;
  (**(code **)(*param_1 + 8))();
  __chkesp();
  for (local_c = 0; local_c < 10; local_c = local_c + 1) {
    *(undefined *)(local_8 + local_c + 3) = (&DAT_1011dab2)[local_c * 4];
    *(undefined *)((int)local_8 + local_c * 4 + 0xd) = (&DAT_1011dab1)[local_c * 4];
    *(undefined *)((int)local_8 + local_c * 4 + 0xe) = (&DAT_1011dab0)[local_c * 4];
    *(undefined1 *)((int)local_8 + local_c * 4 + 0xf) = 4;
    *(undefined *)(local_8 + local_c + 0xf9) = (&DAT_1011dada)[local_c * 4];
    *(undefined *)((int)local_8 + local_c * 4 + 0x3e5) = (&DAT_1011dad9)[local_c * 4];
    *(undefined *)((int)local_8 + local_c * 4 + 0x3e6) = (&DAT_1011dad8)[local_c * 4];
    *(undefined1 *)((int)local_8 + local_c * 4 + 999) = 4;
  }
  for (local_c = 10; local_c < 0xf6; local_c = local_c + 1) {
    *(undefined1 *)(local_8 + local_c + 3) = (undefined1)local_c;
    *(undefined1 *)((int)local_8 + local_c * 4 + 0xd) = (undefined1)local_c;
    *(undefined1 *)((int)local_8 + local_c * 4 + 0xe) = (undefined1)local_c;
    *(undefined1 *)((int)local_8 + local_c * 4 + 0xf) = 5;
  }
  for (local_c = 0; local_c < 2; local_c = local_c + 1) {
    *(char *)(local_8 + local_c + 0xb) = (char)local_c + '\b';
    *(undefined1 *)((int)local_8 + local_c * 4 + 0x2d) = 0;
    *(undefined1 *)((int)local_8 + local_c * 4 + 0x2e) = 0;
    *(undefined1 *)((int)local_8 + local_c * 4 + 0x2f) = 2;
    *(char *)(local_8 + local_c + 0xf9) = (char)local_c + -0xb;
    *(undefined1 *)((int)local_8 + local_c * 4 + 0x3e5) = 0;
    *(undefined1 *)((int)local_8 + local_c * 4 + 0x3e6) = 0;
    *(undefined1 *)((int)local_8 + local_c * 4 + 999) = 2;
  }
  thunk_FUN_1006a3d0();
  local_8 = (int *)0x1006a7df;
  __chkesp();
  return;
}

