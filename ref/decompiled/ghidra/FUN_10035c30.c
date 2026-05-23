/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10035c30 @ 0x10035C30 */
/* Body size: 604 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall FUN_10035c30(void *this,LPCSTR param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 local_c;
  uint local_8;
  
  if (*(int *)((int)this + 0x4c) == -1) {
    local_8 = (-(uint)((param_2 & 0x80) != 0) & 0x4000) + 0x4000;
    if ((param_2 & 0x20) == 0) {
      local_8 = local_8 | 0x100;
    }
    if ((param_2 & 0x40) != 0) {
      local_8 = local_8 | 0x400;
    }
    if ((param_2 & 8) != 0) {
      param_2 = param_2 | 2;
      local_8 = local_8 | 8;
    }
    if ((param_2 & 0x10) != 0) {
      param_2 = param_2 | 2;
      local_8 = local_8 | 0x200;
    }
    if ((param_2 & 2) == 0) {
      if ((param_2 & 1) == 0) {
        return (int *)0x0;
      }
    }
    else {
      if ((param_2 & 1) == 0) {
        local_8 = local_8 | 1;
      }
      else {
        local_8 = local_8 | 2;
      }
      if ((param_2 & 0x4d) == 0) {
        param_2 = param_2 | 0x10;
        local_8 = local_8 | 0x200;
      }
    }
    local_c = 0x40;
    uVar2 = param_3 & (DAT_100612cc | _DAT_100612d0 | _DAT_100612c8);
    if (uVar2 != 0) {
      if ((int)uVar2 < 0xc01) {
        if (uVar2 == 0xc00) {
          local_c = 0x30;
        }
        else if (uVar2 == 0x800) {
          local_c = 0x10;
        }
        else if (uVar2 == 0xa00) {
          local_c = 0x20;
        }
      }
      else if (uVar2 == 0xe00) {
        local_c = 0x40;
      }
    }
    uVar2 = FUN_100266b0(param_1,local_8,local_c,0x180);
    *(uint *)((int)this + 0x4c) = uVar2;
    if (*(int *)((int)this + 0x4c) == -1) {
      this = (int *)0x0;
    }
    else {
      FUN_10034090((int)this);
      *(undefined4 *)((int)this + 0x50) = 1;
      iVar1 = FUN_10034350((int)this);
      if ((iVar1 == 0) && (iVar1 = FUN_100342c0((int)this), iVar1 == 0)) {
        iVar1 = FUN_10037510(0x200,2,"filebuf1.cpp",0xa6);
        if (iVar1 == 0) {
          FUN_10034880(this,1);
        }
        else {
          FUN_10036410(this,iVar1,iVar1 + 0x200,1);
        }
      }
      if (((param_2 & 4) == 0) ||
         (iVar1 = (**(code **)(*(int *)this + 0xc))(0,2,param_2), iVar1 != -1)) {
        FUN_10034150((int)this);
      }
      else {
        FUN_100340e0(this);
        FUN_10034150((int)this);
        this = (int *)0x0;
      }
    }
  }
  else {
    this = (int *)0x0;
  }
  return this;
}

