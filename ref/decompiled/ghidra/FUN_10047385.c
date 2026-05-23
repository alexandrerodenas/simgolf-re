/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10047385 @ 0x10047385 */
/* Body size: 90 addresses */


void __thiscall FUN_10047385(void *this,char *param_1)

{
  char cVar1;
  char cVar2;
  undefined *this_00;
  uint uVar3;
  undefined *puVar4;
  
  this_00 = (undefined *)(int)*param_1;
  uVar3 = FUN_1004b3e4(this,(uint)this_00);
  if (uVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_100567a0 < 2) {
        uVar3 = (byte)PTR_DAT_100567ac[*param_1 * 2] & 4;
        this_00 = PTR_DAT_100567ac;
      }
      else {
        puVar4 = (undefined *)0x4;
        uVar3 = FUN_1004b36f(this_00,(int)*param_1,4);
        this_00 = puVar4;
      }
    } while (uVar3 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_100567a4;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar2;
    cVar2 = cVar1;
  } while (*param_1 != '\0');
  return;
}

