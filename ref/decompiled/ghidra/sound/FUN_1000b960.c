/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000b960 @ 0x1000B960 */


undefined4 __fastcall FUN_1000b960(int *param_1)

{
  int *piVar1;
  undefined *puVar2;
  
  if (param_1[0x6a] != 0) {
    thunk_FUN_10008d70(param_1[0x6a]);
    thunk_FUN_10008920(DAT_100b49ec,param_1);
  }
  if ((*(byte *)(param_1 + 0x69) & 0x20) == 0) {
    thunk_FUN_1002a8a0(&DAT_100b5038);
  }
  else {
    DAT_100b49bc = DAT_100b49bc & 0xfe ^ 1;
  }
  thunk_FUN_1000cc70((int)param_1);
  if (DAT_100b49f0 != (int *)0x0) {
    if (DAT_100b49f8 != (undefined *)0x0) {
      thunk_FUN_100132e0(DAT_100b49f0,DAT_100b49f8);
      DAT_100b49f8 = (undefined *)0x0;
    }
    if ((*(byte *)(DAT_100b49f0 + 0x1b) & 8) != 0) {
      thunk_FUN_100132e0(DAT_100b49f0,DAT_100b49fc);
      thunk_FUN_100132e0(DAT_100b49f0,DAT_100b4a00);
    }
    piVar1 = DAT_100b49f0;
    if (DAT_100b49f0 != (int *)0x0) {
      thunk_FUN_10011290(DAT_100b49f0);
      FUN_1004249a((undefined *)piVar1);
    }
    DAT_100b49f0 = (int *)0x0;
  }
  puVar2 = DAT_100b49f4;
  if (DAT_100b49f4 != (undefined *)0x0) {
    thunk_FUN_10006ec0((int)DAT_100b49f4);
    FUN_1004249a(puVar2);
    DAT_100b49f4 = (undefined *)0x0;
  }
  if ((*(byte *)(param_1 + 0x69) & 0x20) != 0) {
    thunk_FUN_100287c0(0x100b49b8);
  }
  return 0;
}

