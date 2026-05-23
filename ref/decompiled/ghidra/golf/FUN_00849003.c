/* Ghidra decompiled: golf.exe */
/* Function: FUN_00849003 @ 0x00849003 */
/* Body size: 120 addresses */


void FUN_00849003(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  int local_c;
  undefined4 local_8;
  
  local_8 = *param_3;
  FUN_00848fd3(param_1,local_14,local_10);
  puVar1 = (undefined4 *)FUN_0084907b(param_1,*(undefined4 *)(param_2 + 0x14));
  local_c = FUN_008490e6(param_1);
  if (local_c != 0) {
    FUN_0084910f(param_1,local_c + -1);
  }
  if (puVar1 != (undefined4 *)0x0) {
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
  }
  return;
}

