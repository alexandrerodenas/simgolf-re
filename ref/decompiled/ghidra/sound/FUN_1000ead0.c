/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000ead0 @ 0x1000EAD0 */


int __thiscall FUN_1000ead0(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100588fb;
  local_c = ExceptionList;
  if (*(int *)((int)this + 0x28) == 0) {
    if (DAT_100b4a04 == (undefined4 *)0x0) {
      ExceptionList = &local_c;
      puVar1 = operator_new(0x70);
      local_4 = 0;
      if (puVar1 == (undefined4 *)0x0) {
        DAT_100b4a04 = (undefined4 *)0x0;
      }
      else {
        DAT_100b4a04 = thunk_FUN_10038650(puVar1);
      }
      local_4 = 0xffffffff;
      iVar2 = thunk_FUN_10038890(DAT_100b4a04,10,0x168);
      if (iVar2 != 0) {
        if (DAT_100b4a04 != (undefined4 *)0x0) {
          (**(code **)*DAT_100b4a04)(1);
        }
        DAT_100b4a04 = (undefined4 *)0x0;
        ExceptionList = local_c;
        return iVar2;
      }
      *(undefined4 *)((int)this + 0x48) = param_1;
    }
    *(undefined4 *)((int)this + 0x28) = 1;
  }
  ExceptionList = local_c;
  return 0;
}

