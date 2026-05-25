/* Ghidra decompiled: sound.dll */
/* Function: FUN_100355d0 @ 0x100355D0 */


void __thiscall FUN_100355d0(void *this,uint param_1)

{
  double dVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  float10 extraout_ST0;
  float10 fVar5;
  longlong lVar6;
  int local_1c;
  
  if ((*(byte *)((int)this + 0x58) & 1) != 0) {
    piVar4 = (int *)((int)this + 0x324);
    local_1c = 0x10;
    piVar3 = DAT_100b4a20;
    do {
      if (piVar3 != (int *)0x0) {
        uVar2 = (**(code **)(*piVar3 + 0x40))();
        if ((float10)param_1 <= (float10)uVar2) {
          fVar5 = (float10)*(double *)(piVar4 + -0x25);
          *piVar4 = -piVar4[-0x27];
        }
        else {
          lVar6 = __ftol();
          fVar5 = (float10)*(double *)(piVar4 + -0x25) / extraout_ST0;
          *piVar4 = -(int)lVar6;
        }
        *(double *)(piVar4 + 1) = (double)-fVar5;
        *(double *)(piVar4 + 3) = (double)-fVar5;
        piVar4[-0x23] = piVar4[-0x25];
        piVar4[-0x22] = piVar4[-0x24];
        piVar3 = DAT_100b4a20;
      }
      piVar4 = piVar4 + 0x44;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  if (DAT_100b49ec != (uint *)0x0) {
    if (*DAT_100b49ec < param_1) {
      uVar2 = param_1 / *DAT_100b49ec;
      dVar1 = *(double *)((int)this + 0x1e0) / (double)(int)uVar2;
      *(int *)((int)this + 0x1c4) = -(*(int *)((int)this + 0x208) / (int)uVar2);
    }
    else {
      dVar1 = *(double *)((int)this + 0x1e0);
      *(int *)((int)this + 0x1c4) = -*(int *)((int)this + 0x208);
    }
    *(double *)((int)this + 0x1c8) = -dVar1;
    *(uint *)((int)this + 0x1c0) = param_1;
  }
  return;
}

