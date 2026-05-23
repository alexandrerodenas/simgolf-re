/* Ghidra decompiled: golf.exe */
/* Function: FUN_00481ba0 @ 0x00481BA0 */
/* Body size: 243 addresses */


void __fastcall FUN_00481ba0(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x74) = 0;
  if (*(undefined4 **)(param_1 + 0x54) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x54))(1);
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  if (*(int **)(param_1 + 0x6c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x6c) + 0xc))(1);
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  if (*(int **)(param_1 + 0x70) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x70) + 0xc))(1);
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  iVar1 = *(int *)(param_1 + 100);
  if (iVar1 != 0) {
    FUN_00483010();
    FUN_004a4ffc(iVar1);
    *(undefined4 *)(param_1 + 100) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x68);
  if (iVar1 != 0) {
    FUN_00483010();
    FUN_004a4ffc(iVar1);
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x5c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x5c))(1);
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x60) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x60))(1);
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x78);
  if (iVar1 != 0) {
    FUN_00483010();
    FUN_004a4ffc(iVar1);
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_004a4ffc(*(int *)(param_1 + 0x44));
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_004a4ffc(*(int *)(param_1 + 0x48));
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_004a4ffc(*(int *)(param_1 + 0x4c));
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  return;
}

