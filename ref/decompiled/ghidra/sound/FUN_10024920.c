/* Ghidra decompiled: sound.dll */
/* Function: FUN_10024920 @ 0x10024920 */


undefined4 FUN_10024920(int param_1,uint param_2)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  int local_c;
  uint local_8;
  int local_4;
  
  iVar7 = 0;
  pbVar6 = *(byte **)(param_1 + 0x3c);
  uVar4 = 0;
  local_8 = 0;
  local_c = 0;
  bVar2 = false;
  do {
    uVar3 = thunk_FUN_1001e710(pbVar6,&local_c);
    uVar3 = uVar3 + local_8;
    if (param_2 < uVar3) {
      if (!bVar2) {
        return 0x29;
      }
      *(int *)(param_1 + 0x40) = iVar7;
      *(byte **)(param_1 + 0x2c) = pbVar6;
      *(uint *)(param_1 + 0x4c) = local_8;
      return 0;
    }
    pbVar5 = pbVar6 + local_c;
    iVar7 = iVar7 + local_c;
    bVar2 = true;
    bVar1 = *pbVar5;
    if ((bVar1 & 0x80) != 0) {
      uVar4 = (uint)bVar1;
      *(byte *)(param_1 + 0x30) = bVar1;
      if ((uVar4 & 0xf0) != 0xf0) {
        *(uint *)(param_1 + 0x48) = uVar4 & 0xf;
        uVar4 = uVar4 & 0xf0;
      }
      pbVar5 = pbVar5 + 1;
      iVar7 = iVar7 + 1;
    }
    local_8 = uVar3;
    switch(uVar4) {
    default:
      return 0x12;
    case 0xb0:
      if (*pbVar5 == 7) {
        *(uint *)(local_4 + 0x254 + *(int *)(param_1 + 0x48) * 0x4c) = (uint)pbVar5[1];
      }
    case 0x80:
    case 0x90:
      pbVar6 = pbVar5 + 2;
      iVar7 = iVar7 + 2;
      break;
    case 0xc0:
    case 0xe0:
      pbVar6 = pbVar5 + 1;
      iVar7 = iVar7 + 1;
      break;
    case 0xff:
      if (*pbVar5 == 0x2f) {
        *(byte **)(param_1 + 0x2c) = pbVar6;
        *(uint *)(param_1 + 0x4c) = uVar3;
        return 0x29;
      }
      uVar3 = thunk_FUN_1001e710(pbVar5 + 1,&local_c);
      pbVar6 = pbVar5 + 1 + uVar3 + local_c;
      iVar7 = iVar7 + 1 + uVar3 + local_c;
    }
  } while( true );
}

