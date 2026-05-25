/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10043080 @ 0x10043080 */


bool __cdecl FUN_10043080(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_1;
  bVar1 = true;
  if ((*(byte *)(param_1 + 0x47) & 0x20) == 0) {
    if ((param_1[0x1b] & 0x800U) == 0) goto LAB_100430ac;
  }
  else if ((param_1[0x1b] & 0x300U) != 0x300) goto LAB_100430ac;
  bVar1 = false;
LAB_100430ac:
  FUN_10042b90(param_1,&param_1,4);
  if (!bVar1) {
    return false;
  }
  iVar3 = FUN_10042f50((byte *)&param_1);
  return iVar3 != piVar2[0x44];
}

