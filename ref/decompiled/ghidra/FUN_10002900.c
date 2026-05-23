/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10002900 @ 0x10002900 */
/* Body size: 480 addresses */


float10 __fastcall FUN_10002900(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_68 [16];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  puVar2 = local_68;
  for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_10 = *(float *)(&DAT_100b28cc + *(int *)(param_1 + 4) * 0xc);
  if (*(float *)(&DAT_100b28cc + *(int *)(param_1 + 0x44) * 0xc) < local_10) {
    local_10 = *(float *)(&DAT_100b28cc + *(int *)(param_1 + 0x44) * 0xc);
  }
  if (local_10 <= *(float *)(&DAT_100b28cc + *(int *)(param_1 + 0x7c) * 0xc)) {
    local_14 = local_10;
  }
  else {
    local_14 = *(float *)(&DAT_100b28cc + *(int *)(param_1 + 0x7c) * 0xc);
  }
  if (local_14 <= *(float *)(&DAT_100b28cc + *(int *)(param_1 + 0xb0) * 0xc)) {
    local_18 = local_14;
  }
  else {
    local_18 = *(float *)(&DAT_100b28cc + *(int *)(param_1 + 0xb0) * 0xc);
  }
  if (local_18 <= *(float *)(&DAT_100b28cc + *(int *)(param_1 + 400) * 0xc)) {
    local_1c = local_18;
  }
  else {
    local_1c = *(float *)(&DAT_100b28cc + *(int *)(param_1 + 400) * 0xc);
  }
  if (local_1c <= *(float *)(&DAT_100b28cc + *(int *)(param_1 + 0x158) * 0xc)) {
    local_20 = local_1c;
  }
  else {
    local_20 = *(float *)(&DAT_100b28cc + *(int *)(param_1 + 0x158) * 0xc);
  }
  if (local_20 <= *(float *)(&DAT_100b28cc + *(int *)(param_1 + 0xe8) * 0xc)) {
    local_24 = local_20;
  }
  else {
    local_24 = *(float *)(&DAT_100b28cc + *(int *)(param_1 + 0xe8) * 0xc);
  }
  if (local_24 <= *(float *)(&DAT_100b28cc + *(int *)(param_1 + 8) * 0xc)) {
    local_28 = local_24;
  }
  else {
    local_28 = *(float *)(&DAT_100b28cc + *(int *)(param_1 + 8) * 0xc);
  }
  return (float10)local_28;
}

