/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10004080 @ 0x10004080 */


undefined4 __thiscall FUN_10004080(void *this,int *param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  RECT *lprcSrc2;
  BOOL BVar6;
  ushort *puVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  uint uVar11;
  ushort *puVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int unaff_retaddr;
  int *piStack_3c;
  int iStack_18;
  int iStack_14;
  RECT RStack_10;
  
  if (((param_2 & 0x80000000) == 0) &&
     ((piVar5 = *(int **)((int)this + 0x7c), piVar5 != (int *)0x0 ||
      ((DAT_10057d9c != 0 && (piVar5 = *(int **)(DAT_10057d9c + 4), piVar5 != (int *)0x0)))))) {
    iVar4 = (**(code **)(*(int *)this + 0xe4))();
    if (*(int *)(iVar4 + 4) == 0) {
      (**(code **)(*piVar5 + 0x18))();
    }
    else {
      if (*(int *)(iVar4 + 4) != 1) {
        return 0x18;
      }
      (**(code **)(*piVar5 + 0x1c))();
    }
  }
  if (param_1 == (int *)0x0) {
    piVar5 = (int *)(**(code **)(*(int *)this + 0xd4))();
    RStack_10.left = *piVar5;
    RStack_10.top = piVar5[1];
    RStack_10.right = piVar5[2];
  }
  else {
    RStack_10.left = *param_1;
    RStack_10.top = param_1[1];
    RStack_10.right = param_1[2];
    piVar5 = param_1;
  }
  RStack_10.bottom = piVar5[3];
  lprcSrc2 = (RECT *)(**(code **)(*(int *)this + 0xcc))();
  BVar6 = IntersectRect(&RStack_10,&RStack_10,lprcSrc2);
  if ((BVar6 != 0) &&
     (puVar7 = (ushort *)(**(code **)(*(int *)this + 0x1c))(RStack_10.left,RStack_10.top),
     puVar7 != (ushort *)0x0)) {
    iVar4 = RStack_10.top - iStack_14;
    iVar15 = RStack_10.left - iStack_18;
    if ((int)param_1 < 0) {
      param_1 = (int *)0x0;
    }
    else if (100 < (int)param_1) {
      param_1 = (int *)0x64;
    }
    iVar2 = ((int)param_1 << 8) / 100;
    iVar13 = 0x100 - iVar2;
    iVar8 = (**(code **)(*DAT_10057b08 + 0xb4))();
    if (iVar8 == 1) {
      bVar3 = (byte)((uint)unaff_retaddr >> 8);
    }
    else {
      bVar3 = (byte)(unaff_retaddr >> 7);
    }
    RStack_10.bottom = CONCAT31(RStack_10.bottom._1_3_,bVar3) & 0xfffffff8;
    iVar8 = (**(code **)(*DAT_10057b08 + 0xb4))();
    if (iVar8 == 1) {
      RStack_10.bottom = CONCAT31(RStack_10.bottom._1_3_,(char)(unaff_retaddr >> 3)) & 0xfffffffc;
    }
    else {
      RStack_10.bottom = CONCAT31(RStack_10.bottom._1_3_,(char)(unaff_retaddr >> 2)) & 0xfffffff8;
    }
    uVar11 = RStack_10.bottom & 0xff;
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (0 < iVar15) {
        puVar12 = puVar7;
        iVar8 = iVar15;
        do {
          uVar1 = *puVar12;
          iVar9 = (**(code **)(*DAT_10057b08 + 0xb4))();
          if (iVar9 == 1) {
            bVar10 = (byte)(uVar1 >> 8);
          }
          else {
            bVar10 = (byte)((int)(uint)uVar1 >> 7);
          }
          uVar1 = *puVar12;
          iVar9 = (**(code **)(*DAT_10057b08 + 0xb4))();
          if (iVar9 == 1) {
            RStack_10.bottom =
                 CONCAT31(RStack_10.bottom._1_3_,(char)((int)(uint)uVar1 >> 3)) & 0xfffffffc;
          }
          else {
            RStack_10.bottom =
                 CONCAT31(RStack_10.bottom._1_3_,(char)((int)(uint)uVar1 >> 2)) & 0xfffffff8;
          }
          uVar16 = ((int)((uint)(bVar10 & 0xf8) * iVar2) >> 8) +
                   ((int)((bVar3 & 0xf8) * iVar13) >> 8);
          uVar14 = ((int)((RStack_10.bottom & 0xffU) * iVar2) >> 8) + ((int)(uVar11 * iVar13) >> 8);
          uVar1 = *puVar12;
          iVar9 = (**(code **)(*DAT_10057b08 + 0xb4))();
          if (iVar9 == 1) {
            uVar16 = ((uVar16 & 0xff) >> 3) << 6;
            uVar14 = (uVar14 & 0xff) >> 2;
          }
          else {
            uVar16 = ((uVar16 & 0xff) >> 3) << 5;
            uVar14 = (uVar14 & 0xff) >> 3;
          }
          puVar7 = puVar12 + 1;
          *puVar12 = (ushort)((uVar16 | uVar14) << 5) |
                     (ushort)((((int)((uint)(byte)((char)uVar1 << 3) * iVar2) >> 8) +
                               ((int)((uint)(byte)((char)unaff_retaddr << 3) * iVar13) >> 8) & 0xffU
                              ) >> 3);
          iVar8 = iVar8 + -1;
          puVar12 = puVar7;
        } while (iVar8 != 0);
      }
      iVar8 = (**(code **)(*piStack_3c + 0xe0))();
      puVar7 = puVar7 + (iVar8 - iVar15);
    }
    (**(code **)(*piStack_3c + 0x24))(1);
    return 0;
  }
  return 0;
}

