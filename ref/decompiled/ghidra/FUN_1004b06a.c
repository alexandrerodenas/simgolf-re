/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1004b06a @ 0x1004B06A */
/* Body size: 141 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1004b06a(undefined4 *param_1)

{
  undefined4 uVar1;
  byte bVar2;
  undefined3 extraout_var;
  int iVar3;
  void *pvVar4;
  
  bVar2 = FUN_1004df01(param_1[4]);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    return 0;
  }
  if (param_1 == (undefined4 *)&DAT_100563c0) {
    iVar3 = 0;
  }
  else {
    if (param_1 != (undefined4 *)&DAT_100563e0) {
      return 0;
    }
    iVar3 = 1;
  }
  _DAT_10057e10 = _DAT_10057e10 + 1;
  if ((*(ushort *)(param_1 + 3) & 0x10c) != 0) {
    return 0;
  }
  if ((&DAT_10057f48)[iVar3] == 0) {
    pvVar4 = _malloc(0x1000);
    (&DAT_10057f48)[iVar3] = pvVar4;
    if (pvVar4 == (void *)0x0) {
      param_1[2] = param_1 + 5;
      *param_1 = param_1 + 5;
      param_1[6] = 2;
      param_1[1] = 2;
      goto LAB_1004b0e6;
    }
  }
  uVar1 = (&DAT_10057f48)[iVar3];
  param_1[6] = 0x1000;
  param_1[2] = uVar1;
  *param_1 = uVar1;
  param_1[1] = 0x1000;
LAB_1004b0e6:
  *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) | 0x1102;
  return 1;
}

