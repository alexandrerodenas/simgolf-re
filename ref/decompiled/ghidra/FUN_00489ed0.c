/* Ghidra decompiled: golf.exe */
/* Function: FUN_00489ed0 @ 0x00489ED0 */
/* Body size: 117 addresses */


void __thiscall FUN_00489ed0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 8);
  iVar3 = 0;
  iVar1 = iVar2 + 0xc4 + param_1;
  iVar2 = *(int *)(iVar2 + 0xcc + param_1);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(int *)(iVar1 + 0xc) = iVar2;
    if (0 < *(int *)(iVar1 + 0x10)) {
      do {
        if (*(int *)(*(int *)(iVar1 + 0xc) + 4) == param_2) {
          FUN_00489f50(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 8) + 0xd8 + param_1),1);
          return;
        }
        iVar3 = iVar3 + 1;
        *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
        *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(*(int *)(iVar1 + 0xc) + 0xc);
      } while (iVar3 < *(int *)(iVar1 + 0x10));
    }
  }
  FUN_00489f50(0xffffffff,1);
  return;
}

