/* Ghidra decompiled: golf.exe */
/* Function: FUN_004498a0 @ 0x004498A0 */


void FUN_004498a0(int param_1,int param_2,float param_3,float param_4)

{
  float fVar1;
  Terrain *pTVar2;
  uint uVar3;
  uint uVar4;
  
  fVar1 = param_3;
  if (DAT_004d2044 == '\0') {
    if (DAT_00820f2a == '\0') {
      uVar4 = param_1 - DAT_004d2048;
      uVar3 = param_2 - DAT_004d204c;
      if (param_4 != DAT_00820f38) {
        FUN_004808c0(0x80000000);
        fVar1 = param_4;
        switch(param_4) {
        default:
          param_4 = 0.0;
          break;
        case 2.8026e-45:
          param_4 = 90.0;
          break;
        case 5.60519e-45:
          param_4 = 180.0;
          break;
        case 8.40779e-45:
          param_4 = -90.0;
        }
        if (((param_1 < *(int *)(DAT_00820ed0 + 0x14)) && (-1 < param_1)) &&
           ((param_2 < *(int *)(DAT_00820ed0 + 0x18) && (-1 < param_2)))) {
          pTVar2 = DAT_00820ed0 +
                   (*(int *)(DAT_00820ed0 + 0x14) * param_2 + param_1) * 0x248 + 0x3a4;
        }
        else {
          pTVar2 = (Terrain *)0x0;
        }
        Terrain::render(DAT_00820ed0,(Tile *)pTVar2,param_4);
        FUN_00475c60(PTR_DAT_004c1574,0,0,0,0,DAT_00820f30,DAT_00820f34);
        DAT_004d204c = param_2;
        DAT_004d2048 = param_1;
        DAT_00820f38 = fVar1;
        return;
      }
      if (param_3 != DAT_004d2050) {
        Terrain::setZoomLevel(DAT_00820ed0,(int)param_3);
        FUN_004808c0(0x80000000);
        switch(param_4) {
        default:
          param_4 = 0.0;
          break;
        case 2.8026e-45:
          param_4 = 90.0;
          break;
        case 5.60519e-45:
          param_4 = 180.0;
          break;
        case 8.40779e-45:
          param_4 = -90.0;
        }
        if (((param_1 < *(int *)(DAT_00820ed0 + 0x14)) && (-1 < param_1)) &&
           ((param_2 < *(int *)(DAT_00820ed0 + 0x18) && (-1 < param_2)))) {
          pTVar2 = DAT_00820ed0 +
                   (*(int *)(DAT_00820ed0 + 0x14) * param_2 + param_1) * 0x248 + 0x3a4;
        }
        else {
          pTVar2 = (Terrain *)0x0;
        }
        Terrain::render(DAT_00820ed0,(Tile *)pTVar2,param_4);
        FUN_00475c60(PTR_DAT_004c1574,0,0,0,0,DAT_00820f30,DAT_00820f34);
        DAT_004d204c = param_2;
        DAT_004d2048 = param_1;
        DAT_004d2050 = fVar1;
        return;
      }
      if ((uVar3 != 0) || (uVar4 != 0)) {
        if ((int)(((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) +
                 ((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f))) < 3) {
          FUN_004808c0(0x80000000);
          FUN_0044a6e0(PTR_DAT_004c1574,param_1,param_2,uVar4,uVar3,param_4,param_3);
        }
        else {
          FUN_004808c0(0x80000000);
          switch(param_4) {
          default:
            param_4 = 0.0;
            break;
          case 2.8026e-45:
            param_4 = 90.0;
            break;
          case 5.60519e-45:
            param_4 = 180.0;
            break;
          case 8.40779e-45:
            param_4 = -90.0;
          }
          if ((((param_1 < *(int *)(DAT_00820ed0 + 0x14)) && (-1 < param_1)) &&
              (param_2 < *(int *)(DAT_00820ed0 + 0x18))) && (-1 < param_2)) {
            pTVar2 = DAT_00820ed0 +
                     (*(int *)(DAT_00820ed0 + 0x14) * param_2 + param_1) * 0x248 + 0x3a4;
          }
          else {
            pTVar2 = (Terrain *)0x0;
          }
          Terrain::render(DAT_00820ed0,(Tile *)pTVar2,param_4);
        }
        FUN_00475c60(PTR_DAT_004c1574,0,0,0,0,DAT_00820f30,DAT_00820f34);
        DAT_004d204c = param_2;
        DAT_004d2048 = param_1;
        return;
      }
      FUN_00475c60(&DAT_00519cd4,0,0,0,0,DAT_00820f30,DAT_00820f34);
      if ((DAT_005619a0 & 2) == 0) {
        FUN_0044a5b0(param_1,param_2);
        DAT_005619a0 = DAT_005619a0 | 2;
      }
      if (DAT_00820f20 == 0) {
        return;
      }
      if (DAT_00820f2c != '\0') {
        if (((param_1 < *(int *)(DAT_00820ed0 + 0x14)) && (-1 < param_1)) &&
           ((param_2 < *(int *)(DAT_00820ed0 + 0x18) && (-1 < param_2)))) {
          pTVar2 = DAT_00820ed0 +
                   (*(int *)(DAT_00820ed0 + 0x14) * param_2 + param_1) * 0x248 + 0x3a4;
        }
        else {
          pTVar2 = (Terrain *)0x0;
        }
        Terrain::calcAllNormals(DAT_00820ed0,(Tile *)pTVar2);
        DAT_00820f2c = '\0';
      }
      DAT_00820f14 = (int *)*DAT_00820f1c;
      if (DAT_00820f14 != DAT_00820f1c) {
        do {
          switch(param_4) {
          default:
            param_3 = 0.0;
            break;
          case 2.8026e-45:
            param_3 = 90.0;
            break;
          case 5.60519e-45:
            param_3 = 180.0;
            break;
          case 8.40779e-45:
            param_3 = -90.0;
          }
          if (((param_1 < *(int *)(DAT_00820ed0 + 0x14)) && (-1 < param_1)) &&
             ((param_2 < *(int *)(DAT_00820ed0 + 0x18) && (-1 < param_2)))) {
            pTVar2 = DAT_00820ed0 +
                     (*(int *)(DAT_00820ed0 + 0x14) * param_2 + param_1) * 0x248 + 0x3a4;
          }
          else {
            pTVar2 = (Terrain *)0x0;
          }
          Terrain::localRender(DAT_00820ed0,(Tile *)DAT_00820f14[2],(Tile *)pTVar2,param_3);
          DAT_00820f14 = (int *)*DAT_00820f14;
        } while (DAT_00820f14 != DAT_00820f1c);
      }
      FUN_0044ac00(&param_3,*DAT_00820f1c,DAT_00820f1c);
      if (DAT_00820f2b != '\0') {
        switch(param_4) {
        default:
          param_4 = 0.0;
          break;
        case 2.8026e-45:
          param_4 = 90.0;
          break;
        case 5.60519e-45:
          param_4 = 180.0;
          break;
        case 8.40779e-45:
          param_4 = -90.0;
        }
        if ((((param_1 < *(int *)(DAT_00820ed0 + 0x14)) && (-1 < param_1)) &&
            (param_2 < *(int *)(DAT_00820ed0 + 0x18))) && (-1 < param_2)) {
          pTVar2 = DAT_00820ed0 +
                   (*(int *)(DAT_00820ed0 + 0x14) * param_2 + param_1) * 0x248 + 0x3a4;
        }
        else {
          pTVar2 = (Terrain *)0x0;
        }
        Terrain::pathUpdateRender(DAT_00820ed0,(Tile *)pTVar2,param_4);
        DAT_00820f2b = '\0';
      }
      goto LAB_00449e24;
    }
  }
  else {
    FUN_00449790(DAT_00822c8c,DAT_00822c90);
  }
  FUN_004808c0(0x80000000);
  switch(param_4) {
  default:
    param_4 = 0.0;
    break;
  case 2.8026e-45:
    param_4 = 90.0;
    break;
  case 5.60519e-45:
    param_4 = 180.0;
    break;
  case 8.40779e-45:
    param_4 = -90.0;
  }
  if ((((param_1 < *(int *)(DAT_00820ed0 + 0x14)) && (-1 < param_1)) &&
      (param_2 < *(int *)(DAT_00820ed0 + 0x18))) && (-1 < param_2)) {
    pTVar2 = DAT_00820ed0 + (*(int *)(DAT_00820ed0 + 0x14) * param_2 + param_1) * 0x248 + 0x3a4;
  }
  else {
    pTVar2 = (Terrain *)0x0;
  }
  Terrain::render(DAT_00820ed0,(Tile *)pTVar2,param_4);
  DAT_00820f2a = '\0';
  DAT_004d2044 = '\0';
  DAT_004d2048 = param_1;
  DAT_004d204c = param_2;
LAB_00449e24:
  FUN_00475c60(PTR_DAT_004c1574,0,0,0,0,DAT_00820f30,DAT_00820f34);
  return;
}

