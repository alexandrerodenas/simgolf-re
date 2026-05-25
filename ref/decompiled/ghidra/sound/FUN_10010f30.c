/* Ghidra decompiled: sound.dll */
/* Function: FUN_10010f30 @ 0x10010F30 */


undefined4 __thiscall FUN_10010f30(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)((int)this + 0x60) != 0) {
    return 6;
  }
  if (param_1 != 0) {
    if (param_1 != 1) {
      return 10;
    }
    puVar2 = (undefined4 *)((int)this + 0x70);
    for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)((int)this + 0x70) = 0x24;
    *(uint *)this = *(uint *)this & 0xfffffffd | 2;
    *(undefined4 *)((int)this + 0x74) = 1;
    return 0;
  }
  *(int *)((int)this + 0x80) = (int)this + 0xa8;
  *(uint *)this = *(uint *)this & 0xfffffffd;
  *(undefined4 *)((int)this + 0x70) = 0x24;
  *(undefined4 *)((int)this + 0x74) = 0xe8;
  *(undefined4 *)((int)this + 0x78) = 0x10000;
  *(undefined4 *)((int)this + 0x7c) = 0;
  return 0;
}

