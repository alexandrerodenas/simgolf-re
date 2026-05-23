/* Ghidra decompiled: sound.dll */
/* Function: FUN_100116a0 @ 0x100116A0 */
/* Body size: 88 addresses */


undefined4 __thiscall FUN_100116a0(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(uint *)((int)this + 0x148);
  if (uVar1 == 0) {
    return 3;
  }
  if (param_1 < uVar1) {
    if (*(int *)((int)this + 8) != 0) {
      return 6;
    }
    iVar2 = *(int *)((int)this + 4);
    uVar3 = 0;
    if (uVar1 != 0) {
      do {
        *(int *)((int)this + 8) = iVar2;
        if (uVar3 == param_1) {
          return 0;
        }
        iVar2 = *(int *)(iVar2 + 0x10);
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
    }
    return 0;
  }
  return 10;
}

