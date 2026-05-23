/* Ghidra decompiled: sound.dll */
/* Function: FUN_100351c0 @ 0x100351C0 */
/* Body size: 298 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100351c0(void *this,int param_1)

{
  uint uVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  float10 extraout_ST0;
  float10 fVar6;
  longlong lVar7;
  
  if (param_1 < 0) {
    param_1 = 0;
  }
  else if (0x10000 < param_1) {
    param_1 = 0x10000;
  }
  *(int *)((int)this + 0x208) = param_1;
  dVar2 = (double)param_1 * _DAT_1005c5e8;
  *(double *)((int)this + 0x210) = dVar2;
  if ((*(byte *)((int)this + 0x58) & 8) == 0) {
    *(double *)((int)this + 0x1e0) = dVar2;
    *(int *)((int)this + 0x1d8) = param_1;
  }
  thunk_FUN_10035340(this,*(int *)((int)this + 0x224));
  if (((*(uint *)((int)this + 0x58) & 0x10000000) == 0) && ((*(uint *)((int)this + 0x58) & 1) != 0))
  {
    puVar5 = (undefined4 *)((int)this + 0x324);
    iVar4 = 0x10;
    do {
      if ((*(byte *)(puVar5 + -0x14) & 8) == 0) {
        *(undefined8 *)(puVar5 + -0x25) = *(undefined8 *)((int)this + 0x1e0);
        *(undefined8 *)(puVar5 + -0x1b) = *(undefined8 *)((int)this + 0x1f0);
        *(undefined8 *)(puVar5 + -0x1f) = *(undefined8 *)((int)this + 0x200);
        uVar1 = *(uint *)((int)this + 0x1c0);
        if (DAT_100b4a20 != (int *)0x0) {
          uVar3 = (**(code **)(*DAT_100b4a20 + 0x40))();
          if ((float10)uVar1 <= (float10)uVar3) {
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
        }
      }
      puVar5 = puVar5 + 0x44;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

