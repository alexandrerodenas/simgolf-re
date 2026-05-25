/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10048ef1 @ 0x10048EF1 */


int __cdecl FUN_10048ef1(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    iVar1 = flsall(0);
    return iVar1;
  }
  iVar1 = FUN_10048f2c(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(byte *)((int)param_1 + 0xd) & 0x40) != 0) {
    iVar1 = FUN_1004c3b5(param_1[4]);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}

