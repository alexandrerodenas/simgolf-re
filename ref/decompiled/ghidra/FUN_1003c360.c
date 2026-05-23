/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1003c360 @ 0x1003C360 */
/* Body size: 1024 addresses */


uint FUN_1003c360(HWND param_1,uint param_2,HWND param_3,LPARAM param_4)

{
  short sVar1;
  uint uVar2;
  
  sVar1 = (short)((uint)param_4 >> 0x10);
  if (param_2 < 0x201) {
    if (param_2 == 0x200) {
      FUN_1003ca80(param_1,(int)(short)param_4,(int)sVar1);
      return 0;
    }
    if (0x100 < param_2) {
      switch(param_2) {
      case 0x101:
      case 0x105:
        FUN_1003c960(param_1,(uint)param_3,0);
        return 0;
      case 0x102:
        FUN_1003ca00(param_1,param_3);
        return 0;
      default:
        goto switchD_1003c3b2_caseD_7;
      case 0x104:
        FUN_1003c960(param_1,(uint)param_3,1);
        return 0;
      case 0x112:
        goto switchD_1003c4ab_caseD_112;
      }
    }
    if (param_2 == 0x100) {
      FUN_1003c960(param_1,(uint)param_3,1);
      return 0;
    }
    switch(param_2) {
    case 5:
      FUN_1003ca20(param_1,param_3,(int)(short)param_4,(int)sVar1);
      return 0;
    case 6:
      FUN_1003c900(param_1,(uint)param_3 & 0xffff,param_4,(uint)param_3 >> 0x10);
      return 0;
    case 0xf:
      FUN_1003c8a0(param_1);
      return 0;
    case 0x4a:
      uVar2 = FUN_1003cb20(param_1,param_3,param_4);
      return uVar2;
    case 0x84:
      uVar2 = FUN_1003ca40(param_1,(int)(short)param_4,(int)sVar1);
      return uVar2;
    }
  }
  else {
    if (param_2 < 0x20b) {
      if (param_2 == 0x20a) {
        FUN_1003ca60(param_1,(int)(short)((uint)param_3 >> 0x10),(int)(short)param_4,(int)sVar1);
        uVar2 = DefWindowProcA(param_1,0x20a,(WPARAM)param_3,param_4);
        return uVar2;
      }
      switch(param_2) {
      case 0x201:
        FUN_1003caa0(param_1,0,(int)(short)param_4,(int)sVar1);
        return 0;
      case 0x202:
        FUN_1003cac0(param_1,(int)(short)param_4,(int)sVar1);
        return 0;
      case 0x203:
        FUN_1003caa0(param_1,1,(int)(short)param_4,(int)sVar1);
        return 0;
      case 0x204:
        FUN_1003cae0(param_1,0,(int)(short)param_4,(int)sVar1);
        return 0;
      case 0x205:
        FUN_1003cb00(param_1,(int)(short)param_4,(int)sVar1);
        return 0;
      case 0x206:
        FUN_1003cae0(param_1,1,(int)(short)param_4,(int)sVar1);
        return 0;
      }
      goto switchD_1003c3b2_caseD_7;
    }
    if (0x311 < param_2) {
      if (param_2 == 0x401) {
        (**(code **)(*DAT_10057d90 + 0x30))(param_3);
      }
      goto switchD_1003c3b2_caseD_7;
    }
    if (param_2 == 0x311) {
      FUN_1003c880(param_1,param_3);
      return 0;
    }
    if (param_2 != 0x218) {
      if (param_2 == 0x30f) {
        uVar2 = FUN_1003c840(param_1);
        return uVar2 & 0xffff;
      }
      goto switchD_1003c3b2_caseD_7;
    }
    if (param_3 == (HWND)0x0) {
      return 0x424d5144;
    }
switchD_1003c4ab_caseD_112:
    if ((param_3 == (HWND)0xf140) || (param_3 == (HWND)0xf170)) {
      return 0;
    }
  }
switchD_1003c3b2_caseD_7:
  uVar2 = DefWindowProcA(param_1,param_2,(WPARAM)param_3,param_4);
  return uVar2;
}

