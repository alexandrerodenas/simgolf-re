/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1003ce40 @ 0x1003CE40 */
/* Body size: 67 addresses */


undefined4 __thiscall FUN_1003ce40(void *this,int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  if (0 < param_3) {
    puVar1 = (undefined1 *)((int)this + param_2 * 4 + 0xe);
    puVar2 = (undefined1 *)(param_1 + 2);
    do {
      puVar1[-2] = puVar2[-2];
      puVar1[-1] = puVar2[-1];
      *puVar1 = *puVar2;
      puVar1 = puVar1 + 4;
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 3;
    } while (param_3 != 0);
  }
  FUN_1003cc10((int)this);
  return 0;
}

