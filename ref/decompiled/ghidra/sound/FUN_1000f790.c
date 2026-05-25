/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000f790 @ 0x1000F790 */


undefined4 __fastcall FUN_1000f790(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x60);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x34))(piVar1,0);
    (**(code **)(**(int **)(param_1 + 0x60) + 0x10))
              (*(int **)(param_1 + 0x60),&stack0xfffffff4,&stack0xfffffff0);
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 1;
  return 0;
}

