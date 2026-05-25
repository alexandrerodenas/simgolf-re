/* Ghidra decompiled: sound.dll */
/* Function: FUN_10020870 @ 0x10020870 */


undefined4 __thiscall FUN_10020870(void *this,int *param_1,int *param_2)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  
  if (param_1 == (int *)0x0) {
    return 10;
  }
  pbVar6 = (byte *)param_1[0xb];
  bVar1 = *pbVar6;
  if ((bVar1 & 0x80) == 0) {
    piVar2 = (int *)param_1[0x12];
    uVar5 = *(byte *)(param_1 + 0xc) & 0xf0;
  }
  else {
    uVar5 = (uint)bVar1;
    if ((uVar5 & 0xf0) == 0xf0) {
      *param_2 = 1;
      pbVar6 = pbVar6 + 1;
      piVar2 = param_1;
    }
    else {
      *(byte *)(param_1 + 0xc) = bVar1;
      param_1[0x12] = (int)(uVar5 & 0xf);
      *param_2 = 1;
      pbVar6 = pbVar6 + 1;
      piVar2 = (int *)(uVar5 & 0xf);
      uVar5 = uVar5 & 0xf0;
    }
  }
  switch(uVar5) {
  default:
    return 0xb;
  case 0x90:
    if (pbVar6[1] != 0) {
      iVar4 = thunk_FUN_100215c0(this,pbVar6,(uint)piVar2,param_1);
      *param_2 = *param_2 + iVar4;
      return 0;
    }
  case 0x80:
    iVar4 = thunk_FUN_10021a90(this,pbVar6,(uint)piVar2,param_1);
    *param_2 = *param_2 + iVar4;
    return 0;
  case 0xb0:
    iVar4 = thunk_FUN_100213d0(this,(char *)pbVar6,(int)piVar2,(int)param_1);
    *param_2 = *param_2 + iVar4;
    break;
  case 0xc0:
    *(uint *)((int)this + (int)piVar2 * 0x4c + 0x25c) = (uint)*pbVar6;
  case 0xe0:
    *param_2 = *param_2 + 1;
    return 0;
  case 0xff:
    pbVar3 = thunk_FUN_10021bf0(this,pbVar6,param_1);
    *param_2 = (int)(pbVar3 + *param_2);
    if (*pbVar6 == 0x2f) {
      return 0x29;
    }
  }
  return 0;
}

