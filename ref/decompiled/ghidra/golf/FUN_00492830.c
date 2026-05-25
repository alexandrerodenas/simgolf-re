/* Ghidra decompiled: golf.exe */
/* Function: FUN_00492830 @ 0x00492830 */


void __fastcall FUN_00492830(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x50) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x50))(3);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  FUN_00492800();
  return;
}

