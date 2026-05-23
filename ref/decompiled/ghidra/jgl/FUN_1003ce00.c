/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1003ce00 @ 0x1003CE00 */
/* Body size: 56 addresses */


undefined4 __thiscall FUN_1003ce00(void *this,int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  if (0 < param_3) {
    puVar2 = (undefined1 *)(param_1 + 2);
    puVar1 = (undefined1 *)((int)this + param_2 * 4 + 0xe);
    do {
      puVar2[-2] = puVar1[-2];
      puVar2[-1] = puVar1[-1];
      *puVar2 = *puVar1;
      puVar2 = puVar2 + 3;
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 4;
    } while (param_3 != 0);
  }
  return 0;
}

