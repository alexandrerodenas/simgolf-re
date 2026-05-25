/* Ghidra decompiled: golf.exe */
/* Function: FUN_00483190 @ 0x00483190 */


undefined4 __thiscall
FUN_00483190(int param_1,int param_2,byte param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  local_c = *unaff_FS_OFFSET;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b7dab;
  *unaff_FS_OFFSET = &local_c;
  if (param_3 < 10) {
    uVar2 = 3;
  }
  else if ((int)(0xf6 - (uint)param_3) < param_4) {
    uVar2 = 3;
  }
  else if (param_2 == -1) {
    uVar2 = 3;
  }
  else {
    iVar3 = FUN_004833f0(param_2);
    iVar1 = iVar3 * 0x10 + param_1;
    if (*(int *)(iVar3 * 0x10 + 8 + param_1) == param_2) {
      if (*(undefined4 **)(iVar1 + 0xc) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(iVar1 + 0xc))(1);
        *(undefined4 *)(iVar1 + 0xc) = 0;
      }
      if (*(int *)(iVar1 + 0x14) != 0) {
        FUN_004a5007(*(int *)(iVar1 + 0x14));
        *(undefined4 *)(iVar1 + 0x14) = 0;
      }
    }
    *(int *)(iVar1 + 8) = param_2;
    *(char *)(iVar1 + 0x11) = (char)param_4;
    *(byte *)((iVar3 + 1) * 0x10 + param_1) = param_3;
    pvVar4 = _malloc(param_4 * 4);
    *(void **)(iVar1 + 0x14) = pvVar4;
    if (pvVar4 == (void *)0x0) {
      uVar2 = 4;
    }
    else {
      pvVar4 = operator_new(0x30);
      uStack_4 = 0;
      if (pvVar4 == (void *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_00486c90();
      }
      uStack_4 = 0xffffffff;
      *(int *)(iVar1 + 0xc) = iVar3;
      if (iVar3 == 0) {
        uVar2 = 4;
      }
      else {
        FUN_00486d20(FUN_004a0890,param_2,param_1,param_5,5);
        uVar2 = 0;
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return uVar2;
}

