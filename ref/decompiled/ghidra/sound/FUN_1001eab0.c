/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001eab0 @ 0x1001EAB0 */


undefined4 __thiscall FUN_1001eab0(void *this,uint param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint local_8;
  
  bVar3 = 0;
  pbVar6 = *(byte **)((int)this + 0x3c);
  local_8 = 0;
  do {
    if (param_1 <= local_8) {
      *param_2 = local_8 - param_1;
      *(byte **)((int)this + 0x2c) = pbVar6;
      *(uint *)((int)this + 0x4c) = local_8;
      return 0;
    }
    uVar2 = 0;
    iVar4 = 0;
    pbVar5 = pbVar6;
    do {
      bVar1 = *pbVar5;
      uVar2 = uVar2 << 7 | bVar1 & 0x7f;
      iVar4 = iVar4 + 1;
      pbVar5 = pbVar5 + 1;
    } while ((bVar1 & 0x80) != 0);
    local_8 = local_8 + uVar2;
    pbVar5 = pbVar6 + iVar4;
    bVar1 = *pbVar5;
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
      pbVar6 = pbVar5 + 2;
      break;
    default:
      return 0x12;
    case 0xc0:
    case 0xe0:
      pbVar6 = pbVar5 + 1;
      break;
    case 0xff:
      if (*pbVar5 == 0x2f) {
        *(byte **)((int)this + 0x2c) = pbVar6;
        *param_2 = 0;
        *(uint *)((int)this + 0x4c) = local_8;
        return 0x29;
      }
      uVar2 = 0;
      iVar4 = 0;
      pbVar6 = pbVar5 + 1;
      do {
        bVar1 = *pbVar6;
        uVar2 = uVar2 << 7 | bVar1 & 0x7f;
        iVar4 = iVar4 + 1;
        pbVar6 = pbVar6 + 1;
      } while ((bVar1 & 0x80) != 0);
      pbVar6 = pbVar5 + 1 + uVar2 + iVar4;
    }
  } while( true );
}

