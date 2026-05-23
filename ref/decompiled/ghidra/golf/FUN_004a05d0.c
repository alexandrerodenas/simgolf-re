/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a05d0 @ 0x004A05D0 */
/* Body size: 1 addresses */


void __thiscall FUN_004a05d0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 4);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x18) == 0)) {
    if (iVar1 != 0) {
      FUN_004a5007(iVar1);
    }
    *(undefined4 *)(param_2 + 4) = 0;
  }
  return;
}

