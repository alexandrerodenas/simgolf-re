/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001c370 @ 0x1001C370 */
/* Body size: 112 addresses */


uint __thiscall FUN_1001c370(void *this,uint param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((int *)((int)this + 0xc) != (int *)0x0) {
    iVar1 = *(int *)((int)this + 0xc);
    *(int *)((int)this + 0x14) = iVar1;
    if ((iVar1 != 0) && (piVar2 = *(int **)(iVar1 + 8), piVar2 != (int *)0x0)) {
      while( true ) {
        iVar1 = piVar2[7];
        if ((iVar1 == 3) || (iVar1 == 4)) {
          param_1 = (**(code **)(*piVar2 + 0x10))(param_1);
        }
        else if ((iVar1 == 5) && (*(char *)((int)piVar2 + 0x19) == '\0')) {
          return param_1;
        }
        if (*(int *)((int)this + 0x14) == 0) break;
        iVar1 = *(int *)(*(int *)((int)this + 0x14) + 4);
        *(int *)((int)this + 0x14) = iVar1;
        if (iVar1 == 0) break;
        piVar2 = *(int **)(iVar1 + 8);
        if (piVar2 == (int *)0x0) {
          return (uint)*(byte *)(param_1 + 0x5c + (int)this);
        }
      }
    }
  }
  return (uint)*(byte *)(param_1 + 0x5c + (int)this);
}

