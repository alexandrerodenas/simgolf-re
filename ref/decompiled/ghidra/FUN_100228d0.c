/* Ghidra decompiled: sound.dll */
/* Function: FUN_100228d0 @ 0x100228D0 */
/* Body size: 214 addresses */


undefined4 __thiscall FUN_100228d0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 0x218);
  *(int *)((int)this + 0x220) = iVar3;
  if ((iVar3 != 0) && (iVar3 = *(int *)(iVar3 + 8), iVar3 != 0)) {
    while (*(int *)(iVar3 + 4) != param_1) {
      if (*(int *)((int)this + 0x220) == 0) {
        return 0x24;
      }
      iVar3 = *(int *)(*(int *)((int)this + 0x220) + 4);
      *(int *)((int)this + 0x220) = iVar3;
      if (iVar3 == 0) {
        return 0x24;
      }
      iVar3 = *(int *)(iVar3 + 8);
      if (iVar3 == 0) {
        return 0x24;
      }
    }
    if (iVar3 != 0) {
      piVar2 = *(int **)((int)this + 0x218);
      if (piVar2 != (int *)0x0) {
        while (piVar2[2] != iVar3) {
          piVar2 = (int *)piVar2[1];
          if (piVar2 == (int *)0x0) {
            return 0;
          }
        }
        if (piVar2 != (int *)0x0) {
          if (*piVar2 == 0) {
            *(int *)((int)this + 0x218) = piVar2[1];
          }
          else {
            *(int *)(*piVar2 + 4) = piVar2[1];
          }
          piVar1 = (int *)piVar2[1];
          if (piVar1 == (int *)0x0) {
            iVar3 = *piVar2;
            *(undefined4 *)((int)this + 0x220) = 0;
            *(int *)((int)this + 0x21c) = iVar3;
          }
          else {
            *piVar1 = *piVar2;
            *(int **)((int)this + 0x220) = piVar1;
          }
          FUN_1004249a((undefined *)piVar2);
          *(int *)((int)this + 0x224) = *(int *)((int)this + 0x224) + -1;
        }
      }
      return 0;
    }
  }
  return 0x24;
}

