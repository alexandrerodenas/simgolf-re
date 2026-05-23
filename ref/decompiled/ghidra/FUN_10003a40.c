/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10003a40 @ 0x10003A40 */
/* Body size: 88 addresses */


int __thiscall FUN_10003a40(void *this,float param_1)

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
  for (local_c = 0; local_c < 3; local_c = local_c + 1) {
    *(float *)((int)this + local_c * 4) = param_1 * *(float *)((int)this + local_c * 4);
  }
  return (int)this;
}

