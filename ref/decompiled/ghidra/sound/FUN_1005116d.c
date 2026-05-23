/* Ghidra decompiled: sound.dll */
/* Function: FUN_1005116d @ 0x1005116D */
/* Body size: 428 addresses */


bool __cdecl FUN_1005116d(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (DAT_10068870 != 0) {
    uVar5 = param_1[5];
    if ((uVar5 != DAT_10068900) || (uVar5 != DAT_10068910)) {
      if (DAT_100b57d8 == 0) {
        FUN_10051319(1,1,uVar5,4,1,0,0,2,0,0,0);
        FUN_10051319(0,1,param_1[5],10,5,0,0,2,0,0,0);
      }
      else {
        if (DAT_100b5878 != 0) {
          uVar6 = (uint)DAT_100b587e;
          uVar3 = 0;
          uVar4 = 0;
        }
        else {
          uVar3 = (uint)DAT_100b587c;
          uVar6 = 0;
          uVar4 = (uint)DAT_100b587e;
        }
        FUN_10051319(1,(uint)(DAT_100b5878 == 0),uVar5,(uint)DAT_100b587a,uVar4,uVar3,uVar6,
                     (uint)DAT_100b5880,(uint)DAT_100b5882,(uint)DAT_100b5884,(uint)DAT_100b5886);
        if (DAT_100b5824 != 0) {
          uVar6 = (uint)DAT_100b582a;
          uVar3 = 0;
          uVar4 = 0;
          uVar5 = param_1[5];
        }
        else {
          uVar3 = (uint)DAT_100b5828;
          uVar6 = 0;
          uVar4 = (uint)DAT_100b582a;
          uVar5 = param_1[5];
        }
        FUN_10051319(0,(uint)(DAT_100b5824 == 0),uVar5,(uint)DAT_100b5826,uVar4,uVar3,uVar6,
                     (uint)DAT_100b582c,(uint)DAT_100b582e,(uint)DAT_100b5830,(uint)DAT_100b5832);
      }
    }
    iVar1 = param_1[7];
    if (DAT_10068904 < DAT_10068914) {
      if ((DAT_10068904 <= iVar1) && (iVar1 <= DAT_10068914)) {
        if ((DAT_10068904 < iVar1) && (iVar1 < DAT_10068914)) {
          return true;
        }
LAB_100512e5:
        iVar2 = ((param_1[2] * 0x3c + param_1[1]) * 0x3c + *param_1) * 1000;
        if (iVar1 == DAT_10068904) {
          return DAT_10068908 <= iVar2;
        }
        return iVar2 < DAT_10068918;
      }
    }
    else {
      if (iVar1 < DAT_10068914) {
        return true;
      }
      if (DAT_10068904 < iVar1) {
        return true;
      }
      if ((iVar1 <= DAT_10068914) || (DAT_10068904 <= iVar1)) goto LAB_100512e5;
    }
  }
  return false;
}

