/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1000a700 @ 0x1000A700 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 __thiscall FUN_1000a700(void *this,int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  RECT *pRVar2;
  BOOL BVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined2 *puVar7;
  longlong lVar8;
  RECT local_18;
  int local_8;
  
  if (((*(int *)((int)this + 0x14) == 0) || (param_1 == (int *)0x0)) ||
     (iVar1 = (**(code **)(*param_1 + 0x10))(), iVar1 == 0)) {
    return 3;
  }
  _DAT_10057be0 =
       (float)(int)((DAT_100550fc ^ (int)DAT_100550fc >> 0x1f) - ((int)DAT_100550fc >> 0x1f)) /
       (float)(int)DAT_10055104;
  local_8 = (DAT_10055100 ^ (int)DAT_10055100 >> 0x1f) - ((int)DAT_10055100 >> 0x1f);
  _DAT_10057be4 = (float)local_8 / (float)(int)DAT_10055104;
  DAT_10057bd4 = *(int *)((int)this + 0x2c);
  *(undefined4 *)((int)this + 0x28) = 0xff;
  DAT_10057bb4 = (**(code **)(*param_1 + 0xe0))();
  DAT_10057bc4 = param_4;
  iVar1 = (DAT_10055104 ^ (int)DAT_10055104 >> 0x1f) - ((int)DAT_10055104 >> 0x1f);
  if (((DAT_100550fc ^ (int)DAT_100550fc >> 0x1f) - ((int)DAT_100550fc >> 0x1f) == iVar1) &&
     ((DAT_10055100 ^ (int)DAT_10055100 >> 0x1f) - ((int)DAT_10055100 >> 0x1f) == iVar1)) {
    local_18.right = *(int *)((int)this + 0x30) + param_2;
    local_18.bottom = *(int *)((int)this + 0x34) + param_3;
    local_18.left = param_2;
    local_18.top = param_3;
    pRVar2 = (RECT *)(**(code **)(*param_1 + 0xcc))();
    BVar3 = IntersectRect(&local_18,&local_18,pRVar2);
    if (BVar3 == 0) {
      (**(code **)(*param_1 + 0x24))(1);
      return 0;
    }
    if ((-1 < (int)DAT_100550fc) && (-1 < (int)DAT_10055100)) {
      pcVar6 = (char *)(*(int *)((int)this + 0x14) +
                       (((local_18.top - param_3) * DAT_10057bd4 - param_2) + local_18.left) * 2);
      iVar4 = (**(code **)(*param_1 + 0x20))();
      iVar1 = DAT_10057bc4;
      puVar7 = (undefined2 *)(iVar4 + (DAT_10057bb4 * local_18.top + local_18.left) * 2);
      _DAT_10057bd0 = local_18.bottom - local_18.top;
      DAT_10057bbc = local_18.right - local_18.left;
      iVar5 = (DAT_10057bd4 - DAT_10057bbc) * 2;
      DAT_10057bb8 = (DAT_10057bb4 - DAT_10057bbc) * 2;
      iVar4 = DAT_10057bbc;
      DAT_10057ba0 = iVar5;
      do {
        do {
          if (*pcVar6 != -1) {
            *puVar7 = *(undefined2 *)(CONCAT22(*(undefined2 *)pcVar6,*puVar7) + iVar1);
          }
          pcVar6 = pcVar6 + 2;
          puVar7 = puVar7 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        pcVar6 = pcVar6 + iVar5;
        puVar7 = (undefined2 *)((int)puVar7 + DAT_10057bb8);
        _DAT_10057bd0 = _DAT_10057bd0 + -1;
        iVar4 = DAT_10057bbc;
      } while (_DAT_10057bd0 != 0);
      (**(code **)(*param_1 + 0x24))(1);
      return 0;
    }
  }
  else {
    local_18.left = param_2;
    local_18.top = param_3;
    lVar8 = __ftol();
    local_18.right = (int)lVar8 + param_2;
    lVar8 = __ftol();
    local_18.bottom = (int)lVar8 + param_3;
    pRVar2 = (RECT *)(**(code **)(*param_1 + 0xcc))();
    BVar3 = IntersectRect(&local_18,&local_18,pRVar2);
    if (BVar3 == 0) {
      (**(code **)(*param_1 + 0x24))(1);
      return 0;
    }
    (**(code **)(*param_1 + 0x20))();
    DAT_10057bb4 = (**(code **)(*param_1 + 0xe0))();
    DAT_10057bbc = local_18.right - local_18.left;
    DAT_10057bb8 = DAT_10057bb4 - DAT_10057bbc;
    _DAT_10057bd0 = local_18.bottom - local_18.top;
    _DAT_10057bdc =
         (int)(DAT_10055104 << 0x10) /
         (int)((DAT_100550fc ^ (int)DAT_100550fc >> 0x1f) - ((int)DAT_100550fc >> 0x1f));
    _DAT_10057ba4 =
         (int)(DAT_10055104 << 0x10) /
         (int)((DAT_10055100 ^ (int)DAT_10055100 >> 0x1f) - ((int)DAT_10055100 >> 0x1f));
  }
  (**(code **)(*param_1 + 0x24))(1);
  return 0;
}

