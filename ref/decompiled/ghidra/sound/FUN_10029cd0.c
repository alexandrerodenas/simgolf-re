/* Ghidra decompiled: sound.dll */
/* Function: FUN_10029cd0 @ 0x10029CD0 */


undefined4 __thiscall
FUN_10029cd0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int **)((int)this + 0x14) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)((int)this + 0x14) + 0x90))(param_1,param_2,param_3);
    return uVar1;
  }
  return 0x14;
}

