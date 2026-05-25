/* Ghidra decompiled: golf.exe */
/* Function: FUN_00497cc0 @ 0x00497CC0 */


void __fastcall FUN_00497cc0(int param_1)

{
  if ((*(uint *)(param_1 + 0xe8) & 0x20000000) != 0) {
    (**(code **)(*(int *)(param_1 + 100) + 0x20))();
    *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) & 0xdfffffff;
    FUN_00499140(0,0,*(undefined4 *)(param_1 + 0xe4),0x200,0);
  }
  return;
}

