/* Ghidra decompiled: golf.exe */
/* Function: FUN_0044a5b0 @ 0x0044A5B0 */
/* Body size: 300 addresses */


void FUN_0044a5b0(int param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  
  for (iVar11 = param_1 + (int)(4 / (longlong)DAT_004c2844) * -0xd; iVar11 < 0x32;
      iVar11 = iVar11 + 1) {
    if (iVar11 < 0) {
      iVar11 = 0;
    }
    for (iVar10 = param_2 + (int)(4 / (longlong)DAT_004c2844) * -0xd; iVar10 < 0x32;
        iVar10 = iVar10 + 1) {
      if (iVar10 < 0) {
        iVar10 = 0;
      }
      iVar6 = FUN_0040bf60(iVar11,iVar10);
      if (iVar6 == 0) {
        if ((((iVar11 < *(int *)(DAT_00820ed0 + 0x14)) && (-1 < iVar11)) &&
            (iVar10 < *(int *)(DAT_00820ed0 + 0x18))) && (-1 < iVar10)) {
          iVar6 = DAT_00820ed0 + 0x3a4 + (*(int *)(DAT_00820ed0 + 0x14) * iVar10 + iVar11) * 0x248;
        }
        else {
          iVar6 = 0;
        }
        cVar2 = FUN_00449f00(iVar6,iVar11,iVar10);
        cVar3 = FUN_00449fa0(iVar6,iVar11,iVar10,param_1,param_2);
        cVar4 = FUN_0044a380(iVar6,iVar11,iVar10);
        cVar5 = FUN_0044a410(iVar6,iVar11,iVar10);
        if (cVar5 != '\0' || ((cVar2 != '\0' || cVar3 != '\0') || cVar4 != '\0')) {
          piVar1 = (int *)*DAT_00820f1c;
          piVar9 = (int *)piVar1[1];
          piVar7 = operator_new(0xc);
          piVar8 = piVar1;
          if (piVar1 == (int *)0x0) {
            piVar8 = piVar7;
          }
          *piVar7 = (int)piVar8;
          if (piVar9 == (int *)0x0) {
            piVar9 = piVar7;
          }
          piVar7[1] = (int)piVar9;
          piVar1[1] = (int)piVar7;
          *(int **)piVar7[1] = piVar7;
          if (piVar7 + 2 != (int *)0x0) {
            piVar7[2] = iVar6;
          }
          DAT_00820f20 = DAT_00820f20 + 1;
        }
      }
    }
  }
  return;
}

