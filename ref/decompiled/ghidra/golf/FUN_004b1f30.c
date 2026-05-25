/* Ghidra decompiled: golf.exe */
/* Function: FUN_004b1f30 @ 0x004B1F30 */


void FUN_004b1f30(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x6c);
  *(undefined4 **)(param_1 + 0x164) = puVar1;
  *puVar1 = &LAB_004b1f70;
  puVar2 = puVar1 + 0x17;
  iVar3 = 4;
  do {
    puVar2[-4] = 0;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar1[0x10] = 0;
  return;
}

