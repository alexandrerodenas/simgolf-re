/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30002650 @ 0x30002650 */


void FUN_30002650(void)

{
  DAT_30041634 = DAT_30041634 + -1;
  if (DAT_30041634 == 0) {
    (**(code **)(*DAT_3004163c + 8))(DAT_3004163c);
    (**(code **)(*DAT_30041638 + 8))(DAT_30041638);
    DAT_30041638 = (int *)0x0;
    DAT_3004163c = (int *)0x0;
  }
  return;
}

