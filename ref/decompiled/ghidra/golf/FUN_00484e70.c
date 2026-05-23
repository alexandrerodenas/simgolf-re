/* Ghidra decompiled: golf.exe */
/* Function: FUN_00484e70 @ 0x00484E70 */
/* Body size: 143 addresses */


int __fastcall FUN_00484e70(int *param_1)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  
  if (param_1[0x14] == 0) {
    iVar2 = 8;
  }
  else {
    piVar1 = param_1 + 0x10;
    if ((param_1[0x10] != 0) || (iVar2 = FUN_004840e0(piVar1,param_1[0x14],1), iVar2 == 0)) {
      bVar3 = (*(byte *)(param_1 + 0x16) & 1) != 0;
      iVar2 = (**(code **)(*param_1 + 0x58))();
      if (iVar2 != 0) {
        bVar3 = bVar3 | 2;
      }
      (**(code **)(*(int *)*piVar1 + 0x6c))(bVar3);
      iVar2 = (**(code **)(*(int *)*piVar1 + 0x84))();
      if ((iVar2 == 0) && ((param_1[0x11] & 1U) == 0)) {
        param_1[0x11] = param_1[0x11] | 1;
        (**(code **)(*param_1 + 0x7c))();
        if (param_1[0xc] != 0) {
          (**(code **)(*(int *)*piVar1 + 0x48))(1);
          return 0;
        }
      }
    }
  }
  return iVar2;
}

