/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1003b4e0 @ 0x1003B4E0 */
/* Body size: 168 addresses */


undefined4 __thiscall
FUN_1003b4e0(void *this,int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_4;
  
  local_4 = -1;
  if ((char)param_4 != '\0') {
    uVar2 = (**(code **)(*(int *)this + 0x60))(param_1,param_2,param_3,param_4);
    return uVar2;
  }
  iVar3 = (**(code **)(*(int *)this + 0x68))();
  iVar5 = 0;
  if (0 < *(int *)(iVar3 + 0xc)) {
    piVar4 = *(int **)(iVar3 + 4);
    iVar6 = -1;
    do {
      iVar7 = iVar6;
      if (((*piVar4 == param_1) && (piVar4[1] == param_2)) && (piVar4[3] == param_3)) {
        iVar1 = piVar4[4];
        iVar7 = iVar5;
        if (iVar1 == param_5) break;
        iVar7 = iVar6;
        if (local_4 < iVar1) {
          iVar7 = iVar5;
          local_4 = iVar1;
        }
      }
      iVar5 = iVar5 + 1;
      piVar4 = piVar4 + 5;
      iVar6 = iVar7;
    } while (iVar5 < *(int *)(iVar3 + 0xc));
    if (-1 < iVar7) {
      uVar2 = (**(code **)(*(int *)this + 100))(iVar7);
      return uVar2;
    }
  }
  return 1;
}

