/* Ghidra decompiled: sound.dll */
/* Function: FUN_10033ba0 @ 0x10033BA0 */


void __fastcall FUN_10033ba0(void *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = *(int *)((int)param_1 + 0x58);
  puVar1 = (uint *)((int)param_1 + 0x58);
  uVar3 = *puVar1;
  uVar4 = *puVar1;
  uVar5 = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)((int)param_1 + 0x5c) = 0;
  *puVar1 = (((int)(uVar5 << 2) >> 0x1f & 1U | (iVar2 >> 0x1f) << 2) << 0x1b |
            (int)(uVar3 << 0x1d) >> 0x1f & 1U) << 2 |
            *puVar1 & 0x5ffffffa ^ (int)(uVar4 << 0x1f) >> 0x1f & 1U;
  *(undefined4 *)((int)param_1 + 0x1e0) = *(undefined4 *)((int)param_1 + 0x210);
  *(undefined4 *)((int)param_1 + 0x1d8) = *(undefined4 *)((int)param_1 + 0x208);
  *(undefined4 *)((int)param_1 + 0x1e4) = *(undefined4 *)((int)param_1 + 0x214);
  thunk_FUN_10035340(param_1,*(int *)((int)param_1 + 0x224));
  return;
}

