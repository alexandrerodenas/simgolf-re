/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006add0 @ 0x1006ADD0 */
/* Body size: 91 addresses */


undefined * __thiscall FUN_1006add0(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  DAT_10128734 = *(undefined1 *)((int)this + param_1 * 4 + 0xc);
  DAT_10128735 = *(undefined1 *)((int)this + param_1 * 4 + 0xd);
  DAT_10128736 = *(undefined1 *)((int)this + param_1 * 4 + 0xe);
  return &DAT_10128734;
}

