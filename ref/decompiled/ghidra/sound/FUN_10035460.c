/* Ghidra decompiled: sound.dll */
/* Function: FUN_10035460 @ 0x10035460 */


void __thiscall FUN_10035460(void *this,uint param_1)

{
  ulonglong uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  float10 extraout_ST0;
  float10 fVar6;
  longlong lVar7;
  
  if ((*(byte *)((int)this + 0x58) & 1) != 0) {
    puVar5 = (undefined4 *)((int)this + 0x324);
    iVar4 = 0x10;
    piVar3 = DAT_100b4a20;
    do {
      if (piVar3 != (int *)0x0) {
        uVar2 = (**(code **)(*piVar3 + 0x40))();
        if ((float10)param_1 <= (float10)uVar2) {
          fVar6 = (float10)*(double *)(puVar5 + -0x25);
          *puVar5 = puVar5[-0x27];
        }
        else {
          lVar7 = __ftol();
          fVar6 = (float10)*(double *)(puVar5 + -0x25) / extraout_ST0;
          *puVar5 = (int)lVar7;
        }
        *(double *)(puVar5 + 1) = (double)fVar6;
        *(double *)(puVar5 + 3) = (double)fVar6;
        piVar3 = DAT_100b4a20;
      }
      puVar5 = puVar5 + 0x44;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (DAT_100b49ec != (uint *)0x0) {
    if (*DAT_100b49ec < param_1) {
      uVar1 = (ulonglong)param_1 / (ulonglong)*DAT_100b49ec;
      *(uint *)((int)this + 0x1c0) = param_1;
      *(double *)((int)this + 0x1c8) = *(double *)((int)this + 0x1e0) / (double)uVar1;
      *(int *)((int)this + 0x1c4) = (int)(*(uint *)((int)this + 0x208) / uVar1);
      return;
    }
    *(undefined4 *)((int)this + 0x1c8) = *(undefined4 *)((int)this + 0x1e0);
    *(undefined4 *)((int)this + 0x1c4) = *(undefined4 *)((int)this + 0x208);
    *(undefined4 *)((int)this + 0x1cc) = *(undefined4 *)((int)this + 0x1e4);
    *(uint *)((int)this + 0x1c0) = param_1;
  }
  return;
}

