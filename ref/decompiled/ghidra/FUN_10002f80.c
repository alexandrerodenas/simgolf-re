/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10002f80 @ 0x10002F80 */
/* Body size: 50 addresses */


void __thiscall FUN_10002f80(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0x240) = param_1;
  return;
}

