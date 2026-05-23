/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10034e30 @ 0x10034E30 */
/* Body size: 130 addresses */


int __thiscall FUN_10034e30(void *this,int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_10034f00(param_1);
  *(undefined4 *)((int)this + 0x20) = uVar2;
  uVar2 = FUN_10034ec0(param_1);
  *(undefined4 *)((int)this + 0x24) = uVar2;
  uVar2 = FUN_10034f40(param_1);
  *(int *)((int)this + 0x28) = (int)(char)uVar2;
  uVar1 = FUN_10034f20(param_1);
  *(undefined1 *)((int)this + 0x2c) = uVar1;
  uVar2 = FUN_10034ee0(param_1);
  *(int *)((int)this + 0x30) = (int)(char)uVar2;
  uVar2 = FUN_10034f60(param_1);
  *(undefined4 *)((int)this + 8) = uVar2;
  if (*(int *)((int)this + 4) == 0) {
    *(uint *)((int)this + 8) = *(uint *)((int)this + 8) | 4;
  }
  return (int)this;
}

