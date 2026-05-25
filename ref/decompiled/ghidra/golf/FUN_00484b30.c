/* Ghidra decompiled: golf.exe */
/* Function: FUN_00484b30 @ 0x00484B30 */


undefined4 __fastcall FUN_00484b30(int param_1)

{
  DWORD DVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0x40) == 0) && ((*(uint *)(param_1 + 0x58) >> 4 & 1) != 0)) {
    if (*(int *)(param_1 + 0x68) != 0) {
      DVar1 = timeGetTime();
      if (DVar1 - *(int *)(param_1 + 0x68) < *(uint *)(param_1 + 100)) {
        return 1;
      }
    }
    return 0;
  }
  uVar2 = FUN_004845d0();
  return uVar2;
}

