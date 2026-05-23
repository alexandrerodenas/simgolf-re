/* Ghidra decompiled: golf.exe */
/* Function: FUN_00482570 @ 0x00482570 */
/* Body size: 267 addresses */


undefined4 FUN_00482570(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  uVar1 = *(ushort *)(param_1 + 4);
  if (uVar1 < 0xe) {
    if (uVar1 == 0xd) {
      if (param_3 == 0) {
        param_3 = param_2 + 8;
      }
      uVar2 = FUN_00482940(param_1,param_2,param_3);
      return uVar2;
    }
    switch(uVar1) {
    case 4:
    case 0xb:
      uVar2 = func_0x004826f0(param_1);
      return uVar2;
    case 7:
      if (param_3 == 0) {
        param_3 = param_2 + 8;
      }
      uVar2 = FUN_004827d0(param_1,param_2,param_3);
      return uVar2;
    case 0xc:
      if (param_3 == 0) {
        param_3 = param_2 + 8;
      }
      uVar2 = func_0x00487cb0(param_1,param_2,param_3);
      return uVar2;
    }
  }
  else {
    if (uVar1 == 0xf) {
      if (param_3 == 0) {
        param_3 = param_2 + 8;
      }
      uVar2 = FUN_00482990(param_1,param_2,param_3);
      return uVar2;
    }
    if (uVar1 == 0x10) {
      if (param_3 == 0) {
        param_3 = param_2 + 8;
      }
      uVar2 = FUN_00482a80(param_1,param_2,param_3);
      return uVar2;
    }
    if (uVar1 == 0xf1fa) {
      iVar3 = 0;
      piVar4 = (int *)(param_1 + 0x10);
      if (*(short *)(param_1 + 6) != 0) {
        do {
          if (((*(int *)(param_2 + 0x34) == 0) || (*(int *)(param_2 + 0x3c) != 0)) || (param_3 != 0)
             ) {
            FUN_00482570(piVar4,param_2,param_3);
          }
          else {
            FUN_004744c0(*(int *)(param_2 + 0x34) + *(int *)(param_2 + 0x40) * 0x2c);
          }
          piVar4 = (int *)((int)piVar4 + *piVar4);
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)(uint)*(ushort *)(param_1 + 6));
      }
    }
  }
  return 0;
}

