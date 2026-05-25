/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10065da0 @ 0x10065DA0 */


void __thiscall
FUN_10065da0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [13];
  undefined4 uStack_14;
  void *local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = this;
  if (param_4 == '\0') {
    (**(code **)(*(int *)this + 0x58))(param_1,param_2,*(undefined4 *)((int)this + 0x134));
    __chkesp();
  }
  else {
    *(undefined4 *)((int)this + 300) = param_1;
    *(undefined4 *)((int)this + 0x130) = param_2;
    *(undefined4 *)((int)this + 0x134) = param_3;
    (**(code **)**(undefined4 **)((int)this + 0x148))
              (*(undefined4 *)((int)this + 300),*(undefined4 *)((int)this + 0x130),
               *(undefined4 *)((int)this + 0x134),1);
    __chkesp();
  }
  uStack_14 = 0x10065e61;
  __chkesp();
  return;
}

