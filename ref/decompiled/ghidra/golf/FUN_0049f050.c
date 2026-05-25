/* Ghidra decompiled: golf.exe */
/* Function: FUN_0049f050 @ 0x0049F050 */


undefined4 __fastcall FUN_0049f050(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *(int *)(*param_1 + 8);
  if (*(int *)((int)param_1 + iVar2 + 0xd0) == 0) {
    return 7;
  }
  FUN_00476310(*(undefined4 *)((int)param_1 + iVar2 + 0x80),
               *(undefined4 *)((int)param_1 + iVar2 + 0x8c),
               *(undefined4 *)((int)param_1 + iVar2 + 0x98),
               *(undefined4 *)((int)param_1 + iVar2 + 0xa4));
  iVar2 = *(int *)(*param_1 + 8);
  FUN_00476340(*(undefined4 *)((int)param_1 + iVar2 + 0x84),
               *(undefined4 *)((int)param_1 + iVar2 + 0x90),
               *(undefined4 *)((int)param_1 + iVar2 + 0x9c),
               *(undefined4 *)((int)param_1 + iVar2 + 0xa8));
  iVar2 = *(int *)(*param_1 + 8);
  FUN_00476370(*(undefined4 *)((int)param_1 + iVar2 + 0x88),
               *(undefined4 *)((int)param_1 + iVar2 + 0x94),
               *(undefined4 *)((int)param_1 + iVar2 + 0xa0),
               *(undefined4 *)((int)param_1 + iVar2 + 0xac));
  iVar2 = *(int *)(*param_1 + 8);
  FUN_004762d0(*(undefined4 *)((int)param_1 + iVar2 + 0x74),
               *(undefined4 *)((int)param_1 + iVar2 + 0x78),
               *(undefined4 *)((int)param_1 + iVar2 + 0x7c),0);
  if (((*(int *)(*(int *)(*param_1 + 8) + 0x38 + (int)param_1) == 0) && (param_1[5] != 0)) &&
     (param_1[4] != 0)) {
    iVar2 = *(int *)(param_1[5] + 0x18);
    iVar5 = *(int *)(param_1[4] + 0x18);
    if (iVar2 < iVar5) {
      iVar2 = iVar5;
    }
    *(int *)(*(int *)(*param_1 + 8) + 0x38 + (int)param_1) = iVar2;
  }
  iVar2 = *(int *)(*param_1 + 8);
  iVar5 = *(int *)((int)param_1 + iVar2 + 0x4c);
  if (iVar5 == -1) {
    if ((param_1[4] == 0) || (param_1[5] == 0)) {
      *(undefined4 *)((int)param_1 + iVar2 + 0x6c) = 0;
      goto LAB_0049f182;
    }
    iVar5 = *(int *)(param_1[5] + 0x1c);
    iVar4 = *(int *)(param_1[4] + 0x1c);
    if (iVar5 < iVar4) {
      iVar5 = iVar4;
    }
  }
  *(int *)((int)param_1 + iVar2 + 0x6c) = iVar5;
LAB_0049f182:
  iVar5 = 0;
  iVar4 = 0;
  *(undefined4 *)((int)param_1 + *(int *)(*param_1 + 8) + 0x5c) =
       *(undefined4 *)(*(int *)(*param_1 + 8) + 0xd0 + (int)param_1);
  iVar2 = *(int *)(*param_1 + 8) + (int)param_1;
  if (0 < *(int *)(*(int *)(*param_1 + 8) + 0xd0 + (int)param_1)) {
    do {
      if (*(int *)(iVar2 + 200) != 0) {
        *(undefined4 *)(iVar2 + 0xcc) = *(undefined4 *)(*(int *)(iVar2 + 0xcc) + 0xc);
        iVar3 = *(int *)(iVar2 + 0xd4) + 1;
        *(int *)(iVar2 + 0xd4) = iVar3;
        if (iVar3 == *(int *)(iVar2 + 0xd0)) {
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
      iVar4 = iVar4 + 1;
      iVar2 = *(int *)(*param_1 + 8) + (int)param_1;
    } while (iVar4 < *(int *)(iVar2 + 0xd0));
  }
  iVar2 = *(int *)(*param_1 + 8);
  *(int *)((int)param_1 + iVar2 + 0x68) =
       *(int *)(iVar2 + 0x48 + (int)param_1) + *(int *)(iVar2 + 0x38 + (int)param_1) + iVar5;
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
    iVar4 = *(int *)((int)param_1 + iVar2 + 0x68) * *(int *)((int)param_1 + iVar2 + 0x50) + iVar5;
    iVar5 = iVar5 + *(int *)((int)param_1 + iVar2 + 0x30);
    if (iVar5 <= iVar4) {
      iVar5 = iVar4;
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

