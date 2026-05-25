/* Ghidra decompiled: sound.dll */
/* Function: FUN_1003e520 @ 0x1003E520 */


undefined4 __cdecl FUN_1003e520(uint *param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 local_50 [19];
  
  puVar4 = local_50;
  for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  uVar3 = *param_1 & 0xff ^ (int)(*param_1 & 0xff) >> 4;
  uVar3 = uVar3 ^ (int)uVar3 >> 2;
  uVar1 = (uVar3 ^ uVar3 / 2) & 1;
  uVar3 = *(uint *)(&DAT_10064a80 + (*param_1 & 0x7f) * 4);
  *param_2 = uVar3 & 0xf;
  if ((uVar3 & 0x10) == 0) {
    *param_3 = *param_3 + 1;
    if (uVar1 == 0) {
      *param_3 = *param_3 + 1;
      *param_2 = 0xffffffff;
    }
  }
  else if (uVar1 != 0) {
    *param_3 = *param_3 + 1;
  }
  return 0;
}

