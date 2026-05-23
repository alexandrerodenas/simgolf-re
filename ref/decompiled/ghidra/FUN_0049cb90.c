/* Ghidra decompiled: golf.exe */
/* Function: FUN_0049cb90 @ 0x0049CB90 */
/* Body size: 301 addresses */


undefined4 __fastcall FUN_0049cb90(HPSTR param_1)

{
  int iVar1;
  DWORD DVar2;
  uint cch;
  LONG LVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  HPSTR local_4;
  
  local_4 = param_1;
  if (*(int *)(param_1 + 0xd8) == 0) {
    iVar1 = FUN_004a4db0(&local_4,0,*(undefined4 *)(param_1 + 0x940),1);
    if (iVar1 != 0) {
      return 0;
    }
    uVar6 = *(undefined4 *)(param_1 + 0x674);
    uVar7 = *(undefined4 *)(param_1 + 0x940);
    pcVar5 = s_Read_data__still_frame_004e49b4;
  }
  else {
    iVar1 = FUN_004a4db0(&local_4,*(int *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0x940),0);
    if (iVar1 == 0x12) {
      return 0;
    }
    if (local_4 == (HPSTR)0x0) {
      uVar7 = 0;
      uVar6 = 0;
      DVar2 = timeGetTime();
      FUN_004a0320(s_read_frame___004e498c,s_Null_data_in_fifo__add_004e499c,DVar2,uVar6,uVar7);
      return 0;
    }
    for (uVar4 = *(uint *)(param_1 + 0xd8); uVar4 != 0; uVar4 = uVar4 - LVar3) {
      cch = 0x10000;
      if (uVar4 < 0x10001) {
        cch = uVar4;
      }
      LVar3 = mmioRead(*(HMMIO *)(param_1 + 0xbc),local_4,cch);
      if (LVar3 == 0) {
        *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) & 0xffff7fff;
        return 0;
      }
      local_4 = local_4 + LVar3;
    }
    uVar6 = *(undefined4 *)(param_1 + 0x674);
    uVar7 = *(undefined4 *)(param_1 + 0x940);
    pcVar5 = s_Read_data__normal_frame_004e4974;
  }
  FUN_004a0320(s_read_frame___004e498c,pcVar5,uVar7,uVar6,0);
  FUN_0049c940();
  return 1;
}

