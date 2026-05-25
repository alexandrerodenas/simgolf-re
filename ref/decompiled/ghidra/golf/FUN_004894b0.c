/* Ghidra decompiled: golf.exe */
/* Function: FUN_004894b0 @ 0x004894B0 */


void __fastcall FUN_004894b0(int param_1)

{
  int *piVar1;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 200) != 0) {
    local_4 = 0;
    if (0 < *(int *)(param_1 + 0xd0)) {
      do {
        *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(*(int *)(param_1 + 200) + 0xc);
        piVar1 = *(int **)(*(int *)(param_1 + 200) + 8);
        (**(code **)(*(int *)(param_1 + 0xc0) + 4))(piVar1);
        if (piVar1 != (int *)0x0) {
          (*(code *)**(undefined4 **)(*(int *)(*piVar1 + 4) + (int)piVar1))(1);
        }
        *(undefined4 *)(*(int *)(param_1 + 200) + 8) = 0;
        piVar1 = *(int **)(param_1 + 200);
        if (piVar1 != (int *)0x0) {
          (*(code *)**(undefined4 **)((int)piVar1 + *(int *)(*piVar1 + 4)))(1);
        }
        *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0xcc);
        local_4 = local_4 + 1;
      } while (local_4 < *(int *)(param_1 + 0xd0));
    }
    *(undefined4 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xd4) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0;
  }
  *(undefined4 *)(param_1 + 0xd4) = 0;
  FUN_004747e0();
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x24) = DAT_004e44cc;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = DAT_004e4488;
  *(undefined4 *)(param_1 + 0x34) = DAT_0083b61c;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = DAT_0083b624;
  *(undefined4 *)(param_1 + 0x48) = DAT_004e448c;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = DAT_0083b620;
  *(undefined4 *)(param_1 + 0x50) = DAT_004e4490;
  *(undefined4 *)(param_1 + 0x54) = DAT_004e4494;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = DAT_004e4498;
  *(undefined4 *)(param_1 + 0xb0) = DAT_0083b634;
  *(undefined4 *)(param_1 + 0xb4) = DAT_0083b638;
  *(undefined4 *)(param_1 + 0xb8) = DAT_0083b63c;
  *(undefined4 *)(param_1 + 0xbc) = DAT_0083b640;
  *(undefined4 *)(param_1 + 0x74) = DAT_0083b628;
  *(undefined4 *)(param_1 + 0x80) = DAT_004e449c;
  *(undefined4 *)(param_1 + 0x8c) = DAT_004e44a8;
  *(undefined4 *)(param_1 + 0x98) = DAT_004e44b4;
  *(undefined4 *)(param_1 + 0xa4) = DAT_004e44c0;
  *(undefined4 *)(param_1 + 0x78) = DAT_0083b62c;
  *(undefined4 *)(param_1 + 0x84) = DAT_004e44a0;
  *(undefined4 *)(param_1 + 0x90) = DAT_004e44ac;
  *(undefined4 *)(param_1 + 0x9c) = DAT_004e44b8;
  *(undefined4 *)(param_1 + 0xa8) = DAT_004e44c4;
  *(undefined4 *)(param_1 + 0x7c) = DAT_0083b630;
  *(undefined4 *)(param_1 + 0x88) = DAT_004e44a4;
  *(undefined4 *)(param_1 + 0x94) = DAT_004e44b0;
  *(undefined4 *)(param_1 + 0xa0) = DAT_004e44bc;
  *(undefined4 *)(param_1 + 0xac) = DAT_004e44c8;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  return;
}

