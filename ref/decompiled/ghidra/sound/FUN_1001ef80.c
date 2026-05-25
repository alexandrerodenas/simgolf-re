/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001ef80 @ 0x1001EF80 */


int __fastcall FUN_1001ef80(int param_1)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  int local_c;
  
  pbVar5 = *(byte **)(param_1 + 0x3c);
  bVar3 = 0;
  local_c = 0;
  bVar2 = false;
  do {
    uVar6 = 0;
    iVar4 = 0;
    pbVar7 = pbVar5;
    do {
      bVar1 = *pbVar7;
      uVar6 = uVar6 << 7 | bVar1 & 0x7f;
      iVar4 = iVar4 + 1;
      pbVar7 = pbVar7 + 1;
    } while ((bVar1 & 0x80) != 0);
    bVar1 = pbVar5[iVar4];
    pbVar5 = pbVar5 + iVar4;
    local_c = local_c + uVar6;
    if ((bVar1 & 0x80) != 0) {
      bVar3 = bVar1;
      if ((bVar1 & 0xf0) != 0xf0) {
        bVar3 = bVar1 & 0xf0;
      }
      pbVar5 = pbVar5 + 1;
    }
    switch(bVar3) {
    case 0x80:
    case 0x90:
    case 0xb0:
      pbVar5 = pbVar5 + 2;
      break;
    default:
      return 0;
    case 0xc0:
    case 0xe0:
      pbVar5 = pbVar5 + 1;
      break;
    case 0xff:
      if (*pbVar5 == 0x2f) {
        bVar2 = true;
      }
      uVar6 = 0;
      iVar4 = 0;
      pbVar7 = pbVar5 + 1;
      do {
        bVar1 = *pbVar7;
        uVar6 = uVar6 << 7 | bVar1 & 0x7f;
        iVar4 = iVar4 + 1;
        pbVar7 = pbVar7 + 1;
      } while ((bVar1 & 0x80) != 0);
      pbVar5 = pbVar5 + 1 + uVar6 + iVar4;
    }
  } while (!bVar2);
  *(int *)(param_1 + 0x54) = local_c;
  return local_c;
}

