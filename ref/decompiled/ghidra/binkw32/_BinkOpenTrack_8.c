/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkOpenTrack@8 @ 0x30006C30 */


uint * _BinkOpenTrack_8(uint param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  
                    /* 0x6c30  37  _BinkOpenTrack@8 */
  if (((param_1 != 0) && (param_2 < *(uint *)(param_1 + 0xf0))) &&
     (uVar3 = *(uint *)(*(int *)(param_1 + 500) + param_2 * 4), (uVar3 & 0x80000000) != 0)) {
    puVar1 = FUN_3001ba10(uVar3 & 0xffff,(uVar3 >> 0x1d & 1) + 1,1);
    if (puVar1 != (uint *)0x0) {
      puVar2 = (uint *)radmalloc(0x1c);
      if (puVar2 != (uint *)0x0) {
        puVar5 = puVar2;
        for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        puVar2[4] = param_1;
        puVar2[5] = (uint)puVar1;
        *puVar2 = *(uint *)(*(int *)(param_1 + 500) + param_2 * 4) & 0xffff;
        puVar2[1] = (*(uint *)(*(int *)(param_1 + 500) + param_2 * 4) >> 0x1b & 8) + 8;
        puVar2[2] = (*(uint *)(*(int *)(param_1 + 500) + param_2 * 4) >> 0x1d & 1) + 1;
        uVar3 = *(int *)(*(int *)(param_1 + 0x1f0) + param_2 * 4) + 3U & 0xfffffffc;
        puVar2[3] = uVar3;
        if (puVar2[1] == 8) {
          puVar2[3] = uVar3 >> 1;
        }
        puVar2[6] = param_2;
        return puVar2;
      }
      FUN_3001c0f0((int)puVar1);
    }
  }
  return (uint *)0x0;
}

