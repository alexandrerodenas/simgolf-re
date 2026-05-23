/* Ghidra decompiled: golf.exe */
/* Function: FUN_00402280 @ 0x00402280 */
/* Body size: 1050 addresses */


undefined4 __fastcall FUN_00402280(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int unaff_retaddr;
  size_t sVar3;
  
  iVar1 = param_1[6];
  if (param_1[4] != 0) {
    if (iVar1 == 0) {
LAB_004024c1:
      sVar3 = 0x1c;
      iVar1 = *(int *)(*(int *)(param_1[1] + 4) + 8 + (int)param_1);
      if (iVar1 != 0) {
        piVar2 = (int *)FUN_00474860(0x1c);
        if (piVar2 != (int *)0x0) goto LAB_00402514;
        MessageBoxA((HWND)0x0,s_out_of_heap_space_in_new_functio_004c1434,s_Aborting_004c1458,0);
        sVar3 = 3;
        FUN_004a5108();
      }
      piVar2 = _malloc(sVar3);
      if (piVar2 != (int *)0x0) {
        DAT_00839650 = 0;
        iVar1 = DAT_00839650;
        goto LAB_00402514;
      }
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)FUN_00474860(0x1c);
      if (piVar2 == (int *)0x0) {
        MessageBoxA((HWND)0x0,s_out_of_heap_space_in_new_functio_004c1434,s_Aborting_004c1458,0);
        FUN_004a5108(3);
        goto LAB_004024c1;
      }
LAB_00402514:
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
      piVar2 = (int *)FUN_00474860(0x10);
      if (piVar2 != (int *)0x0) {
        DAT_00839650 = iVar1;
        *piVar2 = (int)&DAT_004ba2b8;
        piVar2[2] = (int)&PTR_FUN_004ba278;
        piVar2[3] = DAT_00839650;
        DAT_00839650 = 0;
        *(undefined ***)(*(int *)(*piVar2 + 4) + (int)piVar2) = &PTR_LAB_004ba2b4;
        *(int **)(param_1[3] + 8) = piVar2;
        goto LAB_00402668;
      }
      MessageBoxA((HWND)0x0,s_out_of_heap_space_in_new_functio_004c1434,s_Aborting_004c1458,0);
      FUN_004a5108(3);
    }
    sVar3 = 0x10;
    iVar1 = *(int *)(*(int *)(param_1[1] + 4) + 8 + (int)param_1);
    if (iVar1 == 0) {
LAB_00402628:
      piVar2 = _malloc(sVar3);
      if (piVar2 != (int *)0x0) {
        DAT_00839650 = 0;
        iVar1 = DAT_00839650;
        goto LAB_0040263a;
      }
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)FUN_00474860(0x10);
      if (piVar2 == (int *)0x0) {
        MessageBoxA((HWND)0x0,s_out_of_heap_space_in_new_functio_004c1434,s_Aborting_004c1458,0);
        sVar3 = 3;
        FUN_004a5108();
        goto LAB_00402628;
      }
LAB_0040263a:
      DAT_00839650 = iVar1;
      *piVar2 = (int)&DAT_004ba2b8;
      piVar2[2] = (int)&PTR_FUN_004ba278;
      piVar2[3] = DAT_00839650;
      DAT_00839650 = 0;
      *(undefined ***)(*(int *)(*piVar2 + 4) + (int)piVar2) = &PTR_LAB_004ba2b4;
    }
    *(int **)(param_1[3] + 8) = piVar2;
LAB_00402668:
    if (*(int *)(param_1[3] + 8) != 0) {
      (**(code **)*param_1)(*(int *)(param_1[3] + 8));
      param_1[5] = param_1[4];
      param_1[4] = param_1[4] + 1;
      return 0;
    }
    return 4;
  }
  if (iVar1 == 0) {
LAB_004022d2:
    sVar3 = 0x1c;
    iVar1 = *(int *)(*(int *)(param_1[1] + 4) + 8 + (int)param_1);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00474860(0x1c);
      if (piVar2 != (int *)0x0) goto LAB_00402325;
      MessageBoxA((HWND)0x0,s_out_of_heap_space_in_new_functio_004c1434,s_Aborting_004c1458,0);
      sVar3 = 3;
      FUN_004a5108();
    }
    piVar2 = _malloc(sVar3);
    if (piVar2 != (int *)0x0) {
      DAT_00839650 = 0;
      iVar1 = DAT_00839650;
      goto LAB_00402325;
    }
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_00474860(0x1c);
    if (piVar2 == (int *)0x0) {
      MessageBoxA((HWND)0x0,s_out_of_heap_space_in_new_functio_004c1434,s_Aborting_004c1458,0);
      FUN_004a5108(3);
      goto LAB_004022d2;
    }
LAB_00402325:
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
    piVar2 = (int *)FUN_00474860(0x10);
    if (piVar2 != (int *)0x0) {
      DAT_00839650 = iVar1;
      *piVar2 = (int)&DAT_004ba2b8;
      piVar2[2] = (int)&PTR_FUN_004ba278;
      piVar2[3] = DAT_00839650;
      DAT_00839650 = 0;
      *(undefined ***)(*(int *)(*piVar2 + 4) + (int)piVar2) = &PTR_LAB_004ba2b4;
      *(int **)(param_1[2] + 8) = piVar2;
      goto LAB_00402452;
    }
    MessageBoxA((HWND)0x0,s_out_of_heap_space_in_new_functio_004c1434,s_Aborting_004c1458,0);
    FUN_004a5108(3);
  }
  sVar3 = 0x10;
  iVar1 = *(int *)(*(int *)(param_1[1] + 4) + 8 + (int)param_1);
  if (iVar1 == 0) {
LAB_00402412:
    piVar2 = _malloc(sVar3);
    if (piVar2 != (int *)0x0) {
      DAT_00839650 = 0;
      iVar1 = DAT_00839650;
      goto LAB_00402424;
    }
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_00474860(0x10);
    if (piVar2 == (int *)0x0) {
      MessageBoxA((HWND)0x0,s_out_of_heap_space_in_new_functio_004c1434,s_Aborting_004c1458,0);
      sVar3 = 3;
      FUN_004a5108();
      goto LAB_00402412;
    }
LAB_00402424:
    DAT_00839650 = iVar1;
    *piVar2 = (int)&DAT_004ba2b8;
    piVar2[2] = (int)&PTR_FUN_004ba278;
    piVar2[3] = DAT_00839650;
    DAT_00839650 = 0;
    *(undefined ***)(*(int *)(*piVar2 + 4) + (int)piVar2) = &PTR_LAB_004ba2b4;
  }
  *(int **)(param_1[2] + 8) = piVar2;
LAB_00402452:
  if (*(int *)(param_1[2] + 8) != 0) {
    (**(code **)*param_1)(*(int *)(param_1[2] + 8));
    param_1[3] = param_1[2];
    param_1[5] = param_1[4];
    param_1[4] = param_1[4] + 1;
    return 0;
  }
  return 4;
}

