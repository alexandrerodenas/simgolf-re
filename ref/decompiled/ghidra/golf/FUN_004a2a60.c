/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a2a60 @ 0x004A2A60 */


undefined4 __fastcall FUN_004a2a60(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar5 = *(int *)(*param_1 + 8);
  if (*(int *)((int)param_1 + iVar5 + 0xd0) == 0) {
    return 7;
  }
  FUN_00476310(*(undefined4 *)((int)param_1 + iVar5 + 0x80),
               *(undefined4 *)((int)param_1 + iVar5 + 0x8c),
               *(undefined4 *)((int)param_1 + iVar5 + 0x98),
               *(undefined4 *)((int)param_1 + iVar5 + 0xa4));
  iVar5 = *(int *)(*param_1 + 8);
  FUN_00476340(*(undefined4 *)((int)param_1 + iVar5 + 0x84),
               *(undefined4 *)((int)param_1 + iVar5 + 0x90),
               *(undefined4 *)((int)param_1 + iVar5 + 0x9c),
               *(undefined4 *)((int)param_1 + iVar5 + 0xa8));
  iVar5 = *(int *)(*param_1 + 8);
  FUN_00476370(*(undefined4 *)((int)param_1 + iVar5 + 0x88),
               *(undefined4 *)((int)param_1 + iVar5 + 0x94),
               *(undefined4 *)((int)param_1 + iVar5 + 0xa0),
               *(undefined4 *)((int)param_1 + iVar5 + 0xac));
  iVar5 = *(int *)(*param_1 + 8);
  FUN_004762d0(*(undefined4 *)((int)param_1 + iVar5 + 0x74),
               *(undefined4 *)((int)param_1 + iVar5 + 0x78),
               *(undefined4 *)((int)param_1 + iVar5 + 0x7c),0);
  iVar5 = *(int *)(*param_1 + 8);
  iVar3 = *(int *)(iVar5 + 0x54 + (int)param_1);
  iVar4 = *(int *)((int)param_1 + iVar5 + 0xd0);
  if (iVar3 <= iVar4) {
    iVar4 = iVar3;
  }
  *(int *)((int)param_1 + iVar5 + 0x5c) = iVar4;
  iVar3 = *(int *)(*param_1 + 8);
  iVar4 = *(int *)(iVar3 + 0xd0 + (int)param_1);
  iVar5 = iVar4 + -1;
  if (-2 < iVar5) {
    *(undefined4 *)((int)param_1 + iVar3 + 0xcc) = *(undefined4 *)((int)param_1 + iVar3 + 200);
    iVar1 = 1;
    if (0 < iVar4) {
      do {
        iVar1 = iVar1 + -1;
        *(undefined4 *)((int)param_1 + iVar3 + 0xcc) =
             *(undefined4 *)(*(int *)((int)param_1 + iVar3 + 0xcc) + 0x10);
      } while (iVar1 != 0);
      *(int *)((int)param_1 + iVar3 + 0xd4) = iVar5;
    }
  }
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  iVar5 = *(int *)(*(int *)(*param_1 + 8) + 0xd0 + (int)param_1);
  if (0 < iVar5) {
    piVar6 = param_1 + 0xb;
    do {
      iVar3 = *(int *)(*param_1 + 8);
      iVar4 = *(int *)(iVar3 + 200 + (int)param_1);
      if (iVar4 != 0) {
        *(undefined4 *)((int)param_1 + iVar3 + 0xcc) =
             *(undefined4 *)(*(int *)((int)param_1 + iVar3 + 0xcc) + 0xc);
        iVar1 = *(int *)((int)param_1 + iVar3 + 0xd4) + 1;
        *(int *)((int)param_1 + iVar3 + 0xd4) = iVar1;
        if (iVar1 == *(int *)((int)param_1 + iVar3 + 0xd0)) {
          *(undefined4 *)((int)param_1 + iVar3 + 0xd4) = 0;
        }
      }
      iVar3 = *(int *)((int)param_1 + iVar3 + 0xcc);
      if (iVar3 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = uRam00000004;
        if (iVar4 != 0) {
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 8) + 4);
        }
      }
      iVar3 = FUN_00477250(uVar2);
      if (param_1[0x1f] < iVar3) {
        param_1[0x1f] = iVar3;
      }
      iVar3 = FUN_00477250(*piVar6);
      if (param_1[0x20] < iVar3) {
        param_1[0x20] = iVar3 + *(int *)(*(int *)(*param_1 + 8) + 0x44 + (int)param_1) * 2;
      }
      piVar6 = piVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar5 = param_1[0x20];
  if (iVar5 < 0xb) {
    iVar5 = 10;
  }
  param_1[0x20] = iVar5;
  iVar3 = *(int *)(*param_1 + 8);
  *(int *)((int)param_1 + iVar3 + 0x68) =
       *(int *)((int)param_1 + iVar3 + 0x38) +
       (*(int *)(iVar3 + 0x48 + (int)param_1) + *(int *)((int)param_1 + iVar3 + 0x44)) * 2 + iVar5 +
       param_1[0x1f];
  iVar5 = *(int *)(*param_1 + 8);
  iVar3 = FUN_00477580();
  *(int *)((int)param_1 + iVar5 + 0x6c) = iVar3 + *(int *)((int)param_1 + iVar5 + 0x48);
  iVar5 = *(int *)(*param_1 + 8);
  if (((*(byte *)(iVar5 + 0x24 + (int)param_1) & 2) == 0) ||
     (iVar3 = *(int *)((int)param_1 + iVar5 + 0x30), iVar3 == 0)) {
    iVar3 = *(int *)((int)param_1 + iVar5 + 0x30);
    iVar4 = *(int *)((int)param_1 + iVar5 + 0x68) * *(int *)((int)param_1 + iVar5 + 0x50);
    if (iVar4 < iVar3) {
      iVar4 = iVar3;
    }
    *(int *)((int)param_1 + iVar5 + 0x60) = iVar4;
    iVar5 = *(int *)(*param_1 + 8);
    *(int *)((int)param_1 + iVar5 + 0x68) =
         *(int *)(iVar5 + 0x60 + (int)param_1) / *(int *)((int)param_1 + iVar5 + 0x50);
    *(undefined4 *)(*(int *)(*param_1 + 8) + 0x58 + (int)param_1) =
         *(undefined4 *)(*(int *)(*param_1 + 8) + 0x50 + (int)param_1);
  }
  else {
    *(int *)((int)param_1 + iVar5 + 0x60) = iVar3;
    iVar5 = *(int *)(*param_1 + 8);
    *(int *)((int)param_1 + iVar5 + 0x58) =
         *(int *)(iVar5 + 0x30 + (int)param_1) / *(int *)((int)param_1 + iVar5 + 0x68);
  }
  iVar5 = *(int *)(*param_1 + 8);
  if (((*(byte *)((int)param_1 + iVar5 + 0x24) & 1) != 0) &&
     (iVar3 = *(int *)((int)param_1 + iVar5 + 0x34), iVar3 != 0)) {
    *(int *)((int)param_1 + iVar5 + 100) = iVar3;
    iVar5 = *(int *)(*param_1 + 8);
    *(int *)((int)param_1 + iVar5 + 0x5c) =
         *(int *)(iVar5 + 0x34 + (int)param_1) / *(int *)((int)param_1 + iVar5 + 0x6c);
    return 0;
  }
  *(int *)((int)param_1 + iVar5 + 100) =
       *(int *)((int)param_1 + iVar5 + 0x6c) * *(int *)((int)param_1 + iVar5 + 0x5c) +
       *(int *)((int)param_1 + iVar5 + 0x48);
  return 0;
}

