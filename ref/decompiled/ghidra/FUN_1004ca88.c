/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1004ca88 @ 0x1004CA88 */
/* Body size: 41 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004ca88(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_100591a0;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_10059084 = 0;
  _DAT_1005909c = 0;
  DAT_100592a4 = 0;
  DAT_10059090 = 0;
  DAT_10059094 = 0;
  DAT_10059098 = 0;
  return;
}

