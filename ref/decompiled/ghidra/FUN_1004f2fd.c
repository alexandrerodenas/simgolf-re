/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004f2fd @ 0x1004F2FD */
/* Body size: 55 addresses */


void FUN_1004f2fd(void)

{
  size_t sVar1;
  
  sVar1 = _strlen(DAT_100b57b4);
  DAT_100b57a4 = (uint)(sVar1 == 3);
  EnumSystemLocalesA(FUN_1004f334,1);
  if ((DAT_100b57b8 & 4) == 0) {
    DAT_100b57b8 = 0;
  }
  return;
}

