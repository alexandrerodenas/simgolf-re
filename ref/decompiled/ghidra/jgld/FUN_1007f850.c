/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1007f850 @ 0x1007F850 */
/* Body size: 130 addresses */


undefined4 __cdecl FUN_1007f850(undefined **param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  if ((param_1 == (undefined **)0x0) &&
     (iVar2 = FUN_10081f90(2,0x1011ec94,0x3a,0,(byte *)"stream != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if (((uint)param_1[3] & 0x40) == 0) {
    FUN_10083230(param_1);
    local_8 = FUN_1007f8e0((int *)param_1);
    FUN_100832a0(param_1);
  }
  else {
    param_1[3] = (undefined *)0x0;
  }
  return local_8;
}

