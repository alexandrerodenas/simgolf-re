/* Ghidra decompiled: golf.exe */
/* Function: FUN_004ae590 @ 0x004AE590 */
/* Body size: 102 addresses */


void FUN_004ae590(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1[5];
  iVar3 = 0x1000 - *(int *)(iVar1 + 4);
  if (iVar3 != 0) {
    iVar2 = FUN_004a6268(*(undefined4 *)(iVar1 + 0x18),1,iVar3,*(undefined4 *)(iVar1 + 0x14));
    if (iVar2 != iVar3) {
      *(undefined4 *)(*param_1 + 0x14) = 0x24;
      (**(code **)*param_1)(param_1);
    }
  }
  FUN_004a9943(*(undefined4 *)(iVar1 + 0x14));
  if ((*(byte *)(*(int *)(iVar1 + 0x14) + 0xc) & 0x20) != 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x24;
    (**(code **)*param_1)(param_1);
  }
  return;
}

