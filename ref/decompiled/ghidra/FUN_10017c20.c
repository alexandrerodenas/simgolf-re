/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10017c20 @ 0x10017C20 */
/* Body size: 130 addresses */


undefined4 __cdecl FUN_10017c20(undefined **param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  if ((param_1 == (undefined **)0x0) &&
     (iVar2 = FUN_1001a320(2,0x1005fcf0,0x3a,0,(byte *)"stream != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if (((uint)param_1[3] & 0x40) == 0) {
    FUN_1001e8e0(param_1,param_1);
    local_8 = FUN_10017cb0((int *)param_1);
    FUN_1001e950(param_1);
  }
  else {
    param_1[3] = (undefined *)0x0;
  }
  return local_8;
}

