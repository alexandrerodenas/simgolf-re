/* Ghidra decompiled: golf.exe */
/* Function: FUN_004b70e9 @ 0x004B70E9 */


undefined4 FUN_004b70e9(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  do {
    *param_1 = *param_1 + 1;
    uVar1 = FUN_004b70b8(param_2);
    iVar2 = FUN_004a6598(uVar1);
  } while (iVar2 != 0);
  return uVar1;
}

