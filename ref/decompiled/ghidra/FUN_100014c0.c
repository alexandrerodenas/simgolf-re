/* Ghidra decompiled: jgl.dll */
/* Function: FUN_100014c0 @ 0x100014C0 */
/* Body size: 119 addresses */


void __thiscall FUN_100014c0(void *this,undefined4 param_1,undefined1 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x14);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &PTR_FUN_10053200;
    puVar1[3] = param_1;
    *(undefined1 *)(puVar1 + 4) = param_2;
    puVar1[2] = 0;
    puVar1[1] = 0;
  }
  if (*(int *)((int)this + 0x10) == 0) {
    *(undefined4 **)((int)this + 0x10) = puVar1;
    puVar1[1] = puVar1;
    *(int *)(*(int *)((int)this + 0x10) + 8) = *(int *)((int)this + 0x10);
  }
  else {
    puVar1[1] = *(undefined4 *)(*(int *)((int)this + 0x10) + 4);
    puVar1[2] = *(undefined4 *)((int)this + 0x10);
    *(undefined4 **)(*(int *)((int)this + 0x10) + 4) = puVar1;
    *(undefined4 **)(puVar1[1] + 8) = puVar1;
  }
  *(undefined4 **)((int)this + 0x14) = puVar1;
  *(undefined4 *)((int)this + 4) = param_1;
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
  *(undefined1 *)((int)this + 8) = *(undefined1 *)(puVar1 + 4);
  return;
}

