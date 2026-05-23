/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1008e160 @ 0x1008E160 */
/* Body size: 343 addresses */


undefined4 __cdecl FUN_1008e160(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int local_c;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (iVar2 = FUN_10081f90(2,0x1011fdfc,0x41,0,(byte *)"str != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  iVar2 = __isatty(param_1[4]);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_1 == (undefined4 *)&DAT_101233d0) {
    local_c = 0;
  }
  else {
    if (param_1 != (undefined4 *)&DAT_101233f0) {
      return 0;
    }
    local_c = 1;
  }
  DAT_101287c4 = DAT_101287c4 + 1;
  if ((param_1[3] & 0x10c) != 0) {
    return 0;
  }
  if (*(int *)(&DAT_10128960 + local_c * 4) == 0) {
    uVar3 = __malloc_dbg(0x1000,2,0x1011fdfc,0x5e);
    *(undefined4 *)(&DAT_10128960 + local_c * 4) = uVar3;
    if (*(int *)(&DAT_10128960 + local_c * 4) == 0) {
      param_1[2] = param_1 + 5;
      *param_1 = param_1[2];
      param_1[6] = 2;
      param_1[1] = 2;
      goto LAB_1008e299;
    }
  }
  param_1[2] = *(undefined4 *)(&DAT_10128960 + local_c * 4);
  *param_1 = param_1[2];
  param_1[6] = 0x1000;
  param_1[1] = 0x1000;
LAB_1008e299:
  param_1[3] = param_1[3] | 0x1102;
  return 1;
}

