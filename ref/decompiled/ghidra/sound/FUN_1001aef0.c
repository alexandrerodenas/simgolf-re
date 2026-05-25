/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001aef0 @ 0x1001AEF0 */


int __thiscall FUN_1001aef0(void *this,int param_1)

{
  void *this_00;
  int iVar1;
  void *pvVar2;
  int *piVar3;
  void *pvVar4;
  void *unaff_EBX;
  int *piVar5;
  int unaff_EBP;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  void *unaff_retaddr;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10058a26;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this_00 = operator_new(0x1450);
  piVar5 = (int *)0x0;
  local_4 = 0;
  if (this_00 != (void *)0x0) {
    piVar5 = thunk_FUN_10039790(this_00,DAT_100b49c0);
  }
  piVar5[0x509] = piVar5[0x509] | 1;
  local_4 = 0xffffffff;
  iVar1 = (**(code **)(*piVar5 + 0x10))(param_1 + 0xc);
  if (iVar1 == 0) {
    (**(code **)(*piVar5 + 4))(*(undefined4 *)((int)this + 0x218));
    uVar6 = 1;
    pvVar2 = this;
    if (1 < *(uint *)(param_1 + 8)) {
      piVar7 = piVar5 + 0x510;
      do {
        pvVar2 = operator_new(0x1450);
        puStack_8 = (undefined1 *)0x1;
        if (pvVar2 == (void *)0x0) {
          piVar3 = (int *)0x0;
        }
        else {
          piVar3 = thunk_FUN_10039790(pvVar2,DAT_100b49c0);
        }
        *piVar7 = (int)piVar3;
        puStack_8 = (undefined1 *)0xffffffff;
        (**(code **)(*piVar3 + 0x10))(param_1 + 0xc);
        (**(code **)(*(int *)*piVar7 + 4))(*(undefined4 *)(unaff_EBP + 0x218));
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 1;
        pvVar2 = unaff_EBX;
      } while (uVar6 < *(uint *)(param_1 + 8));
    }
    piVar5[0x50e] = *(int *)(param_1 + 8);
    pvVar4 = unaff_retaddr;
    if (unaff_retaddr <= this) {
      do {
        puVar8 = *(undefined4 **)((int)pvVar2 + (int)pvVar4 * 4 + 4);
        if (puVar8 != (undefined4 *)0x0) {
          pvVar4 = (void *)thunk_FUN_1001b0d0(pvVar2,puVar8);
        }
        pvVar4 = (void *)((int)pvVar4 + 1);
      } while (pvVar4 <= this);
      if (unaff_retaddr <= this) {
        puVar8 = (undefined4 *)((int)pvVar2 + (int)unaff_retaddr * 4 + 4);
        for (iVar1 = (int)this + (1 - (int)unaff_retaddr); iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar8 = piVar5;
          puVar8 = puVar8 + 1;
        }
      }
    }
    iVar1 = 0;
  }
  else if (piVar5 != (int *)0x0) {
    (**(code **)*piVar5)(1);
  }
  ExceptionList = this_00;
  return iVar1;
}

