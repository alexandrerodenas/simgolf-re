/* Ghidra decompiled: golf.exe */
/* Function: FUN_00482490 @ 0x00482490 */
/* Body size: 215 addresses */


int __thiscall FUN_00482490(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = *(int *)(param_1 + 0x58);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_3 == -1) {
    param_3 = 0;
    iVar6 = param_2;
  }
  else {
    uVar3 = *(uint *)(iVar2 + 0x70);
    if (uVar3 == 0) {
      iVar6 = param_2 % (int)(uint)*(ushort *)(iVar2 + 0x60);
    }
    else {
      if ((uVar3 & 1 << ((byte)param_2 & 0x1f)) == 0) {
        return 0;
      }
      iVar6 = 0;
      iVar5 = 0;
      if (0 < param_2) {
        do {
          if ((uVar3 & 1 << ((byte)iVar5 & 0x1f)) != 0) {
            iVar6 = iVar6 + 1;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < param_2);
      }
    }
  }
  uVar1 = *(ushort *)(iVar2 + 0x62);
  if (*(int *)(param_4 + 0x40) != iVar6) {
    *(int *)(param_4 + 0x40) = iVar6;
    *(undefined4 *)(param_4 + 0x3c) = 0;
    uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x48) + iVar6 * 4);
    *(undefined4 *)(param_4 + 0x38) = uVar4;
    FUN_00482570(uVar4,param_4,param_5);
    *(int *)(param_4 + 0x38) = (int)*(int **)(param_4 + 0x38) + **(int **)(param_4 + 0x38);
  }
  iVar2 = *(int *)(param_4 + 0x3c);
  while (iVar2 != param_3 % (int)(uint)uVar1) {
    FUN_00482420(param_4,0);
    iVar2 = *(int *)(param_4 + 0x3c);
  }
  return param_4 + 8;
}

