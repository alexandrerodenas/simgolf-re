/* Ghidra decompiled: golf.exe */
/* Function: FUN_00492bd0 @ 0x00492BD0 */
/* Body size: 229 addresses */


void __thiscall FUN_00492bd0(int param_1,int param_2)

{
  int iVar1;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  FUN_00486ec0();
  if ((*(int *)(param_1 + 0xc) != 0) &&
     (iVar1 = *(int *)(param_1 + 0x50) + param_2 * 0x20,
     *(int *)(*(int *)(param_1 + 0x50) + 0x1c + param_2 * 0x20) != 0)) {
    local_10 = *(int *)(iVar1 + 4);
    local_c = *(int *)(iVar1 + 8);
    local_8 = *(int *)(iVar1 + 0xc);
    local_4 = *(int *)(iVar1 + 0x10);
    local_18 = 0;
    local_14 = 0;
    FUN_0047b170(&local_18,&local_14);
    local_10 = local_10 + local_18;
    local_8 = local_8 + local_18;
    local_c = local_c + local_14;
    local_4 = local_4 + local_14;
    DAT_0083aac8 = *(int *)(param_1 + 0x10);
    if (DAT_0083aac8 == 0) {
      DAT_0083aac8 = DAT_0083ad44;
    }
    DAT_0083aad8 = *(undefined4 *)(param_1 + 0x18);
    DAT_004e42c4 = *(undefined4 *)(param_1 + 0x1c);
    FUN_00480220(*(undefined4 *)(iVar1 + 0x1c),&local_10);
  }
  return;
}

