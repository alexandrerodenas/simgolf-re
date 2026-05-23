/* Ghidra decompiled: golf.exe */
/* Function: FUN_00401d10 @ 0x00401D10 */
/* Body size: 1050 addresses */


undefined4 __fastcall FUN_00401d10(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int unaff_retaddr;
  size_t sVar3;
  
  iVar1 = param_1[6];
  if (param_1[4] != 0) {
    if (iVar1 == 0) {
LAB_00401f51:
      sVar3 = 0x1c;
      iVar1 = *(int *)(*(int *)(param_1[1] + 4) + 8 + (int)param_1);
      if (iVar1 != 0) {
        piVar2 = (int *)FUN_00474860(0x1c);
        if (piVar2 != (int *)0x0) goto LAB_00401fa4;
        MessageBoxA((HWND)0x0,s_out_of_heap_space_in_new_functio_004c1434,s_Aborting_004c1458,0);
        sVar3 = 3;
        FUN_004a5108();
      }
      piVar2 = _malloc(sVar3);
      if (piVar2 != (int *)0x0) {
        DAT_00839650 = 0;
        iVar1 = DAT_00839650;
        goto LAB_00401fa4;
      }
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)FUN_00474860(0x1c);
      if (piVar2 == (int *)0x0) {
        MessageBoxA((HWND)0x0,s_out_of_heap_space_in_new_functio_004c1434,s_Aborting_004c1458,0);
        FUN_004a5108(3);
        goto LAB_00401f51;
      }
LAB_00401fa4:
      DAT_00839650 = iVar1;
      *piVar2 = (int)&DAT_004ba28c;
      piVar2[5] = (int)&PTR_FUN_004ba278;
      piVar2[6] = DAT_00839650;
      DAT_00839650 = 0;
      *(undefined ***)(*(int *)(*piVar2 + 4) + (int)piVar2) = &PTR_LAB_004ba288;
    }
    *(int **)(*(int *)(param_1[2] + 0x10) + 0xc) = piVar2;
    iVar1 = *(int *)(*(int *)(param_1[2] + 0x10) + 0xc);
    if (iVar1 == 0) {
      return 4;
    }
    *(int *)(iVar1 + 0x10) = *(int *)(param_1[2] + 0x10);
    *(undefined4 *)(*(int *)(*(int *)(param_1[2] + 0x10) + 0xc) + 0xc) = param_1[2];
    *(undefined4 *)(param_1[2] + 0x10) = *(undefined4 *)(*(int *)(param_1[2] + 0x10) + 0xc);
    iVar1 = *(int *)(param_1[2] + 0x10);
    param_1[3] = iVar1;
    *(int *)(iVar1 + 4) = unaff_retaddr;
    iVar1 = param_1[6];
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00474860(0x18);
      if (piVar2 != (int *)0x0) {
        DAT_00839650 = iVar1;
        *piVar2 = (int)&DAT_004ba280;
        piVar2[4] = (int)&PTR_FUN_004ba278;
        piVar2[5] = DAT_00839650;
        DAT_00839650 = 0;
        *(undefined ***)(*(int *)(*piVar2 + 4) + (int)piVar2) = &PTR_LAB_004ba27c;
        *(int **)(param_1[3] + 8) = piVar2;
        goto LAB_004020f8;
      }
      MessageBoxA((HWND)0x0,s_out_of_heap_space_in_new_functio_004c1434,s_Aborting_004c1458,0);
      FUN_004a5108(3);
    }
    sVar3 = 0x18;
    iVar1 = *(int *)(*(int *)(param_1[1] + 4) + 8 + (int)param_1);
    if (iVar1 == 0) {
LAB_004020b8:
      piVar2 = _malloc(sVar3);
      if (piVar2 != (int *)0x0) {
        DAT_00839650 = 0;
        iVar1 = DAT_00839650;
        goto LAB_004020ca;
      }
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)FUN_00474860(0x18);
      if (piVar2 == (int *)0x0) {
        MessageBoxA((HWND)0x0,s_out_of_heap_space_in_new_functio_004c1434,s_Aborting_004c1458,0);
        sVar3 = 3;
        FUN_004a5108();
        goto LAB_004020b8;
      }
LAB_004020ca:
      DAT_00839650 = iVar1;
      *piVar2 = (int)&DAT_004ba280;
      piVar2[4] = (int)&PTR_FUN_004ba278;
      piVar2[5] = DAT_00839650;
      DAT_00839650 = 0;
      *(undefined ***)(*(int *)(*piVar2 + 4) + (int)piVar2) = &PTR_LAB_004ba27c;
    }
    *(int **)(param_1[3] + 8) = piVar2;
