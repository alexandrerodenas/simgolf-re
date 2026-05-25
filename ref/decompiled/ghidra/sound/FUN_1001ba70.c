/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001ba70 @ 0x1001BA70 */


undefined4 __thiscall FUN_1001ba70(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)((int)this + 0xc);
  if (piVar3 != (int *)0x0) {
    while (piVar3[2] != param_1) {
      piVar3 = (int *)piVar3[1];
      if (piVar3 == (int *)0x0) {
        return 0x14;
      }
    }
    if (piVar3 != (int *)0x0) {
      if (*piVar3 == 0) {
        *(int *)((int)this + 0xc) = piVar3[1];
      }
      else {
        *(int *)(*piVar3 + 4) = piVar3[1];
      }
      piVar1 = (int *)piVar3[1];
      if (piVar1 == (int *)0x0) {
        iVar2 = *piVar3;
        *(undefined4 *)((int)this + 0x14) = 0;
        *(int *)((int)this + 0x10) = iVar2;
      }
      else {
        *piVar1 = *piVar3;
        *(int **)((int)this + 0x14) = piVar1;
      }
      iVar2 = piVar3[2];
      FUN_1004249a((undefined *)piVar3);
      *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + -1;
      if (iVar2 != 0) {
        return 0;
      }
    }
  }
  return 0x14;
}

