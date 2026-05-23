/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1007b1a0 @ 0x1007B1A0 */
/* Body size: 465 addresses */


void __cdecl FUN_1007b1a0(int *param_1,int param_2,uint param_3)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_50 [16];
  byte local_10 [4];
  int local_c;
  int local_8;
  
  puVar3 = local_50;
  for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if ((param_1[0x1a] & 1U) == 0) {
    FUN_10078fe0(param_1,"Missing IHDR before hIST");
  }
  else {
    if ((param_1[0x1a] & 4U) != 0) {
      FUN_10079040((int)param_1,"Invalid hIST after IDAT");
      FUN_10079510(param_1,param_3);
      goto LAB_1007b360;
    }
    if ((param_1[0x1a] & 2U) == 0) {
      FUN_10079040((int)param_1,"Missing PLTE before hIST");
      FUN_10079510(param_1,param_3);
      goto LAB_1007b360;
    }
    if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x40) != 0)) {
      FUN_10079040((int)param_1,"Duplicate hIST chunk");
      FUN_10079510(param_1,param_3);
      goto LAB_1007b360;
    }
  }
  if (param_3 == (uint)*(ushort *)(param_1 + 0x46) * 2) {
    local_8 = (int)param_3 / 2;
    iVar2 = FUN_10078e60(param_1,local_8 << 1);
    param_1[0x7d] = iVar2;
    param_1[0x1b] = param_1[0x1b] | 0x4000;
    for (local_c = 0; local_c < local_8; local_c = local_c + 1) {
      FUN_100794b0(param_1,local_10,2);
      sVar1 = FUN_10079470(local_10);
      *(short *)(param_1[0x7d] + local_c * 2) = sVar1;
    }
    iVar2 = FUN_10079510(param_1,0);
    if (iVar2 == 0) {
      FUN_1007dc20((int)param_1,param_2,param_1[0x7d]);
    }
  }
  else {
    FUN_10079040((int)param_1,"Incorrect hIST chunk length");
    FUN_10079510(param_1,param_3);
  }
LAB_1007b360:
  local_8 = 0x1007b36d;
  __chkesp();
  return;
}

