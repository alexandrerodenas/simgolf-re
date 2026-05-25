/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10034f80 @ 0x10034F80 */


int FUN_10034f80(void)

{
  undefined4 local_8;
  
  FUN_10034fc0();
  if (DAT_10067a54 < 7) {
    DAT_10067a54 = DAT_10067a54 + 1;
    local_8 = DAT_10067a54;
  }
  else {
    local_8 = -1;
  }
  FUN_10034fe0();
  return local_8;
}

