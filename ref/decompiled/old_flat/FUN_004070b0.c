/* Ghidra decompiled: golf.exe */
/* Function: FUN_004070b0 @ 0x004070B0 */


undefined4 FUN_004070b0(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if ((param_1 == 0x16) || (iVar2 = param_1, iVar3 = param_1, param_1 == 0x15)) {
    iVar2 = 200;
    iVar3 = 0;
    if ((int)((*(byte *)(&DAT_0053caf0 + param_4 + param_3 * 0x32) & 0x1f) - 1) < 4) {
      iVar2 = 0;
    }
  }
  switch(DAT_005a34e0) {
  case 0:
    if (param_1 == 0xd) {
LAB_004071c9:
      uVar1 = FUN_0045c1e0(100);
      iVar3 = 0x32;
      iVar2 = (uVar1 & 0xffff) + 400;
      goto switchD_00407105_default;
    }
    if (param_1 != 0xe) {
      if (param_1 == 0xf) {
        uVar1 = FUN_0045c1e0(100);
        iVar3 = 0x32;
        iVar2 = (uVar1 & 0xffff) + 100;
        goto switchD_00407105_default;
      }
LAB_00407206:
      if (param_1 == 0x10) {
        uVar1 = FUN_0045c1e0(200);
        iVar3 = 0x4b;
        iVar2 = (uVar1 & 0xffff) + 400;
      }
      goto switchD_00407105_default;
    }
    uVar1 = FUN_0045c1e0(100);
    iVar2 = (uVar1 & 0xffff) + 100;
    break;
  case 1:
    if (param_1 == 0xd) goto LAB_004071c9;
    if (param_1 != 0xe) {
      if (param_1 == 0xf) {
        uVar1 = FUN_0045c1e0(100);
        iVar3 = 100;
        iVar2 = (uVar1 & 0xffff) + 300;
        goto switchD_00407105_default;
      }
      goto LAB_00407206;
    }
    uVar1 = FUN_0045c1e0(100);
    iVar2 = (uVar1 & 0xffff) + 100;
    break;
  case 2:
    if (param_1 != 0xd) {
      if (param_1 != 0xe) {
        if (param_1 == 0xf) {
          uVar1 = FUN_0045c1e0(100);
          iVar3 = 0x32;
          iVar2 = (uVar1 & 0xffff) + 100;
          goto switchD_00407105_default;
        }
        goto LAB_00407206;
      }
      goto LAB_004071c9;
    }
    uVar1 = FUN_0045c1e0(100);
    iVar2 = (uVar1 & 0xffff) + 100;
    break;
  case 3:
    if ((((param_1 != 0xd) && (param_1 != 0xe)) && (param_1 != 0xf)) && (param_1 != 0x10))
    goto switchD_00407105_default;
    uVar1 = FUN_0045c1e0(100);
    iVar2 = (uVar1 & 0xffff) + 400;
    break;
  default:
    goto switchD_00407105_default;
  }
  iVar3 = 0x14;
switchD_00407105_default:
  if ((param_2 < iVar2) && (iVar3 < param_2)) {
    return 1;
  }
  return 0;
}

