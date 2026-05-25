/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001ecc0 @ 0x1001ECC0 */


undefined4 __thiscall FUN_1001ecc0(void *this,uint param_1,uint *param_2)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint local_8;
  
  pbVar7 = *(byte **)((int)this + 0x3c);
  uVar3 = 0;
  local_8 = 0;
  bVar2 = false;
  while( true ) {
    uVar5 = 0;
    iVar4 = 0;
    pbVar6 = pbVar7;
    do {
      bVar1 = *pbVar6;
      uVar5 = uVar5 << 7 | bVar1 & 0x7f;
      iVar4 = iVar4 + 1;
      pbVar6 = pbVar6 + 1;
    } while ((bVar1 & 0x80) != 0);
    uVar5 = uVar5 + local_8;
    if (param_1 < uVar5) break;
    pbVar6 = pbVar7 + iVar4;
    bVar2 = true;
    bVar1 = *pbVar6;
    if ((bVar1 & 0x80) != 0) {
      uVar3 = (uint)bVar1;
      *(byte *)((int)this + 0x30) = bVar1;
      if ((uVar3 & 0xf0) != 0xf0) {
        *(uint *)((int)this + 0x48) = uVar3 & 0xf;
        uVar3 = uVar3 & 0xf0;
      }
      pbVar6 = pbVar6 + 1;
    }
    local_8 = uVar5;
    switch(uVar3) {
    case 0x80:
    case 0x90:
    case 0xb0:
      pbVar7 = pbVar6 + 2;
      break;
    default:
      return 0x12;
    case 0xc0:
    case 0xe0:
      pbVar7 = pbVar6 + 1;
      break;
    case 0xff:
      if (*pbVar6 == 0x2f) {
        *(byte **)((int)this + 0x2c) = pbVar7;
        *param_2 = 0;
        *(uint *)((int)this + 0x4c) = uVar5;
        return 0x29;
      }
      uVar5 = 0;
      iVar4 = 0;
      pbVar7 = pbVar6 + 1;
      do {
        bVar1 = *pbVar7;
        uVar5 = uVar5 << 7 | bVar1 & 0x7f;
        iVar4 = iVar4 + 1;
        pbVar7 = pbVar7 + 1;
      } while ((bVar1 & 0x80) != 0);
      pbVar7 = pbVar6 + 1 + uVar5 + iVar4;
    }
  }
  if (!bVar2) {
    return 0x29;
  }
  *param_2 = local_8;
  *(byte **)((int)this + 0x2c) = pbVar7;
  *(uint *)((int)this + 0x4c) = local_8;
  *param_2 = local_8;
  return 0;
}

