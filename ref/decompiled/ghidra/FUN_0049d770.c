/* Ghidra decompiled: golf.exe */
/* Function: FUN_0049d770 @ 0x0049D770 */
/* Body size: 826 addresses */


undefined4 __fastcall FUN_0049d770(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = 0;
  iVar2 = *(int *)(*param_1 + 8);
  if (*(int *)(iVar2 + 0xd0 + (int)param_1) == 0) {
    return 7;
  }
  if ((((*(int *)((int)param_1 + iVar2 + 0x38) == 0) && (param_1[1] != 0)) && (param_1[2] != 0)) &&
     (param_1[3] != 0)) {
    iVar6 = *(int *)(param_1[2] + 0x18);
    iVar7 = *(int *)(param_1[1] + 0x18);
    iVar4 = iVar7;
    if (iVar7 <= iVar6) {
      iVar4 = iVar6;
    }
    iVar3 = *(int *)(param_1[3] + 0x18);
    if ((iVar3 <= iVar4) && (iVar3 = iVar6, iVar6 < iVar7)) {
      iVar3 = iVar7;
    }
    *(int *)((int)param_1 + iVar2 + 0x38) = iVar3;
  }
  iVar2 = *(int *)(*param_1 + 8);
  iVar6 = *(int *)(iVar2 + 0x4c + (int)param_1);
  if (iVar6 == -1) {
    if (((param_1[1] == 0) || (param_1[2] == 0)) || (param_1[3] == 0)) {
      *(undefined4 *)((int)param_1 + iVar2 + 0x6c) = 0;
    }
    else {
      iVar6 = *(int *)(param_1[2] + 0x1c);
      iVar7 = *(int *)(param_1[1] + 0x1c);
      iVar4 = iVar7;
      if (iVar7 <= iVar6) {
        iVar4 = iVar6;
      }
      iVar3 = *(int *)(param_1[3] + 0x1c);
      if ((iVar3 <= iVar4) && (iVar3 = iVar6, iVar6 < iVar7)) {
        iVar3 = iVar7;
      }
      *(int *)((int)param_1 + iVar2 + 0x6c) = iVar3;
    }
  }
  else {
    *(int *)((int)param_1 + iVar2 + 0x6c) = iVar6;
  }
  iVar2 = *(int *)(*param_1 + 8);
  iVar6 = *(int *)(iVar2 + 0xd0 + (int)param_1);
  iVar7 = *(int *)(iVar2 + 0x54 + (int)param_1);
  if (iVar7 <= iVar6) {
    iVar6 = iVar7;
  }
  *(int *)((int)param_1 + iVar2 + 0x5c) = iVar6;
  iVar2 = *(int *)(*param_1 + 8);
  iVar6 = *(int *)(iVar2 + 0xd0 + (int)param_1);
  iVar7 = *(int *)((int)param_1 + iVar2 + 0x5c);
  if (iVar7 < iVar6) {
    *(int *)((int)param_1 + iVar2 + 0x50) = iVar6 / iVar7 + 1;
    iVar2 = *(int *)(*param_1 + 8);
    *(int *)((int)param_1 + iVar2 + 0x5c) =
         *(int *)(iVar2 + 0xd0 + (int)param_1) / *(int *)((int)param_1 + iVar2 + 0x50);
    iVar2 = *(int *)(*param_1 + 8);
    iVar6 = *(int *)(iVar2 + 0x5c + (int)param_1);
    if (*(int *)(iVar2 + 0x50 + (int)param_1) * iVar6 < *(int *)((int)param_1 + iVar2 + 0xd0)) {
      *(int *)((int)param_1 + iVar2 + 0x5c) = iVar6 + 1;
    }
  }
  iVar2 = *(int *)(*param_1 + 8) + (int)param_1;
  if (((*(byte *)(*(int *)(*param_1 + 8) + 0x24 + (int)param_1) & 2) == 0) ||
     (*(int *)(iVar2 + 0x30) == 0)) {
    iVar6 = 100000;
  }
  else {
    iVar6 = (*(int *)(iVar2 + 0x30) / *(int *)(iVar2 + 0x50) + *(int *)(iVar2 + 0x44) * -2) -
            *(int *)(iVar2 + 0x38);
  }
  iVar7 = 0;
  if (0 < *(int *)(iVar2 + 0xd0)) {
    do {
      if (*(int *)(iVar2 + 200) != 0) {
        *(undefined4 *)(iVar2 + 0xcc) = *(undefined4 *)(*(int *)(iVar2 + 0xcc) + 0xc);
        iVar4 = *(int *)(iVar2 + 0xd4) + 1;
        *(int *)(iVar2 + 0xd4) = iVar4;
        if (iVar4 == *(int *)(iVar2 + 0xd0)) {
          *(undefined4 *)(iVar2 + 0xd4) = 0;
        }
      }
      if (*(int *)(iVar2 + 0xcc) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = uRam00000004;
        if (*(int *)(iVar2 + 200) != 0) {
          uVar1 = *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0xcc) + 8) + 4);
        }
      }
      iVar2 = FUN_00477250(uVar1);
      if (iVar5 < iVar2) {
        iVar5 = iVar2;
      }
      if (*(int *)(*(int *)(*param_1 + 8) + 200 + (int)param_1) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)((int)param_1 + *(int *)(*param_1 + 8) + 0xcc) + 8);
      }
      iVar7 = iVar7 + 1;
      *(int *)(iVar4 + 8) = iVar2 / iVar6 + 1;
      iVar2 = *(int *)(*param_1 + 8) + (int)param_1;
    } while (iVar7 < *(int *)(*(int *)(*param_1 + 8) + 0xd0 + (int)param_1));
  }
  iVar2 = *(int *)(*param_1 + 8);
  *(int *)((int)param_1 + iVar2 + 0x68) =
       *(int *)((int)param_1 + iVar2 + 0x48) + *(int *)((int)param_1 + iVar2 + 0x38) + iVar5;
  iVar2 = *(int *)(*(int *)(*param_1 + 8) + 0x6c + (int)param_1);
  iVar5 = FUN_00477560();
  if (iVar2 <= iVar5) {
    iVar2 = FUN_00477560();
  }
  *(int *)(*(int *)(*param_1 + 8) + 0x6c + (int)param_1) = iVar2;
  iVar2 = *(int *)(*param_1 + 8);
  if (((*(byte *)(iVar2 + 0x24 + (int)param_1) & 2) == 0) ||
     (iVar5 = *(int *)((int)param_1 + iVar2 + 0x30), iVar5 == 0)) {
    iVar5 = *(int *)((int)param_1 + iVar2 + 0x44) * 2;
    iVar6 = *(int *)((int)param_1 + iVar2 + 0x68) * *(int *)((int)param_1 + iVar2 + 0x50) + iVar5;
    iVar5 = iVar5 + *(int *)((int)param_1 + iVar2 + 0x30);
    if (iVar5 <= iVar6) {
      iVar5 = iVar6;
    }
    *(int *)((int)param_1 + iVar2 + 0x60) = iVar5;
    iVar2 = *(int *)(*param_1 + 8);
    *(int *)((int)param_1 + iVar2 + 0x68) =
         (*(int *)(iVar2 + 0x60 + (int)param_1) + *(int *)((int)param_1 + iVar2 + 0x44) * -2) /
         *(int *)((int)param_1 + iVar2 + 0x50) - *(int *)((int)param_1 + iVar2 + 0x48);
    iVar2 = *(int *)(*param_1 + 8);
    *(int *)((int)param_1 + iVar2 + 0x60) =
         *(int *)(iVar2 + 0x60 + (int)param_1) - *(int *)(iVar2 + 0x48 + (int)param_1);
  }
  else {
    *(int *)((int)param_1 + iVar2 + 0x60) = iVar5;
    iVar2 = *(int *)(*param_1 + 8);
    *(int *)((int)param_1 + iVar2 + 0x68) =
         (*(int *)(iVar2 + 0x30 + (int)param_1) + *(int *)(iVar2 + 0x44 + (int)param_1) * -2) /
         *(int *)((int)param_1 + iVar2 + 0x50) - *(int *)((int)param_1 + iVar2 + 0x48);
  }
  *(undefined4 *)((int)param_1 + *(int *)(*param_1 + 8) + 0x58) =
       *(undefined4 *)(*(int *)(*param_1 + 8) + 0x50 + (int)param_1);
  iVar2 = *(int *)(*param_1 + 8);
  if (((*(byte *)(iVar2 + 0x24 + (int)param_1) & 1) != 0) &&
     (iVar5 = *(int *)((int)param_1 + iVar2 + 0x34), iVar5 != 0)) {
    *(int *)((int)param_1 + iVar2 + 100) = iVar5;
    iVar2 = *(int *)(*param_1 + 8);
    *(int *)((int)param_1 + iVar2 + 0x5c) =
         *(int *)((int)param_1 + iVar2 + 0x34) / *(int *)((int)param_1 + iVar2 + 0x6c);
    return 0;
  }
  *(int *)((int)param_1 + iVar2 + 100) =
       (*(int *)((int)param_1 + iVar2 + 0x6c) + *(int *)((int)param_1 + iVar2 + 0x48)) *
       *(int *)((int)param_1 + iVar2 + 0x5c);
  return 0;
}

