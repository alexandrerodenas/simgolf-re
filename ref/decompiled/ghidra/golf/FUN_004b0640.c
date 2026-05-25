/* Ghidra decompiled: golf.exe */
/* Function: FUN_004b0640 @ 0x004B0640 */


void FUN_004b0640(int param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *(int *)(param_1 + 0x148);
  if (*(uint *)(iVar2 + 8) < *(uint *)(param_1 + 0xe8)) {
    puVar1 = (uint *)(iVar2 + 0xc);
    while( true ) {
      uVar4 = *puVar1;
      if (uVar4 < 8) {
        (**(code **)(*(int *)(param_1 + 0x14c) + 4))
                  (param_1,param_2,param_3,param_4,iVar2 + 0x18,puVar1,8);
        uVar4 = *puVar1;
      }
      if (uVar4 != 8) {
        return;
      }
      iVar3 = (**(code **)(*(int *)(param_1 + 0x150) + 4))(param_1,iVar2 + 0x18);
      if (iVar3 == 0) break;
      if (*(int *)(iVar2 + 0x10) != 0) {
        *param_3 = *param_3 + 1;
        *(undefined4 *)(iVar2 + 0x10) = 0;
      }
      *puVar1 = 0;
      uVar4 = *(int *)(iVar2 + 8) + 1;
      *(uint *)(iVar2 + 8) = uVar4;
      if (*(uint *)(param_1 + 0xe8) <= uVar4) {
        return;
      }
    }
    if (*(int *)(iVar2 + 0x10) == 0) {
      *param_3 = *param_3 + -1;
      *(undefined4 *)(iVar2 + 0x10) = 1;
    }
  }
  return;
}

