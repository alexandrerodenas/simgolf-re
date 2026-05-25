/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1007b9b0 @ 0x1007B9B0 */


void __cdecl FUN_1007b9b0(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_54 [16];
  short local_14;
  undefined1 local_12;
  undefined1 local_11;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  byte local_c [2];
  undefined1 local_a;
  undefined1 local_9;
  undefined4 local_8;
  
  puVar2 = local_54;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if ((param_1[0x1a] & 1U) == 0) {
    FUN_10078fe0(param_1,"Out of place tIME chunk");
  }
  else if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x200) != 0)) {
    FUN_10079040((int)param_1,"Duplicate tIME chunk");
    FUN_10079510(param_1,param_3);
    goto LAB_1007bad1;
  }
  if ((param_1[0x1a] & 4U) != 0) {
    param_1[0x1a] = param_1[0x1a] | 8;
  }
  if (param_3 == 7) {
    FUN_100794b0(param_1,local_c,7);
    iVar1 = FUN_10079510(param_1,0);
    if (iVar1 == 0) {
      local_e = local_8._2_1_;
      local_f = local_8._1_1_;
      local_10 = (undefined1)local_8;
      local_11 = local_9;
      local_12 = local_a;
      local_14 = FUN_10079470(local_c);
      FUN_1007e400((int)param_1,param_2,(undefined4 *)&local_14);
    }
  }
  else {
    FUN_10079040((int)param_1,"Incorrect tIME chunk length");
    FUN_10079510(param_1,param_3);
  }
LAB_1007bad1:
  local_8 = 0x1007bade;
  __chkesp();
  return;
}

