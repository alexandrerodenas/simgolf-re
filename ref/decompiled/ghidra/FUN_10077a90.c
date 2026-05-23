/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10077a90 @ 0x10077A90 */
/* Body size: 668 addresses */


void __cdecl FUN_10077a90(uint *param_1,byte *param_2,int param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_74 [25];
  uint local_10;
  byte *local_c;
  byte *local_8;
  
  puVar6 = local_74;
  for (iVar5 = 0x1c; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0xcccccccc;
    puVar6 = puVar6 + 1;
  }
  uVar2 = *param_1;
  if ((((char)param_1[2] == '\x02') && (param_3 != 0)) && (*(char *)((int)param_1 + 9) == '\b')) {
    local_8 = param_2;
    local_c = param_2;
    for (local_10 = 0; local_10 < uVar2; local_10 = local_10 + 1) {
      bVar1 = *local_8;
      pbVar3 = local_8 + 1;
      pbVar4 = local_8 + 2;
      local_8 = local_8 + 3;
      *local_c = *(byte *)(param_3 +
                          (((int)(uint)bVar1 >> 3) << 10 | ((int)(uint)*pbVar3 >> 3) << 5 |
                          (int)(uint)*pbVar4 >> 3));
      local_c = local_c + 1;
    }
    *(undefined1 *)(param_1 + 2) = 3;
    *(undefined1 *)((int)param_1 + 10) = 1;
    *(undefined1 *)((int)param_1 + 0xb) = *(undefined1 *)((int)param_1 + 9);
    param_1[1] = uVar2 * *(byte *)((int)param_1 + 0xb) + 7 >> 3;
  }
  else if ((((char)param_1[2] == '\x06') && (param_3 != 0)) && (*(char *)((int)param_1 + 9) == '\b')
          ) {
    local_8 = param_2;
    local_c = param_2;
    for (local_10 = 0; local_10 < uVar2; local_10 = local_10 + 1) {
      bVar1 = *local_8;
      pbVar3 = local_8 + 1;
      pbVar4 = local_8 + 2;
      local_8 = local_8 + 4;
      *local_c = *(byte *)(param_3 +
                          (((int)(uint)bVar1 >> 3) << 10 | ((int)(uint)*pbVar3 >> 3) << 5 |
                          (int)(uint)*pbVar4 >> 3));
      local_c = local_c + 1;
    }
    *(undefined1 *)(param_1 + 2) = 3;
    *(undefined1 *)((int)param_1 + 10) = 1;
    *(undefined1 *)((int)param_1 + 0xb) = *(undefined1 *)((int)param_1 + 9);
    param_1[1] = uVar2 * *(byte *)((int)param_1 + 0xb) + 7 >> 3;
  }
  else if ((((char)param_1[2] == '\x03') && (param_4 != 0)) && (*(char *)((int)param_1 + 9) == '\b')
          ) {
    local_8 = param_2;
    for (local_10 = 0; local_10 < uVar2; local_10 = local_10 + 1) {
      *local_8 = *(byte *)(param_4 + (uint)*local_8);
      local_8 = local_8 + 1;
    }
  }
  return;
}

