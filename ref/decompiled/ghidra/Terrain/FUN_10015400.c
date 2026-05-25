/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10015400 @ 0x10015400 */


void __thiscall FUN_10015400(void *this,int param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)((int)this + param_1 + 0x234) = param_3;
  *(undefined4 *)((int)this + param_1 * 4 + 0x210) = param_2;
  return;
}

