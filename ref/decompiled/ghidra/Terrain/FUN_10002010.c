/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10002010 @ 0x10002010 */


undefined8 __fastcall FUN_10002010(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 local_44 [16];
  
  puVar3 = local_44;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if (param_3 == 0x3f000000) {
    uVar1 = 2;
  }
  else {
    lVar4 = __ftol();
    param_2 = (undefined4)((ulonglong)lVar4 >> 0x20);
    uVar1 = (undefined4)lVar4;
  }
  return CONCAT44(param_2,uVar1);
}

