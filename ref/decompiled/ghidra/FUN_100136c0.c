/* Ghidra decompiled: sound.dll */
/* Function: FUN_100136c0 @ 0x100136C0 */
/* Body size: 109 addresses */


int __thiscall FUN_100136c0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = *(int **)this;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if (piVar1[2] == param_1) break;
    piVar1 = (int *)piVar1[1];
  }
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  if (*piVar1 == 0) {
    *(int *)this = piVar1[1];
  }
  else {
    *(int *)(*piVar1 + 4) = piVar1[1];
  }
  piVar2 = (int *)piVar1[1];
  if (piVar2 == (int *)0x0) {
    iVar3 = *piVar1;
    *(undefined4 *)((int)this + 8) = 0;
    *(int *)((int)this + 4) = iVar3;
  }
  else {
    *piVar2 = *piVar1;
    *(int **)((int)this + 8) = piVar2;
  }
  iVar3 = piVar1[2];
  FUN_1004249a((undefined *)piVar1);
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + -1;
  return iVar3;
}

