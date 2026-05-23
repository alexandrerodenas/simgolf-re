/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1000c520 @ 0x1000C520 */
/* Body size: 51 addresses */


void __thiscall FUN_1000c520(void *this,int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + param_1 * 4 + 0x34) = param_2;
  return;
}

