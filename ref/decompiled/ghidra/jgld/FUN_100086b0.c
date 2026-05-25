/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100086b0 @ 0x100086B0 */


void __thiscall FUN_100086b0(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *(int *)((int)this + 0x4c4) = *(int *)((int)this + 0x4c4) - param_1;
  if (*(int *)((int)this + 0x4c4) < 1) {
    *(undefined4 *)((int)this + 0x4b8) = 0;
    *(undefined4 *)((int)this + 0x4c4) = 0;
  }
  return;
}

