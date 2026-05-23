/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10001be0 @ 0x10001BE0 */
/* Body size: 165 addresses */


int __thiscall FUN_10001be0(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*(int *)this + 0xd8))();
  if (((param_1 < iVar1) && (iVar1 = (**(code **)(*(int *)this + 0xdc))(), param_2 < iVar1)) &&
     (iVar1 = (**(code **)(*(int *)this + 0x10))(), iVar1 != 0)) {
    switch(*(undefined4 *)((int)this + 0x24)) {
    case 8:
      return *(int *)((int)this + 0x40) * param_2 + iVar1 + param_1;
    case 0x10:
      return iVar1 + (*(int *)((int)this + 0x40) * param_2 + param_1) * 2;
    case 0x18:
      iVar2 = *(int *)((int)this + 0x40) * param_2 + param_1;
      return iVar2 + iVar1 + iVar2 * 2;
    case 0x20:
      return iVar1 + (*(int *)((int)this + 0x40) * param_2 + param_1) * 4;
    }
  }
  return 0;
}

