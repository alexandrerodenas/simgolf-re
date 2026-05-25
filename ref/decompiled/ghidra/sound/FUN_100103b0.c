/* Ghidra decompiled: sound.dll */
/* Function: FUN_100103b0 @ 0x100103B0 */


undefined4 __thiscall FUN_100103b0(void *this,undefined4 param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint unaff_ESI;
  uint uVar5;
  undefined4 unaff_EDI;
  int iVar6;
  undefined4 unaff_retaddr;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  piVar7 = *(int **)((int)this + 0x60);
  local_c = 0;
  local_8 = 0;
  if (piVar7 == (int *)0x0) {
    return 0x14;
  }
  puVar9 = &local_c;
  puVar8 = &local_8;
  (**(code **)(*piVar7 + 0x10))(piVar7,puVar8,puVar9);
  if (unaff_ESI == *(uint *)((int)this + 0x24)) {
    return 0x15;
  }
  uVar1 = *(uint *)((int)this + 0x78);
  uVar4 = *(int *)((int)this + 0x38) + unaff_ESI;
  if (uVar4 < uVar1) {
    uVar5 = *(uint *)((int)this + 0x30);
    if ((unaff_ESI < uVar5) && (uVar5 < uVar4)) {
      if (uVar4 < uVar5) {
        iVar6 = (uVar1 - uVar5) + uVar4;
        goto LAB_10010451;
      }
    }
    else {
      uVar5 = *(int *)((int)this + 0x40) + unaff_ESI;
    }
  }
  else {
    uVar5 = *(uint *)((int)this + 0x30);
    uVar4 = uVar4 - uVar1;
    if (uVar5 <= unaff_ESI) {
      if (uVar5 < uVar4) goto LAB_1001044d;
      uVar5 = *(int *)((int)this + 0x40) + unaff_ESI;
      if (uVar1 <= uVar5) {
        uVar5 = uVar5 - uVar1;
      }
    }
    if (uVar4 < uVar5) {
      iVar6 = (uVar1 - uVar5) + uVar4;
      goto LAB_10010451;
    }
  }
LAB_1001044d:
  iVar6 = uVar4 - uVar5;
LAB_10010451:
  iVar3 = (**(code **)(**(int **)((int)this + 0x60) + 0x2c))
                    (*(int **)((int)this + 0x60),uVar5,iVar6,local_8,uStack_4,unaff_retaddr,param_1,
                     0);
  if (iVar3 != 0) {
    switch(iVar3) {
    case -0x7787ff6a:
      piVar2 = *(int **)((int)this + 0x60);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x50))(piVar2);
      }
      iVar6 = (**(code **)(**(int **)((int)this + 0x60) + 0x2c))
                        (*(int **)((int)this + 0x60),uVar5,iVar6,piVar7,puVar8,puVar9,unaff_EDI,0);
      if (iVar6 != 0) {
        switch(iVar6) {
        case -0x7787ff6a:
          return 0x1e;
        }
      }
    }
    return 0x19;
  }
  *(uint *)((int)this + 0x30) = uVar4;
  *(undefined4 *)((int)this + 0x24) = uStack_4;
  return 0;
}

