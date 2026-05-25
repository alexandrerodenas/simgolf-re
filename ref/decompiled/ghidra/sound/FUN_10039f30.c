/* Ghidra decompiled: sound.dll */
/* Function: FUN_10039f30 @ 0x10039F30 */


int __thiscall FUN_10039f30(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = -1;
  if ((*(uint *)((int)this + 200) & 1) == 0) {
    return 0x21;
  }
  if ((*(uint *)((int)this + 200) & 2) == 0) {
    thunk_FUN_10033ba0((void *)((int)this + 0x70));
    if ((*(byte *)((int)this + 0x58) & 2) == 0) {
      return 0x14;
    }
    iVar1 = (**(code **)(*(int *)this + 0x10))(*(undefined4 *)((int)this + 0x50));
    if (iVar1 != 0) {
      return 8;
    }
  }
  iVar1 = thunk_FUN_10034770((void *)((int)this + 0x70),param_1);
  if (iVar1 == 0) {
    if ((*(byte *)((int)this + 200) & 0x40) != 0) {
      return 0;
    }
    thunk_FUN_1000c2f0(DAT_100b4a20,this,1);
  }
  if ((*(byte *)((int)this + 200) & 0x40) != 0) {
    return 0;
  }
  iVar2 = (**(code **)(*(int *)this + 0xcc))();
  if (((iVar2 == 0) || ((*(uint *)((int)this + 0x58) >> 4 & 1) != 0)) ||
     ((*(uint *)((int)this + 0xcc) >> 6 & 1) != 0)) {
    thunk_FUN_1000c2f0(DAT_100b4a20,this,1);
  }
  return iVar1;
}

