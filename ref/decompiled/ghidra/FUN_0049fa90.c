/* Ghidra decompiled: golf.exe */
/* Function: FUN_0049fa90 @ 0x0049FA90 */
/* Body size: 89 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0049fa90(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  
  uVar6 = 0;
  piVar1 = (int *)(param_1 + -0x1c);
  _DAT_0083ab2c = *(undefined4 *)(*(int *)(*(int *)(param_1 + -0x1c) + 4) + 0x114 + param_1);
  uVar2 = FUN_0049f030(*(undefined4 *)(param_1 + -0x18));
  FUN_0049f370(*(undefined4 *)(param_1 + -0x18),uVar2,uVar6);
  switch(param_2) {
  case 0x20:
    func_0x0049eec0(*(undefined4 *)(param_1 + -0x18));
    break;
  default:
    return 0;
  case 0x25:
  case 100:
    iVar3 = *(int *)(param_1 + -0x18) + *(int *)(*(int *)(*piVar1 + 8) + 0x40 + param_1);
    *(int *)(param_1 + -0x18) = iVar3;
    if (*(int *)(*(int *)(*piVar1 + 8) + 0xb4 + param_1) <= iVar3) {
      *(int *)(param_1 + -0x18) = iVar3 - *(int *)(*(int *)(*piVar1 + 8) + param_1 + 0x40);
    }
    break;
  case 0x26:
  case 0x68:
    uVar5 = *(int *)(param_1 + -0x18) - 1;
    *(uint *)(param_1 + -0x18) = uVar5;
    *(uint *)(param_1 + -0x18) = uVar5 & ((int)uVar5 < 1) - 1;
    break;
  case 0x27:
  case 0x66:
    iVar3 = *(int *)(param_1 + -0x18) - *(int *)(*(int *)(*piVar1 + 8) + 0x40 + param_1);
    *(int *)(param_1 + -0x18) = iVar3;
    if (iVar3 < 0) {
      *(int *)(param_1 + -0x18) = *(int *)(*(int *)(*piVar1 + 8) + 0x40 + param_1) + iVar3;
    }
    break;
  case 0x28:
  case 0x62:
    iVar3 = *(int *)(param_1 + -0x18) + 1;
    *(int *)(param_1 + -0x18) = iVar3;
    iVar4 = *(int *)(*(int *)(*piVar1 + 8) + 0xb4 + param_1) + -1;
    if (iVar4 <= iVar3) {
      iVar3 = iVar4;
    }
    *(int *)(param_1 + -0x18) = iVar3;
  }
  if (*(code **)(param_1 + -0x14) != (code *)0x0) {
    (**(code **)(param_1 + -0x14))(*(undefined4 *)(*(int *)(*piVar1 + 8) + 0xf0 + (int)piVar1));
  }
  uVar6 = 1;
  uVar2 = FUN_0049f030(*(undefined4 *)(param_1 + -0x18));
  FUN_0049f370(*(undefined4 *)(param_1 + -0x18),uVar2,uVar6);
  FUN_00480ce0();
  return 1;
}

