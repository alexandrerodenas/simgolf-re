/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10065a90 @ 0x10065A90 */


void FUN_10065a90(void)

{
  DWORD iModeNum;
  int iVar1;
  DWORD *pDVar2;
  undefined4 *puVar3;
  DWORD *pDVar4;
  undefined4 *puVar5;
  undefined4 auStackY_198 [31];
  undefined4 uStackY_11c;
  DWORD aDStackY_118 [2];
  undefined4 local_f8 [16];
  DWORD local_b8;
  DWORD local_b4;
  DWORD local_b0 [4];
  DWORD local_a0;
  undefined4 local_9c [9];
  WORD local_78;
  WORD local_76;
  DWORD local_74;
  DWORD local_34;
  DWORD local_30;
  DWORD local_2c;
  DWORD local_24;
  DWORD local_8;
  
  puVar3 = local_f8;
  for (iVar1 = 0x3d; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_78 = 0x94;
  local_74 = 0;
  local_76 = 0;
  thunk_FUN_10066ac0(0x101286c8);
  thunk_FUN_10066b90(0x101286f8);
  local_b4 = 0;
  while( true ) {
    iModeNum = local_b4;
    local_b8 = local_b4;
    local_b4 = local_b4 + 1;
    aDStackY_118[1] = 0x10065b17;
    EnumDisplaySettingsA((LPCSTR)0x0,iModeNum,(DEVMODEA *)local_9c);
    iVar1 = __chkesp();
    if (iVar1 == 0) break;
    local_b0[3] = local_34;
    local_b0[0] = local_30;
    local_b0[1] = local_2c;
    local_b0[2] = local_30;
    local_a0 = local_24;
    pDVar2 = local_b0;
    pDVar4 = aDStackY_118;
    for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pDVar4 = *pDVar2;
      pDVar2 = pDVar2 + 1;
      pDVar4 = pDVar4 + 1;
    }
    uStackY_11c = 0x10065b6b;
    thunk_FUN_100681a0(0x101286c8);
    puVar3 = local_9c;
    puVar5 = auStackY_198;
    for (iVar1 = 0x25; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    thunk_FUN_10068400(0x101286f8);
  }
  local_8 = 0x10065ba4;
  __chkesp();
  return;
}

