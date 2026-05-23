/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1000a190 @ 0x1000A190 */
/* Body size: 617 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 __thiscall FUN_1000a190(void *this,int *param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  RECT *lprcSrc2;
  BOOL BVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  short *psVar8;
  RECT local_18;
  int local_8;
  
  if ((*(int *)((int)this + 0x14) == 0) || (param_1 == (int *)0x0)) {
    return 3;
  }
  if ((*(uint *)((int)this + 0x28) & 0x80000000) == 0) {
    iVar2 = (**(code **)(*param_1 + 0xe8))();
    if (iVar2 == 0) {
      if (DAT_10057d9c == 0) goto LAB_1000a227;
      piVar3 = *(int **)(DAT_10057d9c + 4);
    }
    else {
      piVar3 = (int *)(**(code **)(*param_1 + 0xe8))();
    }
    if (piVar3 != (int *)0x0) {
      iVar2 = (**(code **)(*param_1 + 0xe4))();
      if (*(int *)(iVar2 + 4) == 0) {
        iVar2 = (**(code **)(*piVar3 + 0x18))();
      }
      else {
        if (*(int *)(iVar2 + 4) != 1) {
          return 1;
        }
        iVar2 = (**(code **)(*piVar3 + 0x1c))();
      }
      *(uint *)((int)this + 0x28) = (uint)*(ushort *)(iVar2 + (uint)*(byte *)((int)this + 0x28) * 2)
      ;
    }
  }
LAB_1000a227:
  _DAT_10057be0 =
       (float)(int)((DAT_100550fc ^ (int)DAT_100550fc >> 0x1f) - ((int)DAT_100550fc >> 0x1f)) /
       (float)(int)DAT_10055104;
  local_8 = (DAT_10055100 ^ (int)DAT_10055100 >> 0x1f) - ((int)DAT_10055100 >> 0x1f);
  _DAT_10057be4 = (float)local_8 / (float)(int)DAT_10055104;
  DAT_10057bc0 = *(short *)((int)this + 0x28);
  DAT_10057bd4 = *(int *)((int)this + 0x2c);
  DAT_10057bb4 = (**(code **)(*param_1 + 0xe0))();
  iVar2 = (DAT_10055104 ^ (int)DAT_10055104 >> 0x1f) - ((int)DAT_10055104 >> 0x1f);
  if (((DAT_100550fc ^ (int)DAT_100550fc >> 0x1f) - ((int)DAT_100550fc >> 0x1f) == iVar2) &&
     ((DAT_10055100 ^ (int)DAT_10055100 >> 0x1f) - ((int)DAT_10055100 >> 0x1f) == iVar2)) {
    local_18.right = *(int *)((int)this + 0x30) + param_2;
    local_18.bottom = *(int *)((int)this + 0x34) + param_3;
    local_18.left = param_2;
    local_18.top = param_3;
    lprcSrc2 = (RECT *)(**(code **)(*param_1 + 0xcc))();
    BVar4 = IntersectRect(&local_18,&local_18,lprcSrc2);
    if (BVar4 == 0) {
      (**(code **)(*param_1 + 0x24))(1);
      return 0;
    }
    if ((-1 < (int)DAT_100550fc) && (-1 < (int)DAT_10055100)) {
      psVar7 = (short *)(*(int *)((int)this + 0x14) +
                        (((local_18.top - param_3) * DAT_10057bd4 - param_2) + local_18.left) * 2);
      iVar2 = (**(code **)(*param_1 + 0x20))();
      sVar1 = DAT_10057bc0;
      psVar8 = (short *)(iVar2 + (DAT_10057bb4 * local_18.top + local_18.left) * 2);
      _DAT_10057bd0 = local_18.bottom - local_18.top;
      DAT_10057bbc = local_18.right - local_18.left;
      iVar6 = DAT_10057bd4 - DAT_10057bbc;
      iVar5 = DAT_10057bb4 - DAT_10057bbc;
      DAT_10057ba0 = iVar6 * 2;
      DAT_10057bb8 = iVar5 * 2;
      iVar2 = DAT_10057bbc;
      do {
        do {
          if (*psVar7 != sVar1) {
            *psVar8 = *psVar7;
          }
          psVar7 = psVar7 + 1;
          psVar8 = psVar8 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        psVar7 = psVar7 + iVar6;
        psVar8 = psVar8 + iVar5;
        _DAT_10057bd0 = _DAT_10057bd0 + -1;
        iVar2 = DAT_10057bbc;
      } while (_DAT_10057bd0 != 0);
    }
  }
  (**(code **)(*param_1 + 0x24))(1);
  return 0;
}

