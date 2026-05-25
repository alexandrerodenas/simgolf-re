/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10079100 @ 0x10079100 */


void __cdecl FUN_10079100(int param_1,int param_2,undefined4 *param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_50 [16];
  uint local_10;
  int local_c;
  int local_8;
  
  puVar3 = local_50;
  for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_8 = 0;
  local_c = 0;
  while (local_c < 4) {
    bVar1 = *(byte *)(param_1 + local_c + 0x11c);
    local_10 = (uint)bVar1;
    local_c = local_c + 1;
    if (((local_10 < 0x29) || (0x7a < local_10)) || ((0x5a < local_10 && (local_10 < 0x61)))) {
      *(undefined1 *)(param_2 + local_8) = 0x5b;
      *(char *)(param_2 + local_8 + 1) =
           "0123456789ABCDEFlibpng error: %s\n"[(int)(local_10 & 0xf0) >> 4];
      *(char *)(param_2 + local_8 + 2) = "0123456789ABCDEFlibpng error: %s\n"[local_10 & 0xf];
      *(undefined1 *)(param_2 + local_8 + 3) = 0x5d;
      local_8 = local_8 + 4;
    }
    else {
      *(byte *)(param_2 + local_8) = bVar1;
      local_8 = local_8 + 1;
    }
  }
  if (param_3 == (undefined4 *)0x0) {
    *(undefined1 *)(param_2 + local_8) = 0;
  }
  else {
    *(undefined1 *)(param_2 + local_8) = 0x3a;
    *(undefined1 *)(param_2 + local_8 + 1) = 0x20;
    local_8 = local_8 + 2;
    FUN_1007f3a0((undefined4 *)(param_2 + local_8),param_3,0x40);
    *(undefined1 *)(param_2 + local_8 + 0x3f) = 0;
  }
  local_8 = 0x10079242;
  __chkesp();
  return;
}

