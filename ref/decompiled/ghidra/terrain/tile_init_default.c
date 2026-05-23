/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1000c2c0 @ 0x1000C2C0 */
/* Body size: 211 addresses */


void __thiscall FUN_1000c2c0(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_50 [16];
  int local_10;
  undefined1 local_c;
  void *local_8;
  
  puVar2 = local_50;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0x2c) = param_1;
  *(undefined4 *)((int)this + 0x30) = param_2;
  local_c = 0;
  *(undefined4 *)((int)this + 0x240) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    *(undefined4 *)((int)this + local_10 * 4 + 0x34) = 0;
  }
  *(undefined4 *)((int)this + 0x24) = 4;
  *(undefined4 *)((int)this + 0x28) = 0;
  local_8 = this;
  thunk_FUN_1000f6e0((undefined1 *)((int)this + 0x208));
  thunk_FUN_1000f7a0((int)local_8 + 0x210);
  local_8 = (void *)0x1000c38d;
  __chkesp();
  return;
}

