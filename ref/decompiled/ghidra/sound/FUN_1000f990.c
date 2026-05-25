/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000f990 @ 0x1000F990 */


undefined4 __thiscall FUN_1000f990(void *this,undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)((int)this + 0x60);
  if (piVar1 == (int *)0x0) {
LAB_1000f9b3:
    if (((byte)*(undefined4 *)this & 2) == 2) {
      return 6;
    }
    if (piVar1 == (int *)0x0) goto LAB_1000faae;
  }
  else {
    if (((byte)*(undefined4 *)this & 2) != 2) {
      return 6;
    }
    if (piVar1 == (int *)0x0) goto LAB_1000f9b3;
  }
  if (((byte)*(undefined4 *)this & 2) == 2) {
    iVar2 = (**(code **)(*piVar1 + 0x38))(piVar1,param_1);
    if (iVar2 == 0) {
      *(undefined4 *)((int)this + 0xa8) = *param_1;
      *(undefined4 *)((int)this + 0xac) = param_1[1];
      *(undefined4 *)((int)this + 0xb0) = param_1[2];
      *(undefined4 *)((int)this + 0xb4) = param_1[3];
      *(undefined2 *)((int)this + 0xb8) = *(undefined2 *)(param_1 + 4);
      return 0;
    }
    if (iVar2 < -0x7787fff5) {
      if (iVar2 == -0x7787fff6) {
        return 0xc;
      }
      if (iVar2 < -0x7ff8fff1) {
        if (iVar2 == -0x7ff8fff2) {
          return 0x11;
        }
        if (iVar2 == -0x7fffbfff) {
          return 0xb;
        }
      }
      else if (iVar2 == -0x7ff8ffa9) {
        return 10;
      }
    }
    else {
      switch(iVar2) {
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
LAB_1000faae:
  *(undefined4 *)((int)this + 0xa8) = *param_1;
  *(undefined4 *)((int)this + 0xac) = param_1[1];
  *(undefined4 *)((int)this + 0xb0) = param_1[2];
  *(undefined4 *)((int)this + 0xb4) = param_1[3];
  *(undefined2 *)((int)this + 0xb8) = *(undefined2 *)(param_1 + 4);
  return 0;
}

