/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1003d020 @ 0x1003D020 */
/* Body size: 51 addresses */


void __thiscall FUN_1003d020(void *this,int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  
  puVar1 = (undefined1 *)(param_1 + 1);
  iVar3 = 0x100;
  puVar2 = (undefined1 *)((int)this + 0xd);
  do {
    puVar1[1] = puVar2[-1];
    *puVar1 = *puVar2;
    puVar1[-1] = puVar2[1];
    puVar1[2] = 0;
    puVar1 = puVar1 + 4;
    iVar3 = iVar3 + -1;
    puVar2 = puVar2 + 4;
  } while (iVar3 != 0);
  return;
}

