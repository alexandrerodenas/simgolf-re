/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10034d80 @ 0x10034D80 */


void __thiscall FUN_10034d80(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_10034e10((int)this);
  if (((iVar1 != 0) && (*(int *)((int)this + 4) != 0)) &&
     (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0)) {
    (**(code **)**(undefined4 **)((int)this + 4))(1);
  }
  *(undefined4 *)((int)this + 4) = param_1;
  if (*(int *)((int)this + 4) == 0) {
    *(uint *)((int)this + 8) = *(uint *)((int)this + 8) | 4;
  }
  else {
    *(uint *)((int)this + 8) = *(uint *)((int)this + 8) & 0xfffffffb;
  }
  return;
}

