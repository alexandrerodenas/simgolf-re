/* Ghidra decompiled: sound.dll */
/* Function: FUN_10023e10 @ 0x10023E10 */


undefined4 __thiscall FUN_10023e10(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = param_1;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0x28);
    uVar3 = (**(code **)(*(int *)this + 0xb4))();
    if (uVar1 < uVar3) {
      thunk_FUN_1001d780((void *)((int)this + 0x60),&param_1,uVar1);
      *(byte *)(param_1 + 0x38) =
           (*(byte *)(iVar2 + 0x2c) & 2) << 3 | *(byte *)(param_1 + 0x38) & 0xef;
      *(undefined4 *)(param_1 + 0x460) = *(undefined4 *)(iVar2 + 0x30);
      return 0;
    }
  }
  return 10;
}

