/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100799e0 @ 0x100799E0 */


void __cdecl FUN_100799e0(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_54 [16];
  byte local_14;
  undefined1 local_13;
  undefined1 local_12;
  int local_10;
  int local_c;
  int local_8;
  
  puVar2 = local_54;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if ((param_1[0x1a] & 1U) == 0) {
    FUN_10078fe0(param_1,"Missing IHDR before PLTE");
  }
  else {
    if ((param_1[0x1a] & 4U) != 0) {
      FUN_10079040((int)param_1,"Invalid PLTE after IDAT");
      FUN_10079510(param_1,param_3);
      goto LAB_10079c01;
    }
    if ((param_1[0x1a] & 2U) != 0) {
      FUN_10078fe0(param_1,"Duplicate PLTE chunk");
    }
  }
  param_1[0x1a] = param_1[0x1a] | 2;
  if (param_3 % 3 != 0) {
    if (*(char *)((int)param_1 + 0x126) != '\x03') {
      FUN_10079040((int)param_1,"Invalid palette chunk");
      FUN_10079510(param_1,param_3);
      goto LAB_10079c01;
    }
    FUN_10078fe0(param_1,"Invalid palette chunk");
  }
  local_c = (int)param_3 / 3;
  local_8 = FUN_100786b0(param_1,local_c,3);
  param_1[0x1b] = param_1[0x1b] | 0x1000;
  for (local_10 = 0; local_10 < local_c; local_10 = local_10 + 1) {
    FUN_100794b0(param_1,&local_14,3);
    *(byte *)(local_8 + local_10 * 3) = local_14;
    *(undefined1 *)(local_8 + 1 + local_10 * 3) = local_13;
    *(undefined1 *)(local_8 + 2 + local_10 * 3) = local_12;
  }
  FUN_10079510(param_1,0);
  param_1[0x45] = local_8;
  *(undefined2 *)(param_1 + 0x46) = (undefined2)local_c;
  FUN_1007e020((int)param_1,param_2,local_8,(undefined2)local_c);
  if ((((*(char *)((int)param_1 + 0x126) == '\x03') && (param_2 != 0)) &&
      ((*(uint *)(param_2 + 8) & 0x10) != 0)) &&
     (*(ushort *)(param_1 + 0x46) < *(ushort *)((int)param_1 + 0x11a))) {
    FUN_10079040((int)param_1,"Truncating incorrect tRNS chunk length");
    *(short *)((int)param_1 + 0x11a) = (short)param_1[0x46];
  }
LAB_10079c01:
  local_8 = 0x10079c0e;
  __chkesp();
  return;
}

