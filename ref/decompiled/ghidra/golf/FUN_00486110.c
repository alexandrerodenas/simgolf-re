/* Ghidra decompiled: golf.exe */
/* Function: FUN_00486110 @ 0x00486110 */


int __thiscall
FUN_00486110(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  
  FUN_004860d0();
  if (param_6 == 0) {
    return 3;
  }
  FUN_00486250(0x40);
  uVar2 = 0x2020;
  if ((*(uint *)(param_6 + 0x9c) & 0x1000) == 0) {
    uVar2 = 0x102020;
  }
  iVar3 = FUN_004806c0(param_2,param_3,param_4,param_5,0,uVar2,param_6,0,0);
  if (iVar3 == 0) {
    param_1[0xad] = 0;
    FUN_00476310(DAT_0083afe0,DAT_004e43fc,DAT_004e4400,DAT_004e4404);
    FUN_0047ab00(0x7f01);
    uVar4 = 0xffffffff;
    param_1[0x168] = 0;
    pcVar5 = (char *)param_1[0x15d];
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    param_1[0x169] = ~uVar4 - 1;
    (**(code **)(*param_1 + 0x120))();
    FUN_00486cf0(&LAB_00486b70,param_1,500,5);
    (**(code **)(*param_1 + 0x120))();
    iVar3 = 0;
  }
  return iVar3;
}

