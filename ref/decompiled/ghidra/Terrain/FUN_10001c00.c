/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10001c00 @ 0x10001C00 */


void __cdecl FUN_10001c00(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined4 local_58 [16];
  int local_18;
  int local_10;
  
  puVar7 = local_58;
  for (iVar5 = 0x15; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = 0xcccccccc;
    puVar7 = puVar7 + 1;
  }
  for (local_10 = 0; local_10 < *(int *)(param_2 + 8) >> 1; local_10 = local_10 + 1) {
    for (local_18 = 0; local_18 < *(int *)(param_2 + 4); local_18 = local_18 + 1) {
      puVar4 = (undefined1 *)(param_1 + (local_18 + *(int *)(param_2 + 4) * local_10) * 3);
      puVar6 = puVar4 + ((*(int *)(param_2 + 8) + -1) - local_10) * *(int *)(param_2 + 4) * 3;
      uVar1 = *puVar4;
      uVar2 = puVar4[1];
      uVar3 = puVar4[2];
      *puVar4 = *puVar6;
      puVar4[1] = puVar6[1];
      puVar4[2] = puVar6[2];
      *puVar6 = uVar1;
      puVar6[1] = uVar2;
      puVar6[2] = uVar3;
    }
  }
  return;
}

