/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10004dc0 @ 0x10004DC0 */
/* Body size: 97 addresses */


undefined4 __thiscall FUN_10004dc0(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_4c [16];
  int local_c;
  
  iVar3 = -0x33333334;
  puVar5 = local_4c;
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0xcccccccc;
    puVar5 = puVar5 + 1;
  }
  local_c = 0;
  while( true ) {
    if (0xf < local_c) {
      return CONCAT31((int3)((uint)iVar3 >> 8),1);
    }
    fVar1 = *(float *)((int)this + local_c * 4 + 4);
    fVar2 = *(float *)(param_1 + 4 + local_c * 4);
    if ((fVar1 == fVar2) == 0) break;
    iVar3 = local_c + 1;
    local_c = iVar3;
  }
  return CONCAT22((short)((uint)local_c >> 0x10),
                  (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
                  (ushort)(fVar1 == fVar2) << 0xe);
}