LAB_004020f8:
    if (*(int *)(param_1[3] + 8) != 0) {
      (**(code **)*param_1)(*(int *)(param_1[3] + 8));
      param_1[5] = param_1[4];
      param_1[4] = param_1[4] + 1;
      return 0;
    }
    return 4;
  }
  if (iVar1 == 0) {
LAB_00401d62:
    sVar3 = 0x1c;
    iVar1 = *(int *)(*(int *)(param_1[1] + 4) + 8 + (int)param_1);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00474860(0x1c);
      if (piVar2 != (int *)0x0) goto LAB_00401db5;
      MessageBoxA((HWND)0x0,s_out_of_heap_space_in_new_functio_004c1434,s_Aborting_004c1458,0);
      sVar3 = 3;
      FUN_004a5108();
    }
    piVar2 = _malloc(sVar3);
    if (piVar2 != (int *)0x0) {
      DAT_00839650 = 0;
      iVar1 = DAT_00839650;
      goto LAB_00401db5;
    }
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_00474860(0x1c);
    if (piVar2 == (int *)0x0) {
      MessageBoxA((HWND)0x0,s_out_of_heap_space_in_new_functio_004c1434,s_Aborting_004c1458,0);
      FUN_004a5108(3);
      goto LAB_00401d62;
    }
LAB_00401db5:
    DAT_00839650 = iVar1;
    *piVar2 = (int)&DAT_004ba28c;
    piVar2[5] = (int)&PTR_FUN_004ba278;
    piVar2[6] = DAT_00839650;
    DAT_00839650 = 0;
    *(undefined ***)(*(int *)(*piVar2 + 4) + (int)piVar2) = &PTR_LAB_004ba288;
  }
  param_1[2] = piVar2;
  if (piVar2 == (int *)0x0) {
    return 4;
  }
  piVar2[1] = unaff_retaddr;
  *(undefined4 *)(param_1[2] + 0xc) = param_1[2];
  *(undefined4 *)(param_1[2] + 0x10) = param_1[2];
  iVar1 = param_1[6];
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00474860(0x18);
    if (piVar2 != (int *)0x0) {
      DAT_00839650 = iVar1;
      *piVar2 = (int)&DAT_004ba280;
      piVar2[4] = (int)&PTR_FUN_004ba278;
      piVar2[5] = DAT_00839650;
      DAT_00839650 = 0;
      *(undefined ***)(*(int *)(*piVar2 + 4) + (int)piVar2) = &PTR_LAB_004ba27c;
      *(int **)(param_1[2] + 8) = piVar2;
      goto LAB_00401ee2;
    }
    MessageBoxA((HWND)0x0,s_out_of_heap_space_in_new_functio_004c1434,s_Aborting_004c1458,0);
    FUN_004a5108(3);
  }
  sVar3 = 0x18;
  iVar1 = *(int *)(*(int *)(param_1[1] + 4) + 8 + (int)param_1);
  if (iVar1 == 0) {
LAB_00401ea2:
    piVar2 = _malloc(sVar3);
    if (piVar2 != (int *)0x0) {
      DAT_00839650 = 0;
      iVar1 = DAT_00839650;
      goto LAB_00401eb4;
    }
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_00474860(0x18);
    if (piVar2 == (int *)0x0) {
      MessageBoxA((HWND)0x0,s_out_of_heap_space_in_new_functio_004c1434,s_Aborting_004c1458,0);
      sVar3 = 3;
      FUN_004a5108();
      goto LAB_00401ea2;
    }
LAB_00401eb4:
    DAT_00839650 = iVar1;
    *piVar2 = (int)&DAT_004ba280;
    piVar2[4] = (int)&PTR_FUN_004ba278;
    piVar2[5] = DAT_00839650;
    DAT_00839650 = 0;
    *(undefined ***)(*(int *)(*piVar2 + 4) + (int)piVar2) = &PTR_LAB_004ba27c;
  }
  *(int **)(param_1[2] + 8) = piVar2;
LAB_00401ee2:
  if (*(int *)(param_1[2] + 8) != 0) {
    (**(code **)*param_1)(*(int *)(param_1[2] + 8));
    param_1[3] = param_1[2];
    param_1[5] = param_1[4];
    param_1[4] = param_1[4] + 1;
    return 0;
  }
  return 4;
}

