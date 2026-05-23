/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002bbe0 @ 0x1002BBE0 */
/* Body size: 90 addresses */


int __thiscall FUN_1002bbe0(void *this,uint *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)((int)this + 0x40) != 0) {
    return 0xc;
  }
  iVar1 = create_sound((undefined4 *)((int)this + 0x40),param_1,1);
  if (iVar1 == 0) {
    iVar1 = **(int **)((int)this + 0x40);
    uVar2 = (**(code **)(*(int *)this + 0x70))();
    (**(code **)(iVar1 + 0x6c))(uVar2);
    (**(code **)(*(int *)this + 0x7c))();
    return 0;
  }
  return iVar1;
}

