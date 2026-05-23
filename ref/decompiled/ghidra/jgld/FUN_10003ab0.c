/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10003ab0 @ 0x10003AB0 */
/* Body size: 99 addresses */


uint __thiscall FUN_10003ab0(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  undefined2 uVar4;
  uint uVar3;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_48 [17];
  
  puVar6 = local_48;
  for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0xcccccccc;
    puVar6 = puVar6 + 1;
  }
  fVar1 = *(float *)this;
  fVar2 = *param_1;
  uVar3 = CONCAT22((short)((uint)this >> 0x10),
                   (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
                   (ushort)(fVar1 == fVar2) << 0xe);
  if ((fVar1 == fVar2) != 0) {
    fVar1 = *(float *)((int)this + 4);
    fVar2 = param_1[1];
    uVar4 = (undefined2)((uint)param_1 >> 0x10);
    uVar3 = CONCAT22(uVar4,(ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
                           (ushort)(fVar1 == fVar2) << 0xe);
    if ((fVar1 == fVar2) != 0) {
      fVar1 = *(float *)((int)this + 8);
      fVar2 = param_1[2];
      uVar3 = CONCAT22(uVar4,(ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10
                             | (ushort)(fVar1 == fVar2) << 0xe);
      if ((fVar1 == fVar2) != 0) {
        uVar3 = CONCAT31((int3)(uVar3 >> 8),1);
      }
    }
  }
  return uVar3;
}

