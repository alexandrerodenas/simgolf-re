/* Ghidra decompiled: golf.exe */
/* Function: FUN_0048caf0 @ 0x0048CAF0 */
/* Body size: 146 addresses */


int __thiscall FUN_0048caf0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + -0x58);
  if ((*(byte *)(*(int *)(iVar2 + 4) + 0x44 + param_1) & 8) != 0) {
    if (param_2 < 1) {
      iVar1 = *(int *)(iVar2 + 8);
      iVar2 = iVar1 + param_1;
      if (*(int *)(param_1 + -0x34) <
          *(int *)(iVar1 + 0x78 + param_1) - *(int *)(iVar1 + 4 + param_1)) {
        iVar2 = *(int *)(param_1 + -0x34) + 1;
        *(int *)(param_1 + -0x34) = iVar2;
        FUN_0047b9f0(iVar2);
        iVar2 = (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + -0x58) + 4) + -0x58 + param_1) +
                            0x120))();
      }
    }
    else {
      iVar2 = *(int *)(param_1 + -0x34);
      if (0 < iVar2) {
        *(int *)(param_1 + -0x34) = iVar2 + -1;
        FUN_0047b9f0(iVar2 + -1);
        iVar2 = (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + -0x58) + 4) + -0x58 + param_1) +
                            0x120))();
        return iVar2;
      }
    }
  }
  return iVar2;
}

