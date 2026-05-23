/* Ghidra decompiled: golf.exe */
/* Function: FUN_00438390 @ 0x00438390 */
/* Body size: 502 addresses */


int __thiscall FUN_00438390(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_4;
  
  iVar1 = param_2;
  local_4 = param_1;
  do {
    FUN_00473e60(PTR_DAT_004c1570,0,0x102,0);
    FUN_0047ab50(&local_4,&param_2);
    iVar2 = FUN_004382f0(local_4,param_2);
    iVar4 = 0;
    piVar3 = &DAT_004c7be0;
    do {
      FUN_00473cb0(PTR_DAT_004c1570,*piVar3,piVar3[1],1,1,1,0);
      if (DAT_005aa55c + iVar4 < (int)(&DAT_0059b76c)[iVar1]) {
        FUN_00473cb0(PTR_DAT_004c1570,*piVar3 + -8,piVar3[1],1,1,1,0);
      }
      piVar3 = piVar3 + 2;
      iVar4 = iVar4 + 1;
    } while ((int)piVar3 < 0x4c7c30);
    if (iVar2 == 10) {
      uVar6 = 0x11c;
      uVar5 = 0x2c3;
LAB_0043849f:
      FUN_00473e60(PTR_DAT_004c1570,uVar5,uVar6,0);
    }
    else if (iVar2 == 0xb) {
      uVar6 = 0x1a9;
      uVar5 = 10;
      goto LAB_0043849f;
    }
    if (DAT_005aa55c == 0) {
      FUN_00473e60(PTR_DAT_004c1570,10,0x1a9,0);
    }
    FUN_00480c80(0);
    FUN_0045bf80(5,0);
    FUN_0045c030();
    if (DAT_00822d68 != 0) {
      if ((DAT_00822d68 == 2) || (param_2 < 0x102)) {
        return -1;
      }
      if (DAT_00822d68 != 1) {
        return 0;
      }
      if ((iVar2 != -1) && (iVar2 < 10)) {
        return DAT_005aa55c + iVar2;
      }
      if (iVar2 == 10) {
        if (DAT_005aa55c < 0x46) {
          DAT_005aa55c = DAT_005aa55c + 10;
        }
      }
      else if ((iVar2 == 0xb) && (DAT_005aa55c != 0)) {
        DAT_005aa55c = DAT_005aa55c + -10;
      }
      if ((&DAT_0059b76c)[iVar1] + -10 < DAT_005aa55c) {
        DAT_005aa55c = (&DAT_0059b76c)[iVar1] + -10;
      }
      if (DAT_005aa55c < 0) {
        DAT_005aa55c = 0;
      }
    }
  } while( true );
}

