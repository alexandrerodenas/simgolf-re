/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000e050 @ 0x1000E050 */
/* Body size: 156 addresses */


undefined4 __thiscall FUN_1000e050(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = *(int **)((int)this + 0x1c8);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0x24;
    }
    if (piVar1[2] == param_1) break;
    piVar1 = (int *)piVar1[1];
  }
  if (piVar1 == (int *)0x0) {
    return 0x24;
  }
  if (*piVar1 == 0) {
    *(int *)((int)this + 0x1c8) = piVar1[1];
  }
  else {
    *(int *)(*piVar1 + 4) = piVar1[1];
  }
  piVar2 = (int *)piVar1[1];
  if (piVar2 == (int *)0x0) {
    iVar3 = *piVar1;
    *(undefined4 *)((int)this + 0x1d0) = 0;
    *(int *)((int)this + 0x1cc) = iVar3;
  }
  else {
    *piVar2 = *piVar1;
    *(int **)((int)this + 0x1d0) = piVar2;
  }
  iVar3 = piVar1[2];
  FUN_1004249a((undefined *)piVar1);
  *(int *)((int)this + 0x1d4) = *(int *)((int)this + 0x1d4) + -1;
  if (iVar3 == 0) {
    return 0x24;
  }
  *(uint *)(param_1 + 200) = *(uint *)(param_1 + 200) & 0xffffffbf;
  return 0;
}

