/* Ghidra decompiled: golf.exe */
/* Function: FUN_004b0560 @ 0x004B0560 */


void FUN_004b0560(int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x40);
  param_1[0x52] = (int)puVar1;
  *puVar1 = &LAB_004b05f0;
  if (param_1[0x2a] == 0) {
    if (param_2 != 0) {
      *(undefined4 *)(*param_1 + 0x14) = 4;
      (**(code **)*param_1)(param_1);
      return;
    }
    iVar3 = 0;
    if (0 < param_1[0xd]) {
      piVar4 = (int *)(param_1[0xf] + 0x1c);
      puVar1 = puVar1 + 6;
      do {
        uVar2 = (**(code **)(param_1[1] + 8))(param_1,1,*piVar4 << 3,piVar4[-4] << 3);
        *puVar1 = uVar2;
        iVar3 = iVar3 + 1;
        puVar1 = puVar1 + 1;
        piVar4 = piVar4 + 0x15;
      } while (iVar3 < param_1[0xd]);
    }
  }
  return;
}

