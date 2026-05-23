/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002bc60 @ 0x1002BC60 */
/* Body size: 210 addresses */


int __thiscall FUN_1002bc60(void *this,uint *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  puVar1 = (undefined4 *)((int)this + 0x40);
  if ((*(int *)((int)this + 0x40) != 0) || (iVar3 = create_sound(puVar1,param_1,1), iVar3 == 0)) {
    uVar5 = (uint)((*(byte *)((int)this + 0x58) & 1) != 0);
    iVar3 = (**(code **)(*(int *)this + 0x58))();
    if (iVar3 != 0) {
      uVar5 = uVar5 | 2;
    }
    uVar2 = *(uint *)((int)this + 0x58);
    if ((uVar2 & 8) != 0) {
      uVar5 = uVar5 | 0x40;
    }
    if ((uVar2 & 0x10) != 0) {
      uVar5 = uVar5 | 0x80;
    }
    if ((uVar2 & 0x40) != 0) {
      uVar5 = uVar5 | 0x400;
    }
    if ((uVar2 & 2) != 0) {
      uVar5 = uVar5 | 4;
    }
    (**(code **)(*(int *)*puVar1 + 0x6c))(uVar5);
    if ((*(byte *)((int)this + 0x58) & 2) == 0) {
      iVar3 = thunk_FUN_1002add0(this,param_1);
      if (iVar3 != 0) {
        delete_sound((int *)*puVar1);
        *puVar1 = 0;
        return iVar3;
      }
      uVar4 = (**(code **)(*(int *)*puVar1 + 200))();
      *(undefined4 *)((int)this + 100) = uVar4;
      (**(code **)(*(int *)*puVar1 + 0x40))(*(undefined4 *)((int)this + 4));
      (**(code **)(*(int *)*puVar1 + 0x9c))(*(undefined4 *)((int)this + 0x5c));
      (**(code **)(*(int *)*puVar1 + 0x44))(*(undefined4 *)((int)this + 8));
    }
    iVar3 = 0;
  }
  return iVar3;
}

