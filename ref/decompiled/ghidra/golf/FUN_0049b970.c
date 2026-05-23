/* Ghidra decompiled: golf.exe */
/* Function: FUN_0049b970 @ 0x0049B970 */
/* Body size: 1346 addresses */


undefined4 __fastcall FUN_0049b970(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *unaff_FS_OFFSET;
  int unaff_retaddr;
  size_t sVar5;
  UINT in_stack_ffffffd8;
  undefined4 local_c;
  undefined1 *local_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_004b9174;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  iVar1 = param_1[6];
  if (param_1[4] == 0) {
    if (iVar1 == 0) {
LAB_0049ba0b:
      sVar5 = 0x1c;
      iVar1 = *(int *)(*(int *)(param_1[1] + 4) + 8 + (int)param_1);
      if (iVar1 == 0) {
LAB_0049ba47:
        piVar2 = _malloc(sVar5);
        if (piVar2 == (int *)0x0) {
          piVar2 = (int *)0x0;
          goto LAB_0049ba8d;
        }
        DAT_00839650 = 0;
        iVar1 = DAT_00839650;
      }
      else {
        piVar2 = (int *)FUN_00474860(0x1c);
        if (piVar2 == (int *)0x0) {
          MessageBoxA((HWND)0x0,s_out_of_heap_space_in_new_functio_004c1434,s_Aborting_004c1458,0);
          sVar5 = 3;
          FUN_004a5108();
          goto LAB_0049ba47;
        }
      }
      DAT_00839650 = iVar1;
      *piVar2 = (int)&DAT_004ba28c;
      piVar2[5] = (int)&PTR_FUN_004ba278;
      piVar2[6] = DAT_00839650;
      DAT_00839650 = 0;
      *(undefined ***)(*(int *)(*piVar2 + 4) + (int)piVar2) = &PTR_LAB_004ba288;
    }
    else {
      in_stack_ffffffd8 = 0x1c;
      piVar2 = (int *)FUN_00474860(0x1c);
      if (piVar2 == (int *)0x0) {
        MessageBoxA((HWND)0x0,s_out_of_heap_space_in_new_functio_004c1434,s_Aborting_004c1458,0);
        in_stack_ffffffd8 = 3;
        FUN_004a5108();
        goto LAB_0049ba0b;
      }
      DAT_00839650 = iVar1;
      *piVar2 = (int)&DAT_004ba28c;
      piVar2[5] = (int)&PTR_FUN_004ba278;
      piVar2[6] = DAT_00839650;
      DAT_00839650 = 0;
      *(undefined ***)(*(int *)(*piVar2 + 4) + (int)piVar2) = &PTR_LAB_004ba288;
    }
LAB_0049ba8d:
    param_1[2] = piVar2;
    if (piVar2 == (int *)0x0) {
      uVar3 = 4;
      goto LAB_0049be9d;
    }
    piVar2[1] = unaff_retaddr;
    *(undefined4 *)(param_1[2] + 0xc) = param_1[2];
    *(undefined4 *)(param_1[2] + 0x10) = param_1[2];
    iVar1 = param_1[6];
    if (iVar1 == 0) {
LAB_0049bb26:
      sVar5 = 100;
      iVar1 = *(int *)(*(int *)(param_1[1] + 4) + 8 + (int)param_1);
      if (iVar1 == 0) {
LAB_0049bb66:
        puVar4 = _malloc(sVar5);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
          iVar1 = DAT_00839650;
        }
        else {
          DAT_00839650 = 0;
          iVar1 = DAT_00839650;
        }
      }
      else {
        puVar4 = (undefined4 *)FUN_00474860(100);
        if (puVar4 == (undefined4 *)0x0) {
          MessageBoxA((HWND)0x0,s_out_of_heap_space_in_new_functio_004c1434,s_Aborting_004c1458,0);
          sVar5 = 3;
          FUN_004a5108();
          goto LAB_0049bb66;
        }
      }
      DAT_00839650 = iVar1;
      if (puVar4 != (undefined4 *)0x0) {
        puVar4[0x16] = &DAT_004bbcd4;
        puVar4[0x17] = &PTR_FUN_004ba278;
        puVar4[0x18] = DAT_00839650;
        local_8 = (undefined1 *)0x3;
        goto LAB_0049bbb9;
      }
LAB_0049bbd6:
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = (undefined4 *)FUN_00474860(100);
      if (puVar4 == (undefined4 *)0x0) {
        MessageBoxA((HWND)s_out_of_heap_space_in_new_functio_004c1434,s_Aborting_004c1458,
                    (LPCSTR)0x0,in_stack_ffffffd8);
        FUN_004a5108(3);
        goto LAB_0049bb26;
      }
      DAT_00839650 = iVar1;
      if (puVar4 == (undefined4 *)0x0) goto LAB_0049bbd6;
      puVar4[0x16] = &DAT_004bbcd4;
      puVar4[0x17] = &PTR_FUN_004ba278;
      puVar4[0x18] = DAT_00839650;
      local_8 = (undefined1 *)0x1;
LAB_0049bbb9:
      DAT_00839650 = 0;
      FUN_004852e0();
      *puVar4 = &PTR_FUN_004bbc3c;
      *(undefined ***)(*(int *)(puVar4[0x16] + 4) + 0x58 + (int)puVar4) = &PTR_LAB_004bbc38;
    }
    local_8 = (undefined1 *)0xffffffff;
    *(undefined4 **)(param_1[2] + 8) = puVar4;
    if (*(int *)(param_1[2] + 8) == 0) {
      uVar3 = 4;
      goto LAB_0049be9d;
    }
    (**(code **)*param_1)(*(int *)(param_1[2] + 8));
    param_1[3] = param_1[2];
  }
  else {
    if (iVar1 == 0) {
LAB_0049bc71:
      sVar5 = 0x1c;
      iVar1 = *(int *)(*(int *)(param_1[1] + 4) + 8 + (int)param_1);
      if (iVar1 == 0) {
LAB_0049bcad:
        piVar2 = _malloc(sVar5);
        if (piVar2 == (int *)0x0) {
          piVar2 = (int *)0x0;
          goto LAB_0049bcf3;
        }
        DAT_00839650 = 0;
        iVar1 = DAT_00839650;
      }
      else {
        piVar2 = (int *)FUN_00474860(0x1c);
        if (piVar2 == (int *)0x0) {
          MessageBoxA((HWND)0x0,s_out_of_heap_space_in_new_functio_004c1434,s_Aborting_004c1458,0);
          sVar5 = 3;
          FUN_004a5108();
          goto LAB_0049bcad;
        }
      }
      DAT_00839650 = iVar1;
      *piVar2 = (int)&DAT_004ba28c;
      piVar2[5] = (int)&PTR_FUN_004ba278;
      piVar2[6] = DAT_00839650;
      DAT_00839650 = 0;
      *(undefined ***)(*(int *)(*piVar2 + 4) + (int)piVar2) = &PTR_LAB_004ba288;
    }
    else {
      piVar2 = (int *)FUN_00474860(0x1c);
      if (piVar2 == (int *)0x0) {
        MessageBoxA((HWND)0x0,s_out_of_heap_space_in_new_functio_004c1434,s_Aborting_004c1458,0);
        FUN_004a5108(3);
        goto LAB_0049bc71;
      }
      DAT_00839650 = iVar1;
      *piVar2 = (int)&DAT_004ba28c;
      piVar2[5] = (int)&PTR_FUN_004ba278;
      piVar2[6] = DAT_00839650;
      DAT_00839650 = 0;
      *(undefined ***)(*(int *)(*piVar2 + 4) + (int)piVar2) = &PTR_LAB_004ba288;
    }
LAB_0049bcf3:
    *(int **)(*(int *)(param_1[2] + 0x10) + 0xc) = piVar2;
    iVar1 = *(int *)(*(int *)(param_1[2] + 0x10) + 0xc);
    if (iVar1 == 0) {
      uVar3 = 4;
      goto LAB_0049be9d;
    }
    *(int *)(iVar1 + 0x10) = *(int *)(param_1[2] + 0x10);
    *(undefined4 *)(*(int *)(*(int *)(param_1[2] + 0x10) + 0xc) + 0xc) = param_1[2];
    *(undefined4 *)(param_1[2] + 0x10) = *(undefined4 *)(*(int *)(param_1[2] + 0x10) + 0xc);
    iVar1 = *(int *)(param_1[2] + 0x10);
    param_1[3] = iVar1;
    *(int *)(iVar1 + 4) = unaff_retaddr;
    iVar1 = param_1[6];
    if (iVar1 == 0) {
LAB_0049bdb8:
      sVar5 = 100;
      iVar1 = *(int *)(*(int *)(param_1[1] + 4) + 8 + (int)param_1);
      if (iVar1 == 0) {
LAB_0049bdf8:
        puVar4 = _malloc(sVar5);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
          iVar1 = DAT_00839650;
        }
        else {
          DAT_00839650 = 0;
          iVar1 = DAT_00839650;
        }
      }
      else {
        puVar4 = (undefined4 *)FUN_00474860(100);
        if (puVar4 == (undefined4 *)0x0) {
          MessageBoxA((HWND)0x0,s_out_of_heap_space_in_new_functio_004c1434,s_Aborting_004c1458,0);
          sVar5 = 3;
          FUN_004a5108();
          goto LAB_0049bdf8;
        }
      }
      DAT_00839650 = iVar1;
      if (puVar4 != (undefined4 *)0x0) {
        puVar4[0x16] = &DAT_004bbcd4;
        puVar4[0x17] = &PTR_FUN_004ba278;
        puVar4[0x18] = DAT_00839650;
        local_8 = (undefined1 *)0x7;
        goto LAB_0049be4c;
      }
LAB_0049be69:
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = (undefined4 *)FUN_00474860(100);
      if (puVar4 == (undefined4 *)0x0) {
        MessageBoxA((HWND)0x0,s_out_of_heap_space_in_new_functio_004c1434,s_Aborting_004c1458,0);
        FUN_004a5108(3);
        goto LAB_0049bdb8;
      }
      DAT_00839650 = iVar1;
      if (puVar4 == (undefined4 *)0x0) goto LAB_0049be69;
      puVar4[0x16] = &DAT_004bbcd4;
      puVar4[0x17] = &PTR_FUN_004ba278;
      puVar4[0x18] = DAT_00839650;
      local_8 = (undefined1 *)0x5;
LAB_0049be4c:
      DAT_00839650 = 0;
      FUN_004852e0();
      *puVar4 = &PTR_FUN_004bbc3c;
      *(undefined ***)(*(int *)(puVar4[0x16] + 4) + 0x58 + (int)puVar4) = &PTR_LAB_004bbc38;
    }
    local_8 = (undefined1 *)0xffffffff;
    *(undefined4 **)(param_1[3] + 8) = puVar4;
    if (*(int *)(param_1[3] + 8) == 0) {
      uVar3 = 4;
      goto LAB_0049be9d;
    }
    (**(code **)*param_1)(*(int *)(param_1[3] + 8));
  }
  param_1[5] = param_1[4];
  param_1[4] = param_1[4] + 1;
  uVar3 = 0;
LAB_0049be9d:
  *unaff_FS_OFFSET = param_1;
  return uVar3;
}

