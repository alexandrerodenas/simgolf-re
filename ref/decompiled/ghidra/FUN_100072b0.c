/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100072b0 @ 0x100072B0 */
/* Body size: 151 addresses */


undefined4 __thiscall FUN_100072b0(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_50 [17];
  int local_c;
  
  puVar2 = local_50;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (*(int *)((int)this + 0x10) != 0) {
    local_c = *(int *)((int)this + 0x10);
    do {
      if (*(int *)(local_c + 0xc) == param_1) {
        *(int *)((int)this + 0x14) = local_c;
        *(undefined4 *)((int)this + 4) = *(undefined4 *)(*(int *)((int)this + 0x14) + 0xc);
        *(undefined1 *)((int)this + 8) = *(undefined1 *)(*(int *)((int)this + 0x14) + 0x10);
        return 1;
      }
      local_c = *(int *)(local_c + 4);
    } while (local_c != *(int *)((int)this + 0x10));
  }
  return 0;
}

