/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1004fe90 @ 0x1004FE90 */
/* Body size: 309 addresses */


uint __cdecl FUN_1004fe90(uint param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == (byte *)0x0) {
    return 0;
  }
  uVar1 = ~param_1;
  if (7 < param_3) {
    uVar2 = param_3 >> 3;
    do {
      param_3 = param_3 - 8;
      uVar1 = *(uint *)(&DAT_1005728c + (uVar1 & 0xff ^ (uint)*param_2) * 4) ^ uVar1 >> 8;
      uVar1 = *(uint *)(&DAT_1005728c + (uVar1 & 0xff ^ (uint)param_2[1]) * 4) ^ uVar1 >> 8;
      uVar1 = *(uint *)(&DAT_1005728c + (uVar1 & 0xff ^ (uint)param_2[2]) * 4) ^ uVar1 >> 8;
      uVar1 = *(uint *)(&DAT_1005728c + (uVar1 & 0xff ^ (uint)param_2[3]) * 4) ^ uVar1 >> 8;
      uVar1 = *(uint *)(&DAT_1005728c + (uVar1 & 0xff ^ (uint)param_2[4]) * 4) ^ uVar1 >> 8;
      uVar1 = *(uint *)(&DAT_1005728c + (uVar1 & 0xff ^ (uint)param_2[5]) * 4) ^ uVar1 >> 8;
      uVar1 = *(uint *)(&DAT_1005728c + (uVar1 & 0xff ^ (uint)param_2[6]) * 4) ^ uVar1 >> 8;
      uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_1005728c + (uVar1 & 0xff ^ (uint)param_2[7]) * 4);
      param_2 = param_2 + 8;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_1005728c + (uVar1 & 0xff ^ (uint)*param_2) * 4);
    param_2 = param_2 + 1;
  }
  return ~uVar1;
}

