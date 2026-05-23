/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100692b0 @ 0x100692B0 */
/* Body size: 1224 addresses */


void FUN_100692b0(HWND param_1,uint param_2,HWND param_3,LPARAM param_4)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_50 [16];
  HWND local_10;
  HWND local_c;
  uint local_8;
  
  puVar3 = local_50;
  for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_8 = param_2;
  sVar1 = (short)((uint)param_4 >> 0x10);
  if (param_2 < 0x201) {
    if (param_2 == 0x200) {
      thunk_FUN_10069ee0(param_1,(int)(short)param_4,(int)sVar1);
      goto LAB_10069765;
    }
    if (param_2 < 0x101) {
      if (param_2 == 0x100) {
        thunk_FUN_10069c70(param_1,(uint)param_3,1);
        goto LAB_10069765;
      }
      local_8 = param_2 - 5;
      switch(param_2) {
      case 5:
        thunk_FUN_10069db0(param_1,param_3,(int)(short)param_4,(int)sVar1);
        break;
      case 6:
        thunk_FUN_10069b90(param_1,(uint)param_3 & 0xffff,param_4,(uint)param_3 >> 0x10);
        break;
      default:
        goto switchD_10069318_caseD_7;
      case 0xf:
        thunk_FUN_10069ac0(param_1);
        break;
      case 0x4a:
        thunk_FUN_1006a0e0(param_1,param_3,param_4);
        break;
      case 0x84:
        thunk_FUN_10069e10(param_1,(int)(short)param_4,(int)sVar1);
      }
      goto LAB_10069765;
    }
    local_8 = param_2 - 0x101;
    switch(param_2) {
    case 0x101:
      thunk_FUN_10069c70(param_1,(uint)param_3,0);
      break;
    case 0x102:
      thunk_FUN_10069d50(param_1,param_3._0_1_);
      break;
    case 0x104:
      thunk_FUN_10069c70(param_1,(uint)param_3,1);
      break;
    case 0x105:
      thunk_FUN_10069c70(param_1,(uint)param_3,0);
      break;
    case 0x112:
switchD_10069340_caseD_112:
      local_10 = param_3;
      if ((param_3 == (HWND)0xf140) || (param_3 == (HWND)0xf170)) break;
    default:
switchD_10069318_caseD_7:
      DefWindowProcA(param_1,param_2,(WPARAM)param_3,param_4);
      __chkesp();
    }
LAB_10069765:
    local_8 = 0x10069772;
    __chkesp();
    return;
  }
  if (param_2 < 0x20b) {
    if (param_2 != 0x20a) {
      local_8 = param_2 - 0x201;
      switch(local_8) {
      case 0:
        thunk_FUN_10069f40(param_1,0,(int)(short)param_4,(int)sVar1);
        break;
      case 1:
        thunk_FUN_10069fb0(param_1,(int)(short)param_4,(int)sVar1);
        break;
      case 2:
        thunk_FUN_10069f40(param_1,1,(int)(short)param_4,(int)sVar1);
        break;
      case 3:
        thunk_FUN_1006a010(param_1,0,(int)(short)param_4,(int)sVar1);
        break;
      case 4:
        thunk_FUN_1006a080(param_1,(int)(short)param_4,(int)sVar1);
        break;
      case 5:
        thunk_FUN_1006a010(param_1,1,(int)(short)param_4,(int)sVar1);
        break;
      default:
        goto switchD_10069318_caseD_7;
      }
      goto LAB_10069765;
    }
    thunk_FUN_10069e70(param_1,(int)(short)((uint)param_3 >> 0x10),(int)(short)param_4,(int)sVar1);
  }
  else if (param_2 < 0x312) {
    if (param_2 == 0x311) {
      thunk_FUN_10069a70(param_1,param_3);
      goto LAB_10069765;
    }
    if (param_2 == 0x218) {
      local_c = param_3;
      if (param_3 == (HWND)0x0) goto LAB_10069765;
      goto switchD_10069340_caseD_112;
    }
    if (param_2 == 0x30f) {
      thunk_FUN_100699c0(param_1);
      goto LAB_10069765;
    }
  }
  else if (param_2 == 0x401) {
    (**(code **)(*DAT_1012872c + 0x30))(param_3);
    __chkesp();
  }
  goto switchD_10069318_caseD_7;
}

