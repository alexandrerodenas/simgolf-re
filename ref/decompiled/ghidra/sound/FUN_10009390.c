/* Ghidra decompiled: sound.dll */
/* Function: FUN_10009390 @ 0x10009390 */


undefined4 FUN_10009390(void)

{
  undefined *puVar1;
  
  if (DAT_100b49ec != (undefined *)0x0) {
    thunk_FUN_10008bf0((int)DAT_100b49ec);
    puVar1 = DAT_100b49ec;
    if (DAT_100b49ec != (undefined *)0x0) {
      thunk_FUN_10008ac0((int)DAT_100b49ec);
      FUN_1004249a(puVar1);
    }
    DAT_100b49ec = (undefined *)0x0;
    return 0;
  }
  return 0;
}

