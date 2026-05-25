/* Ghidra decompiled: sound.dll */
/* Function: FUN_10010db0 @ 0x10010DB0 */


undefined4 __thiscall FUN_10010db0(void *this,undefined4 param_1)

{
  DWORD DVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x60) == 0) {
    return 0x14;
  }
  DVar1 = timeGetTime();
  *(DWORD *)((int)this + 0x54) = DVar1;
  iVar2 = (**(code **)(**(int **)((int)this + 0x60) + 0x30))
                    (*(int **)((int)this + 0x60),0,0,param_1);
  if (iVar2 != 0) {
    return 0x1c;
  }
  (**(code **)(**(int **)((int)this + 0x60) + 0x14))
            (*(int **)((int)this + 0x60),(int)this + 0xa8,0x12,0);
  return 0;
}

