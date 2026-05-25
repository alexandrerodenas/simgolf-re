/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30004a50 @ 0x30004A50 */


uint __cdecl FUN_30004a50(uint param_1,byte *param_2,uint param_3,int *param_4,undefined4 *param_5)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  int local_c;
  undefined4 local_8;
  
  iVar2 = 0;
  uVar1 = 0;
  local_c = 0;
  local_8 = 1;
  if (0 < (int)(param_1 - param_3)) {
    pbVar4 = param_2 + param_3 * 4;
    pbVar3 = param_2;
    do {
      if (uVar1 < (uint)(*(int *)pbVar4 - *(int *)pbVar3)) {
        uVar1 = *(int *)pbVar4 - *(int *)pbVar3;
        local_c = iVar2;
      }
      iVar2 = iVar2 + 1;
      pbVar4 = pbVar4 + 4;
      pbVar3 = pbVar3 + 4;
    } while (iVar2 < (int)(param_1 - param_3));
    if (uVar1 != 0) goto LAB_30004ab4;
  }
  uVar1 = (uint)(((ulonglong)(uint)(*(int *)(param_2 + param_1 * 4) - *(int *)param_2) *
                 (ulonglong)param_3) / (ulonglong)param_1);
LAB_30004ab4:
  iVar2 = 0;
  if (0 < (int)param_1) {
    do {
      if ((*param_2 & 1) == 0) {
        local_8 = 0;
        break;
      }
      iVar2 = iVar2 + 1;
      param_2 = param_2 + 4;
    } while (iVar2 < (int)param_1);
  }
  *param_5 = local_8;
  *param_4 = local_c;
  return uVar1;
}

