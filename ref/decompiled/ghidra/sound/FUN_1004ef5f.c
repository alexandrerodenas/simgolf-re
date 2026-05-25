/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004ef5f @ 0x1004EF5F */


void FUN_1004ef5f(void)

{
  size_t sVar1;
  
  sVar1 = _strlen(DAT_100b57b0);
  DAT_100b57ac = (uint)(sVar1 == 3);
  sVar1 = _strlen(DAT_100b57b4);
  DAT_100b57a4 = (uint)(sVar1 == 3);
  DAT_100b57a0 = 0;
  if (DAT_100b57ac == 0) {
    DAT_100b57a8 = FUN_1004f610(DAT_100b57b0);
  }
  else {
    DAT_100b57a8 = 2;
  }
  EnumSystemLocalesA(FUN_1004efe6,1);
  if ((((DAT_100b57b8 & 0x100) == 0) || ((DAT_100b57b8 & 0x200) == 0)) || ((DAT_100b57b8 & 7) == 0))
  {
    DAT_100b57b8 = 0;
  }
  return;
}

