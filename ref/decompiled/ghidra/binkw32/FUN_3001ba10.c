/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001ba10 @ 0x3001BA10 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_3001ba10(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  
  uVar6 = param_1 * param_2 + 1 >> 1;
  puVar2 = (uint *)radmalloc(((~param_3 & 1) << 1 | 1) * 0x2000 + 0x2688);
  if (puVar2 == (uint *)0x0) {
    return (uint *)0x0;
  }
  puVar7 = puVar2;
  for (iVar4 = 0x9a2; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  puVar2[4] = (uint)(puVar2 + 0x9a2);
  puVar2[3] = (uint)(puVar2 + 0x11a2);
  puVar2[0x9a1] = 0x3000;
  if (param_1 < 0xac44) {
    *puVar2 = (-(uint)(param_1 < 0x5622) & 0xfffffe00) + 0x400;
  }
  else {
    *puVar2 = 0x800;
  }
  uVar3 = *puVar2 * param_2;
  puVar2[2] = uVar3 >> 4;
  *puVar2 = uVar3;
  param_2 = 0;
  puVar5 = &DAT_3003e5f4;
  puVar2[1] = (uint)(_DAT_30033fe8 / SQRT((float)uVar3));
  puVar7 = puVar2 + 7;
  do {
    uVar1 = *puVar5;
    if (uVar6 <= uVar1) break;
    param_2 = param_2 + 1;
    puVar5 = puVar5 + 1;
    *puVar7 = (uVar1 * (uVar3 >> 1)) / uVar6;
    puVar7 = puVar7 + 1;
  } while (puVar5 < &DAT_3003e658);
  puVar2[6] = param_2;
  puVar2[param_2 + 7] = uVar3 >> 1;
  puVar2[0x21] = 0;
  puVar2[5] = 1;
  return puVar2;
}

