/* Ghidra decompiled: sound.dll */
/* Function: FUN_10011000 @ 0x10011000 */
/* Body size: 74 addresses */


byte __thiscall FUN_10011000(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)((int)this + 100);
  if (piVar1 == (int *)0x0) {
    return 0xb;
  }
  *(undefined4 *)((int)this + 200) = param_1;
  *(undefined4 *)((int)this + 0xcc) = param_2;
  *(undefined4 *)((int)this + 0xd0) = param_3;
  iVar2 = (**(code **)(*piVar1 + 0x4c))(piVar1,param_1,param_2,param_3,0);
  return -(iVar2 != 0) & 0x1f;
}

