/* Ghidra decompiled: golf.exe */
/* Function: FUN_004ad425 @ 0x004AD425 */
/* Body size: 45 addresses */


undefined4 FUN_004ad425(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((param_3 == 10) && (param_1 < 0)) {
    uVar1 = 1;
    param_3 = 10;
  }
  else {
    uVar1 = 0;
  }
  FUN_004ad452(param_1,param_2,param_3,uVar1);
  return param_2;
}

