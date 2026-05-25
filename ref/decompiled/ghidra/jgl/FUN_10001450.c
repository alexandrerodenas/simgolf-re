/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10001450 @ 0x10001450 */


void * __thiscall FUN_10001450(void *this,byte param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = *(undefined4 **)((int)this + 0x10);
  *(undefined ***)this = &PTR_FUN_100531f8;
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = puVar1[2];
    puVar3 = *(undefined4 **)(iVar2 + 8);
    if (puVar3 != puVar1) {
      do {
        *(undefined4 *)(iVar2 + 8) = puVar3[2];
        if (puVar3 != (undefined4 *)0x0) {
          (**(code **)*puVar3)(1);
        }
        puVar3 = *(undefined4 **)(iVar2 + 8);
      } while (puVar3 != *(undefined4 **)((int)this + 0x10));
    }
    if (*(undefined4 **)((int)this + 0x10) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)this + 0x10))(1);
    }
    *(undefined4 *)((int)this + 0x18) = 0;
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  if ((param_1 & 1) != 0) {
    FUN_10046490(this);
  }
  return this;
}

