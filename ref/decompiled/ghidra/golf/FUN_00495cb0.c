/* Ghidra decompiled: golf.exe */
/* Function: FUN_00495cb0 @ 0x00495CB0 */
/* Body size: 101 addresses */


void FUN_00495cb0(int param_1)

{
  uint uVar1;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (DAT_0083ad4c == 0) {
    uVar1 = *(uint *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      if ((uVar1 & 2) != 0) {
        FUN_00486ec0();
        return;
      }
      *(uint *)(param_1 + 8) = uVar1 | 2;
    }
    if ((DAT_0083aff0 == 0) || (param_1 == DAT_0083aff0)) {
      if (*(code **)(param_1 + 0x10) != (code *)0x0) {
        (**(code **)(param_1 + 0x10))(*(undefined4 *)(param_1 + 0x1c));
      }
      if (*(code **)(param_1 + 0x14) != (code *)0x0) {
        (**(code **)(param_1 + 0x14))
                  (*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x18));
      }
    }
  }
  return;
}

