/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001c400 @ 0x1001C400 */
/* Body size: 89 addresses */


void __thiscall FUN_1001c400(void *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = *(uint *)((int)this + 0xe0);
  uVar3 = uVar2;
  if (uVar2 < uVar2 + 0xc) {
    do {
      iVar1 = *param_1;
      param_1 = param_1 + 1;
      uVar4 = uVar3 + 1;
      *(char *)(uVar3 % 0xc + 0x5c + (int)this) = (char)((ulonglong)(uVar2 + iVar1) % 0xc);
      uVar2 = *(uint *)((int)this + 0xe0);
      uVar3 = uVar4;
    } while (uVar4 < uVar2 + 0xc);
  }
  thunk_FUN_1001c1e0(this,0);
  return;
}

