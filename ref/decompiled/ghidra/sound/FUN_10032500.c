/* Ghidra decompiled: sound.dll */
/* Function: FUN_10032500 @ 0x10032500 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_10032500(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  float10 extraout_ST0;
  float10 fVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x1390);
  if (iVar1 != 0) {
    uVar2 = *(uint *)(param_1 + 0x1c0);
    if (DAT_100b4a20 != (int *)0x0) {
      uVar3 = (**(code **)(*DAT_100b4a20 + 0x40))();
      if ((float10)uVar2 <= (float10)uVar3) {
        fVar4 = (float10)*(double *)(iVar1 + 0x58);
        *(undefined4 *)(iVar1 + 0xec) = *(undefined4 *)(iVar1 + 0x50);
      }
      else {
        lVar5 = __ftol();
        fVar4 = (float10)*(double *)(iVar1 + 0x58) / extraout_ST0;
        *(int *)(iVar1 + 0xec) = (int)lVar5;
      }
      *(double *)(iVar1 + 0xf0) = (double)fVar4;
      *(double *)(iVar1 + 0xf8) = (double)fVar4;
    }
    iVar1 = *(int *)(param_1 + 0x1390);
    if ((*(double *)(iVar1 + 0x58) != _DAT_1005b498) && (*(double *)(iVar1 + 0xf0) != _DAT_1005b498)
       ) {
      *(byte *)(iVar1 + 0x9c) = *(byte *)(iVar1 + 0x9c) | 8;
      return 0;
    }
    *(byte *)(iVar1 + 0x9c) = *(byte *)(iVar1 + 0x9c) | 4;
    *(byte *)(iVar1 + 0x94) = *(byte *)(iVar1 + 0x94) & 0xfe;
    *(undefined4 *)(iVar1 + 0xe4) = 0;
  }
  return 0;
}

