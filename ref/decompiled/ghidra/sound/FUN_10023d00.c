/* Ghidra decompiled: sound.dll */
/* Function: FUN_10023d00 @ 0x10023D00 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10023d00(void *this,uint *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  if ((*(uint *)((int)this + 0x214) & 0x180) == 0x100) {
    uVar2 = *(uint *)((int)this + 0x248);
    iVar3 = 0;
    if (0 < *(int *)((int)this + 0x23c)) {
      do {
        *param_1 = uVar2;
        uVar2 = uVar2 + 1;
        if (*(uint *)((int)this + 0x24c) < uVar2) {
          uVar2 = *(uint *)((int)this + 0x248);
        }
        iVar3 = iVar3 + 1;
        param_1 = param_1 + 1;
      } while (iVar3 < *(int *)((int)this + 0x23c));
    }
    *(undefined4 *)((int)this + 0x244) = 0;
    return;
  }
  _DAT_100b4fe0 = timeGetTime();
  iVar3 = 0;
  if (*(int *)((int)this + 0x23c) < 1) {
    *(undefined4 *)((int)this + 0x244) = 0;
    return;
  }
  do {
    iVar1 = *(int *)((int)this + 0x248);
    thunk_FUN_100285a0((uint *)&DAT_100b4fe0);
    uVar4 = __ftol();
    iVar3 = iVar3 + 1;
    *param_1 = (int)((uVar4 & 0xffffffff) % (ulonglong)((*(int *)((int)this + 0x24c) - iVar1) + 1))
               + iVar1;
    param_1 = param_1 + 1;
  } while (iVar3 < *(int *)((int)this + 0x23c));
  *(undefined4 *)((int)this + 0x244) = 0;
  return;
}

