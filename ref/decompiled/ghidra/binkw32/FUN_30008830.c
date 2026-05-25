/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30008830 @ 0x30008830 */


void FUN_30008830(uint *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_300088f0(0x200,param_2,4,1);
  *param_1 = uVar1;
  uVar1 = FUN_300088f0(0x200,param_2 >> 1,4,1);
  param_1[1] = uVar1;
  uVar1 = FUN_300088f0(0x200,param_2,8,0x40);
  param_1[2] = uVar1;
  uVar1 = FUN_300088f0(0x200,param_2,8,8);
  param_1[3] = uVar1;
  uVar1 = FUN_300088f0(0x200,param_2,5,1);
  param_1[4] = uVar1;
  uVar1 = FUN_300088f0(0x200,param_2,5,1);
  param_1[5] = uVar1;
  uVar1 = FUN_300088f0(0x200,param_2,0xb,1);
  param_1[6] = uVar1;
  uVar1 = FUN_300088f0(0x200,param_2,0xb,1);
  param_1[7] = uVar1;
  uVar1 = FUN_300088f0(0x200,param_2,4,0x30);
  param_1[8] = uVar1;
  return;
}

