/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000aaf0 @ 0x1000AAF0 */


undefined4 __thiscall FUN_1000aaf0(void *this,uint *param_1,uint *param_2)

{
  void *this_00;
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *local_4;
  
  uVar7 = *param_2;
  uVar8 = *param_1;
  if (*param_1 != uVar7) {
    do {
      uVar6 = uVar8 + 1 & 0xfff;
      if (uVar6 == uVar7) {
        return 0;
      }
      this_00 = (void *)((int)this + 0x50);
      iVar1 = thunk_FUN_100088c0(this_00,uVar8);
      for (uVar7 = uVar6; (iVar1 != 0 && (uVar7 != *param_2)); uVar7 = uVar7 + 1 & 0xfff) {
        iVar1 = thunk_FUN_100088c0(this_00,uVar7);
        if (iVar1 != 0) {
          iVar1 = thunk_FUN_100088c0(this_00,uVar7);
          iVar2 = thunk_FUN_100088c0(this_00,uVar8);
          if (*(int *)(iVar2 + 4) == *(int *)(iVar1 + 4)) {
            piVar3 = (int *)thunk_FUN_100088c0(this_00,uVar7);
            piVar4 = (int *)thunk_FUN_100088c0(this_00,uVar8);
            if (*piVar4 == *piVar3) {
              iVar1 = thunk_FUN_100088c0(this_00,uVar7);
              iVar2 = thunk_FUN_100088c0(this_00,uVar8);
              if (*(int *)(iVar2 + 8) == *(int *)(iVar1 + 8)) {
                iVar1 = thunk_FUN_100088c0(this_00,uVar7);
                iVar2 = thunk_FUN_100088c0(this_00,uVar8);
                if (*(int *)(iVar2 + 0xc) == *(int *)(iVar1 + 0xc)) {
                  puVar5 = (undefined4 *)thunk_FUN_100088c0(this_00,uVar7);
                  if (puVar5 != (undefined4 *)0x0) {
                    thunk_FUN_10008840(puVar5);
                    FUN_1004249a((undefined *)puVar5);
                  }
                  *(undefined4 *)((int)this + uVar7 * 4 + 0x50) = 0;
                  goto LAB_1000ad74;
                }
              }
            }
            piVar3 = (int *)thunk_FUN_100088c0(this_00,uVar8);
            if ((*piVar3 == 1) && (piVar3 = (int *)thunk_FUN_100088c0(this_00,uVar7), *piVar3 == 2))
            {
              iVar1 = thunk_FUN_100088c0(this_00,uVar8);
              if ((*(int *)(iVar1 + 4) == 0) ||
                 ((*(byte *)(*(int *)(iVar1 + 4) + 0xac) & 0x20) == 0)) {
                puVar5 = (undefined4 *)thunk_FUN_100088c0(this_00,uVar8);
                if (puVar5 != (undefined4 *)0x0) {
                  thunk_FUN_10008840(puVar5);
                  FUN_1004249a((undefined *)puVar5);
                }
                *(undefined4 *)((int)this + uVar8 * 4 + 0x50) = 0;
                local_4 = (undefined4 *)thunk_FUN_100088c0(this_00,uVar7);
                if (local_4 != (undefined4 *)0x0) {
                  thunk_FUN_10008840(local_4);
LAB_1000ad5e:
                  FUN_1004249a((undefined *)local_4);
                }
LAB_1000ad66:
                *(undefined4 *)((int)this + uVar7 * 4 + 0x50) = 0;
              }
              else {
                puVar5 = (undefined4 *)thunk_FUN_100088c0(this_00,uVar8);
                if (puVar5 != (undefined4 *)0x0) {
                  thunk_FUN_10008840(puVar5);
                  FUN_1004249a((undefined *)puVar5);
                }
LAB_1000ac4e:
                *(undefined4 *)((int)this + uVar8 * 4 + 0x50) = 0;
              }
            }
            else {
              piVar3 = (int *)thunk_FUN_100088c0(this_00,uVar8);
              if ((*piVar3 == 2) &&
                 (piVar3 = (int *)thunk_FUN_100088c0(this_00,uVar7), *piVar3 == 1)) {
                iVar1 = thunk_FUN_100088c0(this_00,uVar8);
                if ((*(int *)(iVar1 + 4) == 0) ||
                   ((*(byte *)(*(int *)(iVar1 + 4) + 0xac) & 0x20) != 0)) {
                  puVar5 = (undefined4 *)thunk_FUN_100088c0(this_00,uVar8);
                  if (puVar5 != (undefined4 *)0x0) {
                    thunk_FUN_10008840(puVar5);
                    FUN_1004249a((undefined *)puVar5);
                  }
                  *(undefined4 *)((int)this + uVar8 * 4 + 0x50) = 0;
                  local_4 = (undefined4 *)thunk_FUN_100088c0(this_00,uVar7);
                  if (local_4 != (undefined4 *)0x0) {
                    thunk_FUN_10008840(local_4);
                    goto LAB_1000ad5e;
                  }
                  goto LAB_1000ad66;
                }
                puVar5 = (undefined4 *)thunk_FUN_100088c0(this_00,uVar8);
                if (puVar5 == (undefined4 *)0x0) goto LAB_1000ac4e;
                thunk_FUN_10008840(puVar5);
                FUN_1004249a((undefined *)puVar5);
                *(undefined4 *)((int)this + uVar8 * 4 + 0x50) = 0;
              }
            }
          }
        }
LAB_1000ad74:
        iVar1 = thunk_FUN_100088c0(this_00,uVar8);
      }
      uVar7 = *param_2;
      uVar8 = uVar6;
    } while (uVar6 != uVar7);
  }
  return 0;
}

