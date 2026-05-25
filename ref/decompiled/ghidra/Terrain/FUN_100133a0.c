/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_100133a0 @ 0x100133A0 */


void __thiscall FUN_100133a0(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (param_1 == 0) {
    *(undefined1 *)((int)this + 0x209) = 0;
  }
  else {
    *(undefined1 *)((int)this + 0x209) = 1;
  }
  return;
}

