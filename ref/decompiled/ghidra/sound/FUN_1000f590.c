/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000f590 @ 0x1000F590 */


undefined4 __fastcall FUN_1000f590(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  
  *param_1 = *param_1 & 0xfffffffd;
  puVar4 = param_1 + 0x1c;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = param_1 + 0x2a;
  param_1[0x1c] = 0x24;
  param_1[0x1d] = 0xe8;
  param_1[0x1e] = 0x10000;
  param_1[0x1f] = 0;
  param_1[0x20] = (uint)puVar4;
  *puVar4 = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined2 *)(param_1 + 0x2e) = 0;
  *(undefined2 *)puVar4 = 1;
  *(undefined2 *)((int)param_1 + 0xaa) = 2;
  param_1[0x2b] = 0x5622;
  param_1[0x2c] = 0x15888;
  *(undefined2 *)(param_1 + 0x2d) = 4;
  *(undefined2 *)((int)param_1 + 0xb6) = 0x10;
  *(undefined2 *)(param_1 + 0x2e) = 0;
  param_1[0x10] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[3] = 0;
  param_1[0x11] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[4] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  uVar3 = (param_1[0x2b] * 0x1e) / 1000;
  uVar5 = (ushort)param_1[0x2d] * uVar3;
  param_1[0xc] = 0;
  param_1[0x18] = 0;
  param_1[0xd] = 0x295;
  uVar1 = uVar5 * 0x12;
  if (uVar1 < param_1[0x1e] || uVar1 - param_1[0x1e] == 0) {
    param_1[0xe] = uVar1;
    param_1[0x10] = uVar5;
    param_1[0xd] = uVar3;
    param_1[0xf] = uVar5 * 0x11 >> 1;
  }
  param_1[0x17] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[8] = 0;
  param_1[0x31] = 0;
  param_1[0xf] = 0;
  return 0;
}

