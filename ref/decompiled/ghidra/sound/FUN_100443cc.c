/* Ghidra decompiled: sound.dll */
/* Function: FUN_100443cc @ 0x100443CC */


void __cdecl FUN_100443cc(char *param_1)

{
  char cVar1;
  char cVar2;
  undefined *this;
  uint uVar3;
  undefined *puVar4;
  
  this = (undefined *)(int)*param_1;
  uVar3 = FUN_100498b9((uint)this);
  if (uVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_10067730 < 2) {
        uVar3 = (byte)PTR_DAT_1006773c[*param_1 * 2] & 4;
        this = PTR_DAT_1006773c;
      }
      else {
        puVar4 = (undefined *)0x4;
        uVar3 = FUN_1004983c(this,(int)*param_1,4);
        this = puVar4;
      }
    } while (uVar3 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_10067734;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar2;
    cVar2 = cVar1;
  } while (*param_1 != '\0');
  return;
}

