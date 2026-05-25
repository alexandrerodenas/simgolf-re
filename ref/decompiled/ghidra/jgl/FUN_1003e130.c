/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1003e130 @ 0x1003E130 */


void __cdecl FUN_1003e130(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 local_40 [16];
  
  if (param_2 != (undefined4 *)0x0) {
    FUN_10042ac0((int)param_1,param_2);
  }
  if (param_3 != (undefined4 *)0x0) {
    FUN_10042ac0((int)param_1,param_3);
  }
  FUN_10042d00((int)param_1,(LPVOID)param_1[0x2b]);
  FUN_10042d00((int)param_1,(LPVOID)param_1[0x3b]);
  FUN_10042d00((int)param_1,(LPVOID)param_1[0x3a]);
  FUN_10042d00((int)param_1,(LPVOID)param_1[0x7b]);
  FUN_10042d00((int)param_1,(LPVOID)param_1[0x7c]);
  FUN_10042d00((int)param_1,(LPVOID)param_1[0x59]);
  FUN_10042d00((int)param_1,(LPVOID)param_1[0x5a]);
  FUN_10042d00((int)param_1,(LPVOID)param_1[0x5b]);
  if ((param_1[0x1b] & 0x1000) != 0) {
    FUN_100429f0((int)param_1,(LPVOID)param_1[0x45]);
  }
  if ((param_1[0x1b] & 0x2000) != 0) {
    FUN_10042d00((int)param_1,(LPVOID)param_1[0x62]);
  }
  if ((param_1[0x1b] & 0x4000) != 0) {
    FUN_10042d00((int)param_1,(LPVOID)param_1[0x7d]);
  }
  if (param_1[0x5c] != 0) {
    iVar4 = 1 << (8U - (char)param_1[0x56] & 0x1f);
    iVar6 = 0;
    if (0 < iVar4) {
      do {
        FUN_10042d00((int)param_1,*(LPVOID *)(param_1[0x5c] + iVar6 * 4));
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar4);
    }
    FUN_10042d00((int)param_1,(LPVOID)param_1[0x5c]);
  }
  if (param_1[0x5d] != 0) {
    iVar4 = 1 << (8U - (char)param_1[0x56] & 0x1f);
    iVar6 = 0;
    if (0 < iVar4) {
      do {
        FUN_10042d00((int)param_1,*(LPVOID *)(param_1[0x5d] + iVar6 * 4));
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar4);
    }
    FUN_10042d00((int)param_1,(LPVOID)param_1[0x5d]);
  }
  if (param_1[0x5e] != 0) {
    iVar4 = 1 << (8U - (char)param_1[0x56] & 0x1f);
    iVar6 = 0;
    if (0 < iVar4) {
      do {
        FUN_10042d00((int)param_1,*(LPVOID *)(param_1[0x5e] + iVar6 * 4));
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar4);
    }
    FUN_10042d00((int)param_1,(LPVOID)param_1[0x5e]);
  }
  FUN_10042d00((int)param_1,(LPVOID)param_1[0x84]);
  FUN_1004f900((int)(param_1 + 0x1d));
  FUN_10042d00((int)param_1,(LPVOID)param_1[0x6c]);
  uVar1 = param_1[0x10];
  uVar2 = param_1[0x12];
  puVar5 = param_1;
  puVar7 = local_40;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  uVar3 = param_1[0x11];
  puVar5 = param_1;
  for (iVar4 = 0x87; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  param_1[0x11] = uVar3;
  puVar5 = local_40;
  puVar7 = param_1;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  param_1[0x12] = uVar2;
  param_1[0x10] = uVar1;
  return;
}

