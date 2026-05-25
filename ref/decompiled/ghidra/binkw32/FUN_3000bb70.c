/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000bb70 @ 0x3000BB70 */


void __cdecl FUN_3000bb70(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x80);
  uVar5 = _RADTimerRead_0();
  *(int *)(param_1 + 0x84) =
       *(int *)(param_1 + 0x84) +
       param_3 + ((int)(((ulonglong)param_2 * 1000) / (ulonglong)uVar1) - (int)uVar5);
  iVar2 = *(int *)(param_1 + 0x84);
  iVar3 = (int)uVar5;
  while (0 < iVar2) {
    do {
      Sleep(0);
      uVar5 = _RADTimerRead_0();
      iVar4 = (int)uVar5;
    } while (iVar4 - iVar3 < *(int *)(param_1 + 0x84));
    *(int *)(param_1 + 0x84) = (iVar3 - iVar4) + *(int *)(param_1 + 0x84);
    iVar3 = iVar4;
    iVar2 = *(int *)(param_1 + 0x84);
  }
  return;
}

