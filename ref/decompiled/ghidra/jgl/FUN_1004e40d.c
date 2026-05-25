/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1004e40d @ 0x1004E40D */


undefined4 __cdecl FUN_1004e40d(uint param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = param_1 + param_2;
  if ((uVar1 < param_1) || (uVar1 < param_2)) {
    uVar2 = 1;
  }
  *param_3 = uVar1;
  return uVar2;
}

