/* Ghidra decompiled: golf.exe */
/* Function: FUN_0044a6e0 @ 0x0044A6E0 */
/* Body size: 476 addresses */


void FUN_0044a6e0(undefined4 param_1,int param_2,int param_3,uint param_4,uint param_5,float param_6
                 ,int param_7)

{
  int iVar1;
  int iVar2;
  Terrain *pTVar3;
  byte bVar4;
  uint uVar5;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_c;
  int local_8;
  int local_4;
  uint uVar6;
  
  iVar7 = (int)param_6;
  if (DAT_00820f30 == 800) {
    if (DAT_00820f34 == 600) {
      local_4 = 0x40;
      local_8 = 0x28;
      local_c = 0x14;
      iVar7 = 0x20;
    }
  }
  else if (DAT_00820f30 == 0x400) {
    if (DAT_00820f34 == 0x300) {
      local_4 = 0x50;
      local_8 = 0x34;
      local_c = 0x1a;
      iVar7 = 0x28;
    }
  }
  else if ((DAT_00820f30 == 0x500) && (DAT_00820f34 == 0x400)) {
    local_4 = 0x68;
    local_8 = 0x44;
    local_c = 0x22;
    iVar7 = 0x34;
  }
  if (param_7 == 1) {
    bVar4 = 2;
  }
  else if (param_7 == 2) {
    bVar4 = 1;
  }
  else if (param_7 == 4) {
    bVar4 = 0;
  }
  else {
    bVar4 = SUB41(param_6,0);
  }
  if (param_6 == 2.8026e-45) {
    iVar1 = 6;
  }
  else {
    iVar1 = 2;
    if (param_6 != 8.40779e-45) {
      iVar1 = (int)param_6;
    }
  }
  switch(param_4) {
  case 0:
    switch(param_5) {
    case 1:
    case 2:
      param_7 = 5;
      break;
    case 0xfffffffe:
    case 0xffffffff:
      param_7 = 1;
    }
    goto LAB_0044a86c;
  case 1:
    if (param_5 == 0xffffffff) {
      param_7 = 2;
      goto LAB_0044a86c;
    }
    if (param_5 != 0) {
      if (param_5 == 1) {
        param_7 = 4;
      }
      goto LAB_0044a86c;
    }
    goto LAB_0044a856;
  case 2:
    if (param_5 != 0) goto LAB_0044a86c;
LAB_0044a856:
    param_7 = 3;
    goto LAB_0044a86c;
  case 0xfffffffe:
    if (param_5 != 0) goto LAB_0044a86c;
    break;
  case 0xffffffff:
    if (param_5 == 0xffffffff) {
      param_7 = 8;
      goto LAB_0044a86c;
    }
    if (param_5 != 0) {
      if (param_5 == 1) {
        param_7 = 6;
      }
      goto LAB_0044a86c;
    }
    break;
  default:
    goto LAB_0044a86c;
  }
  param_7 = 7;
LAB_0044a86c:
  iVar1 = param_7 + iVar1;
  if (8 < iVar1) {
    iVar1 = iVar1 % 9 + 1;
  }
  iVar2 = (int)param_6;
  iVar8 = (int)param_6;
  iVar9 = (int)param_6;
  iVar10 = (int)param_6;
  if (iVar1 - 1U < 8) {
    uVar5 = (int)param_5 >> 0x1f;
    uVar6 = (int)param_4 >> 0x1f;
    switch(iVar1) {
    case 1:
      if ((param_6 == 0.0) || (param_6 == 5.60519e-45)) {
        iVar2 = (param_5 ^ uVar5) - uVar5;
        iVar7 = iVar7 >> (bVar4 & 0x1f);
        param_4 = local_c >> (bVar4 & 0x1f);
        iVar9 = iVar2 * iVar7;
        iVar2 = iVar2 * param_4;
      }
      else {
        iVar2 = (param_4 ^ uVar6) - uVar6;
        iVar7 = iVar7 >> (bVar4 & 0x1f);
        param_4 = local_c >> (bVar4 & 0x1f);
        iVar9 = iVar7 * iVar2;
        iVar2 = param_4 * iVar2;
      }
      param_5 = DAT_00820f30 - iVar7;
      param_4 = DAT_00820f34 - param_4;
      iVar8 = 0;
      iVar10 = 0;
      break;
    case 2:
      iVar2 = local_8 >> (bVar4 & 0x1f);
      param_5 = DAT_00820f30;
      param_4 = DAT_00820f34 - iVar2;
      iVar8 = 0;
      iVar9 = 0;
      iVar10 = 0;
      break;
    case 3:
      if ((param_6 == 0.0) || (param_6 == 5.60519e-45)) {
        iVar2 = (param_4 ^ uVar6) - uVar6;
        iVar7 = iVar7 >> (bVar4 & 0x1f);
        param_4 = local_c >> (bVar4 & 0x1f);
        iVar8 = iVar7 * iVar2;
        iVar2 = param_4 * iVar2;
      }
      else {
        iVar2 = (param_5 ^ uVar5) - uVar5;
        iVar7 = iVar7 >> (bVar4 & 0x1f);
        param_4 = local_c >> (bVar4 & 0x1f);
        iVar8 = iVar2 * iVar7;
        iVar2 = iVar2 * param_4;
      }
      param_5 = DAT_00820f30 - iVar7;
      param_4 = DAT_00820f34 - param_4;
      iVar9 = 0;
      iVar10 = 0;
      break;
    case 4:
      iVar8 = local_4 >> (bVar4 & 0x1f);
      param_4 = DAT_00820f34;
      param_5 = DAT_00820f30 - iVar8;
      iVar2 = 0;
      iVar9 = 0;
      iVar10 = 0;
      break;
    case 5:
      if ((param_6 == 0.0) || (param_6 == 5.60519e-45)) {
        iVar10 = (param_5 ^ uVar5) - uVar5;
        iVar7 = iVar7 >> (bVar4 & 0x1f);
        iVar1 = local_c >> (bVar4 & 0x1f);
        iVar8 = iVar10 * iVar7;
        iVar10 = iVar10 * iVar1;
      }
      else {
        iVar10 = (param_4 ^ uVar6) - uVar6;
        iVar7 = iVar7 >> (bVar4 & 0x1f);
        iVar1 = local_c >> (bVar4 & 0x1f);
        iVar8 = iVar7 * iVar10;
        iVar10 = iVar1 * iVar10;
      }
      param_5 = DAT_00820f30 - iVar7;
      param_4 = DAT_00820f34 - iVar1;
      iVar2 = 0;
      iVar9 = 0;
      break;
    case 6:
      iVar10 = local_8 >> (bVar4 & 0x1f);
      param_5 = DAT_00820f30;
      param_4 = DAT_00820f34 - iVar10;
      iVar2 = 0;
      iVar8 = 0;
      iVar9 = 0;
      break;
    case 7:
      if ((param_6 == 0.0) || (param_6 == 5.60519e-45)) {
        iVar9 = (param_4 ^ uVar6) - uVar6;
        iVar1 = local_c >> (bVar4 & 0x1f);
        param_4 = iVar7 >> (bVar4 & 0x1f);
        iVar10 = iVar1 * iVar9;
        iVar9 = param_4 * iVar9;
      }
      else {
        iVar9 = (param_5 ^ uVar5) - uVar5;
        iVar1 = local_c >> (bVar4 & 0x1f);
        param_4 = iVar7 >> (bVar4 & 0x1f);
        iVar10 = iVar9 * iVar1;
        iVar9 = iVar9 * param_4;
      }
      param_5 = DAT_00820f30 - param_4;
      param_4 = DAT_00820f34 - iVar1;
      iVar2 = 0;
      iVar8 = 0;
      break;
    case 8:
      iVar9 = local_4 >> (bVar4 & 0x1f);
      param_4 = DAT_00820f34;
      param_5 = DAT_00820f30 - iVar9;
      iVar2 = 0;
      iVar8 = 0;
      iVar10 = 0;
    }
  }
  switch(param_6) {
  default:
    param_6 = 0.0;
    break;
  case 2.8026e-45:
    param_6 = 90.0;
    break;
  case 5.60519e-45:
    param_6 = 180.0;
    break;
  case 8.40779e-45:
    param_6 = -90.0;
  }
  if ((((param_2 < *(int *)(DAT_00820ed0 + 0x14)) && (-1 < param_2)) &&
      (param_3 < *(int *)(DAT_00820ed0 + 0x18))) && (-1 < param_3)) {
    pTVar3 = DAT_00820ed0 + (*(int *)(DAT_00820ed0 + 0x14) * param_3 + param_2) * 0x248 + 0x3a4;
  }
  else {
    pTVar3 = (Terrain *)0x0;
  }
  Terrain::stripRender(DAT_00820ed0,(Tile *)pTVar3,param_7,param_6);
  FUN_00475c60(&DAT_00519cd4,iVar8,iVar10,iVar9,iVar2,param_5,param_4);
  return;
}

