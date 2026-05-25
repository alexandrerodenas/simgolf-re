/* Ghidra decompiled: golf.exe */
/* Function: FUN_004ae4d0 @ 0x004AE4D0 */


void FUN_004ae4d0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x1c);
    *(undefined4 *)(param_1 + 0x14) = uVar2;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined1 **)(iVar1 + 8) = &LAB_004ae510;
  *(undefined1 **)(iVar1 + 0xc) = &LAB_004ae540;
  *(code **)(iVar1 + 0x10) = FUN_004ae590;
  *(undefined4 *)(iVar1 + 0x14) = param_2;
  return;
}

