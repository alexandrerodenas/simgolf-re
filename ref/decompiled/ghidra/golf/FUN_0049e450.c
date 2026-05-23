/* Ghidra decompiled: golf.exe */
/* Function: FUN_0049e450 @ 0x0049E450 */
/* Body size: 95 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0049e450(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  piVar1 = (int *)(param_1 + -0x24);
  _DAT_0083ab2c = *(undefined4 *)(*(int *)(*(int *)(param_1 + -0x24) + 4) + 0x10c + param_1);
  iVar2 = *(int *)(*(int *)(*piVar1 + 8) + 0xd0 + param_1);
  iVar6 = *(int *)(*piVar1 + 8) + param_1;
  iVar3 = *(int *)(iVar6 + 0xcc);
  switch(param_2) {
  case 0x25:
  case 100:
    *(int *)(iVar6 + 0xcc) = *(int *)(iVar6 + 0x38) + iVar3;
    iVar6 = *(int *)(*piVar1 + 8);
    iVar5 = *(int *)(iVar6 + 0xcc + param_1);
    if (*(int *)(iVar6 + 0xac + param_1) <= iVar5) {
      *(int *)(iVar6 + param_1 + 0xcc) = iVar5 - *(int *)(iVar6 + param_1 + 0x38);
    }
    break;
  case 0x26:
  case 0x68:
    *(int *)(iVar6 + 0xcc) = iVar3 + -1;
    uVar4 = *(uint *)(*(int *)(*piVar1 + 8) + 0xcc + param_1);
    *(uint *)(*(int *)(*piVar1 + 8) + 0xcc + param_1) = uVar4 & ((int)uVar4 < 1) - 1;
    break;
  case 0x27:
  case 0x66:
    *(int *)(iVar6 + 0xcc) = iVar3 - *(int *)(iVar6 + 0x38);
    iVar6 = *(int *)(*piVar1 + 8) + param_1;
    if (*(int *)(iVar6 + 0xcc) < 0) {
      *(int *)(iVar6 + 0xcc) = *(int *)(iVar6 + 0x38) + *(int *)(iVar6 + 0xcc);
    }
    break;
  case 0x28:
  case 0x62:
    *(int *)(iVar6 + 0xcc) = iVar3 + 1;
    iVar6 = *(int *)(*piVar1 + 8);
    iVar5 = *(int *)(iVar6 + 0xcc + param_1);
    iVar7 = *(int *)(iVar6 + 0xac + param_1) + -1;
    if (iVar5 < iVar7) {
      iVar7 = iVar5;
    }
    *(int *)(iVar6 + param_1 + 0xcc) = iVar7;
    break;
  default:
    return 0;
  }
  *(undefined4 *)(*(int *)(*piVar1 + 8) + 0xd0 + param_1) = 0xffffffff;
  *(undefined4 *)(*(int *)(*piVar1 + 8) + 0xd4 + param_1) = 0xffffffff;
  if (iVar2 != -1) {
    FUN_0049dab0(iVar2,0);
  }
  FUN_0049dab0(iVar3,0);
  if (*(code **)(param_1 + -0x14) != (code *)0x0) {
    (**(code **)(param_1 + -0x14))(*(undefined4 *)(*(int *)(*piVar1 + 8) + 0xcc + param_1));
  }
  FUN_0049dab0(*(undefined4 *)(*(int *)(*piVar1 + 8) + 0xcc + param_1),1);
  FUN_00480ce0();
  return 1;
}

