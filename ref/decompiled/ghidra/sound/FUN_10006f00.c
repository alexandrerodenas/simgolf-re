/* Ghidra decompiled: sound.dll */
/* Function: FUN_10006f00 @ 0x10006F00 */


undefined4 __thiscall FUN_10006f00(void *this,int param_1)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 == *(int *)((int)this + 0xc)) {
    return 0;
  }
  uVar4 = (int)(*(uint *)((int)this + 8) << 0x1f) >> 0x1f;
  if (uVar4 == 1) {
    *(uint *)((int)this + 8) = *(uint *)((int)this + 8) & 0xfffffffe;
  }
  if (*(undefined **)((int)this + 4) != (undefined *)0x0) {
    FUN_1004249a(*(undefined **)((int)this + 4));
  }
  *(undefined4 *)((int)this + 4) = 0;
  pvVar2 = operator_new(param_1 * 8);
  *(void **)((int)this + 4) = pvVar2;
  uVar3 = 0;
  *(int *)((int)this + 0xc) = param_1;
  if (param_1 != 0) {
    do {
      iVar1 = *(int *)((int)this + 4);
      uVar3 = uVar3 + 1;
      *(undefined4 *)(iVar1 + -8 + uVar3 * 8) = 0;
      *(undefined4 *)(iVar1 + -4 + uVar3 * 8) = 0;
    } while (uVar3 < *(uint *)((int)this + 0xc));
  }
  *(uint *)((int)this + 8) = (*(uint *)((int)this + 8) ^ uVar4) & 1 ^ *(uint *)((int)this + 8);
  return 0;
}

