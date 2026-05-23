/* Ghidra decompiled: golf.exe */
/* Function: FUN_004b0120 @ 0x004B0120 */
/* Body size: 191 addresses */


void FUN_004b0120(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 == 0) {
    iVar3 = param_1[param_2 + 0x14];
  }
  else {
    iVar3 = param_1[param_2 + 0x18];
    param_2 = param_2 + 0x10;
  }
  if (iVar3 == 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x31;
    *(int *)(*param_1 + 0x18) = param_2;
    (**(code **)*param_1)(param_1);
  }
  if (*(int *)(iVar3 + 0x114) == 0) {
    FUN_004afbf0(param_1,0xc4);
    iVar2 = 0;
    iVar1 = 1;
    do {
      iVar2 = iVar2 + (uint)*(byte *)(iVar1 + iVar3);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x11);
    FUN_004afc10(param_1,iVar2 + 0x13);
    FUN_004afbb0(param_1,param_2);
    iVar1 = 1;
    do {
      FUN_004afbb0(param_1,*(undefined1 *)(iVar1 + iVar3));
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x11);
    iVar1 = 0;
    if (0 < iVar2) {
      do {
        FUN_004afbb0(param_1,*(undefined1 *)(iVar3 + 0x11 + iVar1));
        iVar1 = iVar1 + 1;
      } while (iVar1 < iVar2);
    }
    *(undefined4 *)(iVar3 + 0x114) = 1;
  }
  return;
}

