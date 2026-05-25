/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000fbb0 @ 0x1000FBB0 */


undefined4 __thiscall FUN_1000fbb0(void *this,int *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined *puVar5;
  
  if (param_2 == 0) {
    return 10;
  }
  if (((byte)*(undefined4 *)this & 2) == 2) {
    *(undefined4 *)((int)this + 0x80) = 0;
  }
  else {
    puVar3 = *(undefined4 **)((int)this + 0x80);
    if (puVar3 == (undefined4 *)0x0) {
      *(int *)((int)this + 0x80) = (int)this + 0xa8;
    }
    else {
      *(undefined4 *)((int)this + 0xa8) = *puVar3;
      *(undefined4 *)((int)this + 0xac) = puVar3[1];
      *(undefined4 *)((int)this + 0xb0) = puVar3[2];
      *(undefined4 *)((int)this + 0xb4) = puVar3[3];
      *(undefined2 *)((int)this + 0xb8) = *(undefined2 *)(puVar3 + 4);
    }
  }
  piVar1 = (int *)((int)this + 0x60);
  if (*(int *)((int)this + 0x60) != 0) {
    return 0xc;
  }
  iVar4 = (**(code **)(*param_1 + 0xc))(param_1,(int)this + 0x70,piVar1,0);
  if (iVar4 != 0) {
    if (iVar4 < -0x7787fff5) {
      if (iVar4 == -0x7787fff6) {
        return 0xc;
      }
      if (iVar4 < -0x7ff8fff1) {
        if (iVar4 == -0x7ff8fff2) {
          return 0x11;
        }
        if (iVar4 == -0x7fffbfff) {
          return 0xb;
        }
      }
      else if (iVar4 == -0x7ff8ffa9) {
        return 10;
      }
    }
    else {
      switch(iVar4) {
      case -0x7787ff9c:
        return 0x12;
      case -0x7787ff88:
        return 1;
      case -0x7787ff6a:
        return 0x1e;
      case -0x7787ff56:
        return 0x13;
      }
    }
    return 0x2f;
  }
  *(int *)((int)this + 0x50) = param_2;
  uVar2 = *(uint *)((int)this + 0x78);
  *(undefined4 *)((int)this + 0x94) = 0x14;
  if (uVar2 != 0) {
    *(uint *)((int)this + 0x58) = ~uVar2 % uVar2;
  }
  (**(code **)(*(int *)*piVar1 + 0xc))((int *)*piVar1,(undefined4 *)((int)this + 0x94));
  if (((byte)*(undefined4 *)this & 2) == 2) {
    (**(code **)(*(int *)*piVar1 + 0x38))((int *)*piVar1,(int)this + 0xa8);
    (**(code **)(*(int *)*piVar1 + 0x30))((int *)*piVar1,0,0,1);
  }
  if ((*(byte *)((int)this + 0x74) & 0x10) != 0) {
    puVar3 = (undefined4 *)*piVar1;
    if (puVar3 != (undefined4 *)0x0) {
      if ((*(byte *)this & 2) == 0) {
        iVar4 = (int)this + 100;
        puVar5 = &DAT_1005d57c;
      }
      else {
        iVar4 = (int)this + 0x68;
        puVar5 = &DAT_1005d58c;
      }
      iVar4 = (**(code **)*puVar3)(puVar3,puVar5,iVar4);
      if (iVar4 < 0) {
        *(undefined4 *)((int)this + 0x68) = 0;
        *(undefined4 *)((int)this + 100) = 0;
      }
    }
    puVar3 = *(undefined4 **)((int)this + 0x68);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = *(undefined4 **)((int)this + 100);
      if (puVar3 == (undefined4 *)0x0) goto LAB_1000fda4;
      iVar4 = (**(code **)*puVar3)(puVar3,&DAT_1005d52c,(int)this + 0x6c);
    }
    else {
      iVar4 = (**(code **)*puVar3)(puVar3,&DAT_1005d52c,(int)this + 0x6c);
    }
    if (iVar4 < 0) {
      *(undefined4 *)((int)this + 0x6c) = 0;
    }
  }
LAB_1000fda4:
  (**(code **)(*(int *)*piVar1 + 0x14))((int *)*piVar1,(int)this + 0xa8,0x12,0);
  return 0;
}

