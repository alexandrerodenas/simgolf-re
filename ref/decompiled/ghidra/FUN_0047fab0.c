/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047fab0 @ 0x0047FAB0 */
/* Body size: 331 addresses */


void __thiscall FUN_0047fab0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_38;
  int local_34;
  RECT local_30;
  RECT RStack_20;
  RECT RStack_10;
  
  if ((*(byte *)(param_1 + 0xa0) & 2) == 0) {
    FUN_0047b200(&param_2,&param_3);
  }
  else {
    FUN_0047b2d0(&param_2,&param_3);
  }
  iVar2 = param_2 - DAT_0083ab24;
  iVar3 = param_3 - DAT_0083ab28;
  if ((iVar2 == 0) && (iVar3 == 0)) {
    return;
  }
  local_34 = *(int *)(param_1 + 0x1a4);
  local_38 = *(int *)(param_1 + 0x1a8);
  FUN_0047ca10(&local_34,&local_38);
  if ((*(byte *)(param_1 + 0xa0) & 2) == 0) {
    local_30.left = 0;
    local_30.right = *(int *)(param_1 + 0x1b4) - *(int *)(param_1 + 0x1ac);
    local_30.bottom = *(int *)(param_1 + 0x1b8) - *(int *)(param_1 + 0x1b0);
    local_30.top = 0;
    FUN_0047b0d0(&local_30);
  }
  else {
    local_30.left = 0;
    local_30.right = *(int *)(param_1 + 0x1c4) - *(int *)(param_1 + 0x1bc);
    local_30.bottom = *(int *)(param_1 + 0x1c8) - *(int *)(param_1 + 0x1c0);
    local_30.top = 0;
    FUN_0047b120(&local_30);
  }
  switch(DAT_0083ab1c) {
  case 2:
    if ((iVar2 != 0) || (iVar3 != 0)) {
      if ((*(byte *)(param_1 + 0xa0) & 2) == 0) {
        *(int *)(param_1 + 0x1ac) = *(int *)(param_1 + 0x1ac) + iVar2;
        *(int *)(param_1 + 0x1b4) = *(int *)(param_1 + 0x1b4) + iVar2;
        *(int *)(param_1 + 0x1b0) = *(int *)(param_1 + 0x1b0) + iVar3;
        *(int *)(param_1 + 0x1b8) = *(int *)(param_1 + 0x1b8) + iVar3;
      }
      else {
        *(int *)(param_1 + 0x1bc) = *(int *)(param_1 + 0x1bc) + iVar2;
        *(int *)(param_1 + 0x1c4) = *(int *)(param_1 + 0x1c4) + iVar2;
        *(int *)(param_1 + 0x1c0) = *(int *)(param_1 + 0x1c0) + iVar3;
        *(int *)(param_1 + 0x1c8) = *(int *)(param_1 + 0x1c8) + iVar3;
        iVar4 = *(int *)(param_1 + 300);
        if (iVar4 != 0) {
          piVar1 = (int *)(iVar4 + 0x1ac);
          RStack_10.left = *piVar1;
          RStack_10.top = *(LONG *)(iVar4 + 0x1b0);
          RStack_10.right = *(LONG *)(iVar4 + 0x1b4);
          RStack_10.bottom = *(LONG *)(iVar4 + 0x1b8);
          *piVar1 = *piVar1 + iVar2;
          *(int *)(iVar4 + 0x1b4) = *(int *)(iVar4 + 0x1b4) + iVar2;
          *(int *)(iVar4 + 0x1b0) = *(int *)(iVar4 + 0x1b0) + iVar3;
          *(int *)(iVar4 + 0x1b8) = *(int *)(iVar4 + 0x1b8) + iVar3;
          UnionRect(&RStack_10,&RStack_10,(RECT *)(*(int *)(param_1 + 300) + 0x1ac));
        }
      }
    }
    break;
  default:
    goto LAB_004801a3;
  case 10:
    if (iVar2 != 0) {
      iVar2 = *(int *)(param_1 + 0x1bc) + iVar2;
      *(int *)(param_1 + 0x1bc) = iVar2;
      iVar3 = *(int *)(param_1 + 0x1c4);
      if (iVar3 - iVar2 < local_34) {
        *(int *)(param_1 + 0x1bc) = iVar3 - local_34;
      }
      (**(code **)(**(int **)(param_1 + 0xb0) + 0xc))
                (iVar3 - *(int *)(param_1 + 0x1bc),
                 *(int *)(param_1 + 0x1c8) - *(int *)(param_1 + 0x1c0),0,0);
    }
    break;
  case 0xb:
    if (iVar2 != 0) {
      *(int *)(param_1 + 0x1c4) = *(int *)(param_1 + 0x1c4) + iVar2;
      DAT_0083ab24 = DAT_0083ab24 + iVar2;
      iVar2 = *(int *)(param_1 + 0x1c4);
      iVar3 = *(int *)(param_1 + 0x1bc);
      iVar4 = iVar2 - iVar3;
      goto joined_r0x00480063;
    }
    break;
  case 0xc:
    if (iVar3 != 0) {
      iVar2 = *(int *)(param_1 + 0x1c8);
      iVar3 = *(int *)(param_1 + 0x1c0) + iVar3;
      *(int *)(param_1 + 0x1c0) = iVar3;
      if (iVar2 - iVar3 < local_38) {
        *(int *)(param_1 + 0x1c0) = iVar2 - local_38;
      }
      iVar3 = **(int **)(param_1 + 0xb0);
LAB_0047fe36:
      (**(code **)(iVar3 + 0xc))
                (*(int *)(param_1 + 0x1c4) - *(int *)(param_1 + 0x1bc),
                 iVar2 - *(int *)(param_1 + 0x1c0),0,0);
    }
    break;
  case 0xd:
    iVar2 = *(int *)(param_1 + 0x1bc) + iVar2;
    iVar3 = *(int *)(param_1 + 0x1c0) + iVar3;
    *(int *)(param_1 + 0x1bc) = iVar2;
    *(int *)(param_1 + 0x1c0) = iVar3;
    iVar4 = *(int *)(param_1 + 0x1c8);
    if (iVar4 - iVar3 < local_38) {
      *(int *)(param_1 + 0x1c0) = iVar4 - local_38;
    }
    iVar3 = *(int *)(param_1 + 0x1c4);
    if (iVar3 - iVar2 < local_34) {
      *(int *)(param_1 + 0x1bc) = iVar3 - local_34;
    }
    (**(code **)(**(int **)(param_1 + 0xb0) + 0xc))
              (iVar3 - *(int *)(param_1 + 0x1bc),iVar4 - *(int *)(param_1 + 0x1c0),0,0);
    break;
  case 0xe:
    *(int *)(param_1 + 0x1c4) = *(int *)(param_1 + 0x1c4) + iVar2;
    *(int *)(param_1 + 0x1c0) = *(int *)(param_1 + 0x1c0) + iVar3;
    DAT_0083ab24 = DAT_0083ab24 + iVar2;
    if (*(int *)(param_1 + 0x1c8) - *(int *)(param_1 + 0x1c0) < local_38) {
      *(int *)(param_1 + 0x1c0) = *(int *)(param_1 + 0x1c8) - local_38;
    }
    iVar2 = *(int *)(param_1 + 0x1c4);
    iVar3 = *(int *)(param_1 + 0x1bc);
    iVar4 = iVar2 - iVar3;
    goto joined_r0x00480063;
  case 0xf:
    if (iVar3 != 0) {
      *(int *)(param_1 + 0x1c8) = *(int *)(param_1 + 0x1c8) + iVar3;
      DAT_0083ab28 = DAT_0083ab28 + iVar3;
      iVar2 = *(int *)(param_1 + 0x1c8);
      if (iVar2 - *(int *)(param_1 + 0x1c0) < local_38) {
        iVar3 = (*(int *)(param_1 + 0x1c0) - iVar2) + local_38;
        *(int *)(param_1 + 0x1c8) = iVar2 + iVar3;
        DAT_0083ab28 = DAT_0083ab28 + iVar3;
      }
      iVar2 = *(int *)(param_1 + 0x1c8);
      iVar3 = **(int **)(param_1 + 0xb0);
      goto LAB_0047fe36;
    }
    break;
  case 0x10:
    *(int *)(param_1 + 0x1bc) = *(int *)(param_1 + 0x1bc) + iVar2;
    *(int *)(param_1 + 0x1c8) = *(int *)(param_1 + 0x1c8) + iVar3;
    DAT_0083ab28 = DAT_0083ab28 + iVar3;
    iVar2 = *(int *)(param_1 + 0x1c8);
    if (iVar2 - *(int *)(param_1 + 0x1c0) < local_38) {
      iVar3 = (*(int *)(param_1 + 0x1c0) - iVar2) + local_38;
      *(int *)(param_1 + 0x1c8) = iVar2 + iVar3;
      DAT_0083ab28 = DAT_0083ab28 + iVar3;
    }
    iVar2 = *(int *)(param_1 + 0x1c4);
    if (iVar2 - *(int *)(param_1 + 0x1bc) < local_34) {
      *(int *)(param_1 + 0x1bc) = iVar2 - local_34;
    }
    (**(code **)(**(int **)(param_1 + 0xb0) + 0xc))
              (iVar2 - *(int *)(param_1 + 0x1bc),
               *(int *)(param_1 + 0x1c8) - *(int *)(param_1 + 0x1c0),0,0);
    break;
  case 0x11:
    *(int *)(param_1 + 0x1c4) = *(int *)(param_1 + 0x1c4) + iVar2;
    *(int *)(param_1 + 0x1c8) = *(int *)(param_1 + 0x1c8) + iVar3;
    DAT_0083ab24 = DAT_0083ab24 + iVar2;
    DAT_0083ab28 = DAT_0083ab28 + iVar3;
    iVar2 = *(int *)(param_1 + 0x1c8);
    if (iVar2 - *(int *)(param_1 + 0x1c0) < local_38) {
      iVar3 = (*(int *)(param_1 + 0x1c0) - iVar2) + local_38;
      *(int *)(param_1 + 0x1c8) = iVar2 + iVar3;
      DAT_0083ab28 = DAT_0083ab28 + iVar3;
    }
    iVar2 = *(int *)(param_1 + 0x1c4);
    iVar3 = *(int *)(param_1 + 0x1bc);
    iVar4 = iVar2 - iVar3;
joined_r0x00480063:
    if (iVar4 < local_34) {
      iVar3 = (iVar3 - iVar2) + local_34;
      *(int *)(param_1 + 0x1c4) = iVar2 + iVar3;
      DAT_0083ab24 = DAT_0083ab24 + iVar3;
    }
    (**(code **)(**(int **)(param_1 + 0xb0) + 0xc))
              (*(int *)(param_1 + 0x1c4) - *(int *)(param_1 + 0x1bc),
               *(int *)(param_1 + 0x1c8) - *(int *)(param_1 + 0x1c0),0,0);
  }
  if ((*(byte *)(param_1 + 0xa0) & 2) == 0) {
    RStack_20.right = *(int *)(param_1 + 0x1b4) - *(int *)(param_1 + 0x1ac);
    RStack_20.bottom = *(int *)(param_1 + 0x1b8) - *(int *)(param_1 + 0x1b0);
    RStack_20.left = 0;
    RStack_20.top = 0;
    FUN_0047b0d0(&RStack_20);
  }
  else {
    RStack_20.right = *(int *)(param_1 + 0x1c4) - *(int *)(param_1 + 0x1bc);
    RStack_20.bottom = *(int *)(param_1 + 0x1c8) - *(int *)(param_1 + 0x1c0);
    RStack_20.left = 0;
    RStack_20.top = 0;
    FUN_0047b120(&RStack_20);
  }
  UnionRect(&local_30,&local_30,&RStack_20);
  if (*(int *)(param_1 + 300) != 0) {
    UnionRect(&local_30,&local_30,&RStack_10);
  }
  FUN_0047e140(param_1,param_1 + 0x1dc);
  DAT_0083ab4c = 1;
  FUN_0047f8e0(&local_30,0);
  FUN_0047cdb0(&local_30);
  DAT_0083ab4c = 0;
LAB_004801a3:
  return;
}

