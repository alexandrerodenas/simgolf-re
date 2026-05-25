/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004f1ea @ 0x1004F1EA */


void FUN_1004f1ea(void)

{
  size_t sVar1;
  
  sVar1 = _strlen(DAT_100b57b0);
  DAT_100b57ac = (uint)(sVar1 == 3);
  if (sVar1 == 3) {
    DAT_100b57a8 = 2;
  }
  else {
    DAT_100b57a8 = FUN_1004f610(DAT_100b57b0);
  }
  EnumSystemLocalesA(FUN_1004f240,1);
  if ((DAT_100b57b8 & 4) == 0) {
    DAT_100b57b8 = 0;
  }
  return;
}

