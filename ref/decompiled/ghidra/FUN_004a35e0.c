/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a35e0 @ 0x004A35E0 */
/* Body size: 422 addresses */


void __fastcall FUN_004a35e0(int param_1)

{
  int *piVar1;
  undefined4 local_4;
  
  FUN_00480610();
  FUN_004894b0();
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x70) = 1;
  *(undefined4 *)(param_1 + 0x74) = 1;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(int *)(param_1 + 0x80) != 0) {
    local_4 = 0;
    if (0 < *(int *)(param_1 + 0x88)) {
      do {
        *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(*(int *)(param_1 + 0x80) + 0xc);
        piVar1 = *(int **)(*(int *)(param_1 + 0x80) + 8);
        (**(code **)(*(int *)(param_1 + 0x78) + 4))(piVar1);
        if (piVar1 != (int *)0x0) {
          (*(code *)**(undefined4 **)(*(int *)(*piVar1 + 4) + (int)piVar1))(1);
        }
        *(undefined4 *)(*(int *)(param_1 + 0x80) + 8) = 0;
        piVar1 = *(int **)(param_1 + 0x80);
        if (piVar1 != (int *)0x0) {
          (*(code *)**(undefined4 **)(*(int *)(*piVar1 + 4) + (int)piVar1))(1);
        }
        *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x84);
        local_4 = local_4 + 1;
      } while (local_4 < *(int *)(param_1 + 0x88));
    }
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  *(undefined4 *)(param_1 + 0x8c) = 0;
  FUN_00492830();
  *(undefined4 *)(param_1 + 8) = DAT_008409cc;
  FUN_00476310(DAT_004e449c,DAT_004e44a8,DAT_004e44b4,DAT_004e44c0);
  FUN_00476340(DAT_004e44a0,DAT_004e44ac,DAT_004e44b8,DAT_004e44c4);
  FUN_00476370(DAT_004e44a4,DAT_004e44b0,DAT_004e44bc,DAT_004e44c8);
  FUN_004762d0(0,0,0,0);
  return;
}

