/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1007b380 @ 0x1007B380 */


void __cdecl FUN_1007b380(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_5c [16];
  uint local_1c;
  int local_18;
  int local_14;
  byte local_10 [4];
  byte local_c [4];
  uint local_8;
  
  puVar2 = local_5c;
  for (iVar1 = 0x16; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if ((param_1[0x1a] & 1U) == 0) {
    FUN_10078fe0(param_1,"Missing IHDR before pHYS");
  }
  else {
    if ((param_1[0x1a] & 4U) != 0) {
      FUN_10079040((int)param_1,"Invalid pHYS after IDAT");
      FUN_10079510(param_1,param_3);
      goto LAB_1007b4ba;
    }
    if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x80) != 0)) {
      FUN_10079040((int)param_1,"Duplicate pHYS chunk");
      FUN_10079510(param_1,param_3);
      goto LAB_1007b4ba;
    }
  }
  if (param_3 == 9) {
    FUN_100794b0(param_1,local_10,9);
    iVar1 = FUN_10079510(param_1,0);
    if (iVar1 == 0) {
      local_14 = FUN_100793b0(local_10);
      local_18 = FUN_100793b0(local_c);
      local_1c = local_8 & 0xff;
      FUN_1007dfc0((int)param_1,param_2,local_14,local_18,(char)local_8);
    }
  }
  else {
    FUN_10079040((int)param_1,"Incorrect pHYs chunk length");
    FUN_10079510(param_1,param_3);
  }
LAB_1007b4ba:
  local_8 = 0x1007b4c7;
  __chkesp();
  return;
}

