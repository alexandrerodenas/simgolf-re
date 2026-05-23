/* Ghidra decompiled: sound.dll */
/* Function: FUN_10011790 @ 0x10011790 */
/* Body size: 93 addresses */


undefined4 __thiscall FUN_10011790(void *this,uint param_1,char *param_2,size_t param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  
  if (*(uint *)((int)this + 0x148) <= param_1) {
    return 10;
  }
  puVar1 = *(undefined4 **)((int)this + 4);
  if (puVar1 == (undefined4 *)0x0) {
    return 3;
  }
  uVar2 = 0;
  if (param_1 != 0) {
    do {
      if (puVar1 == (undefined4 *)0x0) {
        return 3;
      }
      puVar1 = (undefined4 *)puVar1[4];
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_1);
  }
  if (puVar1 == (undefined4 *)0x0) {
    return 3;
  }
  _strncpy(param_2,(char *)*puVar1,param_3);
  return 0;
}

