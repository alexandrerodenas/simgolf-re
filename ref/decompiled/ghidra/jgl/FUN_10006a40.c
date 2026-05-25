/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10006a40 @ 0x10006A40 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 __thiscall
FUN_10006a40(void *this,int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,byte param_8)

{
  short sVar1;
  int iVar2;
  RECT *lprcSrc2;
  BOOL BVar3;
  int *piVar4;
  short *psVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  RECT local_18;
  int *local_8;
  
  if (param_1 == (int *)0x0) {
    return 3;
  }
  if (param_2 < 0) {
    param_6 = param_6 + param_2;
    param_4 = param_4 - param_2;
    param_2 = 0;
  }
  if (param_3 < 0) {
    param_7 = param_7 + param_3;
    param_5 = param_5 - param_3;
    param_3 = 0;
  }
  local_8 = this;
  iVar2 = (**(code **)(*(int *)this + 0xd8))();
  if ((param_2 <= iVar2) && (iVar2 = (**(code **)(*(int *)this + 0xdc))(), param_3 <= iVar2)) {
    iVar2 = (**(code **)(*(int *)this + 0xd8))();
    if (iVar2 < param_2 + param_6) {
      iVar2 = (**(code **)(*(int *)this + 0xd8))();
      param_6 = iVar2 - param_2;
    }
    iVar2 = (**(code **)(*(int *)this + 0xdc))();
    if (iVar2 < param_3 + param_7) {
      iVar2 = (**(code **)(*(int *)this + 0xdc))();
      param_7 = iVar2 - param_3;
    }
    local_18.left = param_4;
    local_18.right = param_4 + param_6;
    local_18.top = param_5;
    local_18.bottom = param_5 + param_7;
    lprcSrc2 = (RECT *)(**(code **)(*param_1 + 0xcc))();
    BVar3 = IntersectRect(&local_18,&local_18,lprcSrc2);
    if (BVar3 != 0) {
      piVar4 = *(int **)((int)this + 0x7c);
      if (piVar4 == (int *)0x0) {
        piVar4 = *(int **)(DAT_10057d9c + 4);
      }
      if (piVar4 == (int *)0x0) {
        return 0x10;
      }
      iVar2 = (**(code **)(*param_1 + 0xe4))();
      if (*(int *)(iVar2 + 4) == 0) {
        DAT_10057b74 = (**(code **)(*piVar4 + 0x18))();
      }
      else {
        if (*(int *)(iVar2 + 4) != 1) {
          return 1;
        }
        DAT_10057b74 = (**(code **)(*piVar4 + 0x1c))();
      }
      iVar2 = local_18.left - param_4;
      iVar8 = local_18.top - param_5;
      psVar5 = (short *)(**(code **)(*param_1 + 0x1c))(local_18.left,local_18.top);
      if (psVar5 == (short *)0x0) {
        return 3;
      }
      pbVar6 = (byte *)(**(code **)(*(int *)this + 0x14))(param_2 + iVar2,param_3 + iVar8);
      if (pbVar6 == (byte *)0x0) {
        return 3;
      }
      iVar7 = (**(code **)(*param_1 + 0xe0))();
      iVar8 = (**(code **)(*(int *)this + 0xe0))();
      _DAT_10057b6c = local_18.bottom - local_18.top;
      DAT_10057b64 = local_18.right - local_18.left;
      iVar8 = iVar8 - DAT_10057b64;
      iVar7 = DAT_10057b64 * 0x7fffffff + iVar7;
      _DAT_10057b78 = DAT_10057b64 >> 2;
      DAT_10057b68 = iVar7 * 2;
      sVar1 = *(short *)((uint)param_8 * 2 + DAT_10057b74);
      iVar2 = DAT_10057b64;
      DAT_10057b7c = iVar8;
      do {
        do {
          if (*psVar5 == sVar1) {
            *psVar5 = *(short *)((uint)*pbVar6 * 2 + DAT_10057b74);
          }
          pbVar6 = pbVar6 + 1;
          psVar5 = psVar5 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        pbVar6 = pbVar6 + iVar8;
        psVar5 = psVar5 + iVar7;
        _DAT_10057b6c = _DAT_10057b6c + -1;
        iVar2 = DAT_10057b64;
      } while (_DAT_10057b6c != 0);
      (**(code **)(*local_8 + 0x24))(1);
      (**(code **)(*param_1 + 0x24))(1);
    }
  }
  return 0;
}

