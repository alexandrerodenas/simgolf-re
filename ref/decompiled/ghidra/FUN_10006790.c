/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10006790 @ 0x10006790 */
/* Body size: 133 addresses */


int __thiscall FUN_10006790(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_50 [16];
  uint local_10;
  uint local_c;
  
  puVar2 = local_50;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  for (local_c = 0; local_c < 0x10; local_c = local_c + 1) {
    *(undefined4 *)((int)this + local_c * 4 + 4) = *(undefined4 *)(param_1 + 4 + local_c * 4);
  }
  for (local_10 = 0; local_10 < 0x10; local_10 = local_10 + 1) {
    *(undefined4 *)((int)this + local_10 * 4 + 4) = *(undefined4 *)(param_1 + 4 + local_10 * 4);
  }
  return (int)this;
}

