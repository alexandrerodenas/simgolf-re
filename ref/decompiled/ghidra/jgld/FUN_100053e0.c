/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100053e0 @ 0x100053E0 */
/* Body size: 86 addresses */


int __thiscall FUN_100053e0(void *this,float param_1,float param_2,float param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *(float *)((int)this + 0x34) = param_1 + *(float *)((int)this + 0x34);
  *(float *)((int)this + 0x38) = param_2 + *(float *)((int)this + 0x38);
  *(float *)((int)this + 0x3c) = param_3 + *(float *)((int)this + 0x3c);
  return (int)this;
}

