/* Ghidra decompiled: sound.dll */
/* Function: FUN_1003aef0 @ 0x1003AEF0 */
/* Body size: 608 addresses */


void __cdecl FUN_1003aef0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  int local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  FUN_1003aa50();
  *param_1 = 0x3c;
  param_1[1] = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0x3c;
  param_1[5] = 0;
  for (local_8 = 0; local_8 < 0x1e; local_8 = local_8 + 1) {
    param_1[local_8 + 6] = 0;
  }
  for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
    param_1[local_8 + 0x24] = 0;
    param_1[local_8 + 0x27] = 0;
  }
  for (local_8 = 0; local_8 < 0x168; local_8 = local_8 + 1) {
    param_1[local_8 + 0x2a] = 0;
  }
  param_1[0x192] = 0xb4;
  param_1[0x195] = 0x3f800000;
  param_1[0x1a1] = 1;
  param_1[0x1a2] = 0;
  for (local_8 = 0; local_8 < 0xa6; local_8 = local_8 + 1) {
    param_1[local_8 + 0x1a3] = 0;
    param_1[local_8 + 0x249] = 0;
  }
  param_1[0x2ef] = 0;
  param_1[0x2f0] = 0;
  param_1[0x2f1] = 0;
  param_1[0x2f2] = 0;
  param_1[0x2f3] = 0;
  param_1[0x2f4] = 0;
  param_1[0x2f5] = 0;
  param_1[0x2f6] = 2;
  param_1[0x2f7] = 5;
  *(undefined2 *)(param_1 + 0x2f8) = 0xad57;
  *(undefined2 *)((int)param_1 + 0xbe2) = 0xdee2;
  *(undefined2 *)(param_1 + 0x2f9) = 0x78ac;
  *(undefined2 *)((int)param_1 + 0xbe6) = 0xd818;
  *(undefined2 *)(param_1 + 0x2fa) = 0x4236;
  param_1[0x2fb] = 0;
  param_1[0x2fc] = 0;
  param_1[0x2fd] = 0;
  param_1[0x2fe] = 0;
  param_1[0x2ff] = 0;
  local_8 = 0x1003b14c;
  FUN_100431ce();
  return;
}

