/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10001ed0 @ 0x10001ED0 */


undefined4 __thiscall FUN_10001ed0(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return CONCAT31((int3)((uint)((int)this + param_1) >> 8),
                  *(undefined1 *)((int)this + param_1 + 0x234));
}

