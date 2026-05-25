/* Ghidra decompiled: golf.exe */
/* Function: FUN_00496330 @ 0x00496330 */


int __thiscall
FUN_00496330(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,int param_6,
            int param_7,uint param_8)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  
  if (((param_6 == 0) || (param_4 == 0)) || (param_5 == 0)) {
    iVar2 = 3;
  }
  else {
    FUN_004961d0();
    param_1[0x15d] = param_1[0x15d] | param_8;
    param_1[0x15e] = param_7;
    param_1[0x160] = 0;
    if (param_5 < param_4) {
      FUN_004967d0(param_5);
      piVar6 = param_1 + 0x177;
      param_1[0x161] = param_4 + param_5 * -2;
      piVar5 = param_1 + 0x17d;
    }
    else {
      FUN_004967d0(param_4);
      piVar6 = param_1 + 0x17a;
      param_1[0x161] = param_5 + param_4 * -2;
      piVar5 = param_1 + 0x180;
    }
    uVar1 = 0;
    if ((*(byte *)(param_1 + 0x15d) & 1) != 0) {
      uVar1 = 0x80000;
    }
    if (DAT_0083ff60 == 0) {
      uVar1 = uVar1 | 0x1020;
    }
    else {
      uVar1 = uVar1 | 0x9020;
    }
    iVar2 = FUN_004806c0(param_2,param_3,param_4,param_5,0,uVar1,param_6,0,0);
    if (iVar2 == 0) {
      if ((*(byte *)(param_1 + 0x15d) & 2) != 0) {
LAB_0049664d:
        param_1[0x167] = -1;
        param_1[0x163] = param_1[0x160];
        (**(code **)(*param_1 + 4))(0);
        DAT_0083ff60 = 0;
        return 0;
      }
      bVar7 = param_1[0x15f] != -1;
      iVar2 = param_1[0x170];
      if (bVar7) {
        iVar2 = iVar2 + -2;
      }
      iVar2 = FUN_004887c0(0,1,bVar7,bVar7,iVar2,iVar2,param_1,0);
      if (iVar2 == 0) {
        iVar2 = piVar6[2];
        iVar3 = *piVar6;
        param_1[0x318] = piVar6[1];
        param_1[0x317] = iVar3;
        param_1[0x319] = iVar2;
        param_1[0x302] = param_1[0x16f];
        param_1[0x305] = param_1[0x172];
        param_1[0x303] = param_1[0x173];
        param_1[0x304] = param_1[0x174];
        param_1[0x309] = 0;
        param_1[0x2ee] = 0x32;
        (**(code **)(param_1[0x183] + 0x120))();
        if (param_1[0x15f] == -1) {
          if (param_5 < param_4) {
            iVar2 = 0;
          }
          else {
            if ((int *)param_1[0x9e] == (int *)0x0) {
              iVar2 = 0;
            }
            else {
              iVar2 = (**(code **)(*(int *)param_1[0x9e] + 0xdc))();
            }
            iVar2 = iVar2 - param_1[0x170];
          }
          if (param_5 < param_4) {
            if ((int *)param_1[0x9e] == (int *)0x0) {
              iVar3 = -param_1[0x170];
              iVar4 = param_1[0x170];
            }
            else {
              iVar3 = (**(code **)(*(int *)param_1[0x9e] + 0xd8))();
              iVar3 = iVar3 - param_1[0x170];
              iVar4 = param_1[0x170];
            }
          }
          else {
            iVar4 = param_1[0x170];
            iVar3 = 0;
          }
        }
        else {
          if (param_5 < param_4) {
            iVar2 = 1;
          }
          else {
            if ((int *)param_1[0x9e] == (int *)0x0) {
              iVar2 = 0;
            }
            else {
              iVar2 = (**(code **)(*(int *)param_1[0x9e] + 0xdc))();
            }
            iVar2 = (iVar2 - param_1[0x170]) + 1;
          }
          if (param_5 < param_4) {
            if ((int *)param_1[0x9e] == (int *)0x0) {
              iVar3 = 1 - param_1[0x170];
            }
            else {
              iVar3 = (**(code **)(*(int *)param_1[0x9e] + 0xd8))();
              iVar3 = (iVar3 - param_1[0x170]) + 1;
            }
          }
          else {
            iVar3 = 1;
          }
          iVar4 = param_1[0x170] + -2;
        }
        iVar2 = FUN_004887c0(0,2,iVar3,iVar2,iVar4,iVar4,param_1,0);
        if (iVar2 == 0) {
          iVar2 = piVar5[2];
          iVar3 = *piVar5;
          param_1[0x4cc] = piVar5[1];
          param_1[0x4cb] = iVar3;
          param_1[0x4cd] = iVar2;
          param_1[0x4b6] = param_1[0x16f];
          param_1[0x4b9] = param_1[0x172];
          param_1[0x4b7] = param_1[0x173];
          param_1[0x4b8] = param_1[0x174];
          param_1[0x4bd] = 0;
          param_1[0x4a2] = 0x32;
          (**(code **)(param_1[0x337] + 0x120))();
          goto LAB_0049664d;
        }
      }
    }
  }
  return iVar2;
}

