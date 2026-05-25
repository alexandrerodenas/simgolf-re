/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100049e0 @ 0x100049E0 */


void * __thiscall FUN_100049e0(void *this,float param_1)

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
  for (local_c = 0; local_c < 0xf; local_c = local_c + 5) {
    *(float *)((int)this + local_c * 4 + 4) = param_1 * *(float *)((int)this + local_c * 4 + 4);
  }
  return this;
}

