/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10029a20 @ 0x10029A20 */


undefined4 __cdecl FUN_10029a20(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_c;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (iVar2 = FUN_1001a320(2,0x10060824,0x41,0,(byte *)"str != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  iVar2 = __isatty(param_1[4]);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_1 == (undefined4 *)&DAT_10066298) {
    local_c = (void *)0x0;
  }
  else {
    if (param_1 != (undefined4 *)&DAT_100662b8) {
      return 0;
    }
    local_c = (void *)0x1;
  }
  DAT_10110858 = DAT_10110858 + 1;
  if ((param_1[3] & 0x10c) != 0) {
    return 0;
  }
  if (*(int *)(&DAT_10110994 + (int)local_c * 4) == 0) {
    uVar3 = __malloc_dbg(local_c,0x1000,2,"_sftbuf.c",0x5e);
    *(undefined4 *)(&DAT_10110994 + (int)local_c * 4) = uVar3;
    if (*(int *)(&DAT_10110994 + (int)local_c * 4) == 0) {
      param_1[2] = param_1 + 5;
      *param_1 = param_1[2];
      param_1[6] = 2;
      param_1[1] = 2;
      goto LAB_10029b59;
    }
  }
  param_1[2] = *(undefined4 *)(&DAT_10110994 + (int)local_c * 4);
  *param_1 = param_1[2];
  param_1[6] = 0x1000;
  param_1[1] = 0x1000;
LAB_10029b59:
  param_1[3] = param_1[3] | 0x1102;
  return 1;
}

