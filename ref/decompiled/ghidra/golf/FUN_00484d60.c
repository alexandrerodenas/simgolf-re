/* Ghidra decompiled: golf.exe */
/* Function: FUN_00484d60 @ 0x00484D60 */


int __fastcall FUN_00484d60(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar4 = param_1[0x14];
  if (iVar4 == 0) {
    iVar3 = 8;
  }
  else {
    piVar1 = param_1 + 0x10;
    if ((param_1[0x10] != 0) || (iVar3 = FUN_004840e0(piVar1,iVar4,1), iVar3 == 0)) {
      uVar5 = (uint)((*(byte *)(param_1 + 0x16) & 1) != 0);
      iVar3 = (**(code **)(*param_1 + 0x58))();
      if (iVar3 != 0) {
        uVar5 = uVar5 | 2;
      }
      uVar2 = param_1[0x16];
      if ((uVar2 & 4) != 0) {
        uVar5 = uVar5 | 0x11;
      }
      uVar6 = uVar5;
      if (((uVar2 & 8) != 0) && (uVar6 = uVar5 | 0x40, (uVar2 & 0x20) == 0)) {
        uVar6 = uVar5 | 0x41;
      }
      if ((uVar2 & 0x10) != 0) {
        uVar6 = uVar6 | 0x80;
      }
      if ((uVar2 & 0x20) != 0) {
        uVar6 = uVar6 | 0x100;
      }
      if ((uVar2 & 0x40) != 0) {
        uVar6 = uVar6 | 0x400;
      }
      (**(code **)(*(int *)*piVar1 + 0x6c))(uVar6);
      iVar4 = FUN_004842f0(iVar4);
      if (iVar4 != 0) {
        FUN_00484110(*piVar1);
        *piVar1 = 0;
        return iVar4;
      }
      iVar4 = (**(code **)(*(int *)*piVar1 + 200))();
      param_1[0x19] = iVar4;
      return 0;
    }
  }
  return iVar3;
}

