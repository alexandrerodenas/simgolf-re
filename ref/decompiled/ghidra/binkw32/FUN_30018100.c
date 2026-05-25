/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30018100 @ 0x30018100 */


void __cdecl FUN_30018100(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x20);
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  *(undefined4 *)(param_1 + 0x34) = uVar4;
  return;
}

