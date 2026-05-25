/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002cf50 @ 0x1002CF50 */


void * __thiscall FUN_1002cf50(void *this,byte param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  iVar4 = 0;
  *(undefined ***)this = &PTR_LAB_1005be84;
  do {
    piVar1 = *(int **)((int)this + iVar4 * 4 + 4);
    iVar4 = iVar4 + 1;
    if (piVar1 != (int *)0x0) {
      iVar3 = *piVar1;
      iVar4 = iVar3 + 1;
      piVar1 = *(int **)((int)this + iVar3 * 4 + 4);
      uVar2 = piVar1[1];
      uVar5 = *piVar1 + 1;
      puVar6 = (undefined4 *)((int)this + uVar2 * 4 + 4);
      FUN_1004249a((undefined *)*puVar6);
      if (uVar2 < uVar5) {
        for (iVar3 = uVar5 - uVar2; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
      }
    }
  } while (iVar4 < 0x80);
  if (*(undefined **)((int)this + 0x204) != (undefined *)0x0) {
    FUN_1004249a(*(undefined **)((int)this + 0x204));
    *(undefined4 *)((int)this + 0x204) = 0;
  }
  if ((param_1 & 1) != 0) {
    FUN_1004249a(this);
  }
  return this;
}

