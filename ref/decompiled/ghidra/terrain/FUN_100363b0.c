/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_100363b0 @ 0x100363B0 */
/* Body size: 87 addresses */


undefined4 __fastcall FUN_100363b0(void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_10037510(0x200,2,"streamb.cpp",0x13b);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    FUN_10036410(param_1,iVar1,iVar1 + 0x200,1);
    uVar2 = 1;
  }
  return uVar2;
}

