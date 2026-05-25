/* Ghidra decompiled: golf.exe */
/* Function: FUN_00487310 @ 0x00487310 */


void __fastcall FUN_00487310(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0xc);
  *(undefined ***)(param_1 + 8) = &PTR_FUN_004bafac;
  if (iVar1 != 0) {
    puVar2 = *(undefined4 **)(iVar1 + 4);
    if (puVar2 == (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    else {
      *puVar2 = 0;
      *(undefined4 **)(param_1 + 0xc) = puVar2;
    }
    iVar3 = *(int *)(iVar1 + 8);
    FUN_004a4ffc(iVar1);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    while ((iVar3 != 0 && (iVar1 = *(int *)(param_1 + 0xc), iVar1 != 0))) {
      puVar2 = *(undefined4 **)(iVar1 + 4);
      if (puVar2 == (undefined4 *)0x0) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0xc) = 0;
      }
      else {
        *puVar2 = 0;
        *(undefined4 **)(param_1 + 0xc) = puVar2;
      }
      iVar3 = *(int *)(iVar1 + 8);
      FUN_004a4ffc(iVar1);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    }
  }
  return;
}

