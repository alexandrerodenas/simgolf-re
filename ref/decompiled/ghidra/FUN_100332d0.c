/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_100332d0 @ 0x100332D0 */
/* Body size: 736 addresses */


undefined4 __thiscall FUN_100332d0(void *this,uint *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  size_t sVar4;
  int *extraout_ECX;
  void *this_00;
  void *this_01;
  undefined1 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
  void *local_c;
  
  if (((param_1 == (uint *)0x0) ||
      (puVar1 = (uint *)FUN_10033720(this,(byte *)param_1,0x3d), puVar1 == (uint *)0x0)) ||
     (param_1 == puVar1)) {
    return 0xffffffff;
  }
  uVar6 = (uint)(*(byte *)((int)puVar1 + 1) == 0);
  piVar3 = DAT_10110830;
  if (DAT_10110830 == DAT_10110834) {
    DAT_10110830 = copy_environ(DAT_10110830);
    piVar3 = extraout_ECX;
  }
  if (DAT_10110830 == (int *)0x0) {
    if ((param_2 == 0) || (DAT_10110838 == (undefined4 *)0x0)) {
      if (uVar6 != 0) {
        return 0;
      }
      DAT_10110830 = (int *)__malloc_dbg(piVar3,4,2,"setenv.c",0x87);
      if (DAT_10110830 == (int *)0x0) {
        return 0xffffffff;
      }
      *DAT_10110830 = 0;
      if (DAT_10110838 == (undefined4 *)0x0) {
        DAT_10110838 = (undefined4 *)__malloc_dbg(this_00,4,2,"setenv.c",0x8e);
        if (DAT_10110838 == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_10110838 = 0;
      }
    }
    else {
      iVar2 = FUN_10032dd0();
      if (iVar2 != 0) {
        return 0xffffffff;
      }
    }
  }
  piVar3 = DAT_10110830;
  local_c = (void *)findenv((uchar *)param_1,(int)puVar1 - (int)param_1);
  if (((int)local_c < 0) || (*piVar3 == 0)) {
    if (uVar6 != 0) {
      return 0;
    }
    if ((int)local_c < 0) {
      local_c = (void *)-(int)local_c;
    }
    piVar3 = (int *)FID_conflict___realloc_dbg
                              (local_c,piVar3,(int)local_c * 4 + 8,2,"setenv.c",0xce);
    if (piVar3 == (int *)0x0) {
      return 0xffffffff;
    }
    piVar3[(int)local_c] = (int)param_1;
    piVar3[(int)local_c + 1] = 0;
    DAT_10110830 = piVar3;
  }
  else if (uVar6 == 0) {
    piVar3[(int)local_c] = (int)param_1;
  }
  else {
    __free_dbg((void *)piVar3[(int)local_c],2);
    for (; piVar3[(int)local_c] != 0; local_c = (void *)((int)local_c + 1)) {
      piVar3[(int)local_c] = piVar3[(int)local_c + 1];
    }
    piVar3 = (int *)FID_conflict___realloc_dbg(piVar3,piVar3,(int)local_c << 2,2,"setenv.c",0xb9);
    if (piVar3 != (int *)0x0) {
      DAT_10110830 = piVar3;
    }
  }
  if (param_2 != 0) {
    uVar10 = 0xe5;
    pcVar9 = "setenv.c";
    uVar7 = 2;
    sVar4 = _strlen((char *)param_1);
    iVar2 = sVar4 + 2;
    puVar1 = (uint *)__malloc_dbg(this_01,iVar2,uVar7,pcVar9,uVar10);
    if (puVar1 != (uint *)0x0) {
      iVar8 = 0x10033564;
      FUN_10018580(puVar1,param_1);
      puVar5 = (undefined1 *)((int)puVar1 + (iVar2 - (int)param_1));
      *puVar5 = 0;
      SetEnvironmentVariableA((LPCSTR)puVar1,(LPCSTR)(~-(uint)(iVar8 != 0) & (uint)(puVar5 + 1)));
      __free_dbg(puVar1,2);
    }
  }
  return 0;
}

