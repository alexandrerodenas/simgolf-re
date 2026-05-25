/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a9ce1 @ 0x004A9CE1 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004a9ce1(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  
  iVar2 = FUN_004ac140(param_1[4]);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_1 == (undefined4 *)&DAT_004e4da8) {
    iVar2 = 0;
  }
  else {
    if (param_1 != (undefined4 *)&DAT_004e4dc8) {
      return 0;
    }
    iVar2 = 1;
  }
  _DAT_00840b24 = _DAT_00840b24 + 1;
  if ((*(ushort *)(param_1 + 3) & 0x10c) != 0) {
    return 0;
  }
  if ((&DAT_00840b28)[iVar2] == 0) {
    pvVar3 = _malloc(0x1000);
    (&DAT_00840b28)[iVar2] = pvVar3;
    if (pvVar3 == (void *)0x0) {
      param_1[2] = param_1 + 5;
      *param_1 = param_1 + 5;
      param_1[6] = 2;
      param_1[1] = 2;
      goto LAB_004a9d5d;
    }
  }
  uVar1 = (&DAT_00840b28)[iVar2];
  param_1[6] = 0x1000;
  param_1[2] = uVar1;
  *param_1 = uVar1;
  param_1[1] = 0x1000;
LAB_004a9d5d:
  *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) | 0x1102;
  return 1;
}

