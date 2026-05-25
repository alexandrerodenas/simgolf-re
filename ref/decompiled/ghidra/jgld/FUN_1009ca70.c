/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1009ca70 @ 0x1009CA70 */


uint __cdecl FUN_1009ca70(uint param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_44 [16];
  
  puVar3 = local_44;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if (param_2 == (byte *)0x0) {
    uVar1 = 0;
  }
  else {
    param_1 = param_1 ^ 0xffffffff;
    for (; 7 < param_3; param_3 = param_3 - 8) {
      uVar1 = *(uint *)(&DAT_10126e18 + ((param_1 ^ *param_2) & 0xff) * 4) ^ param_1 >> 8;
      uVar1 = *(uint *)(&DAT_10126e18 + ((uVar1 ^ param_2[1]) & 0xff) * 4) ^ uVar1 >> 8;
      uVar1 = *(uint *)(&DAT_10126e18 + ((uVar1 ^ param_2[2]) & 0xff) * 4) ^ uVar1 >> 8;
      uVar1 = *(uint *)(&DAT_10126e18 + ((uVar1 ^ param_2[3]) & 0xff) * 4) ^ uVar1 >> 8;
      uVar1 = *(uint *)(&DAT_10126e18 + ((uVar1 ^ param_2[4]) & 0xff) * 4) ^ uVar1 >> 8;
      uVar1 = *(uint *)(&DAT_10126e18 + ((uVar1 ^ param_2[5]) & 0xff) * 4) ^ uVar1 >> 8;
      uVar1 = *(uint *)(&DAT_10126e18 + ((uVar1 ^ param_2[6]) & 0xff) * 4) ^ uVar1 >> 8;
      param_1 = *(uint *)(&DAT_10126e18 + ((uVar1 ^ param_2[7]) & 0xff) * 4) ^ uVar1 >> 8;
      param_2 = param_2 + 8;
    }
    for (; param_3 != 0; param_3 = param_3 - 1) {
      param_1 = *(uint *)(&DAT_10126e18 + ((param_1 ^ *param_2) & 0xff) * 4) ^ param_1 >> 8;
      param_2 = param_2 + 1;
    }
    uVar1 = param_1 ^ 0xffffffff;
  }
  return uVar1;
}

