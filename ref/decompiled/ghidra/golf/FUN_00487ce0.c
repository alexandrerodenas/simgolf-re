/* Ghidra decompiled: golf.exe */
/* Function: FUN_00487ce0 @ 0x00487CE0 */


undefined4 * __thiscall FUN_00487ce0(undefined4 *param_1,byte param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = param_1[1];
  *param_1 = &PTR_FUN_004bafac;
  if (iVar1 != 0) {
    puVar2 = *(undefined4 **)(iVar1 + 4);
    if (puVar2 == (undefined4 *)0x0) {
      param_1[2] = 0;
      param_1[1] = 0;
    }
    else {
      *puVar2 = 0;
      param_1[1] = puVar2;
    }
    iVar3 = *(int *)(iVar1 + 8);
    FUN_004a4ffc(iVar1);
    param_1[4] = param_1[4] + -1;
    while ((iVar3 != 0 && (iVar1 = param_1[1], iVar1 != 0))) {
      puVar2 = *(undefined4 **)(iVar1 + 4);
      if (puVar2 == (undefined4 *)0x0) {
        param_1[2] = 0;
        param_1[1] = 0;
      }
      else {
        *puVar2 = 0;
        param_1[1] = puVar2;
      }
      iVar3 = *(int *)(iVar1 + 8);
      FUN_004a4ffc(iVar1);
      param_1[4] = param_1[4] + -1;
    }
  }
  if ((param_2 & 1) != 0) {
    FUN_004a4ffc(param_1);
  }
  return param_1;
}

