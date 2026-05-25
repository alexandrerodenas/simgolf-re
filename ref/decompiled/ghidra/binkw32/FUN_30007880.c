/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30007880 @ 0x30007880 */


void FUN_30007880(void)

{
  DAT_30041bb8 = DAT_30041bb8 + -1;
  if ((((DAT_30041bb8 == 0) && (DAT_30041b9c != 0)) && (DAT_3003da40 != (int *)0x0)) &&
     (DAT_3003da40 != (int *)0xffffffff)) {
    (**(code **)(*DAT_3003da40 + 8))(DAT_3003da40);
    DAT_3003da40 = (int *)0xffffffff;
  }
  return;
}

