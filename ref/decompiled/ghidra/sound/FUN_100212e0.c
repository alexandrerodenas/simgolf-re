/* Ghidra decompiled: sound.dll */
/* Function: FUN_100212e0 @ 0x100212E0 */


undefined4 __thiscall FUN_100212e0(void *this,int param_1)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*(int *)this + 0x5c))();
  if (iVar2 != 0) {
    return 0x28;
  }
  puVar1 = *(undefined **)((int)this + param_1 * 4 + 0x744);
  if (puVar1 != (undefined *)0x0) {
    thunk_FUN_10024260((int)puVar1);
    FUN_1004249a(puVar1);
  }
  *(undefined4 *)((int)this + param_1 * 4 + 0x744) = 0;
  return 0;
}

