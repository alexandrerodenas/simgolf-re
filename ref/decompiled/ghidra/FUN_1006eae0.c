/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006eae0 @ 0x1006EAE0 */
/* Body size: 338 addresses */


void __cdecl
FUN_1006eae0(int param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6,
            uint *param_7,uint *param_8,uint *param_9)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_50 [16];
  uint local_10;
  int local_c;
  int local_8;
  
  puVar2 = local_50;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if ((((param_1 != 0) && (param_2 != (uint *)0x0)) && (param_3 != (uint *)0x0)) &&
     (((param_4 != (uint *)0x0 && (param_5 != (uint *)0x0)) && (param_6 != (uint *)0x0)))) {
    *param_3 = *param_2;
    *param_4 = param_2[1];
    *param_5 = (uint)(byte)param_2[6];
    *param_6 = (uint)*(byte *)((int)param_2 + 0x19);
    if (param_8 != (uint *)0x0) {
      *param_8 = (uint)*(byte *)((int)param_2 + 0x1a);
    }
    if (param_9 != (uint *)0x0) {
      *param_9 = (uint)*(byte *)((int)param_2 + 0x1b);
    }
    if (param_7 != (uint *)0x0) {
      *param_7 = (uint)(byte)param_2[7];
    }
    if (*param_6 == 3) {
      local_c = 1;
    }
    else if ((*param_6 & 2) == 0) {
      local_c = 1;
    }
    else {
      local_c = 3;
    }
    if ((*param_6 & 4) != 0) {
      local_c = local_c + 1;
    }
    local_8 = *param_5 * local_c;
    local_10 = local_8 + 7 >> 3;
    if ((uint)(0x7fffffff / (ulonglong)local_10) < *param_3) {
      FUN_10079040(param_1,"Width too large for libpng to process image data.");
    }
  }
  local_8 = 0x1006ec2e;
  __chkesp();
  return;
}

