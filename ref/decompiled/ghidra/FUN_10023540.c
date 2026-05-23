/* Ghidra decompiled: sound.dll */
/* Function: FUN_10023540 @ 0x10023540 */
/* Body size: 150 addresses */


undefined4 __thiscall FUN_10023540(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if (*(int *)((int)this + 0x224) == 0) {
    return 0x24;
  }
  if (*(int *)((int)this + 0x738) == param_1) {
    return 0;
  }
  iVar1 = *(int *)((int)this + 0x218);
  *(int *)((int)this + 0x220) = iVar1;
  if ((iVar1 != 0) && (puVar3 = *(undefined4 **)(iVar1 + 8), puVar3 != (undefined4 *)0x0)) {
    while (puVar3[1] != param_1) {
      if (*(int *)((int)this + 0x220) == 0) {
        return 0x24;
      }
      iVar1 = *(int *)(*(int *)((int)this + 0x220) + 4);
      *(int *)((int)this + 0x220) = iVar1;
      if (iVar1 == 0) {
        return 0x24;
      }
      puVar3 = *(undefined4 **)(iVar1 + 8);
      if (puVar3 == (undefined4 *)0x0) {
        return 0x24;
      }
    }
    if (puVar3 != (undefined4 *)0x0) {
      if (puVar3[7] != 0) {
        (**(code **)(*(int *)this + 0x84))(puVar3[7]);
      }
      uVar2 = thunk_FUN_10023610(this,puVar3);
      return uVar2;
    }
  }
  return 0x24;
}

