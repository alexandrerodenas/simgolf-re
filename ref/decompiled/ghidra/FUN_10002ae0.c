/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10002ae0 @ 0x10002AE0 */
/* Body size: 1064 addresses */


void __thiscall FUN_10002ae0(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_6c [16];
  undefined1 local_2c [4];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_100410dd;
  local_10 = ExceptionList;
  puVar2 = local_6c;
  for (iVar1 = 0x17; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  ExceptionList = &local_10;
  local_14 = this;
  _eh_vector_constructor_iterator_
            ((void *)((int)this + 0x3a4),0x248,0x9c4,(_func_void_void_ptr *)&LAB_1000114a,
             (_func_void_void_ptr *)&LAB_1000100a);
  local_8 = 0;
  thunk_FUN_1000ae60(local_14 + 0x592b1,local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  DAT_10106b48 = 0;
  local_14[5] = param_1;
  local_14[6] = param_2;
  local_14[7] = 0;
  local_14[1] = 0x3e19999a;
  local_14[2] = 0x3e19999a;
  local_14[3] = 0x3e4ccccd;
  local_14[4] = 0x3f800000;
  *local_14 = 0;
  *(undefined1 *)((int)local_14 + 0x29) = 0;
  for (local_18 = 0; local_18 < (int)local_14[5]; local_18 = local_18 + 1) {
    for (local_1c = 0; local_1c < (int)local_14[6]; local_1c = local_1c + 1) {
      thunk_FUN_1000c2c0(local_14 + (local_18 + local_1c * local_14[5]) * 0x92 + 0xe9,local_18,
                         local_1c);
    }
  }
  *(undefined1 *)(local_14 + 10) = 0;
  DAT_10070a0c = 0;
  for (local_20 = 0; local_20 < 0x25; local_20 = local_20 + 1) {
    local_14[local_20 * 6 + 0x10] = 0;
  }
  for (local_20 = 0; local_20 < 0x25; local_20 = local_20 + 1) {
    for (local_24 = 0; local_24 < 0x19; local_24 = local_24 + 1) {
      for (local_28 = 0; local_28 < 9; local_28 = local_28 + 1) {
        *(undefined4 *)(&DAT_100687f8 + local_28 * 4 + local_24 * 0x24 + local_20 * 900) = 0;
      }
    }
  }
  FUN_10018580(local_14 + 0xb,(uint *)&DAT_1005f160);
  FUN_10018580(local_14 + 0x11,(uint *)"PuttingGreen");
  FUN_10018580(local_14 + 0x17,(uint *)"Fairway");
  FUN_10018580(local_14 + 0x1d,(uint *)"FirmFairway");
  FUN_10018580(local_14 + 0x23,(uint *)"Rough");
  FUN_10018580(local_14 + 0x29,(uint *)"DeepRough");
  FUN_10018580(local_14 + 0x3b,(uint *)"GrassySand");
  FUN_10018580(local_14 + 0x41,(uint *)"PotSandBunker");
  FUN_10018580(local_14 + 0x47,(uint *)"Overgrowth");
  FUN_10018580(local_14 + 0x4d,(uint *)"Brush");
  FUN_10018580(local_14 + 0x53,(uint *)&DAT_1005f0e0);
  FUN_10018580(local_14 + 0x59,(uint *)"Woods");
  FUN_10018580(local_14 + 0x71,(uint *)"WaterShallow");
  FUN_10018580(local_14 + 0x77,(uint *)"Marsh");
  FUN_10018580(local_14 + 0x7d,(uint *)"Overgrowth");
  FUN_10018580(local_14 + 0x8f,(uint *)"Building");
  FUN_10018580(local_14 + 0x9b,(uint *)"WaterDeep");
  FUN_10018580(local_14 + 0x95,(uint *)"WaterMiddle");
  FUN_10018580(local_14 + 0xa1,(uint *)"WaterShallowDesert");
  FUN_10018580(local_14 + 0xa7,(uint *)"TrickyGreen");
  FUN_10018580(local_14 + 0xad,(uint *)"SandBunker1");
  FUN_10018580(local_14 + 0xb3,(uint *)"SandBunker2");
  FUN_10018580(local_14 + 0xb9,(uint *)"SandBunker3");
  FUN_10018580(local_14 + 0xbf,(uint *)0x1005f030);
  thunk_FUN_100076e0((int)local_14);
  ExceptionList = local_10;
  local_8 = 0x10002f02;
  __chkesp();
  return;
}

