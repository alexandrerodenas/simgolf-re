/* Ghidra decompiled: sound.dll */
/* Function: FUN_10032440 @ 0x10032440 */


void __thiscall FUN_10032440(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    piVar3 = *(int **)((int)this + 0x1338);
    if (piVar3 != (int *)0x0) {
      while (piVar3[2] != param_1) {
        piVar3 = (int *)piVar3[1];
        if (piVar3 == (int *)0x0) {
          return;
        }
      }
      if (piVar3 != (int *)0x0) {
        if (*piVar3 == 0) {
          *(int *)((int)this + 0x1338) = piVar3[1];
        }
        else {
          *(int *)(*piVar3 + 4) = piVar3[1];
        }
        piVar1 = (int *)piVar3[1];
        if (piVar1 == (int *)0x0) {
          iVar2 = *piVar3;
          *(undefined4 *)((int)this + 0x1340) = 0;
          *(int *)((int)this + 0x133c) = iVar2;
        }
        else {
          *piVar1 = *piVar3;
          *(int **)((int)this + 0x1340) = piVar1;
        }
        FUN_1004249a((undefined *)piVar3);
        *(int *)((int)this + 0x1344) = *(int *)((int)this + 0x1344) + -1;
      }
    }
  }
  return;
}

