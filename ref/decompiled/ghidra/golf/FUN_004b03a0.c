/* Ghidra decompiled: golf.exe */
/* Function: FUN_004b03a0 @ 0x004B03A0 */


void FUN_004b03a0(int *param_1)

{
  undefined4 uVar1;
  
  FUN_004b51e0(param_1,0);
  if (param_1[0x2a] == 0) {
    FUN_004b4a60(param_1);
    FUN_004b4040(param_1);
    FUN_004b3a80(param_1,0);
  }
  FUN_004b34b0(param_1);
  if (param_1[0x2b] == 0) {
    if (param_1[0x37] == 0) {
      FUN_004b12b0(param_1);
    }
    else {
      FUN_004b1f30();
    }
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 1;
    (**(code **)*param_1)(param_1);
  }
  if ((param_1[0x28] < 2) && (param_1[0x2c] == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  FUN_004b06f0(param_1,uVar1);
  FUN_004b0560(param_1,0);
  FUN_004afaf0(param_1);
  (**(code **)(param_1[1] + 0x18))(param_1);
  (**(code **)(param_1[0x55] + 4))(param_1);
  return;
}

