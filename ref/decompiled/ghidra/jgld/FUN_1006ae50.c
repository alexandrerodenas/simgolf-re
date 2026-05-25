/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006ae50 @ 0x1006AE50 */


void __thiscall FUN_1006ae50(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_4c [16];
  int local_c;
  
  puVar2 = local_4c;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  for (local_c = 0; local_c < 0x100; local_c = local_c + 1) {
    *(undefined1 *)(param_1 + 2 + local_c * 4) = *(undefined1 *)((int)this + local_c * 4 + 0xc);
    *(undefined1 *)(param_1 + 1 + local_c * 4) = *(undefined1 *)((int)this + local_c * 4 + 0xd);
    *(undefined1 *)(param_1 + local_c * 4) = *(undefined1 *)((int)this + local_c * 4 + 0xe);
    *(undefined1 *)(param_1 + 3 + local_c * 4) = 0;
  }
  return;
}

