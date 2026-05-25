/* Ghidra decompiled: golf.exe */
/* Function: FUN_004884b0 @ 0x004884B0 */


void __fastcall FUN_004884b0(int param_1)

{
  if (*(HCURSOR *)(param_1 + 4) != (HCURSOR)0x0) {
    DestroyCursor(*(HCURSOR *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 8))(1);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

