/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047f8e0 @ 0x0047F8E0 */
/* Body size: 326 addresses */


void FUN_0047f8e0(RECT *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  BOOL BVar4;
  int *piVar5;
  RECT local_10;
  
  if (DAT_0083ab90 != 0) {
    if (DAT_0083aae0 == 0) {
      param_2 = 0;
    }
    iVar2 = DAT_0083ab90 + -1;
    if (param_2 != 0) {
      iVar2 = 0;
      if (0 < DAT_0083ab90) {
        piVar5 = &DAT_00839ac0;
        do {
          if (param_2 == *piVar5) break;
          iVar2 = iVar2 + 1;
          piVar5 = piVar5 + 1;
        } while (iVar2 < DAT_0083ab90);
      }
      if (iVar2 == DAT_0083ab90) {
        return;
      }
    }
    if (-1 < iVar2) {
      piVar5 = &DAT_00839ac0 + iVar2;
      iVar2 = iVar2 + 1;
      do {
        iVar3 = FUN_004801f0();
        if (iVar3 != 0) {
          piVar1 = (int *)*piVar5;
          if ((*(byte *)(piVar1 + 0x28) & 2) != 0) {
            (**(code **)(*piVar1 + 0x13c))(param_1,0xffffffff);
          }
          if ((param_2 == 0) || (param_2 == *(int *)(param_2 + 0xb0))) {
            (**(code **)(*(int *)piVar1[0x2c] + 0x138))(param_1);
          }
        }
        piVar5 = piVar5 + -1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (DAT_0083aaa0 != 0) {
      local_10.right = DAT_0083aab4 + DAT_0083aaa4;
      local_10.bottom = DAT_0083aab8 + DAT_0083aaa8;
      local_10.left = DAT_0083aaa4;
      local_10.top = DAT_0083aaa8;
      if ((param_1 == (RECT *)0x0) ||
         (BVar4 = IntersectRect(&local_10,&local_10,param_1), BVar4 != 0)) {
        FUN_00475c60(&DAT_0083a500,local_10.left,local_10.top,local_10.left - DAT_0083aaa4,
                     local_10.top - DAT_0083aaa8,local_10.right - local_10.left,
                     local_10.bottom - local_10.top);
      }
    }
  }
  return;
}

