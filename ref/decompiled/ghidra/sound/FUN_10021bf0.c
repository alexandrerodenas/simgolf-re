/* Ghidra decompiled: sound.dll */
/* Function: FUN_10021bf0 @ 0x10021BF0 */


byte * __thiscall FUN_10021bf0(void *this,byte *param_1,void *param_2)

{
  int *piVar1;
  byte bVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  bVar2 = *param_1;
  uVar4 = thunk_FUN_1001e710(param_1 + 1,(int *)&param_1);
  pvVar3 = param_2;
  if (bVar2 - 0x2f < 0x2b) {
    switch(bVar2) {
    case 0x2f:
      if ((*(byte *)((int)param_2 + 0x38) & 0x10) == 0) {
        *(uint *)((int)param_2 + 0x34) = *(uint *)((int)param_2 + 0x34) | 2;
        if (*(int *)((int)param_2 + 0x458) != 0) {
          piVar1 = (int *)(*(int *)((int)param_2 + 0x458) + 0x34);
          *piVar1 = *piVar1 + -1;
        }
        if ((*(byte *)((int)param_2 + 0x38) & 2) != 0) {
          if ((*(byte *)((int)param_2 + 0x38) & 4) != 0) {
            thunk_FUN_100247c0(this);
          }
          thunk_FUN_1001e8e0((int)pvVar3);
        }
      }
      else {
        thunk_FUN_1001e8e0((int)param_2);
        thunk_FUN_10020720(pvVar3);
        *(undefined4 *)((int)pvVar3 + 0x50) = *(undefined4 *)((int)this + 0x71c);
        iVar5 = (**(code **)(*(int *)this + 0x9c))(*(undefined4 *)((int)this + 0x738));
        if ((iVar5 != 0) && (*(int *)(iVar5 + 0x14) != 0)) {
          *(int *)(iVar5 + 0x24) = *(int *)(iVar5 + 0x24) + 1;
          uVar6 = thunk_FUN_1000b030(iVar5);
          if (uVar6 <= *(uint *)(iVar5 + 0x24)) {
            uVar6 = *(int *)(iVar5 + 0x28) + 1;
            *(undefined4 *)(iVar5 + 0x24) = 0;
            *(uint *)(iVar5 + 0x28) = uVar6;
            if (*(uint *)(iVar5 + 0x14) <= uVar6) {
              *(undefined4 *)(iVar5 + 0x28) = 0;
              *(undefined4 *)((int)this + 0x738) = *(undefined4 *)(iVar5 + 0x18);
              if (*(int *)((int)this + 0x224) != 0) {
                iVar5 = *(int *)((int)this + 0x218);
                *(int *)((int)this + 0x220) = iVar5;
                if ((iVar5 != 0) && (iVar5 = *(int *)(iVar5 + 8), iVar5 != 0)) {
                  while (*(int *)(iVar5 + 4) != *(int *)((int)this + 0x738)) {
                    if (*(int *)((int)this + 0x220) == 0) goto switchD_10021c34_caseD_30;
                    iVar5 = *(int *)(*(int *)((int)this + 0x220) + 4);
                    *(int *)((int)this + 0x220) = iVar5;
                    if ((iVar5 == 0) || (iVar5 = *(int *)(iVar5 + 8), iVar5 == 0))
                    goto switchD_10021c34_caseD_30;
                  }
                  if (iVar5 != 0) {
                    if (*(int *)(iVar5 + 0x1c) != 0) {
                      (**(code **)(*(int *)this + 0x84))(*(int *)(iVar5 + 0x1c));
                    }
                    (**(code **)(*(int *)this + 0x94))
                              (*(undefined4 *)(iVar5 + 8),*(undefined4 *)(iVar5 + 0xc));
                  }
                }
              }
            }
          }
        }
      }
      break;
    case 0x51:
      iVar5 = 2;
      do {
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
      iVar5 = *(int *)this;
      lVar7 = __ftol();
      (**(code **)(iVar5 + 0x84))((int)lVar7);
      break;
    case 0x59:
      uVar6 = thunk_FUN_1001e6e0((uint)*(byte *)(bVar2 + 0x10021dcd));
      *(uint *)((int)this + 0x73c) = uVar6 & 0xffff;
    }
  }
switchD_10021c34_caseD_30:
  return param_1 + uVar4 + 1;
}

