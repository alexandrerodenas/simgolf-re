/* Ghidra decompiled: golf.exe */
/* Function: FUN_004b51e0 @ 0x004B51E0 */
/* Body size: 191 addresses */


void FUN_004b51e0(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x24);
  *(undefined4 **)(param_1 + 0x144) = puVar1;
  *puVar1 = FUN_004b5810;
  puVar1[1] = FUN_004b5ca0;
  puVar1[2] = &LAB_004b5cd0;
  puVar1[4] = 0;
  FUN_004b52a0(param_1);
  if (*(int *)(param_1 + 0xa4) == 0) {
    *(undefined4 *)(param_1 + 0xdc) = 0;
    *(undefined4 *)(param_1 + 0xa0) = 1;
  }
  else {
    FUN_004b5470(param_1);
  }
  if (*(int *)(param_1 + 0xdc) != 0) {
    *(undefined4 *)(param_1 + 0xb0) = 1;
  }
  if (param_2 == 0) {
    puVar1[5] = 0;
  }
  else if (*(int *)(param_1 + 0xb0) == 0) {
    puVar1[5] = 2;
  }
  else {
    puVar1[5] = 1;
  }
  puVar1[8] = 0;
  puVar1[6] = 0;
  if (*(int *)(param_1 + 0xb0) != 0) {
    puVar1[7] = *(int *)(param_1 + 0xa0) << 1;
    return;
  }
  puVar1[7] = *(undefined4 *)(param_1 + 0xa0);
  return;
}

