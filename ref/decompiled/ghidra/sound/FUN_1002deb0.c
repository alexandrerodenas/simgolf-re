/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002deb0 @ 0x1002DEB0 */


uint * __thiscall FUN_1002deb0(void *this,uint *param_1)

{
  int *piVar1;
  uint *puVar2;
  
  piVar1 = (int *)((int)this + 0x40);
  puVar2 = param_1;
  if (*(int *)((int)this + 0x40) == 0) {
    puVar2 = (uint *)create_sound(piVar1,param_1,2);
  }
  if ((puVar2 == (uint *)0x0) &&
     (puVar2 = (uint *)thunk_FUN_1002add0(this,param_1), puVar2 == (uint *)0x0)) {
    if ((*(byte *)((int)this + 0x58) & 2) != 0) {
      *(byte *)(*piVar1 + 0x58) = *(byte *)(*piVar1 + 0x58) | 2;
      if (*(int *)((int)this + 0x5c) != 0) {
        *(int *)(*piVar1 + 0x5c) = *(int *)((int)this + 0x5c);
      }
    }
    puVar2 = (uint *)0x0;
  }
  return puVar2;
}

