/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_100032f0 @ 0x100032F0 */


void __thiscall FUN_100032f0(void *this,void *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  void *local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = this;
  if (*(int *)((int)this + param_2 * 0x18 + 0x40) < 1) {
    thunk_FUN_10002f80(param_1,0);
  }
  else {
    iVar1 = _rand();
    thunk_FUN_10002f80(param_1,iVar1 % *(int *)((int)local_8 + param_2 * 0x18 + 0x40));
  }
  thunk_FUN_10015380(param_1,param_3);
  thunk_FUN_10014020(param_1,param_2);
  local_8 = (void *)0x1000336a;
  __chkesp();
  return;
}

