/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002f060 @ 0x1002F060 */


int __thiscall FUN_1002f060(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((int)this + 0x40);
  if ((*(int *)((int)this + 0x40) == 0) && (iVar2 = create_sound(piVar1,(uint *)0x0,6), iVar2 != 0))
  {
    return iVar2;
  }
  iVar2 = 0;
  if ((int *)*piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*(int *)*piVar1 + 0x84))(param_1,param_2,param_3);
    if (iVar2 != 0) {
      delete_sound((int *)*piVar1);
      *piVar1 = 0;
    }
    (**(code **)(*(int *)this + 0x7c))();
  }
  return iVar2;
}

