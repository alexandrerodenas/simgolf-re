/* Ghidra decompiled: sound.dll */
/* Function: FUN_100394f0 @ 0x100394F0 */


undefined4 __thiscall FUN_100394f0(void *this,uint param_1)

{
  void *pvVar1;
  
  if (*(int *)this != 0) {
    return 0x10;
  }
  if (param_1 == 0) {
    return 10;
  }
  pvVar1 = operator_new(param_1);
  *(uint *)((int)this + 4) = param_1;
  *(void **)this = pvVar1;
  return 0;
}

