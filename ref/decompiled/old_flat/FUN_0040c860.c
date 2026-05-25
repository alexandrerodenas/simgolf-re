/* Ghidra decompiled: golf.exe */
/* Function: FUN_0040c860 @ 0x0040C860 */


void FUN_0040c860(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((*(int *)((int)&DAT_0056c770 + iVar1) == param_1) &&
       (*(int *)((int)&DAT_0056c794 + iVar1) == param_2)) {
      *(undefined4 *)((int)&DAT_0056a924 + iVar1) = 0;
    }
    iVar1 = iVar1 + 4;
  } while (iVar1 < 0x20);
  return;
}

