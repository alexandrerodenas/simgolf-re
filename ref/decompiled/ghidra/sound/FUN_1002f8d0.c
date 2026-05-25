/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002f8d0 @ 0x1002F8D0 */


int __thiscall FUN_1002f8d0(void *this,uint param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *unaff_EDI;
  int unaff_retaddr;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1005905b;
  local_c = ExceptionList;
  piVar5 = (int *)0x0;
  if (*(int *)((int)this + 0xfc) != 0) {
    return 0xf;
  }
  if (0x27 < param_1) {
    return 10;
  }
  if (*(int *)((int)this + param_1 * 4 + 0x58) == 0) {
    return 0x24;
  }
  uVar4 = 0x102;
  if (*(int *)((int)this + 0xf8) != 0) {
    uVar4 = 0x302;
  }
  ExceptionList = &local_c;
  puVar2 = operator_new(0x1450);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar5 = thunk_FUN_10039690(puVar2);
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar5 + 0x6c))(uVar4);
  iVar3 = (**(code **)(*piVar5 + 0x10))(*(undefined4 *)((int)this + unaff_retaddr * 4 + 0x58));
  if (iVar3 == 0) {
    if ((*(byte *)(piVar5 + 0x33) & 4) != 0) {
      thunk_FUN_10032660();
    }
    iVar1 = *(int *)((int)this + 0xf8);
    *unaff_EDI = piVar5;
    if (iVar1 != 0) {
      thunk_FUN_10037720((void *)(iVar1 + 0x70),unaff_EDI,(int *)((int)this + 0xf8));
    }
  }
  else if (piVar5 != (int *)0x0) {
    (**(code **)*piVar5)(1);
  }
  ExceptionList = (void *)((int)this + 0xfc);
  return iVar3;
}

