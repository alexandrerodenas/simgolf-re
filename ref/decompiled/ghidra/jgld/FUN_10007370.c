/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10007370 @ 0x10007370 */


void * __thiscall FUN_10007370(void *this,undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *(undefined ***)this = &PTR_LAB_1011d098;
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined1 *)((int)this + 0x10) = param_2;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  return this;
}

