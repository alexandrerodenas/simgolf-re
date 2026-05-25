/* Ghidra decompiled: sound.dll */
/* Function: FUN_100097d0 @ 0x100097D0 */


undefined4 __cdecl FUN_100097d0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  void *this;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_100586cb;
  local_c = ExceptionList;
  iVar7 = 0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if ((param_1[0x11] & 4U) == 0) {
    if ((param_1[0x11] & 0x20U) != 0) {
      if (((DAT_100b4a1c != (void *)0x0) && (DAT_100b49ec != 0)) &&
         ((*(byte *)(DAT_100b49ec + 0x3c) & 4) != 0)) {
        piVar6 = param_1 + 0x1d1;
        iVar7 = 0x80;
        ExceptionList = &local_c;
        do {
          if ((*piVar6 != 0) && (iVar2 = *(int *)(*piVar6 + 0x30), iVar2 != 0)) {
            piVar1 = (int *)(iVar2 + 0x210);
            *piVar1 = *piVar1 + -1;
          }
          piVar6 = piVar6 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        thunk_FUN_1000a240(DAT_100b4a1c,param_1,4,0,0);
        ExceptionList = local_c;
        return 0;
      }
      ExceptionList = &local_c;
      (**(code **)*param_1)(1);
      ExceptionList = local_c;
      return 0;
    }
    ExceptionList = &local_c;
    uVar4 = (**(code **)(*param_1 + 0x78))();
    if ((uVar4 & 8) == 0) {
      ExceptionList = local_c;
      return 0;
    }
    if (((DAT_100b4a20 != (void *)0x0) && (DAT_100b49ec != 0)) &&
       ((*(byte *)(DAT_100b49ec + 0x3c) & 4) != 0)) {
      this = operator_new(0x10);
      uStack_4 = 0;
      if (this == (void *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = thunk_FUN_10008810(this,0x11,param_1);
      }
      uStack_4 = 0xffffffff;
      thunk_FUN_1000c3d0(DAT_100b4a20,uVar5);
      ExceptionList = local_c;
      return 0;
    }
    puVar3 = (undefined4 *)param_1[0x3e];
    if (((puVar3 != (undefined4 *)0x0) && ((*(byte *)(puVar3 + 0x32) & 0x40) != 0)) &&
       (DAT_100b4a20 != (void *)0x0)) {
      thunk_FUN_1000e050(DAT_100b4a20,(int)puVar3);
      puVar3[0x32] = puVar3[0x32] | 0x10;
      do {
        thunk_FUN_10037760(puVar3 + 0x1c,iVar7);
        iVar7 = iVar7 + 1;
      } while (iVar7 < 0x10);
      puVar3[0x32] = puVar3[0x32] & 0xffffffbf;
      (**(code **)*puVar3)(1);
    }
  }
  else {
    ExceptionList = &local_c;
    if (((DAT_100b4a20 != (void *)0x0) && (ExceptionList = &local_c, DAT_100b49ec != 0)) &&
       (ExceptionList = &local_c, (*(byte *)(DAT_100b49ec + 0x3c) & 4) != 0)) {
      ExceptionList = &local_c;
      thunk_FUN_1000c2f0(DAT_100b4a20,param_1,4);
      ExceptionList = local_c;
      return 0;
    }
  }
  (**(code **)*param_1)(1);
  ExceptionList = local_c;
  return 0;
}

