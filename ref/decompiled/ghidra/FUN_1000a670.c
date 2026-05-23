/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000a670 @ 0x1000A670 */
/* Body size: 746 addresses */


void __fastcall FUN_1000a670(void *param_1)

{
  undefined4 *lParam;
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  void *pvVar5;
  uint local_c;
  uint local_8;
  uint local_4;
  
  local_c = *(uint *)((int)param_1 + 0x4050);
  local_4 = *(uint *)((int)param_1 + 0x4054);
  if (local_c != local_4) {
    uVar4 = local_4 - local_c & 0xfff;
    if (uVar4 != 0) {
      thunk_FUN_1000aaf0(param_1,&local_c,&local_4);
      local_8 = uVar4;
LAB_1000a6cc:
      local_c = local_c + 1 & 0xfff;
      lParam = *(undefined4 **)((int)param_1 + local_c * 4 + 0x50);
      if (lParam == (undefined4 *)0x0) goto LAB_1000a929;
      switch(*lParam) {
      case 1:
        iVar2 = lParam[1];
        if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0xac) & 0x20) == 0)) {
          *(uint *)(iVar2 + 0xac) = *(uint *)(iVar2 + 0xac) | 0x20;
          thunk_FUN_10005e30((void *)((int)param_1 + 0x40),iVar2);
        }
        goto LAB_1000a8cc;
      case 2:
        pvVar5 = (void *)lParam[1];
        for (piVar3 = *(int **)((int)param_1 + 0x40); piVar3 != (int *)0x0;
            piVar3 = (int *)piVar3[1]) {
          if ((void *)piVar3[2] == pvVar5) {
            if (piVar3 != (int *)0x0) {
              if (*piVar3 == 0) {
                *(int *)((int)param_1 + 0x40) = piVar3[1];
              }
              else {
                *(int *)(*piVar3 + 4) = piVar3[1];
              }
              piVar1 = (int *)piVar3[1];
              if (piVar1 == (int *)0x0) {
                iVar2 = *piVar3;
                *(undefined4 *)((int)param_1 + 0x48) = 0;
                *(int *)((int)param_1 + 0x44) = iVar2;
              }
              else {
                *piVar1 = *piVar3;
                *(int **)((int)param_1 + 0x48) = piVar1;
              }
              FUN_1004249a((undefined *)piVar3);
              *(int *)((int)param_1 + 0x4c) = *(int *)((int)param_1 + 0x4c) + -1;
            }
            break;
          }
        }
        thunk_FUN_10020d80(pvVar5,'\0');
        *(uint *)((int)pvVar5 + 0xac) = *(uint *)((int)pvVar5 + 0xac) & 0xffffffdf;
        thunk_FUN_10020b60((int)pvVar5);
LAB_1000a8cc:
        thunk_FUN_10008840(lParam);
        FUN_1004249a((undefined *)lParam);
        break;
      case 3:
        pvVar5 = (void *)lParam[1];
        for (piVar3 = *(int **)((int)param_1 + 0x40); piVar3 != (int *)0x0;
            piVar3 = (int *)piVar3[1]) {
          if ((void *)piVar3[2] == pvVar5) goto LAB_1000a7d3;
        }
        goto LAB_1000a813;
      case 4:
        pvVar5 = (void *)lParam[1];
        if (pvVar5 != (void *)0x0) {
          for (piVar3 = *(int **)((int)param_1 + 0x40); piVar3 != (int *)0x0;
              piVar3 = (int *)piVar3[1]) {
            if ((void *)piVar3[2] == pvVar5) goto LAB_1000a7d3;
          }
          goto LAB_1000a813;
        }
        break;
      case 7:
        if ((int *)lParam[1] != (int *)0x0) {
          thunk_FUN_100231e0((int *)lParam[1]);
          goto LAB_1000a8cc;
        }
        break;
      case 8:
        pvVar5 = (void *)lParam[1];
        if (pvVar5 != (void *)0x0) {
          thunk_FUN_100238b0(pvVar5,lParam[2]);
          thunk_FUN_10023540(pvVar5,lParam[2]);
          goto LAB_1000a8cc;
        }
        break;
      case 9:
        if ((void *)lParam[1] != (void *)0x0) {
          thunk_FUN_100238b0((void *)lParam[1],lParam[2]);
          goto LAB_1000a8cc;
        }
        break;
      case 10:
        if ((void *)lParam[1] != (void *)0x0) {
          thunk_FUN_10023a60((void *)lParam[1],lParam[2],lParam[3]);
        }
        break;
      case 0xb:
        if ((void *)lParam[1] != (void *)0x0) {
          thunk_FUN_10023c70((void *)lParam[1],lParam[2],lParam[3]);
          goto switchD_1000a6e4_caseD_c;
        }
        break;
      case 0xc:
switchD_1000a6e4_caseD_c:
        if ((void *)lParam[1] != (void *)0x0) {
          thunk_FUN_10023c20((void *)lParam[1],lParam[2],lParam[3] != 0);
        }
      }
      goto switchD_1000a6e4_caseD_5;
    }
LAB_1000a949:
    *(uint *)((int)param_1 + 0x4050) = local_4;
  }
  return;
LAB_1000a7d3:
  if (piVar3 != (int *)0x0) {
    if (*piVar3 == 0) {
      *(int *)((int)param_1 + 0x40) = piVar3[1];
    }
    else {
      *(int *)(*piVar3 + 4) = piVar3[1];
    }
    piVar1 = (int *)piVar3[1];
    if (piVar1 == (int *)0x0) {
      *(int *)((int)param_1 + 0x44) = *piVar3;
      *(undefined4 *)((int)param_1 + 0x48) = 0;
    }
    else {
      *piVar1 = *piVar3;
      *(int **)((int)param_1 + 0x48) = piVar1;
    }
    FUN_1004249a((undefined *)piVar3);
    *(int *)((int)param_1 + 0x4c) = *(int *)((int)param_1 + 0x4c) + -1;
  }
LAB_1000a813:
  thunk_FUN_10020d80(pvVar5,'\0');
  *(uint *)((int)pvVar5 + 0xac) = *(uint *)((int)pvVar5 + 0xac) & 0xffffffdf;
  iVar2 = lParam[1];
  if (iVar2 != 0) {
    *(uint *)(iVar2 + 0x214) = *(uint *)(iVar2 + 0x214) | 0x40;
    if ((DAT_100b4a20 == 0) || ((*(uint *)(DAT_100b4a20 + 0x1a4) >> 5 & 1) == 0)) {
      thunk_FUN_1002aa90(&DAT_100b5038,0x7ef,0,(LPARAM)lParam);
    }
    else {
      PostMessageA(*(HWND *)(iVar2 + 0x210),0x7ef,0,(LPARAM)lParam);
    }
  }
switchD_1000a6e4_caseD_5:
  *(undefined4 *)((int)param_1 + local_c * 4 + 0x50) = 0;
LAB_1000a929:
  local_8 = local_8 - 1;
  if (local_8 == 0) goto LAB_1000a949;
  goto LAB_1000a6cc;
}

