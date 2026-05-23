/* Ghidra decompiled: sound.dll */
/* Function: FUN_10024e60 @ 0x10024E60 */
/* Body size: 225 addresses */


void __thiscall FUN_10024e60(void *this,int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (*(int *)this != 0) {
    if (*(int *)((int)this + 8) == 0) {
      puVar2 = operator_new(0xc);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = param_1;
      }
      if (*(undefined4 **)this != (undefined4 *)0x0) {
        **(undefined4 **)this = puVar2;
        puVar2[1] = *(undefined4 *)this;
        *(undefined4 **)this = puVar2;
        *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
        return;
      }
      goto LAB_10024ea8;
    }
    puVar2 = *(undefined4 **)(*(int *)((int)this + 8) + 4);
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = operator_new(0xc);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = param_1;
      }
      *(undefined4 **)(*(int *)((int)this + 8) + 4) = puVar3;
      *puVar2 = puVar3;
      uVar1 = *(undefined4 *)((int)this + 8);
      puVar3[1] = puVar2;
      *puVar3 = uVar1;
      *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
      return;
    }
  }
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = param_1;
  }
  if (*(int *)((int)this + 4) != 0) {
    *(undefined4 **)(*(int *)((int)this + 4) + 4) = puVar2;
    *puVar2 = *(undefined4 *)((int)this + 4);
    *(undefined4 **)((int)this + 4) = puVar2;
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
    return;
  }
LAB_10024ea8:
  *(undefined4 **)this = puVar2;
  *(undefined4 **)((int)this + 4) = puVar2;
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
  return;
}

