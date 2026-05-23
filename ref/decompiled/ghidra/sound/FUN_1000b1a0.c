/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000b1a0 @ 0x1000B1A0 */
/* Body size: 29 addresses */


undefined4 FUN_1000b1a0(void)

{
  if (DAT_100b4a20 != (undefined4 *)0x0) {
    (**(code **)*DAT_100b4a20)(1);
  }
  DAT_100b4a20 = (undefined4 *)0x0;
  return 0;
}

