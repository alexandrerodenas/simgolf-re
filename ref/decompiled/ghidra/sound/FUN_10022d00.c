/* Ghidra decompiled: sound.dll */
/* Function: FUN_10022d00 @ 0x10022D00 */
/* Body size: 608 addresses */


undefined4 __thiscall FUN_10022d00(void *this,undefined4 *param_1)

{
  int *this_00;
  undefined4 uVar1;
  undefined4 *puVar2;
  void *this_01;
  undefined4 *puVar3;
  int iVar4;
  void *this_02;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10058d86;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = operator_new(0x38);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    local_10 = (undefined4 *)0x0;
  }
  else {
    local_10 = thunk_FUN_1000b000(puVar2);
  }
  local_4 = 0xffffffff;
  puVar2 = local_10;
  for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  if (*(int *)((int)this + 0x224) == 0) {
    puVar2 = operator_new(0xc);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = local_10;
    }
    if (*(int *)((int)this + 0x21c) == 0) {
      *(undefined4 **)((int)this + 0x218) = puVar2;
    }
    else {
      *(undefined4 **)(*(int *)((int)this + 0x21c) + 4) = puVar2;
      *puVar2 = *(undefined4 *)((int)this + 0x21c);
    }
    *(undefined4 **)((int)this + 0x21c) = puVar2;
    *(int *)((int)this + 0x224) = *(int *)((int)this + 0x224) + 1;
    puVar2 = operator_new(0xc);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = local_10;
    }
    if (*(int *)((int)this + 0x22c) == 0) {
      *(undefined4 **)((int)this + 0x228) = puVar2;
    }
    else {
      *(undefined4 **)(*(int *)((int)this + 0x22c) + 4) = puVar2;
      *puVar2 = *(undefined4 *)((int)this + 0x22c);
    }
    *(undefined4 **)((int)this + 0x22c) = puVar2;
    *(int *)((int)this + 0x234) = *(int *)((int)this + 0x234) + 1;
  }
  else {
    iVar4 = *(int *)((int)this + 0x218);
    this_00 = (int *)((int)this + 0x218);
    *(int *)((int)this + 0x220) = iVar4;
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar4 + 8);
    }
    this_02 = (void *)((int)this + 0x228);
    *(undefined4 *)((int)this + 0x230) = *(undefined4 *)((int)this + 0x228);
    while (iVar4 != 0) {
      if ((uint)local_10[1] <= *(uint *)(iVar4 + 4)) {
        if (iVar4 != 0) {
          if (*(undefined4 **)((int)this + 0x220) != (undefined4 *)0x0) {
            *(undefined4 *)((int)this + 0x220) = **(undefined4 **)((int)this + 0x220);
          }
          if (*(undefined4 **)((int)this + 0x230) != (undefined4 *)0x0) {
            *(undefined4 *)((int)this + 0x230) = **(undefined4 **)((int)this + 0x230);
          }
          if (*this_00 == 0) {
            thunk_FUN_10024de0(this_00,local_10);
            thunk_FUN_10024e60(this_02,(int)local_10);
            ExceptionList = local_c;
            return 0;
          }
          if (*(int *)((int)this + 0x220) == 0) {
            thunk_FUN_10024f90(this_00,local_10);
            thunk_FUN_10024e60(this_02,(int)local_10);
            ExceptionList = local_c;
            return 0;
          }
          puVar2 = *(undefined4 **)(*(int *)((int)this + 0x220) + 4);
          if (puVar2 == (undefined4 *)0x0) {
            thunk_FUN_10024de0(this_00,local_10);
            thunk_FUN_10024e60(this_02,(int)local_10);
            ExceptionList = local_c;
            return 0;
          }
          this_01 = operator_new(0xc);
          local_4 = 1;
          if (this_01 == (void *)0x0) {
            puVar3 = (undefined4 *)0x0;
          }
          else {
            puVar3 = (undefined4 *)thunk_FUN_10025010(this_01,local_10);
          }
          local_4 = 0xffffffff;
          *(undefined4 **)(*(int *)((int)this + 0x220) + 4) = puVar3;
          *puVar2 = puVar3;
          uVar1 = *(undefined4 *)((int)this + 0x220);
          puVar3[1] = puVar2;
          *puVar3 = uVar1;
          *(int *)((int)this + 0x224) = *(int *)((int)this + 0x224) + 1;
          thunk_FUN_10024e60(this_02,(int)local_10);
          ExceptionList = local_c;
          return 0;
        }
        break;
      }
      if (*(int *)((int)this + 0x220) == 0) {
LAB_10022e55:
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)((int)this + 0x220) + 4);
        *(int *)((int)this + 0x220) = iVar4;
        if (iVar4 == 0) goto LAB_10022e55;
        iVar4 = *(int *)(iVar4 + 8);
      }
      if (*(int *)((int)this + 0x230) != 0) {
        *(undefined4 *)((int)this + 0x230) = *(undefined4 *)(*(int *)((int)this + 0x230) + 4);
      }
    }
    thunk_FUN_10024de0(this_00,local_10);
    thunk_FUN_10024de0(this_02,local_10);
  }
  ExceptionList = local_c;
  return 0;
}

