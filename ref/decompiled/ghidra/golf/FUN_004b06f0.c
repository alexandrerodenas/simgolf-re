/* Ghidra decompiled: golf.exe */
/* Function: FUN_004b06f0 @ 0x004B06F0 */


void FUN_004b06f0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  
  iVar4 = param_1;
  puVar2 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x68);
  *(undefined4 **)(param_1 + 0x150) = puVar2;
  *puVar2 = &LAB_004b07b0;
  if (param_2 == 0) {
    iVar4 = (**(code **)(*(int *)(param_1 + 4) + 4))(param_1,1,0x500);
    piVar5 = puVar2 + 6;
    iVar6 = 10;
    do {
      *piVar5 = iVar4;
      piVar5 = piVar5 + 1;
      iVar4 = iVar4 + 0x80;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    puVar2[0x10] = 0;
  }
  else {
    piVar5 = (int *)(param_1 + 0x34);
    piVar1 = (int *)(param_1 + 0x3c);
    param_1 = 0;
    if (0 < *piVar5) {
      puVar7 = (undefined4 *)(*piVar1 + 0xc);
      puVar2 = puVar2 + 0x10;
      do {
        iVar6 = *(int *)(iVar4 + 4);
        uVar3 = FUN_004b04d0(puVar7[5],*puVar7,*puVar7);
        uVar3 = FUN_004b04d0(puVar7[4],puVar7[-1],uVar3);
        uVar3 = (**(code **)(iVar6 + 0x14))(iVar4,1,0,uVar3);
        *puVar2 = uVar3;
        param_1 = param_1 + 1;
        puVar2 = puVar2 + 1;
        puVar7 = puVar7 + 0x15;
      } while (param_1 < *(int *)(iVar4 + 0x34));
      return;
    }
  }
  return;
}

