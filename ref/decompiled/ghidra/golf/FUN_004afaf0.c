/* Ghidra decompiled: golf.exe */
/* Function: FUN_004afaf0 @ 0x004AFAF0 */


void FUN_004afaf0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x18);
  *(undefined4 **)(param_1 + 0x154) = puVar1;
  *puVar1 = FUN_004afb60;
  *(code **)(*(int *)(param_1 + 0x154) + 4) = FUN_004afc40;
  *(code **)(*(int *)(param_1 + 0x154) + 8) = FUN_004afdc0;
  *(undefined1 **)(*(int *)(param_1 + 0x154) + 0xc) = &LAB_004b0060;
  *(undefined1 **)(*(int *)(param_1 + 0x154) + 0x10) = &LAB_004b0300;
  *(code **)(*(int *)(param_1 + 0x154) + 0x14) = FUN_004b0320;
  return;
}

