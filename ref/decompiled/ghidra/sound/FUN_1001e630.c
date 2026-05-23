/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001e630 @ 0x1001E630 */
/* Body size: 62 addresses */


void __thiscall FUN_1001e630(void *this,uint param_1)

{
  if (DAT_100b49ec != (uint *)0x0) {
    if (*DAT_100b49ec < param_1) {
      *(int *)((int)this + 0x174) =
           (int)((ulonglong)*(uint *)((int)this + 0x17c) /
                ((ulonglong)param_1 / (ulonglong)*DAT_100b49ec));
      return;
    }
    *(undefined4 *)((int)this + 0x174) = *(undefined4 *)((int)this + 0x17c);
  }
  return;
}

