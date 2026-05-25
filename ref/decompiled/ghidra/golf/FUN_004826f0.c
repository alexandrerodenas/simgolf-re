/* Ghidra decompiled: golf.exe */
/* Function: FUN_004826f0 @ 0x004826F0 */


undefined4 __thiscall FUN_004826f0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  char *pcVar7;
  uint uStack_304;
  char local_300 [768];
  
  if (*(int *)(param_1 + 0x74) != 0) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x74) + 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x10))(local_300,0,0x100);
    }
    pcVar7 = (char *)(param_2 + 8);
    bVar6 = 0;
    if (*(short *)(param_2 + 6) != 0) {
      iVar4 = (ushort)(*(short *)(param_2 + 6) - 1) + 1;
      do {
        uVar5 = (uint)(byte)pcVar7[1];
        bVar6 = bVar6 + *pcVar7;
        pcVar7 = pcVar7 + 2;
        if (uVar5 == 0) {
          uVar5 = 0x100;
        }
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
          uStack_304 = (uint)bVar6;
          iVar3 = uStack_304 * 3;
          bVar6 = bVar6 + 1;
          local_300[iVar3] = *pcVar7;
          local_300[iVar3 + 1] = pcVar7[1];
          local_300[iVar3 + 2] = pcVar7[2];
          pcVar7 = pcVar7 + 3;
        }
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    puVar2 = *(undefined4 **)(param_1 + 0x74);
    if (puVar2[1] == 0) {
      (**(code **)*puVar2)();
    }
    (**(code **)(*(int *)puVar2[1] + 0x14))(local_300,0,0x100);
    return 0;
  }
  return 0;
}

