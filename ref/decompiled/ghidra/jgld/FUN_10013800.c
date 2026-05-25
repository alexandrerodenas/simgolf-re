/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10013800 @ 0x10013800 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_10013800(void *this,int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,char param_8)

{
  char cVar1;
  RECT *pRVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 local_70 [16];
  uint local_30;
  int local_2c;
  RECT local_28;
  int local_18;
  int local_14;
  char *local_10;
  char *local_c;
  int *local_8;
  
  puVar7 = local_70;
  for (iVar3 = 0x1b; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = 0xcccccccc;
    puVar7 = puVar7 + 1;
  }
  if (param_1 != (int *)0x0) {
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
    local_8 = this;
    (**(code **)(*(int *)this + 0xd8))();
    iVar3 = __chkesp();
    if (param_2 <= iVar3) {
      (**(code **)(*local_8 + 0xdc))();
      iVar3 = __chkesp();
      if (param_3 <= iVar3) {
        (**(code **)(*local_8 + 0xd8))();
        iVar3 = __chkesp();
        if (iVar3 < param_2 + param_6) {
          (**(code **)(*local_8 + 0xd8))();
          iVar3 = __chkesp();
          param_6 = iVar3 - param_2;
        }
        (**(code **)(*local_8 + 0xdc))();
        iVar3 = __chkesp();
        if (iVar3 < param_3 + param_7) {
          (**(code **)(*local_8 + 0xdc))();
          iVar3 = __chkesp();
          param_7 = iVar3 - param_3;
        }
        thunk_FUN_10008360(&local_28.left,param_4,param_5,param_6,param_7);
        (**(code **)(*param_1 + 0xcc))();
        pRVar2 = (RECT *)__chkesp();
        iVar3 = thunk_FUN_10008590(&local_28,&local_28,pRVar2);
        if (iVar3 != 0) {
          iVar3 = local_28.left - param_4;
          iVar4 = local_28.top - param_5;
          (**(code **)(*param_1 + 0x14))(local_28.left,local_28.top);
          local_c = (char *)__chkesp();
          if (local_c != (char *)0x0) {
            (**(code **)(*local_8 + 0x14))(param_2 + iVar3,param_3 + iVar4);
            local_10 = (char *)__chkesp();
            if (local_10 != (char *)0x0) {
              (**(code **)(*param_1 + 0xe0))();
              local_14 = __chkesp();
              (**(code **)(*local_8 + 0xe0))();
              local_18 = __chkesp();
              local_2c = local_28.bottom - local_28.top;
              local_30 = local_28.right - local_28.left;
              iVar3 = (int)local_30 >> 2;
              _DAT_101284bc = local_18 - local_30;
              _DAT_101284b0 = local_14 - local_30;
              uVar5 = local_30 & 3;
              if (uVar5 != 0) {
                if (uVar5 == 1) {
                  UNRECOVERED_JUMPTABLE = (code *)0x10013b0c;
                  iVar3 = iVar3 + 1;
                  pcVar6 = local_10;
                  pcVar8 = local_c;
                  DAT_101284b8 = iVar3;
                  goto LAB_10013b0c;
                }
                if (uVar5 == 2) {
                  UNRECOVERED_JUMPTABLE = (code *)0x10013b06;
                  iVar3 = iVar3 + 1;
                  pcVar6 = local_10;
                  pcVar8 = local_c;
                  DAT_101284b8 = iVar3;
                  goto LAB_10013b06;
                }
                if (uVar5 == 3) {
                  UNRECOVERED_JUMPTABLE = (code *)0x10013b00;
                  iVar3 = iVar3 + 1;
                  pcVar6 = local_10;
                  pcVar8 = local_c;
                  DAT_101284b8 = iVar3;
                  goto LAB_10013b00;
                }
              }
              UNRECOVERED_JUMPTABLE = (code *)0x10013afa;
              pcVar6 = local_10;
              pcVar8 = local_c;
              DAT_101284b8 = iVar3;
LAB_10013afa:
              if (*pcVar8 == param_8) goto LAB_10013ad1;
LAB_10013afe:
              pcVar6 = pcVar6 + 1;
              pcVar8 = pcVar8 + 1;
LAB_10013b00:
              if (*pcVar8 == param_8) goto LAB_10013adb;
LAB_10013b04:
              pcVar6 = pcVar6 + 1;
              pcVar8 = pcVar8 + 1;
LAB_10013b06:
              if (*pcVar8 == param_8) goto LAB_10013ae5;
LAB_10013b0a:
              pcVar6 = pcVar6 + 1;
              pcVar8 = pcVar8 + 1;
LAB_10013b0c:
              cVar1 = *pcVar8;
              do {
                if (cVar1 != param_8) {
                  pcVar6 = pcVar6 + 1;
                  pcVar8 = pcVar8 + 1;
                  iVar3 = iVar3 + -1;
                  if (iVar3 != 0) goto LAB_10013afa;
LAB_10013b15:
                  if (local_2c != 1) {
                    /* WARNING: Could not recover jumptable at 0x10013acb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*UNRECOVERED_JUMPTABLE)(&stack0xffffff84);
                    return;
                  }
                  (**(code **)(*local_8 + 0x24))(1);
                  __chkesp();
                  (**(code **)(*param_1 + 0x24))(1);
                  __chkesp();
                  break;
                }
                *pcVar8 = *pcVar6;
                pcVar6 = pcVar6 + 1;
                pcVar8 = pcVar8 + 1;
                iVar3 = iVar3 + -1;
                if (iVar3 == 0) goto LAB_10013b15;
                if (*pcVar8 != param_8) goto LAB_10013afe;
LAB_10013ad1:
                *pcVar8 = *pcVar6;
                pcVar6 = pcVar6 + 1;
                pcVar8 = pcVar8 + 1;
                if (*pcVar8 != param_8) goto LAB_10013b04;
LAB_10013adb:
                *pcVar8 = *pcVar6;
                pcVar6 = pcVar6 + 1;
                pcVar8 = pcVar8 + 1;
                if (*pcVar8 != param_8) goto LAB_10013b0a;
LAB_10013ae5:
                *pcVar8 = *pcVar6;
                pcVar6 = pcVar6 + 1;
                pcVar8 = pcVar8 + 1;
                cVar1 = *pcVar8;
              } while( true );
            }
          }
        }
      }
    }
  }
  local_8 = (int *)0x10013b67;
  __chkesp();
  return;
}

