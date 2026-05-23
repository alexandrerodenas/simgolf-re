/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10007300 @ 0x10007300 */
/* Body size: 739 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_10007300(void *this,int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,char param_8)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  RECT *lprcSrc2;
  BOOL BVar4;
  int iVar5;
  uint uVar6;
  code *UNRECOVERED_JUMPTABLE;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  RECT local_2c;
  int local_1c;
  int local_18;
  uint local_14;
  char *local_10;
  char *local_c;
  int local_8;
  
  if (param_1 == (int *)0x0) {
    uVar2 = 3;
  }
  else {
    if (param_2 < 0) {
      param_6 = param_6 + param_2;
      param_4 = param_4 - param_2;
      param_2 = 0;
    }
    if (param_3 < 0) {
      param_7 = param_7 + param_3;
      param_5 = param_5 - param_3;
      param_3 = 0;
    }
    iVar3 = (**(code **)(*(int *)this + 0xd8))();
    if (iVar3 < param_2) {
      uVar2 = 0;
    }
    else {
      iVar3 = (**(code **)(*(int *)this + 0xdc))();
      if (iVar3 < param_3) {
        uVar2 = 0;
      }
      else {
        iVar3 = (**(code **)(*(int *)this + 0xd8))();
        if (iVar3 < param_2 + param_6) {
          iVar3 = (**(code **)(*(int *)this + 0xd8))();
          param_6 = iVar3 - param_2;
        }
        iVar7 = param_3 + param_7;
        iVar3 = (**(code **)(*(int *)this + 0xdc))();
        if (iVar3 < iVar7) {
          iVar3 = (**(code **)(*(int *)this + 0xdc))();
          param_7 = iVar3 - param_3;
        }
        local_2c.left = param_4;
        local_2c.top = param_5;
        local_2c.right = param_4 + param_6;
        local_2c.bottom = param_5 + param_7;
        lprcSrc2 = (RECT *)(**(code **)(*param_1 + 0xcc))();
        BVar4 = IntersectRect(&local_2c,&local_2c,lprcSrc2);
        if (BVar4 == 0) {
          uVar2 = 0;
        }
        else {
          iVar3 = local_2c.left - param_4;
          iVar5 = local_2c.top - param_5;
          local_c = (char *)(**(code **)(*param_1 + 0x14))(local_2c.left,local_2c.top);
          if (local_c == (char *)0x0) {
            uVar2 = 3;
          }
          else {
            local_10 = (char *)(**(code **)(*(int *)this + 0x14))(param_2 + iVar3,param_3 + iVar5);
            if (local_10 != (char *)0x0) {
              local_8 = (**(code **)(*param_1 + 0xe0))();
              local_18 = (**(code **)(*(int *)this + 0xe0))();
              local_1c = local_2c.bottom - local_2c.top;
              local_14 = local_2c.right - local_2c.left;
              iVar3 = (int)local_14 >> 2;
              _DAT_10057b8c = local_18 - local_14;
              _DAT_10057b80 = local_8 - local_14;
              uVar6 = local_14 & 3;
              if (uVar6 != 0) {
                if (uVar6 == 1) {
                  UNRECOVERED_JUMPTABLE = (code *)0x1000759e;
                  iVar3 = iVar3 + 1;
                  pcVar8 = local_10;
                  pcVar9 = local_c;
                  DAT_10057b88 = iVar3;
                  goto LAB_1000759e;
                }
                if (uVar6 == 2) {
                  UNRECOVERED_JUMPTABLE = (code *)0x10007598;
                  iVar3 = iVar3 + 1;
                  pcVar8 = local_10;
                  pcVar9 = local_c;
                  DAT_10057b88 = iVar3;
                  goto LAB_10007598;
                }
                if (uVar6 == 3) {
                  UNRECOVERED_JUMPTABLE = (code *)0x10007592;
                  iVar3 = iVar3 + 1;
                  pcVar8 = local_10;
                  pcVar9 = local_c;
                  DAT_10057b88 = iVar3;
                  goto LAB_10007592;
                }
              }
              UNRECOVERED_JUMPTABLE = (code *)0x1000758c;
              pcVar8 = local_10;
              pcVar9 = local_c;
              DAT_10057b88 = iVar3;
LAB_1000758c:
              if (*pcVar9 == param_8) goto LAB_10007563;
LAB_10007590:
              pcVar8 = pcVar8 + 1;
              pcVar9 = pcVar9 + 1;
LAB_10007592:
              if (*pcVar9 == param_8) goto LAB_1000756d;
LAB_10007596:
              pcVar8 = pcVar8 + 1;
              pcVar9 = pcVar9 + 1;
LAB_10007598:
              if (*pcVar9 == param_8) goto LAB_10007577;
LAB_1000759c:
              pcVar8 = pcVar8 + 1;
              pcVar9 = pcVar9 + 1;
LAB_1000759e:
              cVar1 = *pcVar9;
              do {
                if (cVar1 != param_8) {
                  pcVar8 = pcVar8 + 1;
                  pcVar9 = pcVar9 + 1;
                  iVar3 = iVar3 + -1;
                  if (iVar3 == 0) {
LAB_100075a7:
                    if (local_1c == 1) {
                      (**(code **)(*(int *)this + 0x24))(1);
                      (**(code **)(*param_1 + 0x24))(1);
                      return 0;
                    }
                    /* WARNING: Could not recover jumptable at 0x1000755d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    uVar2 = (*UNRECOVERED_JUMPTABLE)(iVar7);
                    return uVar2;
                  }
                  goto LAB_1000758c;
                }
                *pcVar9 = *pcVar8;
                pcVar8 = pcVar8 + 1;
                pcVar9 = pcVar9 + 1;
                iVar3 = iVar3 + -1;
                if (iVar3 == 0) goto LAB_100075a7;
                if (*pcVar9 != param_8) goto LAB_10007590;
LAB_10007563:
                *pcVar9 = *pcVar8;
                pcVar8 = pcVar8 + 1;
                pcVar9 = pcVar9 + 1;
                if (*pcVar9 != param_8) goto LAB_10007596;
LAB_1000756d:
                *pcVar9 = *pcVar8;
                pcVar8 = pcVar8 + 1;
                pcVar9 = pcVar9 + 1;
                if (*pcVar9 != param_8) goto LAB_1000759c;
LAB_10007577:
                *pcVar9 = *pcVar8;
                pcVar8 = pcVar8 + 1;
                pcVar9 = pcVar9 + 1;
                cVar1 = *pcVar9;
              } while( true );
            }
            uVar2 = 3;
          }
        }
      }
    }
  }
  return uVar2;
}

