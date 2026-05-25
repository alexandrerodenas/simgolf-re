/* Ghidra decompiled: golf.exe */
/* Function: FUN_00482dd0 @ 0x00482DD0 */


void __fastcall FUN_00482dd0(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  if (*(undefined4 **)(param_1 + 0x34) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x34))(3);
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  FUN_00473ae0();
  return;
}

