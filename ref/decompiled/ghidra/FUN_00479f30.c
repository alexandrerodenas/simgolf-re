/* Ghidra decompiled: golf.exe */
/* Function: FUN_00479f30 @ 0x00479F30 */
/* Body size: 1156 addresses */


void __fastcall FUN_00479f30(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  FUN_00492830();
  piVar2 = DAT_0083ab40;
  if (DAT_0083ab40 == (int *)0x0) {
    piVar2 = DAT_0083ab44;
  }
  if (piVar2 != param_1) {
    piVar2 = DAT_0083ab40;
    if (DAT_0083ab40 == (int *)0x0) {
      piVar2 = DAT_0083ab44;
    }
    iVar3 = FUN_0047b080(piVar2);
    if (iVar3 == 0) goto LAB_00479f78;
  }
  DAT_0083ab40 = (int *)0x0;
  DAT_0083ab44 = (int *)0x0;
LAB_00479f78:
  if (DAT_0083ab30 == param_1) {
    DAT_0083ab30 = (int *)0x0;
    (**(code **)(*param_1 + 0x10))();
  }
  if (DAT_0083ab34 == param_1) {
    DAT_0083ab34 = (int *)0x0;
  }
  if (DAT_0083aac0 == param_1) {
    FUN_00480360();
  }
  if (DAT_0083aaf0 == param_1) {
    DAT_0083aaf0 = (int *)0x0;
  }
  (**(code **)(*param_1 + 8))();
  if (param_1[0x9b] != 0) {
    if ((*(byte *)(param_1 + 0x27) & 0x40) != 0) {
      iVar3 = (**(code **)(*param_1 + 0x1c))(param_1[0x9b]);
      param_1[0x9b] = iVar3;
    }
    if ((undefined4 *)param_1[0x9b] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x9b])(1);
      param_1[0x9b] = 0;
    }
  }
  if (param_1[0x9c] != 0) {
    if ((*(byte *)(param_1 + 0x27) & 0x40) != 0) {
      iVar3 = (**(code **)(*param_1 + 0x1c))(param_1[0x9c]);
      param_1[0x9c] = iVar3;
    }
    if ((undefined4 *)param_1[0x9c] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x9c])(1);
      param_1[0x9c] = 0;
    }
  }
  if ((param_1[0x27] & 0x100000U) != 0) {
    FUN_0047ada0();
  }
  iVar3 = 0;
  if (0 < param_1[0x8b]) {
    do {
      FUN_00479f30();
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[0x8b]);
  }
  if (param_1[0x4c] == 0) {
    FUN_0047e520(param_1);
  }
  else {
    FUN_0047e680(param_1);
  }
  param_1[0x4c] = 0;
  param_1[0x87] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x2c] = (int)param_1;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x86] = 0;
  param_1[0x85] = 0;
  param_1[0x81] = 0;
  param_1[0x57] = 0;
  if (param_1[0x4e] != 0) {
    if ((param_1[0x52] == 0) && (iVar3 = 0, 0 < param_1[0x50])) {
      do {
        param_1[0x4f] = *(int *)(param_1[0x4e] + 0xc);
        iVar1 = *(int *)(param_1[0x4e] + 8);
        if (iVar1 != 0) {
          FUN_004a5007(iVar1);
        }
        *(undefined4 *)(param_1[0x4e] + 8) = 0;
        if (param_1[0x4e] != 0) {
          FUN_004a5007(param_1[0x4e]);
        }
        iVar3 = iVar3 + 1;
        param_1[0x4e] = param_1[0x4f];
      } while (iVar3 < param_1[0x50]);
    }
    param_1[0x4e] = 0;
    param_1[0x51] = 0;
    param_1[0x50] = 0;
  }
  param_1[0x51] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 1;
  param_1[0x5a] = DAT_0083ab64;
  param_1[0x5b] = DAT_004e42c8;
  param_1[0x5c] = DAT_0083ab6c;
  param_1[0x5d] = DAT_004e42d0;
  param_1[0x5e] = DAT_004e42d4;
  param_1[0x5f] = DAT_004e42d8;
  param_1[0x60] = DAT_004e42cc;
  param_1[0x61] = DAT_004e42dc;
  param_1[0x62] = DAT_004e42e0;
  param_1[99] = DAT_004e42e4;
  param_1[100] = DAT_0083ab70;
  param_1[0x65] = DAT_004e42e8;
  param_1[0x59] = DAT_0083ab68;
  if (param_1[0x53] != 0) {
    FUN_004a5007(param_1[0x53]);
    param_1[0x53] = 0;
  }
  if ((undefined4 *)param_1[0x54] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x54])(1);
    param_1[0x54] = 0;
  }
  if ((undefined4 *)param_1[0x55] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x55])(1);
    param_1[0x55] = 0;
  }
  if ((undefined4 *)param_1[0x56] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x56])(1);
    param_1[0x56] = 0;
  }
  param_1[0x58] = 0;
  param_1[0x27] = 0;
  param_1[0x7d] = 1;
  param_1[0x7e] = 1;
  param_1[0x7f] = 1;
  param_1[0x80] = 1;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x88] = 2;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x8b] = 0;
  if ((int *)param_1[0x47] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x47] + 0xc))(1);
    param_1[0x47] = 0;
  }
  if ((int *)param_1[0x48] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x48] + 0xc))(1);
    param_1[0x48] = 0;
  }
  if ((int *)param_1[0x49] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x49] + 0xc))(1);
    param_1[0x49] = 0;
  }
  if ((int *)param_1[0x4a] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x4a] + 0xc))(1);
    param_1[0x4a] = 0;
  }
  FUN_00495eb0();
  return;
}

