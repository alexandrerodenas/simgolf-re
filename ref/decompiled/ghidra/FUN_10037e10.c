/* Ghidra decompiled: sound.dll */
/* Function: FUN_10037e10 @ 0x10037E10 */
/* Body size: 85 addresses */


void __thiscall FUN_10037e10(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = this;
    for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_1;
      param_1 = param_1 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa0) = *param_2;
  *(undefined4 *)((int)this + 0xa4) = param_2[1];
  *(undefined4 *)((int)this + 0xa8) = param_2[2];
  *(undefined4 *)((int)this + 0xac) = param_2[3];
  *(undefined2 *)((int)this + 0xb0) = *(undefined2 *)(param_2 + 4);
  return;
}

