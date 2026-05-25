/* Ghidra decompiled: sound.dll */
/* Function: FUN_10035770 @ 0x10035770 */


undefined4 __fastcall FUN_10035770(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(param_1 + 0x1348);
  uVar2 = 0xffffffff;
  *(int *)(param_1 + 0x1350) = iVar1;
  if ((iVar1 != 0) && (puVar3 = *(undefined4 **)(iVar1 + 8), puVar3 != (undefined4 *)0x0)) {
    while ((uint)puVar3[1] <= *(uint *)(param_1 + 0x16c)) {
      uVar2 = *puVar3;
      if (*(int *)(param_1 + 0x1350) == 0) {
        return uVar2;
      }
      iVar1 = *(int *)(*(int *)(param_1 + 0x1350) + 4);
      *(int *)(param_1 + 0x1350) = iVar1;
      if (iVar1 == 0) {
        return uVar2;
      }
      puVar3 = *(undefined4 **)(iVar1 + 8);
      if (puVar3 == (undefined4 *)0x0) {
        return uVar2;
      }
    }
  }
  return uVar2;
}

