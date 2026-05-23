/* Ghidra decompiled: golf.exe */
/* Function: FUN_00492b10 @ 0x00492B10 */
/* Body size: 160 addresses */


int __thiscall
FUN_00492b10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x58) + -1;
  if (-1 < iVar3) {
    iVar4 = iVar3 * 0x20;
    do {
      iVar2 = FUN_00492610(param_2,param_3,*(int *)(param_1 + 0x50) + 4 + iVar4);
      if (iVar2 != 0) {
        if (param_4 != (undefined4 *)0x0) {
          *param_4 = *(undefined4 *)(iVar3 * 0x20 + 0x18 + *(int *)(param_1 + 0x50));
        }
        if (param_5 != (undefined4 *)0x0) {
          *param_5 = *(undefined4 *)(iVar3 * 0x20 + 0x14 + *(int *)(param_1 + 0x50));
        }
        if (param_6 != (undefined4 *)0x0) {
          puVar1 = (undefined4 *)(iVar3 * 0x20 + 4 + *(int *)(param_1 + 0x50));
          *param_6 = *puVar1;
          param_6[1] = puVar1[1];
          param_6[2] = puVar1[2];
          param_6[3] = puVar1[3];
        }
        return iVar3;
      }
      iVar3 = iVar3 + -1;
      iVar4 = iVar4 + -0x20;
    } while (-1 < iVar3);
  }
  return -1;
}

