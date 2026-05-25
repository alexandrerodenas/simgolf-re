/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006ff80 @ 0x1006FF80 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1006ff80(int param_1,double param_2,double param_3)

{
  double dVar1;
  int iVar2;
  undefined4 *puVar3;
  float10 fVar4;
  undefined4 local_44 [15];
  undefined4 uStack_8;
  
  puVar3 = local_44;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  dVar1 = param_2 * param_3 - _DAT_1011d030;
  fVar4 = FUN_10082960(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  if ((float10)_DAT_1011dd88 < fVar4) {
    *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0x2000;
  }
  *(float *)(param_1 + 0x15c) = (float)param_3;
  *(float *)(param_1 + 0x160) = (float)param_2;
  uStack_8 = 0x1006fff3;
  __chkesp();
  return;
}

