/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10002440 @ 0x10002440 */
/* Body size: 217 addresses */


undefined2 * __thiscall FUN_10002440(void *this,int *param_1,int param_2,undefined2 *param_3)

{
  int iVar1;
  undefined2 *puVar2;
  undefined1 local_5c [16];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10052438;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_10007e20(local_5c,0);
  local_3c = *(undefined4 *)((int)this + 0x24);
  local_4 = 0;
  uStack_48 = (**(code **)(*(int *)this + 0x10))();
  uStack_30 = *(undefined4 *)((int)this + 0x40);
  uStack_44 = 0;
  uStack_2c = (**(code **)(*(int *)this + 0xd8))();
  uStack_28 = (**(code **)(*(int *)this + 0xdc))();
  uStack_4c = *(undefined4 *)((int)this + 0x7c);
  uStack_34 = *(undefined4 *)((int)this + 0x4d0);
  iVar1 = (**(code **)(*(int *)this + 0xe8))();
  puVar2 = FUN_10008120(local_5c,param_1,param_2,param_3,iVar1);
  (**(code **)(*(int *)this + 0x24))(1);
  uStack_4c = 0;
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_10007e70((undefined4 *)&stack0xffffffa0);
  ExceptionList = pvStack_10;
  return puVar2;
}

