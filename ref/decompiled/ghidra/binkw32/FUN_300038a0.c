/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300038a0 @ 0x300038A0 */


void FUN_300038a0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (param_2 + 0xfU & 0xfffffff0) +
          (((DAT_30041b80 >> 5) - (param_2 + 0xfU >> 5 & 0x1f)) + 1 & 0x1f) * 0x20;
  DAT_30041b80 = DAT_30041b80 + iVar1;
  (&DAT_3004167c)[DAT_30041b84] = iVar1;
  (&DAT_3004187c)[DAT_30041b84] = param_1;
  DAT_30041b84 = DAT_30041b84 + 1;
  return;
}

