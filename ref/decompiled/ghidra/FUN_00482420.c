/* Ghidra decompiled: golf.exe */
/* Function: FUN_00482420 @ 0x00482420 */
/* Body size: 102 addresses */


int __thiscall FUN_00482420(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
  FUN_00482570(*(undefined4 *)(param_2 + 0x38),param_2,param_3);
  if (*(uint *)(param_2 + 0x3c) == (uint)*(ushort *)(*(int *)(param_1 + 0x58) + 0x62)) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x48) + *(int *)(param_2 + 0x40) * 4);
    *(int **)(param_2 + 0x38) = piVar1;
    iVar2 = *piVar1;
    *(undefined4 *)(param_2 + 0x3c) = 0;
    *(int *)(param_2 + 0x38) = (int)piVar1 + iVar2;
    return param_2 + 8;
  }
  *(int *)(param_2 + 0x38) = **(int **)(param_2 + 0x38) + (int)*(int **)(param_2 + 0x38);
  return param_2 + 8;
}

