/* Ghidra decompiled: golf.exe */
/* Function: FUN_00449fa0 @ 0x00449FA0 */
/* Body size: 874 addresses */


undefined4 FUN_00449fa0(Tile *param_1,int param_2,float param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  Terrain *pTVar4;
  int iVar5;
  int iVar6;
  undefined1 local_d;
  int local_c;
  Tile *local_8;
  float local_4;
  
  iVar1 = (int)param_3;
  local_8 = param_1 + 4;
  local_d = 0;
  local_c = 1;
  do {
    if (param_1 == (Tile *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)local_8;
    }
    iVar2 = FUN_00449310(param_2,iVar1,local_c);
    if (iVar5 < iVar2 + -3) {
      Terrain::elevateCorner(DAT_00820ed0,param_1,local_c);
      DAT_00820f2c = 1;
      local_d = 1;
      while( true ) {
        if (param_1 == (Tile *)0x0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)local_8;
        }
        iVar2 = FUN_00449310(param_2,iVar1,local_c);
        iVar2 = iVar2 + -3;
        if (iVar2 <= iVar5) break;
        Terrain::elevateCorner(DAT_00820ed0,param_1,local_c);
      }
    }
    else {
      if (param_1 == (Tile *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)local_8;
      }
      iVar2 = FUN_00449310(param_2,iVar1,local_c);
      iVar2 = iVar2 + -3;
      if (iVar2 < iVar5) {
        iVar5 = FUN_0040bf60(param_2 + -1,iVar1);
        if (iVar5 == 0) {
          iVar5 = iVar1 + -1;
          iVar2 = FUN_0040bf60(param_2,iVar5);
          if (iVar2 != 0) goto LAB_0044a12a;
          iVar6 = param_2 + 1;
          iVar2 = FUN_0040bf60(iVar6,iVar1);
          if (iVar2 != 0) goto LAB_0044a12a;
          iVar2 = iVar1 + 1;
          iVar3 = FUN_0040bf60(param_2,iVar2);
          if ((((iVar3 != 0) || (iVar3 = FUN_0040bf60(param_2 + -1,iVar5), iVar3 != 0)) ||
              (iVar5 = FUN_0040bf60(iVar6,iVar5), iVar5 != 0)) ||
             ((iVar5 = FUN_0040bf60(iVar6,iVar2), iVar5 != 0 ||
              (iVar5 = FUN_0040bf60(param_2 + -1,iVar2), iVar5 != 0)))) goto LAB_0044a12a;
          Terrain::lowerCorner(DAT_00820ed0,param_1,local_c);
        }
        else {
LAB_0044a12a:
          switch(DAT_005685f4) {
          default:
            param_3 = 0.0;
            break;
          case 2:
            param_3 = 90.0;
            break;
          case 4:
            param_3 = 180.0;
            break;
          case 6:
            param_3 = -90.0;
          }
          if (((param_4 < *(int *)(DAT_00820ed0 + 0x14)) && (-1 < param_4)) &&
             ((param_5 < *(int *)(DAT_00820ed0 + 0x18) && (-1 < param_5)))) {
            pTVar4 = DAT_00820ed0 +
                     (*(int *)(DAT_00820ed0 + 0x14) * param_5 + param_4) * 0x248 + 0x3a4;
          }
          else {
            pTVar4 = (Terrain *)0x0;
          }
          Terrain::lowerEdgeCorner(DAT_00820ed0,param_1,local_c,(Tile *)pTVar4,param_3);
        }
        DAT_00820f2c = 1;
        local_d = 1;
        while( true ) {
          if (param_1 == (Tile *)0x0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *(int *)local_8;
          }
          iVar2 = FUN_00449310(param_2,iVar1,local_c);
          iVar2 = iVar2 + -3;
          if (iVar5 <= iVar2) break;
          iVar5 = FUN_0040bf60(param_2 + -1,iVar1);
          if (iVar5 == 0) {
            iVar5 = iVar1 + -1;
            iVar2 = FUN_0040bf60(param_2,iVar5);
            if (iVar2 != 0) goto LAB_0044a29a;
            iVar6 = param_2 + 1;
            iVar2 = FUN_0040bf60(iVar6,iVar1);
            if (iVar2 != 0) goto LAB_0044a29a;
            iVar2 = iVar1 + 1;
            iVar3 = FUN_0040bf60(param_2,iVar2);
            if ((((iVar3 != 0) || (iVar3 = FUN_0040bf60(param_2 + -1,iVar5), iVar3 != 0)) ||
                (iVar5 = FUN_0040bf60(iVar6,iVar5), iVar5 != 0)) ||
               ((iVar5 = FUN_0040bf60(iVar6,iVar2), iVar5 != 0 ||
                (iVar5 = FUN_0040bf60(param_2 + -1,iVar2), iVar5 != 0)))) goto LAB_0044a29a;
            Terrain::lowerCorner(DAT_00820ed0,param_1,local_c);
          }
          else {
LAB_0044a29a:
            switch(DAT_005685f4) {
            default:
              local_4 = 0.0;
              break;
            case 2:
              local_4 = 90.0;
              break;
            case 4:
              local_4 = 180.0;
              break;
            case 6:
              local_4 = -90.0;
            }
            if (((param_4 < *(int *)(DAT_00820ed0 + 0x14)) && (-1 < param_4)) &&
               ((param_5 < *(int *)(DAT_00820ed0 + 0x18) && (-1 < param_5)))) {
              pTVar4 = DAT_00820ed0 +
                       (*(int *)(DAT_00820ed0 + 0x14) * param_5 + param_4) * 0x248 + 0x3a4;
            }
            else {
              pTVar4 = (Terrain *)0x0;
            }
            Terrain::lowerEdgeCorner(DAT_00820ed0,param_1,local_c,(Tile *)pTVar4,local_4);
          }
        }
      }
    }
    local_c = local_c + 2;
    local_8 = local_8 + 8;
    if (7 < local_c) {
      return CONCAT31((int3)((uint)iVar2 >> 8),local_d);
    }
  } while( true );
}

