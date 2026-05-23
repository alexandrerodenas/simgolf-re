/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10083010 @ 0x10083010 */
/* Body size: 193 addresses */


int __cdecl FUN_10083010(undefined **param_1,byte *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  if ((param_1 == (undefined **)0x0) &&
     (iVar2 = FUN_10081f90(2,0x1011f708,0x38,0,(byte *)"str != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  if ((param_2 == (byte *)0x0) &&
     (iVar2 = FUN_10081f90(2,0x1011f708,0x39,0,(byte *)"format != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  FUN_10083230(param_1);
  iVar2 = FUN_1008e160(param_1);
  iVar3 = FUN_1008cb60((int *)param_1,param_2,(undefined4 *)&stack0x0000000c);
  FUN_1008e2c0(iVar2,(int *)param_1);
  FUN_100832a0(param_1);
  return iVar3;
}

