/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10017f80 @ 0x10017F80 */
/* Body size: 252 addresses */


undefined4 * __cdecl FUN_10017f80(LPCSTR param_1,char *param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined **ppuVar4;
  
  if ((param_1 == (LPCSTR)0x0) &&
     (iVar2 = FUN_1001a320(2,0x1005fd50,0x35,0,(byte *)"file != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    puVar3 = (undefined4 *)(*pcVar1)();
    return puVar3;
  }
  if ((*param_1 == '\0') &&
     (iVar2 = FUN_1001a320(2,0x1005fd50,0x36,0,(byte *)"*file != _T(\'\\0\')"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    puVar3 = (undefined4 *)(*pcVar1)();
    return puVar3;
  }
  if ((param_2 == (char *)0x0) &&
     (iVar2 = FUN_1001a320(2,0x1005fd50,0x37,0,(byte *)"mode != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    puVar3 = (undefined4 *)(*pcVar1)();
    return puVar3;
  }
  if ((*param_2 == '\0') &&
     (iVar2 = FUN_1001a320(2,0x1005fd50,0x38,0,(byte *)"*mode != _T(\'\\0\')"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    puVar3 = (undefined4 *)(*pcVar1)();
    return puVar3;
  }
  ppuVar4 = (undefined **)FUN_1001fbe0((void *)0x0);
  if (ppuVar4 == (undefined **)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_1001f850(param_1,param_2,param_3,ppuVar4);
    FUN_1001e950(ppuVar4);
  }
  return puVar3;
}

