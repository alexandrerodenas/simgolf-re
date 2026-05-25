/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10023020 @ 0x10023020 */


int __cdecl FUN_10023020(undefined **param_1,byte *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  if ((param_1 == (undefined **)0x0) &&
     (iVar2 = FUN_1001a320(2,0x1006046c,0x38,0,(byte *)"str != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  if ((param_2 == (byte *)0x0) &&
     (iVar2 = FUN_1001a320(2,0x1006046c,0x39,0,(byte *)"format != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  FUN_1001e8e0(param_1,param_1);
  iVar2 = FUN_10029a20(param_1);
  iVar3 = FUN_10024c60((int *)param_1,param_2,(undefined4 *)&stack0x0000000c);
  FUN_10029b80(iVar2,(int *)param_1);
  FUN_1001e950(param_1);
  return iVar3;
}

