/* Ghidra decompiled: golf.exe */
/* Function: FUN_00492a90 @ 0x00492A90 */


int __thiscall
FUN_00492a90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x58) + -1;
  if (-1 < iVar2) {
    iVar3 = iVar2 * 0x20;
    do {
      iVar1 = FUN_00492610(param_2,param_3,*(int *)(param_1 + 0x50) + 4 + iVar3);
      if (iVar1 != 0) {
        if (param_4 != (undefined4 *)0x0) {
          *param_4 = *(undefined4 *)(iVar2 * 0x20 + 0x18 + *(int *)(param_1 + 0x50));
        }
        if (param_5 != (undefined4 *)0x0) {
          *param_5 = *(undefined4 *)(iVar2 * 0x20 + 0x14 + *(int *)(param_1 + 0x50));
        }
        return iVar2;
      }
      iVar2 = iVar2 + -1;
      iVar3 = iVar3 + -0x20;
    } while (-1 < iVar2);
  }
  return -1;
}

