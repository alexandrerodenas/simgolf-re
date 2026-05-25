/* Ghidra decompiled: golf.exe */
/* Function: FUN_00474cb0 @ 0x00474CB0 */


void __fastcall FUN_00474cb0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 4) != 0) {
    (**(code **)(*DAT_0083ad50 + 0x8c))(*(int *)(param_1 + 4));
  }
  if ((DAT_00839ab0 == 0) && (iVar2 = *(int *)(param_1 + 0xac), iVar2 != 0)) {
    FUN_00483010();
    FUN_004a4ffc(iVar2);
    *(undefined4 *)(param_1 + 0xac) = 0;
  }
  piVar3 = (int *)(param_1 + 0x1b4);
  iVar2 = 0x28;
  do {
    if (*piVar3 != 0) {
      FUN_004a5007(*piVar3);
      *piVar3 = 0;
    }
    piVar3[-0x28] = -2;
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  uVar1 = DAT_004e4210;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x5c) = DAT_0083ad44;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8c) = 2;
  *(undefined4 *)(param_1 + 0x9c) = 2;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x90) = 2;
  *(undefined4 *)(param_1 + 0xa0) = 2;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x84) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x94) = 2;
  *(undefined4 *)(param_1 + 0xa4) = 2;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x98) = 2;
  *(undefined4 *)(param_1 + 0xa8) = 2;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}

