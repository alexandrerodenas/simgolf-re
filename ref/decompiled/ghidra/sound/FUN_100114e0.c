/* Ghidra decompiled: sound.dll */
/* Function: FUN_100114e0 @ 0x100114E0 */


undefined4 __thiscall FUN_100114e0(void *this,byte param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (((*(int *)this != 0) || (*(int *)((int)this + 4) != 0)) || (*(int *)((int)this + 8) != 0)) {
    return 0xc;
  }
  if (param_2 == 0) {
    return 10;
  }
  *(int *)((int)this + 0x164) = param_2;
  if ((param_1 & 0x20) != 0) {
    bVar1 = *(byte *)((int)this + 0x6c);
    *(byte *)((int)this + 0x6c) = bVar1 | 8;
    if ((param_1 & 0x40) != 0) {
      *(byte *)((int)this + 0x6c) = bVar1 | 0x18;
    }
  }
  iVar4 = Ordinal_2(&LAB_100017a3,this);
  uVar3 = DAT_100b4a40;
  if (iVar4 != 0) {
    thunk_FUN_1000f480(iVar4);
    return 10;
  }
  uVar2 = *(uint *)((int)this + 0x148);
  if (uVar2 == 0) {
    return 3;
  }
  if (uVar2 <= DAT_100b4a40) {
    return 10;
  }
  if (*(int *)((int)this + 8) != 0) {
    return 6;
  }
  iVar4 = *(int *)((int)this + 4);
  uVar5 = 0;
  if (uVar2 != 0) {
    do {
      *(int *)((int)this + 8) = iVar4;
      if (uVar5 == uVar3) break;
      iVar4 = *(int *)(iVar4 + 0x10);
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  *(byte *)((int)this + 0x6c) = *(byte *)((int)this + 0x6c) | 1;
  return 0;
}

