/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047d130 @ 0x0047D130 */
/* Body size: 738 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047d130(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  HCURSOR hCursor;
  LPCSTR lpCursorName;
  int local_18;
  int local_14;
  RECT RStack_10;
  
  if ((param_3 == -1) || (param_4 == -1)) {
    if (DAT_0083ad50 != (int *)0x0) {
      (**(code **)(*DAT_0083ad50 + 0x2c))(&local_18,&local_14);
    }
  }
  else {
    local_18 = param_3;
    local_14 = param_4;
  }
  param_3 = local_18;
  param_4 = local_14;
  if (param_1 == (int *)0x0) {
    param_1 = (int *)FUN_0047f700(&param_3,&param_4);
  }
  else {
    FUN_0047b2d0(&param_3,&param_4);
  }
  if (param_1 == (int *)0x0) {
LAB_0047d48b:
    FUN_0047d060(1);
LAB_0047d49b:
    lpCursorName = &DAT_00007f00;
LAB_0047d4a0:
    DAT_0083aaa0 = 0;
    hCursor = LoadCursorA((HINSTANCE)0x0,lpCursorName);
  }
  else {
    if ((DAT_0083ab18 != 0) || ((param_1[0x27] & 0x4000000U) != 0)) {
      uVar2 = (**(code **)(*param_1 + 0x140))(param_3,param_4);
      switch(uVar2) {
      case 0:
      case 2:
        FUN_0047d060(1);
        _DAT_0083aba0 = 1;
        goto LAB_0047d49b;
      default:
        goto LAB_0047d48b;
      case 10:
      case 0xb:
        FUN_0047d060(1);
        _DAT_0083aba0 = 1;
        lpCursorName = (LPCSTR)0x7f84;
        break;
      case 0xc:
      case 0xf:
        FUN_0047d060(1);
        _DAT_0083aba0 = 1;
        lpCursorName = (LPCSTR)0x7f85;
        break;
      case 0xd:
      case 0x11:
        FUN_0047d060(1);
        _DAT_0083aba0 = 1;
        lpCursorName = (LPCSTR)0x7f82;
        break;
      case 0xe:
      case 0x10:
        FUN_0047d060(1);
        _DAT_0083aba0 = 1;
        lpCursorName = (LPCSTR)0x7f83;
        break;
      case 0xfffffffe:
      case 0xffffffff:
      case 1:
        goto LAB_0047d4ae;
      }
      goto LAB_0047d4a0;
    }
    if (param_1[0x82] != 0) {
      if (DAT_0083aaa0 == 0) {
        iVar1 = ShowCursor(0);
        while (-1 < iVar1) {
          iVar1 = ShowCursor(0);
        }
      }
      else {
        FUN_0047d060();
      }
      if (param_1[0x82] != DAT_0083aaa0) {
        DAT_0083aab4 = *(int *)(param_1[0x82] + 0x18);
        DAT_0083aab8 = *(int *)(param_1[0x82] + 0x1c);
        DAT_0083aaac = param_1[0x83];
        DAT_0083aab0 = param_1[0x84];
        if (DAT_0083a504 == (int *)0x0) {
          iVar1 = 0;
        }
        else {
          iVar1 = (**(code **)(*DAT_0083a504 + 0xd8))();
        }
        if (iVar1 == DAT_0083aab4) {
          if (DAT_0083a504 == (int *)0x0) {
            iVar1 = 0;
          }
          else {
            iVar1 = (**(code **)(*DAT_0083a504 + 0xdc))();
          }
          if (iVar1 == DAT_0083aab8) goto LAB_0047d2a0;
        }
        FUN_00474dd0(DAT_0083aab4,DAT_0083aab8,0,1,0,0);
      }
LAB_0047d2a0:
      DAT_0083aaa4 = local_18 - DAT_0083aaac;
      DAT_0083aaa8 = local_14 - DAT_0083aab0;
      DAT_0083aaa0 = param_1[0x82];
      FUN_00475c60(&DAT_0083a500,DAT_0083aaa4,DAT_0083aaa8,0,0,DAT_0083aab4,DAT_0083aab8);
      RStack_10.right = DAT_0083aab4 + DAT_0083aaa4;
      RStack_10.left = DAT_0083aaa4;
      RStack_10.bottom = DAT_0083aab8 + DAT_0083aaa8;
      RStack_10.top = DAT_0083aaa8;
      UnionRect((LPRECT)&DAT_0083a4d8,&RStack_10,(RECT *)&DAT_0083a4d8);
      uVar2 = DAT_0083ab4c;
      if (param_2 == 0) {
        return;
      }
      DAT_0083ab4c = 1;
      FUN_0047cdb0(&DAT_0083a4d8);
      DAT_0083ab4c = uVar2;
      _DAT_0083a4d8 = DAT_0083a4e0;
      return;
    }
    if (DAT_0083aaa0 != 0) {
      FUN_0047d060(1);
      iVar1 = ShowCursor(1);
      while (iVar1 < 1) {
        iVar1 = ShowCursor(1);
      }
    }
    DAT_0083aaa0 = 0;
    if ((param_1[0x85] == 0) || (hCursor = *(HCURSOR *)(param_1[0x85] + 4), hCursor == (HCURSOR)0x0)
       ) {
      lpCursorName = (LPCSTR)param_1[0x86];
      if (lpCursorName == (LPCSTR)0x0) goto LAB_0047d49b;
      goto LAB_0047d4a0;
    }
  }
  SetCursor(hCursor);
LAB_0047d4ae:
  return;
}

