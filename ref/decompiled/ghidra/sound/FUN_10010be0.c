/* Ghidra decompiled: sound.dll */
/* Function: FUN_10010be0 @ 0x10010BE0 */
/* Body size: 302 addresses */


/* WARNING: Removing unreachable block (ram,0x10010c6a) */

undefined4 __thiscall FUN_10010be0(void *this,uint *param_1,uint *param_2,int param_3)

{
  int *piVar1;
  DWORD DVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0x4c) == 0) {
    DVar2 = timeGetTime();
    iVar3 = DVar2 - *(int *)((int)this + 0x54);
    *(int *)((int)this + 0x4c) = iVar3;
    uVar4 = *(int *)((int)this + 0xac) * param_3;
    *(uint *)((int)this + 0x48) =
         (uint)((iVar3 + *(int *)((int)this + 0x50) * 2) * *(int *)((int)this + 0xac)) / 1000;
  }
  else {
    iVar3 = param_3 + *(int *)((int)this + 0x4c);
    *(int *)((int)this + 0x4c) = iVar3;
    uVar4 = ((*(int *)((int)this + 0x50) * 10 - (uint)(*(int *)((int)this + 0x48) * 1000) / 0x5622)
            + iVar3) * *(int *)((int)this + 0xac);
  }
  *param_1 = (uint)*(ushort *)((int)this + 0xb4) * (uVar4 / 1000);
  *param_2 = (uint)*(ushort *)((int)this + 0xb4) * *(int *)((int)this + 0x48) &
             *(uint *)((int)this + 0x58);
  *(uint *)((int)this + 0x48) = *(int *)((int)this + 0x48) + uVar4 / 1000;
  if (*param_1 <= *(uint *)((int)this + 0x78)) {
    return 0;
  }
  piVar1 = *(int **)((int)this + 0x60);
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x48))(piVar1);
  }
  if (*(int *)((int)this + 0x60) != 0) {
    DVar2 = timeGetTime();
    *(DWORD *)((int)this + 0x54) = DVar2;
    iVar3 = (**(code **)(**(int **)((int)this + 0x60) + 0x30))(*(int **)((int)this + 0x60),0,0,1);
    if (iVar3 == 0) {
      (**(code **)(**(int **)((int)this + 0x60) + 0x14))
                (*(int **)((int)this + 0x60),(int)this + 0xa8,0x12,0);
    }
  }
  *param_1 = 0;
  return 0x27;
}

