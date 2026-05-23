/* Ghidra decompiled: golf.exe */
/* Function: FUN_00484940 @ 0x00484940 */
/* Body size: 159 addresses */


undefined4 __fastcall FUN_00484940(int *param_1)

{
  char cVar1;
  DWORD DVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (0xf < (uint)param_1[0xf]) {
LAB_00484980:
    if ((int *)param_1[0x10] == (int *)0x0) {
      if ((*(byte *)(param_1 + 0x16) & 0x10) == 0) {
        uVar3 = 0x14;
      }
      else {
        FUN_00484d60();
        if ((int *)param_1[0x10] != (int *)0x0) {
          uVar3 = (**(code **)(*(int *)param_1[0x10] + 0x1c))();
        }
      }
    }
    else {
      uVar3 = (**(code **)(*(int *)param_1[0x10] + 0x1c))();
    }
    if ((*(byte *)(param_1 + 0x16) & 0x10) != 0) {
      DVar2 = timeGetTime();
      param_1[0x1a] = DVar2;
      (**(code **)(*param_1 + 0x80))();
      param_1[0x10] = 0;
    }
    return uVar3;
  }
  cVar1 = FUN_00487770(param_1[0xf]);
  if (cVar1 == '\0') {
    cVar1 = FUN_004877a0(param_1[0xf]);
    if (cVar1 == '\0') {
      if ((*(byte *)(param_1 + 0x16) & 0x10) != 0) {
        (**(code **)(*param_1 + 0x40))(param_1[1]);
      }
      goto LAB_00484980;
    }
  }
  return 0x14;
}

