/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002d643 @ 0x3002D643 */


void __thiscall FUN_3002d643(void *this,char *param_1)

{
  char cVar1;
  char cVar2;
  undefined *this_00;
  uint uVar3;
  undefined *puVar4;
  
  this_00 = (undefined *)(int)*param_1;
  uVar3 = FUN_3002d4ff(this,(uint)this_00);
  if (uVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_30040e1c < 2) {
        uVar3 = (byte)PTR_DAT_30040c10[*param_1 * 2] & 4;
        this_00 = PTR_DAT_30040c10;
      }
      else {
        puVar4 = (undefined *)0x4;
        uVar3 = FUN_3002f7b7(this_00,(int)*param_1,4);
        this_00 = puVar4;
      }
    } while (uVar3 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_30040e20;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar2;
    cVar2 = cVar1;
  } while (*param_1 != '\0');
  return;
}

