/* Ghidra decompiled: golf.exe */
/* Function: FUN_00489950 @ 0x00489950 */


undefined4 __fastcall FUN_00489950(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0xf0);
  iVar1 = *(int *)(param_1 + 0xd0);
  if ((int)uVar4 <= iVar1 + -1) {
    *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 200);
    if ((int)uVar4 < 0) {
      iVar2 = (uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f);
      if (iVar1 < iVar2) goto LAB_004899b6;
      if (0 < iVar2) {
        do {
          iVar2 = iVar2 + -1;
          *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(*(int *)(param_1 + 0xcc) + 0x10);
        } while (iVar2 != 0);
      }
      uVar4 = uVar4 + iVar1;
    }
    else {
      uVar3 = uVar4;
      if (0 < (int)uVar4) {
        do {
          uVar3 = uVar3 - 1;
          *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(*(int *)(param_1 + 0xcc) + 0xc);
        } while (uVar3 != 0);
      }
    }
    *(uint *)(param_1 + 0xd4) = uVar4;
  }
LAB_004899b6:
  if (*(int *)(param_1 + 200) == 0) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(param_1 + 0xcc) + 4);
}

