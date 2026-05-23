/* Ghidra decompiled: golf.exe */
/* Function: FUN_004961d0 @ 0x004961D0 */
/* Body size: 350 addresses */


void __fastcall FUN_004961d0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)(param_1 + 0x574) = DAT_0083ff1c;
  *(undefined4 *)(param_1 + 0x57c) = DAT_004e4770;
  *(undefined4 *)(param_1 + 0x588) = 0;
  *(undefined4 *)(param_1 + 0x580) = DAT_0083ff20;
  *(undefined4 *)(param_1 + 0x584) = DAT_004e4774;
  *(undefined4 *)(param_1 + 0x58c) = DAT_0083ff20;
  *(undefined4 *)(param_1 + 0x59c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x598) = 0;
  *(undefined4 *)(param_1 + 0x590) = DAT_004e476c;
  *(undefined4 *)(param_1 + 0x594) = DAT_004e4768;
  *(undefined4 *)(param_1 + 0x5a0) = DAT_004e4764;
  *(undefined4 *)(param_1 + 0x5a4) = 0;
  *(undefined4 *)(param_1 + 0x5ac) = 0;
  *(undefined4 *)(param_1 + 0x5b0) = 0;
  *(undefined4 *)(param_1 + 0x5b4) = 0;
  *(undefined4 *)(param_1 + 0x5b8) = 0;
  *(undefined4 *)(param_1 + 0x5a8) = DAT_004e4778;
  *(undefined4 *)(param_1 + 0x5bc) = DAT_004e477c;
  *(undefined4 *)(param_1 + 0x5c4) = DAT_004e4780;
  *(undefined4 *)(param_1 + 0x5c8) = DAT_004e4784;
  *(undefined4 *)(param_1 + 0x5cc) = DAT_004e4788;
  *(undefined4 *)(param_1 + 0x5d0) = DAT_004e478c;
  puVar3 = (undefined4 *)(param_1 + 0x5e8);
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 4;
    puVar3[-3] = *(undefined4 *)((int)&DAT_0083ff24 + iVar1);
    *puVar3 = *(undefined4 *)((int)&DAT_0083ff30 + iVar1);
    puVar3[3] = *(undefined4 *)((int)&DAT_0083ff3c + iVar1);
    puVar3[6] = *(undefined4 *)((int)&DAT_0083ff48 + iVar1);
    puVar3 = puVar3 + 1;
    iVar1 = iVar2;
  } while (iVar2 < 0xc);
  *(undefined4 *)(param_1 + 0x5d4) = DAT_0083ff58;
  *(undefined4 *)(param_1 + 0x5d8) = DAT_0083ff5c;
  *(undefined4 *)(param_1 + 0x13ac) = 0;
  *(undefined4 *)(param_1 + 0x13b0) = 0;
  (**(code **)(*(int *)(param_1 + 0x60c) + 0x16c))();
  (**(code **)(*(int *)(param_1 + 0xcdc) + 0x16c))();
  FUN_00480610();
  return;
}

