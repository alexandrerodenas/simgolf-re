/* Ghidra decompiled: golf.exe */
/* Function: FUN_00493580 @ 0x00493580 */
/* Body size: 39 addresses */


void FUN_00493580(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 != param_2) {
    uVar2 = *param_2;
    uVar1 = *param_1;
    *param_1 = uVar1 ^ uVar2;
    uVar2 = *param_2 ^ uVar1 ^ uVar2;
    *param_2 = uVar2;
    *param_1 = *param_1 ^ uVar2;
  }
  return;
}

