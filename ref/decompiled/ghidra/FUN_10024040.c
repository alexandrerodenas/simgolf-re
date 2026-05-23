/* Ghidra decompiled: sound.dll */
/* Function: FUN_10024040 @ 0x10024040 */
/* Body size: 312 addresses */


int __thiscall FUN_10024040(void *this,uint *param_1,void *param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  
  puVar2 = param_1;
  iVar3 = 10;
  if (param_1 == (uint *)0x0) {
    return iVar3;
  }
  if (param_2 == (void *)0x2) {
    iVar3 = thunk_FUN_10021fa0(this,param_1);
    return iVar3;
  }
  switch(param_1[7]) {
  case 0:
    iVar3 = thunk_FUN_10021fa0(this,param_1);
    return iVar3;
  case 1:
    break;
  case 2:
    iVar3 = param_1[10] * 0x4c;
    *(uint *)((int)this + iVar3 + 0x268) = param_1[1];
    *(uint *)((int)this + iVar3 + 0x26c) = param_1[2];
    *(uint *)((int)this + iVar3 + 0x270) = param_1[3];
    *(uint *)((int)this + iVar3 + 0x274) = param_1[4];
    *(uint *)((int)this + iVar3 + 0x278) = param_1[5];
    *(short *)((int)this + iVar3 + 0x27c) = (short)param_1[6];
    *(uint *)((int)this + iVar3 + 0x280) = param_1[7];
    *(uint *)((int)this + iVar3 + 0x284) = param_1[8];
    *(uint *)((int)this + iVar3 + 0x288) = param_1[9];
    *(uint *)((int)this + iVar3 + 0x28c) = param_1[10];
    *(uint *)((int)this + iVar3 + 0x290) = param_1[0xb];
    *(uint *)((int)this + iVar3 + 0x294) = param_1[0xc];
    *(uint *)((int)this + iVar3 + 0x298) = param_1[0xd];
    return 0;
  case 3:
  case 5:
    if (((param_2 == (void *)0x0) && (-1 < (int)param_3)) &&
       (iVar3 = thunk_FUN_1001d780((void *)((int)this + 0x60),(int *)&param_2,param_3), iVar3 == 0))
    {
      iVar3 = thunk_FUN_1001b9a0(param_2,puVar2);
    }
  default:
    return iVar3;
  }
  uVar1 = param_1[10];
  uVar4 = (**(code **)(*(int *)this + 0xb4))();
  if (uVar1 < uVar4) {
    thunk_FUN_1001d780((void *)((int)this + 0x60),(int *)&param_1,uVar1);
    *(byte *)(param_1 + 0xe) = ((byte)puVar2[0xb] & 2) << 3 | (byte)param_1[0xe] & 0xef;
    param_1[0x118] = puVar2[0xc];
    return 0;
  }
  return 10;
}

