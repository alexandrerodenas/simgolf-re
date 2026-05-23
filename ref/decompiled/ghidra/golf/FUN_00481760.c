/* Ghidra decompiled: golf.exe */
/* Function: FUN_00481760 @ 0x00481760 */
/* Body size: 272 addresses */


void __fastcall FUN_00481760(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((*(byte *)(param_1 + 0x9c) & 0x10) == 0) {
    if (*(int *)(param_1 + 0x54c) == 0) {
      return;
    }
    iVar4 = *(int *)(param_1 + 0x550);
    if (iVar4 == 0) {
      return;
    }
    iVar3 = *(int *)(param_1 + 0x530);
    if (iVar3 == 0) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x538);
    if (iVar1 == 0) {
      return;
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0x54c) + 0x18) + *(int *)(iVar4 + 0x18);
    *(int *)(param_1 + 0x1a4) = iVar2;
    iVar5 = *(int *)(iVar1 + 0x18) + *(int *)(iVar3 + 0x18);
    if (iVar2 <= iVar5) {
      iVar2 = iVar5;
    }
    *(int *)(param_1 + 0x1a4) = iVar2;
    iVar3 = *(int *)(*(int *)(param_1 + 0x54c) + 0x1c) + *(int *)(iVar3 + 0x1c);
    *(int *)(param_1 + 0x1a8) = iVar3;
    iVar4 = *(int *)(iVar1 + 0x1c) + *(int *)(iVar4 + 0x1c);
    if (iVar3 <= iVar4) {
      iVar3 = iVar4;
    }
  }
  else {
    if (*(int *)(param_1 + 0x52c) == 0) {
      return;
    }
    iVar4 = *(int *)(param_1 + 0x534);
    if (iVar4 == 0) {
      return;
    }
    iVar3 = *(int *)(param_1 + 0x530);
    if (iVar3 == 0) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x538);
    if (iVar1 == 0) {
      return;
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0x52c) + 0x18) + *(int *)(iVar4 + 0x18);
    *(int *)(param_1 + 0x1a4) = iVar2;
    iVar5 = *(int *)(iVar1 + 0x18) + *(int *)(iVar3 + 0x18);
    if (iVar2 <= iVar5) {
      iVar2 = iVar5;
    }
    *(int *)(param_1 + 0x1a4) = iVar2;
    iVar3 = *(int *)(*(int *)(param_1 + 0x52c) + 0x1c) + *(int *)(iVar3 + 0x1c);
    *(int *)(param_1 + 0x1a8) = iVar3;
    iVar4 = *(int *)(iVar1 + 0x1c) + *(int *)(iVar4 + 0x1c);
    if (iVar3 <= iVar4) {
      *(int *)(param_1 + 0x1a8) = iVar4;
      return;
    }
  }
  *(int *)(param_1 + 0x1a8) = iVar3;
  return;
}

