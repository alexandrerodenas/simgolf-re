/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100045f0 @ 0x100045F0 */


void __fastcall FUN_100045f0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_4c [16];
  int local_c;
  
  puVar2 = local_4c;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  for (local_c = 0; local_c < 0x10; local_c = local_c + 1) {
    *(undefined4 *)(param_1 + 4 + local_c * 4) = 0;
  }
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
  return;
}

