/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1003b390 @ 0x1003B390 */


undefined4 __thiscall FUN_1003b390(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = -1;
  iVar5 = -1;
  iVar1 = (**(code **)(*(int *)this + 0x68))();
  iVar3 = 0;
  if (0 < *(int *)(iVar1 + 0xc)) {
    piVar2 = *(int **)(iVar1 + 4);
    do {
      if ((((*piVar2 == param_1) && (piVar2[1] == param_2)) && (piVar2[3] == param_3)) &&
         (iVar5 < piVar2[4])) {
        iVar4 = iVar3;
        iVar5 = piVar2[4];
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 5;
    } while (iVar3 < *(int *)(iVar1 + 0xc));
  }
  (**(code **)(*(int *)this + 100))(iVar4);
  return 0;
}

