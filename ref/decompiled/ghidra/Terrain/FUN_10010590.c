/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10010590 @ 0x10010590 */


void __thiscall FUN_10010590(void *this,int param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  int *local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = this;
  thunk_FUN_100018b0((int)this + *(int *)(*(int *)this + 4));
  local_8[1] = local_8[1] + 1;
  FUN_100348a0(local_8,param_1,param_2,param_3 & 0xff);
  thunk_FUN_10037930((int)local_8 + *(int *)(*local_8 + 4));
  local_8 = (int *)0x1001060d;
  __chkesp();
  return;
}

