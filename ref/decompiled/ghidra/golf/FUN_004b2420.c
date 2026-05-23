/* Ghidra decompiled: golf.exe */
/* Function: FUN_004b2420 @ 0x004B2420 */
/* Body size: 60 addresses */


void FUN_004b2420(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x20) + 0x14);
  iVar2 = (*(code *)puVar1[3])(*(int *)(param_1 + 0x20));
  if (iVar2 == 0) {
    *(undefined4 *)(**(int **)(param_1 + 0x20) + 0x14) = 0x16;
    (**(code **)**(undefined4 **)(param_1 + 0x20))(*(undefined4 **)(param_1 + 0x20));
  }
  *(undefined4 *)(param_1 + 0x10) = *puVar1;
  *(undefined4 *)(param_1 + 0x14) = puVar1[1];
  return;
}

