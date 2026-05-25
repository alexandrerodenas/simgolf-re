/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10001e40 @ 0x10001E40 */


undefined4 __thiscall FUN_10001e40(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return *(undefined4 *)((int)this + param_1 * 4);
}

