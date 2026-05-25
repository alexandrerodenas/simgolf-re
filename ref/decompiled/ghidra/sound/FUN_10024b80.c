/* Ghidra decompiled: sound.dll */
/* Function: FUN_10024b80 @ 0x10024B80 */


uint __thiscall FUN_10024b80(void *this,int param_1,uint param_2,byte param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = param_1;
  uVar3 = *(uint *)(param_1 + 0x54);
  uVar2 = param_4;
  if (0 < (int)param_4) {
    uVar2 = thunk_FUN_1001d780((void *)((int)this + 0x60),&param_1,param_4);
    if (uVar2 == 0) {
      uVar3 = *(uint *)(param_1 + 0x54);
    }
  }
  if (uVar3 != 0) {
    if ((param_3 & 1) == 0) {
      if ((param_3 & 4) == 0) {
        if ((param_3 & 0x10) == 0) {
          *(undefined4 *)(iVar1 + 0x50) = 0;
        }
        else {
          *(uint *)(iVar1 + 0x50) = param_2;
        }
      }
      else {
        uVar2 = (param_2 / *(uint *)((int)this + 0x1bc) + 1) * *(uint *)((int)this + 0x1bc);
        *(uint *)(iVar1 + 0x50) = uVar2;
      }
    }
    else {
      uVar2 = param_2 / uVar3;
      *(uint *)(iVar1 + 0x50) = (uVar3 - param_2 % uVar3) + param_2;
    }
    if ((param_3 & 0x20) != 0) {
      uVar2 = thunk_FUN_10024920(iVar1,0);
    }
  }
  return uVar2;
}

