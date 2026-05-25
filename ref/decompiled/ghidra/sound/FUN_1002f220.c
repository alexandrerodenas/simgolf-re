/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002f220 @ 0x1002F220 */


undefined4 * __fastcall FUN_1002f220(undefined4 *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  char *pcVar8;
  char local_18 [4];
  char local_14 [4];
  char local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10059000;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  param_1[1] = 0x7f;
  param_1[2] = 0;
  puVar7 = param_1 + 3;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  param_1[0xc] = 0;
  *param_1 = &PTR_LAB_1005bae0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x11] = 0;
  local_4 = 0;
  param_1[0xe] = 1000;
  if ((int *)param_1[0x10] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x10] + 4))(1000);
  }
  param_1[0x15] = 0;
  *param_1 = &PTR_LAB_1005c2ec;
  local_4 = 1;
  param_1[0x16] = 0;
  local_18[0] = s_Voice_Tx_10063e8c[0];
  local_18[1] = s_Voice_Tx_10063e8c[1];
  local_18[2] = s_Voice_Tx_10063e8c[2];
  local_18[3] = s_Voice_Tx_10063e8c[3];
  local_14[0] = s_Voice_Tx_10063e8c[4];
  local_14[1] = s_Voice_Tx_10063e8c[5];
  local_14[2] = s_Voice_Tx_10063e8c[6];
  local_14[3] = s_Voice_Tx_10063e8c[7];
  local_10 = s_Voice_Tx_10063e8c[8];
  pcVar2 = operator_new(10);
  uVar4 = 0xffffffff;
  param_1[0x14] = pcVar2;
  pcVar6 = local_18;
  do {
    pcVar8 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar8 + -uVar4;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar2 = pcVar2 + 1;
  }
  thunk_FUN_1002ad10(param_1,7);
  ExceptionList = pvStack_c;
  return param_1;
}

