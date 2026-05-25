/* Ghidra decompiled: golf.exe */
/* Function: FUN_004852e0 @ 0x004852E0 */


undefined4 * __fastcall FUN_004852e0(undefined4 *param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 *unaff_FS_OFFSET;
  char local_18 [4];
  char local_14 [4];
  char local_10;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7e48;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  FUN_00484150();
  *param_1 = &PTR_FUN_004badf8;
  local_14[0] = s_Voice_Rx_004e43c8[4];
  local_14[1] = s_Voice_Rx_004e43c8[5];
  local_14[2] = s_Voice_Rx_004e43c8[6];
  local_14[3] = s_Voice_Rx_004e43c8[7];
  local_4 = 0;
  local_18[0] = s_Voice_Rx_004e43c8[0];
  local_18[1] = s_Voice_Rx_004e43c8[1];
  local_18[2] = s_Voice_Rx_004e43c8[2];
  local_18[3] = s_Voice_Rx_004e43c8[3];
  local_10 = s_Voice_Rx_004e43c8[8];
  FUN_00484260(6);
  pcVar2 = operator_new(10);
  uVar3 = 0xffffffff;
  param_1[0x14] = pcVar2;
  pcVar5 = local_18;
  do {
    pcVar6 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar6 + -uVar3;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar2 = pcVar2 + 1;
  }
  *unaff_FS_OFFSET = local_c;
  return param_1;
}

