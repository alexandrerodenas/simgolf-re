/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a3be0 @ 0x004A3BE0 */
/* Body size: 808 addresses */


undefined4 __fastcall FUN_004a3be0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int local_4;
  
  if (param_1[0x22] == 0) {
    return 7;
  }
  iVar3 = *(int *)(*param_1 + 8);
  FUN_00476310(*(undefined4 *)((int)param_1 + iVar3 + 0x80),
               *(undefined4 *)((int)param_1 + iVar3 + 0x8c),
               *(undefined4 *)((int)param_1 + iVar3 + 0x98),
               *(undefined4 *)((int)param_1 + iVar3 + 0xa4));
  iVar3 = *(int *)(*param_1 + 8);
  FUN_00476340(*(undefined4 *)((int)param_1 + iVar3 + 0x84),
               *(undefined4 *)((int)param_1 + iVar3 + 0x90),
               *(undefined4 *)((int)param_1 + iVar3 + 0x9c),
               *(undefined4 *)((int)param_1 + iVar3 + 0xa8));
  iVar3 = *(int *)(*param_1 + 8);
  FUN_00476370(*(undefined4 *)((int)param_1 + iVar3 + 0x88),
               *(undefined4 *)((int)param_1 + iVar3 + 0x94),
               *(undefined4 *)((int)param_1 + iVar3 + 0xa0),
               *(undefined4 *)((int)param_1 + iVar3 + 0xac));
  iVar3 = *(int *)(*param_1 + 8);
  FUN_004762d0(*(undefined4 *)((int)param_1 + iVar3 + 0x74),
               *(undefined4 *)((int)param_1 + iVar3 + 0x78),
               *(undefined4 *)((int)param_1 + iVar3 + 0x7c),0);
  param_1[0x2c] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  local_4 = param_1[0x22];
  if (0 < local_4) {
    do {
      uVar5 = 0;
      if (param_1[0x20] != 0) {
        iVar3 = param_1[0x23];
        param_1[0x21] = *(int *)(param_1[0x21] + 0xc);
        param_1[0x23] = iVar3 + 1;
        if (iVar3 + 1 == param_1[0x22]) {
          param_1[0x23] = 0;
        }
      }
      if (param_1[0x21] == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = iRam00000004;
        if (param_1[0x20] != 0) {
          iVar3 = *(int *)(*(int *)(param_1[0x21] + 8) + 4);
        }
      }
      iVar2 = *(int *)(*param_1 + 8);
      iVar1 = *(int *)(iVar2 + 200 + (int)param_1);
      if (iVar1 != 0) {
        *(undefined4 *)((int)param_1 + iVar2 + 0xcc) =
             *(undefined4 *)(*(int *)((int)param_1 + iVar2 + 0xcc) + 0xc);
        iVar4 = *(int *)((int)param_1 + iVar2 + 0xd4) + 1;
        *(int *)((int)param_1 + iVar2 + 0xd4) = iVar4;
        if (iVar4 == *(int *)((int)param_1 + iVar2 + 0xd0)) {
          *(undefined4 *)((int)param_1 + iVar2 + 0xd4) = 0;
        }
      }
      iVar2 = *(int *)((int)param_1 + iVar2 + 0xcc);
      if (iVar2 != 0) {
        if (iVar1 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(iVar2 + 8);
        }
        uVar5 = *(undefined4 *)(iVar2 + 4);
      }
      iVar2 = (*(int *)(iVar3 + 0x18) * param_1[0x1c]) / param_1[0x1d];
      if (iVar2 < param_1[0x2a]) {
        iVar2 = param_1[0x2a];
      }
      param_1[0x2a] = iVar2;
      iVar3 = (*(int *)(iVar3 + 0x1c) * param_1[0x1c]) / param_1[0x1d];
      if (iVar3 < param_1[0x2b]) {
        iVar3 = param_1[0x2b];
      }
      param_1[0x2b] = iVar3;
      iVar3 = FUN_00477250(uVar5);
      if (iVar3 < param_1[0x2c]) {
        iVar3 = param_1[0x2c];
      }
      param_1[0x2c] = iVar3;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  iVar2 = FUN_00477580();
  param_1[0x2d] = iVar2;
  iVar3 = param_1[0x2b];
  if (param_1[0x2b] < iVar2) {
    iVar3 = iVar2;
  }
  *(int *)((int)param_1 + *(int *)(*param_1 + 8) + 0x6c) =
       *(int *)(*(int *)(*param_1 + 8) + 0x48 + (int)param_1) + iVar3;
  *(int *)((int)param_1 + *(int *)(*param_1 + 8) + 0x68) =
       param_1[0x2c] + *(int *)(*(int *)(*param_1 + 8) + 0x44 + (int)param_1) * 2 + param_1[0x2a];
  iVar3 = *(int *)(*(int *)(*param_1 + 8) + 0x54 + (int)param_1);
  if (param_1[0x22] < iVar3) {
    iVar3 = param_1[0x22];
  }
  *(int *)((int)param_1 + *(int *)(*param_1 + 8) + 0x5c) = iVar3;
  iVar3 = *(int *)(*param_1 + 8);
  if (((*(byte *)(iVar3 + 0x24 + (int)param_1) & 1) == 0) ||
     (iVar2 = *(int *)((int)param_1 + iVar3 + 0x34), iVar2 == 0)) {
    *(int *)((int)param_1 + iVar3 + 100) =
         *(int *)((int)param_1 + iVar3 + 0x6c) * *(int *)((int)param_1 + iVar3 + 0x5c) +
         *(int *)((int)param_1 + iVar3 + 0x48);
  }
  else {
    *(int *)((int)param_1 + iVar3 + 0x5c) = iVar2 / *(int *)((int)param_1 + iVar3 + 0x6c);
    *(undefined4 *)(*(int *)(*param_1 + 8) + 100 + (int)param_1) =
         *(undefined4 *)(*(int *)(*param_1 + 8) + 0x34 + (int)param_1);
  }
  iVar3 = *(int *)(*param_1 + 8);
  if (((*(byte *)(iVar3 + 0x24 + (int)param_1) & 2) != 0) &&
     (iVar2 = *(int *)((int)param_1 + iVar3 + 0x30), iVar2 != 0)) {
    *(int *)((int)param_1 + iVar3 + 0x58) = iVar2 / *(int *)((int)param_1 + iVar3 + 0x68);
    *(undefined4 *)((int)param_1 + *(int *)(*param_1 + 8) + 0x60) =
         *(undefined4 *)((int)param_1 + *(int *)(*param_1 + 8) + 0x30);
    return 0;
  }
  iVar2 = *(int *)((int)param_1 + iVar3 + 0x5c);
  *(int *)((int)param_1 + iVar3 + 0x58) = (iVar2 + -1 + param_1[0x22]) / iVar2;
  iVar3 = *(int *)(*param_1 + 8);
  iVar2 = *(int *)((int)param_1 + iVar3 + 0x48);
  iVar2 = (*(int *)(iVar3 + 0x68 + (int)param_1) + iVar2) * *(int *)((int)param_1 + iVar3 + 0x58) -
          iVar2;
  iVar1 = *(int *)((int)param_1 + iVar3 + 0x30);
  if (iVar2 < iVar1) {
    iVar2 = iVar1;
  }
  *(int *)((int)param_1 + iVar3 + 0x60) = iVar2;
  return 0;
}

